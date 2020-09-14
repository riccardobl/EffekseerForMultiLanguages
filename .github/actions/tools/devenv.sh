#!/bin/bash

# Based on https://gitlab.com/snippets/1715481

## Call this script using . ./devenv.sh to run it in the current shell otherwise we cannot modify the parents environment
if [[ "$1" == "" ]]; then
    echo Assuming x64 as platform. Specify the platform as the first argument for this script to override
    PLATFORM=x64
else
    PLATFORM=$1
    echo Platform is set to ${PLATFORM}
fi

which vswhere > /dev/null
WHICH_RESULT=$?
MS_ENVSCRIPT=

echo Using vswhere to determine location of vcvarsall

VSWHERE_INSTALLPATH="$(vswhere -property installationPath -requires Microsoft.VisualStudio.Component.VC.Tools.x86.x64)"
echo $VSWHERE_INSTALLPATH

VSWHERE_INSTALLPATH_BASH="$(echo ${VSWHERE_INSTALLPATH} | sed -e 's/^\([A-Za-z]\)\:\\\(.*\)/\/\1\/\2/;s/\\/\//g;')"
echo $VSWHERE_INSTALLPATH_BASH

MS_ENVSCRIPT="${VSWHERE_INSTALLPATH_BASH}/VC/Auxiliary/Build/vcvarsall.bat"
echo $MS_ENVSCRIPT


echo Loading environment from ${MS_ENVSCRIPT}
if [ ! -e "${MS_ENVSCRIPT}" ]; then
    echo Failed to locate vcvarsall.bat
    exit 1;
fi

## We have the location of the MS environment file - catch the environment and convert it to the bash environment
## Using help from the script on : https://gist.github.com/sky87/a887cef73285ab88b303f03295d0821e

MSENV_BATCH_NAME="__print_ms_env_$$.bat"
MSENV_BATCH=/tmp/${MSENV_BATCH_NAME}
MSENV="/tmp/__ms_env_$$"
echo "@echo off" > "${MSENV_BATCH}"

echo "call \"$(echo ${MS_ENVSCRIPT} | sed -e 's/^\/\([A-Za-z]\)\(.*\)/\1\:\2/;s/\//\\/g')\" ${PLATFORM}" >> "${MSENV_BATCH}"
echo "set" >> "${MSENV_BATCH}"
cmd "/C %TEMP%\\${MSENV_BATCH_NAME}" > "${MSENV}.tmp"
rm "${MSENV_BATCH}"

grep -E '^PATH=' "${MSENV}.tmp" | sed -e 's/\(.*\)=\(.*\)/export \1="\2"/g;s/\([a-zA-Z]\):[\\\/]/\/\1\//g;s/\\/\//g;s/;\//:\//g' > ${MSENV}
grep -E '^(INCLUDE|LIB|LIBPATH)=' "${MSENV}.tmp" | sed -e 's/\(.*\)=\(.*\)/export \1="\2"/g' >> ${MSENV}
rm ${MSENV}.tmp
source "${MSENV}"
rm ${MSENV}
