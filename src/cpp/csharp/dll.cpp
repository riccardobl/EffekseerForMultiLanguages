/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 4.0.2
 *
 * This file is not intended to be easily readable and contains a number of
 * coding conventions designed to improve portability and efficiency. Do not make
 * changes to this file unless you know what you are doing--modify the SWIG
 * interface file instead.
 * ----------------------------------------------------------------------------- */


#ifndef SWIGCSHARP
#define SWIGCSHARP
#endif



#ifdef __cplusplus
/* SwigValueWrapper is described in swig.swg */
template<typename T> class SwigValueWrapper {
  struct SwigMovePointer {
    T *ptr;
    SwigMovePointer(T *p) : ptr(p) { }
    ~SwigMovePointer() { delete ptr; }
    SwigMovePointer& operator=(SwigMovePointer& rhs) { T* oldptr = ptr; ptr = 0; delete oldptr; ptr = rhs.ptr; rhs.ptr = 0; return *this; }
  } pointer;
  SwigValueWrapper& operator=(const SwigValueWrapper<T>& rhs);
  SwigValueWrapper(const SwigValueWrapper<T>& rhs);
public:
  SwigValueWrapper() : pointer(0) { }
  SwigValueWrapper& operator=(const T& t) { SwigMovePointer tmp(new T(t)); pointer = tmp; return *this; }
  operator T&() const { return *pointer.ptr; }
  T *operator&() { return pointer.ptr; }
};

template <typename T> T SwigValueInit() {
  return T();
}
#endif

/* -----------------------------------------------------------------------------
 *  This section contains generic SWIG labels for method/variable
 *  declarations/attributes, and other compiler dependent labels.
 * ----------------------------------------------------------------------------- */

/* template workaround for compilers that cannot correctly implement the C++ standard */
#ifndef SWIGTEMPLATEDISAMBIGUATOR
# if defined(__SUNPRO_CC) && (__SUNPRO_CC <= 0x560)
#  define SWIGTEMPLATEDISAMBIGUATOR template
# elif defined(__HP_aCC)
/* Needed even with `aCC -AA' when `aCC -V' reports HP ANSI C++ B3910B A.03.55 */
/* If we find a maximum version that requires this, the test would be __HP_aCC <= 35500 for A.03.55 */
#  define SWIGTEMPLATEDISAMBIGUATOR template
# else
#  define SWIGTEMPLATEDISAMBIGUATOR
# endif
#endif

/* inline attribute */
#ifndef SWIGINLINE
# if defined(__cplusplus) || (defined(__GNUC__) && !defined(__STRICT_ANSI__))
#   define SWIGINLINE inline
# else
#   define SWIGINLINE
# endif
#endif

/* attribute recognised by some compilers to avoid 'unused' warnings */
#ifndef SWIGUNUSED
# if defined(__GNUC__)
#   if !(defined(__cplusplus)) || (__GNUC__ > 3 || (__GNUC__ == 3 && __GNUC_MINOR__ >= 4))
#     define SWIGUNUSED __attribute__ ((__unused__))
#   else
#     define SWIGUNUSED
#   endif
# elif defined(__ICC)
#   define SWIGUNUSED __attribute__ ((__unused__))
# else
#   define SWIGUNUSED
# endif
#endif

#ifndef SWIG_MSC_UNSUPPRESS_4505
# if defined(_MSC_VER)
#   pragma warning(disable : 4505) /* unreferenced local function has been removed */
# endif
#endif

#ifndef SWIGUNUSEDPARM
# ifdef __cplusplus
#   define SWIGUNUSEDPARM(p)
# else
#   define SWIGUNUSEDPARM(p) p SWIGUNUSED
# endif
#endif

/* internal SWIG method */
#ifndef SWIGINTERN
# define SWIGINTERN static SWIGUNUSED
#endif

/* internal inline SWIG method */
#ifndef SWIGINTERNINLINE
# define SWIGINTERNINLINE SWIGINTERN SWIGINLINE
#endif

/* exporting methods */
#if defined(__GNUC__)
#  if (__GNUC__ >= 4) || (__GNUC__ == 3 && __GNUC_MINOR__ >= 4)
#    ifndef GCC_HASCLASSVISIBILITY
#      define GCC_HASCLASSVISIBILITY
#    endif
#  endif
#endif

#ifndef SWIGEXPORT
# if defined(_WIN32) || defined(__WIN32__) || defined(__CYGWIN__)
#   if defined(STATIC_LINKED)
#     define SWIGEXPORT
#   else
#     define SWIGEXPORT __declspec(dllexport)
#   endif
# else
#   if defined(__GNUC__) && defined(GCC_HASCLASSVISIBILITY)
#     define SWIGEXPORT __attribute__ ((visibility("default")))
#   else
#     define SWIGEXPORT
#   endif
# endif
#endif

/* calling conventions for Windows */
#ifndef SWIGSTDCALL
# if defined(_WIN32) || defined(__WIN32__) || defined(__CYGWIN__)
#   define SWIGSTDCALL __stdcall
# else
#   define SWIGSTDCALL
# endif
#endif

/* Deal with Microsoft's attempt at deprecating C standard runtime functions */
#if !defined(SWIG_NO_CRT_SECURE_NO_DEPRECATE) && defined(_MSC_VER) && !defined(_CRT_SECURE_NO_DEPRECATE)
# define _CRT_SECURE_NO_DEPRECATE
#endif

/* Deal with Microsoft's attempt at deprecating methods in the standard C++ library */
#if !defined(SWIG_NO_SCL_SECURE_NO_DEPRECATE) && defined(_MSC_VER) && !defined(_SCL_SECURE_NO_DEPRECATE)
# define _SCL_SECURE_NO_DEPRECATE
#endif

/* Deal with Apple's deprecated 'AssertMacros.h' from Carbon-framework */
#if defined(__APPLE__) && !defined(__ASSERT_MACROS_DEFINE_VERSIONS_WITHOUT_UNDERSCORES)
# define __ASSERT_MACROS_DEFINE_VERSIONS_WITHOUT_UNDERSCORES 0
#endif

/* Intel's compiler complains if a variable which was never initialised is
 * cast to void, which is a common idiom which we use to indicate that we
 * are aware a variable isn't used.  So we just silence that warning.
 * See: https://github.com/swig/swig/issues/192 for more discussion.
 */
#ifdef __INTEL_COMPILER
# pragma warning disable 592
#endif


#include <stdlib.h>
#include <string.h>
#include <stdio.h>


/* Support for throwing C# exceptions from C/C++. There are two types: 
 * Exceptions that take a message and ArgumentExceptions that take a message and a parameter name. */
typedef enum {
  SWIG_CSharpApplicationException,
  SWIG_CSharpArithmeticException,
  SWIG_CSharpDivideByZeroException,
  SWIG_CSharpIndexOutOfRangeException,
  SWIG_CSharpInvalidCastException,
  SWIG_CSharpInvalidOperationException,
  SWIG_CSharpIOException,
  SWIG_CSharpNullReferenceException,
  SWIG_CSharpOutOfMemoryException,
  SWIG_CSharpOverflowException,
  SWIG_CSharpSystemException
} SWIG_CSharpExceptionCodes;

typedef enum {
  SWIG_CSharpArgumentException,
  SWIG_CSharpArgumentNullException,
  SWIG_CSharpArgumentOutOfRangeException
} SWIG_CSharpExceptionArgumentCodes;

typedef void (SWIGSTDCALL* SWIG_CSharpExceptionCallback_t)(const char *);
typedef void (SWIGSTDCALL* SWIG_CSharpExceptionArgumentCallback_t)(const char *, const char *);

typedef struct {
  SWIG_CSharpExceptionCodes code;
  SWIG_CSharpExceptionCallback_t callback;
} SWIG_CSharpException_t;

typedef struct {
  SWIG_CSharpExceptionArgumentCodes code;
  SWIG_CSharpExceptionArgumentCallback_t callback;
} SWIG_CSharpExceptionArgument_t;

static SWIG_CSharpException_t SWIG_csharp_exceptions[] = {
  { SWIG_CSharpApplicationException, NULL },
  { SWIG_CSharpArithmeticException, NULL },
  { SWIG_CSharpDivideByZeroException, NULL },
  { SWIG_CSharpIndexOutOfRangeException, NULL },
  { SWIG_CSharpInvalidCastException, NULL },
  { SWIG_CSharpInvalidOperationException, NULL },
  { SWIG_CSharpIOException, NULL },
  { SWIG_CSharpNullReferenceException, NULL },
  { SWIG_CSharpOutOfMemoryException, NULL },
  { SWIG_CSharpOverflowException, NULL },
  { SWIG_CSharpSystemException, NULL }
};

static SWIG_CSharpExceptionArgument_t SWIG_csharp_exceptions_argument[] = {
  { SWIG_CSharpArgumentException, NULL },
  { SWIG_CSharpArgumentNullException, NULL },
  { SWIG_CSharpArgumentOutOfRangeException, NULL }
};

static void SWIGUNUSED SWIG_CSharpSetPendingException(SWIG_CSharpExceptionCodes code, const char *msg) {
  SWIG_CSharpExceptionCallback_t callback = SWIG_csharp_exceptions[SWIG_CSharpApplicationException].callback;
  if ((size_t)code < sizeof(SWIG_csharp_exceptions)/sizeof(SWIG_CSharpException_t)) {
    callback = SWIG_csharp_exceptions[code].callback;
  }
  callback(msg);
}

static void SWIGUNUSED SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpExceptionArgumentCodes code, const char *msg, const char *param_name) {
  SWIG_CSharpExceptionArgumentCallback_t callback = SWIG_csharp_exceptions_argument[SWIG_CSharpArgumentException].callback;
  if ((size_t)code < sizeof(SWIG_csharp_exceptions_argument)/sizeof(SWIG_CSharpExceptionArgument_t)) {
    callback = SWIG_csharp_exceptions_argument[code].callback;
  }
  callback(msg, param_name);
}


#ifdef __cplusplus
extern "C" 
#endif
SWIGEXPORT void SWIGSTDCALL SWIGRegisterExceptionCallbacks_EffekseerCore(
                                                SWIG_CSharpExceptionCallback_t applicationCallback,
                                                SWIG_CSharpExceptionCallback_t arithmeticCallback,
                                                SWIG_CSharpExceptionCallback_t divideByZeroCallback, 
                                                SWIG_CSharpExceptionCallback_t indexOutOfRangeCallback, 
                                                SWIG_CSharpExceptionCallback_t invalidCastCallback,
                                                SWIG_CSharpExceptionCallback_t invalidOperationCallback,
                                                SWIG_CSharpExceptionCallback_t ioCallback,
                                                SWIG_CSharpExceptionCallback_t nullReferenceCallback,
                                                SWIG_CSharpExceptionCallback_t outOfMemoryCallback, 
                                                SWIG_CSharpExceptionCallback_t overflowCallback, 
                                                SWIG_CSharpExceptionCallback_t systemCallback) {
  SWIG_csharp_exceptions[SWIG_CSharpApplicationException].callback = applicationCallback;
  SWIG_csharp_exceptions[SWIG_CSharpArithmeticException].callback = arithmeticCallback;
  SWIG_csharp_exceptions[SWIG_CSharpDivideByZeroException].callback = divideByZeroCallback;
  SWIG_csharp_exceptions[SWIG_CSharpIndexOutOfRangeException].callback = indexOutOfRangeCallback;
  SWIG_csharp_exceptions[SWIG_CSharpInvalidCastException].callback = invalidCastCallback;
  SWIG_csharp_exceptions[SWIG_CSharpInvalidOperationException].callback = invalidOperationCallback;
  SWIG_csharp_exceptions[SWIG_CSharpIOException].callback = ioCallback;
  SWIG_csharp_exceptions[SWIG_CSharpNullReferenceException].callback = nullReferenceCallback;
  SWIG_csharp_exceptions[SWIG_CSharpOutOfMemoryException].callback = outOfMemoryCallback;
  SWIG_csharp_exceptions[SWIG_CSharpOverflowException].callback = overflowCallback;
  SWIG_csharp_exceptions[SWIG_CSharpSystemException].callback = systemCallback;
}

#ifdef __cplusplus
extern "C" 
#endif
SWIGEXPORT void SWIGSTDCALL SWIGRegisterExceptionArgumentCallbacks_EffekseerCore(
                                                SWIG_CSharpExceptionArgumentCallback_t argumentCallback,
                                                SWIG_CSharpExceptionArgumentCallback_t argumentNullCallback,
                                                SWIG_CSharpExceptionArgumentCallback_t argumentOutOfRangeCallback) {
  SWIG_csharp_exceptions_argument[SWIG_CSharpArgumentException].callback = argumentCallback;
  SWIG_csharp_exceptions_argument[SWIG_CSharpArgumentNullException].callback = argumentNullCallback;
  SWIG_csharp_exceptions_argument[SWIG_CSharpArgumentOutOfRangeException].callback = argumentOutOfRangeCallback;
}


/* Callback for returning strings to C# without leaking memory */
typedef char * (SWIGSTDCALL* SWIG_CSharpStringHelperCallback)(const char *);
static SWIG_CSharpStringHelperCallback SWIG_csharp_string_callback = NULL;


#ifdef __cplusplus
extern "C" 
#endif
SWIGEXPORT void SWIGSTDCALL SWIGRegisterStringCallback_EffekseerCore(SWIG_CSharpStringHelperCallback callback) {
  SWIG_csharp_string_callback = callback;
}


/* Contract support */

#define SWIG_contract_assert(nullreturn, expr, msg) if (!(expr)) {SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentOutOfRangeException, msg, ""); return nullreturn; } else


/* Callback for returning strings to C# without leaking memory */

#include <stdint.h>
#include <string>

typedef void * (SWIGSTDCALL* SWIG_CSharpWStringHelperCallback)(const char16_t *);
static SWIG_CSharpWStringHelperCallback SWIG_csharp_wstring_callback = NULL;


#ifdef __cplusplus
extern "C"
#endif
SWIGEXPORT void SWIGSTDCALL SWIGRegisterWStringCallback_EffekseerCore(SWIG_CSharpWStringHelperCallback callback) {
  SWIG_csharp_wstring_callback = callback;
}



#include "../Core/EffekseerBackendCore.h"
#include "../Core/EffekseerEffectCore.h"
#include "../Core/EffekseerManagerCore.h"



#include <stdint.h>		// Use the C99 official header


#ifdef __cplusplus
extern "C" {
#endif

SWIGEXPORT void * SWIGSTDCALL CSharp_Effekseerfswig_new_EffekseerBackendCore___() {
  void * jresult ;
  EffekseerBackendCore *result = 0 ;
  
  result = (EffekseerBackendCore *)new EffekseerBackendCore();
  jresult = (void *)result; 
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Effekseerfswig_delete_EffekseerBackendCore___(void * jarg1) {
  EffekseerBackendCore *arg1 = (EffekseerBackendCore *) 0 ;
  
  arg1 = (EffekseerBackendCore *)jarg1; 
  delete arg1;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Effekseerfswig_EffekseerBackendCore_GetDevice___() {
  int jresult ;
  EffekseerCoreDeviceType result;
  
  result = (EffekseerCoreDeviceType)EffekseerBackendCore::GetDevice();
  jresult = (int)result; 
  return jresult;
}


SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Effekseerfswig_EffekseerBackendCore_InitializeAsOpenGL___() {
  unsigned int jresult ;
  bool result;
  
  result = (bool)EffekseerBackendCore::InitializeAsOpenGL();
  jresult = result; 
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Effekseerfswig_EffekseerBackendCore_Terminate___() {
  EffekseerBackendCore::Terminate();
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Effekseerfswig_new_EffekseerEffectCore___() {
  void * jresult ;
  EffekseerEffectCore *result = 0 ;
  
  result = (EffekseerEffectCore *)new EffekseerEffectCore();
  jresult = (void *)result; 
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Effekseerfswig_delete_EffekseerEffectCore___(void * jarg1) {
  EffekseerEffectCore *arg1 = (EffekseerEffectCore *) 0 ;
  
  arg1 = (EffekseerEffectCore *)jarg1; 
  delete arg1;
}


SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Effekseerfswig_EffekseerEffectCore_Load___(void * jarg1, unsigned char* jarg2, int jarg3, float jarg4) {
  unsigned int jresult ;
  EffekseerEffectCore *arg1 = (EffekseerEffectCore *) 0 ;
  unsigned char *arg2 = (unsigned char *) 0 ;
  int arg3 ;
  float arg4 ;
  bool result;
  
  arg1 = (EffekseerEffectCore *)jarg1; 
  arg2 = jarg2;
  arg3 = (int)jarg3; 
  arg4 = (float)jarg4; 
  result = (bool)(arg1)->Load((unsigned char const *)arg2,arg3,arg4);
  jresult = result; 
  
  
  return jresult;
}


SWIGEXPORT char16_t * SWIGSTDCALL CSharp_Effekseerfswig_EffekseerEffectCore_GetTexturePath___(void * jarg1, int jarg2, int jarg3) {
  char16_t * jresult ;
  EffekseerEffectCore *arg1 = (EffekseerEffectCore *) 0 ;
  int32_t arg2 ;
  EffekseerTextureType arg3 ;
  char16_t *result = 0 ;
  
  arg1 = (EffekseerEffectCore *)jarg1; 
  arg2 = (int32_t)jarg2; 
  arg3 = (EffekseerTextureType)jarg3; 
  result = (char16_t *)((EffekseerEffectCore const *)arg1)->GetTexturePath(arg2,arg3);
  jresult = (char16_t *)result; 
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Effekseerfswig_EffekseerEffectCore_GetTextureCount___(void * jarg1, int jarg2) {
  int jresult ;
  EffekseerEffectCore *arg1 = (EffekseerEffectCore *) 0 ;
  EffekseerTextureType arg2 ;
  int32_t result;
  
  arg1 = (EffekseerEffectCore *)jarg1; 
  arg2 = (EffekseerTextureType)jarg2; 
  result = (int32_t)((EffekseerEffectCore const *)arg1)->GetTextureCount(arg2);
  jresult = result; 
  return jresult;
}


SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Effekseerfswig_EffekseerEffectCore_LoadTexture___(void * jarg1, unsigned char* jarg2, int jarg3, int jarg4, int jarg5) {
  unsigned int jresult ;
  EffekseerEffectCore *arg1 = (EffekseerEffectCore *) 0 ;
  unsigned char *arg2 = (unsigned char *) 0 ;
  int arg3 ;
  int32_t arg4 ;
  EffekseerTextureType arg5 ;
  bool result;
  
  arg1 = (EffekseerEffectCore *)jarg1; 
  arg2 = jarg2;
  arg3 = (int)jarg3; 
  arg4 = (int32_t)jarg4; 
  arg5 = (EffekseerTextureType)jarg5; 
  result = (bool)(arg1)->LoadTexture((unsigned char const *)arg2,arg3,arg4,arg5);
  jresult = result; 
  
  
  return jresult;
}


SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Effekseerfswig_EffekseerEffectCore_HasTextureLoaded___(void * jarg1, int jarg2, int jarg3) {
  unsigned int jresult ;
  EffekseerEffectCore *arg1 = (EffekseerEffectCore *) 0 ;
  int32_t arg2 ;
  EffekseerTextureType arg3 ;
  bool result;
  
  arg1 = (EffekseerEffectCore *)jarg1; 
  arg2 = (int32_t)jarg2; 
  arg3 = (EffekseerTextureType)jarg3; 
  result = (bool)(arg1)->HasTextureLoaded(arg2,arg3);
  jresult = result; 
  return jresult;
}


SWIGEXPORT char16_t * SWIGSTDCALL CSharp_Effekseerfswig_EffekseerEffectCore_GetModelPath___(void * jarg1, int jarg2) {
  char16_t * jresult ;
  EffekseerEffectCore *arg1 = (EffekseerEffectCore *) 0 ;
  int32_t arg2 ;
  char16_t *result = 0 ;
  
  arg1 = (EffekseerEffectCore *)jarg1; 
  arg2 = (int32_t)jarg2; 
  result = (char16_t *)((EffekseerEffectCore const *)arg1)->GetModelPath(arg2);
  jresult = (char16_t *)result; 
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Effekseerfswig_EffekseerEffectCore_GetModelCount___(void * jarg1) {
  int jresult ;
  EffekseerEffectCore *arg1 = (EffekseerEffectCore *) 0 ;
  int32_t result;
  
  arg1 = (EffekseerEffectCore *)jarg1; 
  result = (int32_t)((EffekseerEffectCore const *)arg1)->GetModelCount();
  jresult = result; 
  return jresult;
}


SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Effekseerfswig_EffekseerEffectCore_LoadModel___(void * jarg1, unsigned char* jarg2, int jarg3, int jarg4) {
  unsigned int jresult ;
  EffekseerEffectCore *arg1 = (EffekseerEffectCore *) 0 ;
  unsigned char *arg2 = (unsigned char *) 0 ;
  int arg3 ;
  int32_t arg4 ;
  bool result;
  
  arg1 = (EffekseerEffectCore *)jarg1; 
  arg2 = jarg2;
  arg3 = (int)jarg3; 
  arg4 = (int32_t)jarg4; 
  result = (bool)(arg1)->LoadModel((unsigned char const *)arg2,arg3,arg4);
  jresult = result; 
  
  
  return jresult;
}


SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Effekseerfswig_EffekseerEffectCore_HasModelLoaded___(void * jarg1, int jarg2) {
  unsigned int jresult ;
  EffekseerEffectCore *arg1 = (EffekseerEffectCore *) 0 ;
  int32_t arg2 ;
  bool result;
  
  arg1 = (EffekseerEffectCore *)jarg1; 
  arg2 = (int32_t)jarg2; 
  result = (bool)(arg1)->HasModelLoaded(arg2);
  jresult = result; 
  return jresult;
}


SWIGEXPORT char16_t * SWIGSTDCALL CSharp_Effekseerfswig_EffekseerEffectCore_GetMaterialPath___(void * jarg1, int jarg2) {
  char16_t * jresult ;
  EffekseerEffectCore *arg1 = (EffekseerEffectCore *) 0 ;
  int32_t arg2 ;
  char16_t *result = 0 ;
  
  arg1 = (EffekseerEffectCore *)jarg1; 
  arg2 = (int32_t)jarg2; 
  result = (char16_t *)((EffekseerEffectCore const *)arg1)->GetMaterialPath(arg2);
  jresult = (char16_t *)result; 
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Effekseerfswig_EffekseerEffectCore_GetMaterialCount___(void * jarg1) {
  int jresult ;
  EffekseerEffectCore *arg1 = (EffekseerEffectCore *) 0 ;
  int32_t result;
  
  arg1 = (EffekseerEffectCore *)jarg1; 
  result = (int32_t)((EffekseerEffectCore const *)arg1)->GetMaterialCount();
  jresult = result; 
  return jresult;
}


SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Effekseerfswig_EffekseerEffectCore_LoadMaterial___(void * jarg1, unsigned char* jarg2, int jarg3, int jarg4) {
  unsigned int jresult ;
  EffekseerEffectCore *arg1 = (EffekseerEffectCore *) 0 ;
  unsigned char *arg2 = (unsigned char *) 0 ;
  int arg3 ;
  int32_t arg4 ;
  bool result;
  
  arg1 = (EffekseerEffectCore *)jarg1; 
  arg2 = jarg2;
  arg3 = (int)jarg3; 
  arg4 = (int32_t)jarg4; 
  result = (bool)(arg1)->LoadMaterial((unsigned char const *)arg2,arg3,arg4);
  jresult = result; 
  
  
  return jresult;
}


SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Effekseerfswig_EffekseerEffectCore_HasMaterialLoaded___(void * jarg1, int jarg2) {
  unsigned int jresult ;
  EffekseerEffectCore *arg1 = (EffekseerEffectCore *) 0 ;
  int32_t arg2 ;
  bool result;
  
  arg1 = (EffekseerEffectCore *)jarg1; 
  arg2 = (int32_t)jarg2; 
  result = (bool)(arg1)->HasMaterialLoaded(arg2);
  jresult = result; 
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Effekseerfswig_new_EffekseerManagerCore___() {
  void * jresult ;
  EffekseerManagerCore *result = 0 ;
  
  result = (EffekseerManagerCore *)new EffekseerManagerCore();
  jresult = (void *)result; 
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Effekseerfswig_delete_EffekseerManagerCore___(void * jarg1) {
  EffekseerManagerCore *arg1 = (EffekseerManagerCore *) 0 ;
  
  arg1 = (EffekseerManagerCore *)jarg1; 
  delete arg1;
}


SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Effekseerfswig_EffekseerManagerCore_Initialize___(void * jarg1, int jarg2) {
  unsigned int jresult ;
  EffekseerManagerCore *arg1 = (EffekseerManagerCore *) 0 ;
  int32_t arg2 ;
  bool result;
  
  arg1 = (EffekseerManagerCore *)jarg1; 
  arg2 = (int32_t)jarg2; 
  result = (bool)(arg1)->Initialize(arg2);
  jresult = result; 
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Effekseerfswig_EffekseerManagerCore_Update___(void * jarg1, float jarg2) {
  EffekseerManagerCore *arg1 = (EffekseerManagerCore *) 0 ;
  float arg2 ;
  
  arg1 = (EffekseerManagerCore *)jarg1; 
  arg2 = (float)jarg2; 
  (arg1)->Update(arg2);
}


SWIGEXPORT void SWIGSTDCALL CSharp_Effekseerfswig_EffekseerManagerCore_BeginUpdate___(void * jarg1) {
  EffekseerManagerCore *arg1 = (EffekseerManagerCore *) 0 ;
  
  arg1 = (EffekseerManagerCore *)jarg1; 
  (arg1)->BeginUpdate();
}


SWIGEXPORT void SWIGSTDCALL CSharp_Effekseerfswig_EffekseerManagerCore_EndUpdate___(void * jarg1) {
  EffekseerManagerCore *arg1 = (EffekseerManagerCore *) 0 ;
  
  arg1 = (EffekseerManagerCore *)jarg1; 
  (arg1)->EndUpdate();
}


SWIGEXPORT void SWIGSTDCALL CSharp_Effekseerfswig_EffekseerManagerCore_UpdateHandleToMoveToFrame___(void * jarg1, int jarg2, float jarg3) {
  EffekseerManagerCore *arg1 = (EffekseerManagerCore *) 0 ;
  int arg2 ;
  float arg3 ;
  
  arg1 = (EffekseerManagerCore *)jarg1; 
  arg2 = (int)jarg2; 
  arg3 = (float)jarg3; 
  (arg1)->UpdateHandleToMoveToFrame(arg2,arg3);
}


SWIGEXPORT int SWIGSTDCALL CSharp_Effekseerfswig_EffekseerManagerCore_Play___(void * jarg1, void * jarg2) {
  int jresult ;
  EffekseerManagerCore *arg1 = (EffekseerManagerCore *) 0 ;
  EffekseerEffectCore *arg2 = (EffekseerEffectCore *) 0 ;
  int result;
  
  arg1 = (EffekseerManagerCore *)jarg1; 
  arg2 = (EffekseerEffectCore *)jarg2; 
  result = (int)(arg1)->Play(arg2);
  jresult = result; 
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Effekseerfswig_EffekseerManagerCore_Stop___(void * jarg1, int jarg2) {
  EffekseerManagerCore *arg1 = (EffekseerManagerCore *) 0 ;
  int arg2 ;
  
  arg1 = (EffekseerManagerCore *)jarg1; 
  arg2 = (int)jarg2; 
  (arg1)->Stop(arg2);
}


SWIGEXPORT void SWIGSTDCALL CSharp_Effekseerfswig_EffekseerManagerCore_SetPaused___(void * jarg1, int jarg2, unsigned int jarg3) {
  EffekseerManagerCore *arg1 = (EffekseerManagerCore *) 0 ;
  int arg2 ;
  bool arg3 ;
  
  arg1 = (EffekseerManagerCore *)jarg1; 
  arg2 = (int)jarg2; 
  arg3 = jarg3 ? true : false; 
  (arg1)->SetPaused(arg2,arg3);
}


SWIGEXPORT void SWIGSTDCALL CSharp_Effekseerfswig_EffekseerManagerCore_SetShown___(void * jarg1, int jarg2, unsigned int jarg3) {
  EffekseerManagerCore *arg1 = (EffekseerManagerCore *) 0 ;
  int arg2 ;
  bool arg3 ;
  
  arg1 = (EffekseerManagerCore *)jarg1; 
  arg2 = (int)jarg2; 
  arg3 = jarg3 ? true : false; 
  (arg1)->SetShown(arg2,arg3);
}


SWIGEXPORT void SWIGSTDCALL CSharp_Effekseerfswig_EffekseerManagerCore_SetEffectPosition___(void * jarg1, int jarg2, float jarg3, float jarg4, float jarg5) {
  EffekseerManagerCore *arg1 = (EffekseerManagerCore *) 0 ;
  int arg2 ;
  float arg3 ;
  float arg4 ;
  float arg5 ;
  
  arg1 = (EffekseerManagerCore *)jarg1; 
  arg2 = (int)jarg2; 
  arg3 = (float)jarg3; 
  arg4 = (float)jarg4; 
  arg5 = (float)jarg5; 
  (arg1)->SetEffectPosition(arg2,arg3,arg4,arg5);
}


SWIGEXPORT void SWIGSTDCALL CSharp_Effekseerfswig_EffekseerManagerCore_SetEffectTransformMatrix___(void * jarg1, int jarg2, float jarg3, float jarg4, float jarg5, float jarg6, float jarg7, float jarg8, float jarg9, float jarg10, float jarg11, float jarg12, float jarg13, float jarg14) {
  EffekseerManagerCore *arg1 = (EffekseerManagerCore *) 0 ;
  int arg2 ;
  float arg3 ;
  float arg4 ;
  float arg5 ;
  float arg6 ;
  float arg7 ;
  float arg8 ;
  float arg9 ;
  float arg10 ;
  float arg11 ;
  float arg12 ;
  float arg13 ;
  float arg14 ;
  
  arg1 = (EffekseerManagerCore *)jarg1; 
  arg2 = (int)jarg2; 
  arg3 = (float)jarg3; 
  arg4 = (float)jarg4; 
  arg5 = (float)jarg5; 
  arg6 = (float)jarg6; 
  arg7 = (float)jarg7; 
  arg8 = (float)jarg8; 
  arg9 = (float)jarg9; 
  arg10 = (float)jarg10; 
  arg11 = (float)jarg11; 
  arg12 = (float)jarg12; 
  arg13 = (float)jarg13; 
  arg14 = (float)jarg14; 
  (arg1)->SetEffectTransformMatrix(arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9,arg10,arg11,arg12,arg13,arg14);
}


SWIGEXPORT void SWIGSTDCALL CSharp_Effekseerfswig_EffekseerManagerCore_DrawBack___(void * jarg1) {
  EffekseerManagerCore *arg1 = (EffekseerManagerCore *) 0 ;
  
  arg1 = (EffekseerManagerCore *)jarg1; 
  (arg1)->DrawBack();
}


SWIGEXPORT void SWIGSTDCALL CSharp_Effekseerfswig_EffekseerManagerCore_DrawFront___(void * jarg1) {
  EffekseerManagerCore *arg1 = (EffekseerManagerCore *) 0 ;
  
  arg1 = (EffekseerManagerCore *)jarg1; 
  (arg1)->DrawFront();
}


SWIGEXPORT void SWIGSTDCALL CSharp_Effekseerfswig_EffekseerManagerCore_SetProjectionMatrix___(void * jarg1, float jarg2, float jarg3, float jarg4, float jarg5, float jarg6, float jarg7, float jarg8, float jarg9, float jarg10, float jarg11, float jarg12, float jarg13, float jarg14, float jarg15, float jarg16, float jarg17) {
  EffekseerManagerCore *arg1 = (EffekseerManagerCore *) 0 ;
  float arg2 ;
  float arg3 ;
  float arg4 ;
  float arg5 ;
  float arg6 ;
  float arg7 ;
  float arg8 ;
  float arg9 ;
  float arg10 ;
  float arg11 ;
  float arg12 ;
  float arg13 ;
  float arg14 ;
  float arg15 ;
  float arg16 ;
  float arg17 ;
  
  arg1 = (EffekseerManagerCore *)jarg1; 
  arg2 = (float)jarg2; 
  arg3 = (float)jarg3; 
  arg4 = (float)jarg4; 
  arg5 = (float)jarg5; 
  arg6 = (float)jarg6; 
  arg7 = (float)jarg7; 
  arg8 = (float)jarg8; 
  arg9 = (float)jarg9; 
  arg10 = (float)jarg10; 
  arg11 = (float)jarg11; 
  arg12 = (float)jarg12; 
  arg13 = (float)jarg13; 
  arg14 = (float)jarg14; 
  arg15 = (float)jarg15; 
  arg16 = (float)jarg16; 
  arg17 = (float)jarg17; 
  (arg1)->SetProjectionMatrix(arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9,arg10,arg11,arg12,arg13,arg14,arg15,arg16,arg17);
}


SWIGEXPORT void SWIGSTDCALL CSharp_Effekseerfswig_EffekseerManagerCore_SetCameraMatrix___(void * jarg1, float jarg2, float jarg3, float jarg4, float jarg5, float jarg6, float jarg7, float jarg8, float jarg9, float jarg10, float jarg11, float jarg12, float jarg13, float jarg14, float jarg15, float jarg16, float jarg17) {
  EffekseerManagerCore *arg1 = (EffekseerManagerCore *) 0 ;
  float arg2 ;
  float arg3 ;
  float arg4 ;
  float arg5 ;
  float arg6 ;
  float arg7 ;
  float arg8 ;
  float arg9 ;
  float arg10 ;
  float arg11 ;
  float arg12 ;
  float arg13 ;
  float arg14 ;
  float arg15 ;
  float arg16 ;
  float arg17 ;
  
  arg1 = (EffekseerManagerCore *)jarg1; 
  arg2 = (float)jarg2; 
  arg3 = (float)jarg3; 
  arg4 = (float)jarg4; 
  arg5 = (float)jarg5; 
  arg6 = (float)jarg6; 
  arg7 = (float)jarg7; 
  arg8 = (float)jarg8; 
  arg9 = (float)jarg9; 
  arg10 = (float)jarg10; 
  arg11 = (float)jarg11; 
  arg12 = (float)jarg12; 
  arg13 = (float)jarg13; 
  arg14 = (float)jarg14; 
  arg15 = (float)jarg15; 
  arg16 = (float)jarg16; 
  arg17 = (float)jarg17; 
  (arg1)->SetCameraMatrix(arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9,arg10,arg11,arg12,arg13,arg14,arg15,arg16,arg17);
}


SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Effekseerfswig_EffekseerManagerCore_Exists___(void * jarg1, int jarg2) {
  unsigned int jresult ;
  EffekseerManagerCore *arg1 = (EffekseerManagerCore *) 0 ;
  int arg2 ;
  bool result;
  
  arg1 = (EffekseerManagerCore *)jarg1; 
  arg2 = (int)jarg2; 
  result = (bool)(arg1)->Exists(arg2);
  jresult = result; 
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Effekseerfswig_EffekseerManagerCore_SetViewProjectionMatrixWithSimpleWindow___(void * jarg1, int jarg2, int jarg3) {
  EffekseerManagerCore *arg1 = (EffekseerManagerCore *) 0 ;
  int32_t arg2 ;
  int32_t arg3 ;
  
  arg1 = (EffekseerManagerCore *)jarg1; 
  arg2 = (int32_t)jarg2; 
  arg3 = (int32_t)jarg3; 
  (arg1)->SetViewProjectionMatrixWithSimpleWindow(arg2,arg3);
}


SWIGEXPORT void SWIGSTDCALL CSharp_Effekseerfswig_EffekseerManagerCore_SetDynamicInput___(void * jarg1, int jarg2, int jarg3, float jarg4) {
  EffekseerManagerCore *arg1 = (EffekseerManagerCore *) 0 ;
  int arg2 ;
  int32_t arg3 ;
  float arg4 ;
  
  arg1 = (EffekseerManagerCore *)jarg1; 
  arg2 = (int)jarg2; 
  arg3 = (int32_t)jarg3; 
  arg4 = (float)jarg4; 
  (arg1)->SetDynamicInput(arg2,arg3,arg4);
}


SWIGEXPORT float SWIGSTDCALL CSharp_Effekseerfswig_EffekseerManagerCore_GetDynamicInput___(void * jarg1, int jarg2, int jarg3) {
  float jresult ;
  EffekseerManagerCore *arg1 = (EffekseerManagerCore *) 0 ;
  int arg2 ;
  int32_t arg3 ;
  float result;
  
  arg1 = (EffekseerManagerCore *)jarg1; 
  arg2 = (int)jarg2; 
  arg3 = (int32_t)jarg3; 
  result = (float)(arg1)->GetDynamicInput(arg2,arg3);
  jresult = result; 
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Effekseerfswig_EffekseerManagerCore_LaunchWorkerThreads___(void * jarg1, int jarg2) {
  EffekseerManagerCore *arg1 = (EffekseerManagerCore *) 0 ;
  int32_t arg2 ;
  
  arg1 = (EffekseerManagerCore *)jarg1; 
  arg2 = (int32_t)jarg2; 
  (arg1)->LaunchWorkerThreads(arg2);
}


#ifdef __cplusplus
}
#endif

