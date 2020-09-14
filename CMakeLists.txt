cmake_minimum_required(VERSION 3.15.7)
set(CMAKE_VERBOSE_MAKEFILE ON)
set(VERBOSE ON)
project(EffekseerForMultiLanguages LANGUAGES C CXX)


 set(CMAKE_POSITION_INDEPENDENT_CODE ON)

option(USE_MSVC_RUNTIME_LIBRARY_DLL OFF)


# Flags
if (WIN32)
  if (NOT USE_MSVC_RUNTIME_LIBRARY_DLL)

    if(MSVC)
        add_compile_options(
            $<$<CONFIG:>:/MT> #---------|
            $<$<CONFIG:Debug>:/MTd> #---|-- Statically link the runtime libraries
            $<$<CONFIG:Release>:/MT> #--|
        )
    endif()


    foreach (flag CMAKE_C_FLAGS
      CMAKE_C_FLAGS_DEBUG
      CMAKE_C_FLAGS_RELEASE
      CMAKE_CXX_FLAGS
      CMAKE_CXX_FLAGS_DEBUG
      CMAKE_CXX_FLAGS_RELEASE)

      if (${flag} MATCHES "/MD")
        string(REGEX REPLACE "/MD" "/MT" ${flag} "${${flag}}")
      endif()
      if (${flag} MATCHES "/MDd")
        string(REGEX REPLACE "/MDd" "/MTd" ${flag} "${${flag}}")
      endif()
    endforeach()
  endif()
endif()

if(UNIX AND NOT APPLE)
  set(CMAKE_SHARED_LINKER_FLAGS "${CMAKE_SHARED_LINKER_FLAGS}   -Wl,--start-group ")
endif()


add_subdirectory(src)
