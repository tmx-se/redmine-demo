# 1 "C:\\Users\\shito\\AppData\\Local\\Temp\\ParaSoft.12040.23658\\ParaSoft.12040.24588.c"

#define CPPTEST_INSTRUMENTATION


#include "cpptest_coverage.h"
#include "cpptest_runtime_i.h"
#include "cpptest_i.h"
#include "C:\Parasoft_Tutorial\workspace_tutorial_tantai\.cpptest\Sensor\unit-data\current_tubf179707\cpptest_stubconfig.h"
#include "C:\Parasoft_Tutorial\workspace_tutorial_tantai\.cpptest\Sensor\unit-data\current_tubf179707\cpptest_stubconfig.h"


struct __CPTR_Dummy_Type {
    char nonEmpty;
};

CppTestTranslationUnitInfo __CPTR_tui_2589368089_12040_127308239 = 
{
    0U, 
    "C:\\Parasoft_Tutorial\\workspace_tutorial_tantai\\.cpptest\\Sensor\\file-data\\sensor.c752e65b5\\adds\\harness_sensor.ildb"
};

#define __CPTR_tui &__CPTR_tui_2589368089_12040_127308239




#include "cpptest_runtime_i.h"

#ifdef __cplusplus
extern "C" void __CPTR_Initialize(void);
extern "C" void __CPTR_Finalize(void);

struct __CPTR_Initializer_2589368089_12040_127308239 {
    __CPTR_Initializer_2589368089_12040_127308239()
    {
        CPPTEST_INITIALIZE_RUNTIME();
    }
    ~__CPTR_Initializer_2589368089_12040_127308239()
    {
        CPPTEST_FINALIZE_RUNTIME();
    }
};

#if CPPTEST_USE_GLOBAL_OBJECTS_TO_INIT_RUNTIME
static struct __CPTR_Initializer_2589368089_12040_127308239 __CPTR_initializer_2589368089_12040_127308239;
#endif

#define CPPTEST_ENTER_MAIN_ROUTINE() __CPTR_Initializer_2589368089_12040_127308239 __CPTR_main_initializer

#define CPPTEST_EXIT_MAIN_ROUTINE()

#else
extern void __CPTR_Initialize(void);
extern void __CPTR_Finalize(void);

#define CPPTEST_ENTER_MAIN_ROUTINE() CPPTEST_INITIALIZE_RUNTIME()

#define CPPTEST_EXIT_MAIN_ROUTINE() CPPTEST_FINALIZE_RUNTIME()

#endif



#define _coverage_data_unit_size 0
    


#define _coverage_code_size (1 + (64) / (sizeof(unsigned char) * 8))
#define _coverage_func_data_offset 56

static unsigned char _coverage_code[_coverage_code_size];

EXTERN_C_LINKAGE CppTestCoverageInfo __CPTR_cui_2589368089_12040_127308239 = 
{ 
    /*prev=*/0, 
    /*covDataUnitSize=*/_coverage_data_unit_size,
    /*data=*/(unsigned char*)_coverage_code, 
    /*size=*/_coverage_code_size, 
    /*funcDataOffset=*/_coverage_func_data_offset,
    /*numberOfFunctions=*/8,
    /*id=*/0U,
    /*funcIdOffset=*/0U,
    /*flags=*/0
    | CPPTEST_COVERAGE_INITIALIZE_BUFFERS_FLAG
};

#define __CPTR_cui &__CPTR_cui_2589368089_12040_127308239
#define __CPTR_fid(ID) ID + __CPTR_cui_2589368089_12040_127308239.funcIdOffset


#define _cpptest_strdata_var(id, bogus) _cpptest_strdata[id]
static 
const char* _cpptest_strdata[] = {
    0,
    "",
    "readSensor",
    "initialize",
    "finalize",
    "printMessage",
    "reportSensorFailure",
    "handleSensorValue",
    "mainLoop",
    "main",
    0
};
#undef unix
#undef __unix

#if defined(CPPTEST_STUB___getreent) || CPPTEST_ENABLE_ALL_STUBS
# if defined(CPPTEST_SAFE_STUB___getreent)
#  define CppTest_Stub__Call___getreent___getreent CppTest_Safe_Stub___getreent___getreent
#  if defined(CPPTEST_UNDEFINED___getreent) 
#   define CppTest_Safe_Stub___getreent___getreent __getreent
#  endif
# elif defined(CPPTEST_AUTO_STUB___getreent)
#  define CppTest_Stub__Call___getreent___getreent CppTest_Auto_Stub___getreent___getreent
#  if defined(CPPTEST_UNDEFINED___getreent) 
#   define CppTest_Auto_Stub___getreent___getreent __getreent
#  endif
# else
#  define CppTest_Stub__Call___getreent___getreent CppTest_Stub___getreent___getreent
#  if defined(CPPTEST_UNDEFINED___getreent) 
#   define CppTest_Stub___getreent___getreent __getreent
#  endif
#  define CPPTEST_USER_STUB___getreent
# endif
#else
# define CppTest_Stub__Call___getreent___getreent __getreent
#endif

#if defined(CPPTEST_STUB_fflush) || CPPTEST_ENABLE_ALL_STUBS
# if defined(CPPTEST_SAFE_STUB_fflush)
#  define CppTest_Stub__Call_fflush_fflush CppTest_Safe_Stub_fflush_fflush
#  if defined(CPPTEST_UNDEFINED_fflush) 
#   define CppTest_Safe_Stub_fflush_fflush fflush
#  endif
# elif defined(CPPTEST_AUTO_STUB_fflush)
#  define CppTest_Stub__Call_fflush_fflush CppTest_Auto_Stub_fflush_fflush
#  if defined(CPPTEST_UNDEFINED_fflush) 
#   define CppTest_Auto_Stub_fflush_fflush fflush
#  endif
# else
#  define CppTest_Stub__Call_fflush_fflush CppTest_Stub_fflush_fflush
#  if defined(CPPTEST_UNDEFINED_fflush) 
#   define CppTest_Stub_fflush_fflush fflush
#  endif
#  define CPPTEST_USER_STUB_fflush
# endif
#else
# define CppTest_Stub__Call_fflush_fflush fflush
#endif

#if defined(CPPTEST_STUB_printf) || CPPTEST_ENABLE_ALL_STUBS
# if defined(CPPTEST_SAFE_STUB_printf)
#  define CppTest_Stub__Call_printf_printf CppTest_Safe_Stub_printf_printf
#  if defined(CPPTEST_UNDEFINED_printf) 
#   define CppTest_Safe_Stub_printf_printf printf
#  endif
# elif defined(CPPTEST_AUTO_STUB_printf)
#  define CppTest_Stub__Call_printf_printf CppTest_Auto_Stub_printf_printf
#  if defined(CPPTEST_UNDEFINED_printf) 
#   define CppTest_Auto_Stub_printf_printf printf
#  endif
# else
#  define CppTest_Stub__Call_printf_printf CppTest_Stub_printf_printf
#  if defined(CPPTEST_UNDEFINED_printf) 
#   define CppTest_Stub_printf_printf printf
#  endif
#  define CPPTEST_USER_STUB_printf
# endif
#else
# define CppTest_Stub__Call_printf_printf printf
#endif

#if defined(CPPTEST_STUB_free) || CPPTEST_ENABLE_ALL_STUBS
# if defined(CPPTEST_SAFE_STUB_free)
#  define CppTest_Stub__Call_free_free CppTest_Safe_Stub_free_free
#  if defined(CPPTEST_UNDEFINED_free) 
#   define CppTest_Safe_Stub_free_free free
#  endif
# elif defined(CPPTEST_AUTO_STUB_free)
#  define CppTest_Stub__Call_free_free CppTest_Auto_Stub_free_free
#  if defined(CPPTEST_UNDEFINED_free) 
#   define CppTest_Auto_Stub_free_free free
#  endif
# else
#  define CppTest_Stub__Call_free_free CppTest_Stub_free_free
#  if defined(CPPTEST_UNDEFINED_free) 
#   define CppTest_Stub_free_free free
#  endif
#  define CPPTEST_USER_STUB_free
# endif
#else
# define CppTest_Stub__Call_free_free free
#endif

#if defined(CPPTEST_STUB_malloc) || CPPTEST_ENABLE_ALL_STUBS
# if defined(CPPTEST_SAFE_STUB_malloc)
#  define CppTest_Stub__Call_malloc_malloc CppTest_Safe_Stub_malloc_malloc
#  if defined(CPPTEST_UNDEFINED_malloc) 
#   define CppTest_Safe_Stub_malloc_malloc malloc
#  endif
# elif defined(CPPTEST_AUTO_STUB_malloc)
#  define CppTest_Stub__Call_malloc_malloc CppTest_Auto_Stub_malloc_malloc
#  if defined(CPPTEST_UNDEFINED_malloc) 
#   define CppTest_Auto_Stub_malloc_malloc malloc
#  endif
# else
#  define CppTest_Stub__Call_malloc_malloc CppTest_Stub_malloc_malloc
#  if defined(CPPTEST_UNDEFINED_malloc) 
#   define CppTest_Stub_malloc_malloc malloc
#  endif
#  define CPPTEST_USER_STUB_malloc
# endif
#else
# define CppTest_Stub__Call_malloc_malloc malloc
#endif

#if defined(CPPTEST_STUB_strcpy) || CPPTEST_ENABLE_ALL_STUBS
# if defined(CPPTEST_SAFE_STUB_strcpy)
#  define CppTest_Stub__Call_strcpy_strcpy CppTest_Safe_Stub_strcpy_strcpy
#  if defined(CPPTEST_UNDEFINED_strcpy) 
#   define CppTest_Safe_Stub_strcpy_strcpy strcpy
#  endif
# elif defined(CPPTEST_AUTO_STUB_strcpy)
#  define CppTest_Stub__Call_strcpy_strcpy CppTest_Auto_Stub_strcpy_strcpy
#  if defined(CPPTEST_UNDEFINED_strcpy) 
#   define CppTest_Auto_Stub_strcpy_strcpy strcpy
#  endif
# else
#  define CppTest_Stub__Call_strcpy_strcpy CppTest_Stub_strcpy_strcpy
#  if defined(CPPTEST_UNDEFINED_strcpy) 
#   define CppTest_Stub_strcpy_strcpy strcpy
#  endif
#  define CPPTEST_USER_STUB_strcpy
# endif
#else
# define CppTest_Stub__Call_strcpy_strcpy strcpy
#endif

#if defined(CPPTEST_STUB_readSensor) || CPPTEST_ENABLE_ALL_STUBS
# if defined(CPPTEST_SAFE_STUB_readSensor)
#  define CppTest_Stub__Call_readSensor_readSensor CppTest_Safe_Stub_readSensor_readSensor
#  if defined(CPPTEST_UNDEFINED_readSensor) 
#   define CppTest_Safe_Stub_readSensor_readSensor readSensor
#  endif
# elif defined(CPPTEST_AUTO_STUB_readSensor)
#  define CppTest_Stub__Call_readSensor_readSensor CppTest_Auto_Stub_readSensor_readSensor
#  if defined(CPPTEST_UNDEFINED_readSensor) 
#   define CppTest_Auto_Stub_readSensor_readSensor readSensor
#  endif
# else
#  define CppTest_Stub__Call_readSensor_readSensor CppTest_Stub_readSensor_readSensor
#  if defined(CPPTEST_UNDEFINED_readSensor) 
#   define CppTest_Stub_readSensor_readSensor readSensor
#  endif
#  define CPPTEST_USER_STUB_readSensor
# endif
#else
# define CppTest_Stub__Call_readSensor_readSensor readSensor
#endif

#if defined(CPPTEST_STUB_initialize) || CPPTEST_ENABLE_ALL_STUBS
# if defined(CPPTEST_SAFE_STUB_initialize)
#  define CppTest_Stub__Call_initialize_initialize CppTest_Safe_Stub_initialize_initialize
#  if defined(CPPTEST_UNDEFINED_initialize) 
#   define CppTest_Safe_Stub_initialize_initialize initialize
#  endif
# elif defined(CPPTEST_AUTO_STUB_initialize)
#  define CppTest_Stub__Call_initialize_initialize CppTest_Auto_Stub_initialize_initialize
#  if defined(CPPTEST_UNDEFINED_initialize) 
#   define CppTest_Auto_Stub_initialize_initialize initialize
#  endif
# else
#  define CppTest_Stub__Call_initialize_initialize CppTest_Stub_initialize_initialize
#  if defined(CPPTEST_UNDEFINED_initialize) 
#   define CppTest_Stub_initialize_initialize initialize
#  endif
#  define CPPTEST_USER_STUB_initialize
# endif
#else
# define CppTest_Stub__Call_initialize_initialize initialize
#endif

#if defined(CPPTEST_STUB_finalize) || CPPTEST_ENABLE_ALL_STUBS
# if defined(CPPTEST_SAFE_STUB_finalize)
#  define CppTest_Stub__Call_finalize_finalize CppTest_Safe_Stub_finalize_finalize
#  if defined(CPPTEST_UNDEFINED_finalize) 
#   define CppTest_Safe_Stub_finalize_finalize finalize
#  endif
# elif defined(CPPTEST_AUTO_STUB_finalize)
#  define CppTest_Stub__Call_finalize_finalize CppTest_Auto_Stub_finalize_finalize
#  if defined(CPPTEST_UNDEFINED_finalize) 
#   define CppTest_Auto_Stub_finalize_finalize finalize
#  endif
# else
#  define CppTest_Stub__Call_finalize_finalize CppTest_Stub_finalize_finalize
#  if defined(CPPTEST_UNDEFINED_finalize) 
#   define CppTest_Stub_finalize_finalize finalize
#  endif
#  define CPPTEST_USER_STUB_finalize
# endif
#else
# define CppTest_Stub__Call_finalize_finalize finalize
#endif

#if defined(CPPTEST_STUB_printMessage) || CPPTEST_ENABLE_ALL_STUBS
# if defined(CPPTEST_SAFE_STUB_printMessage)
#  define CppTest_Stub__Call_printMessage_printMessage CppTest_Safe_Stub_printMessage_printMessage
#  if defined(CPPTEST_UNDEFINED_printMessage) 
#   define CppTest_Safe_Stub_printMessage_printMessage printMessage
#  endif
# elif defined(CPPTEST_AUTO_STUB_printMessage)
#  define CppTest_Stub__Call_printMessage_printMessage CppTest_Auto_Stub_printMessage_printMessage
#  if defined(CPPTEST_UNDEFINED_printMessage) 
#   define CppTest_Auto_Stub_printMessage_printMessage printMessage
#  endif
# else
#  define CppTest_Stub__Call_printMessage_printMessage CppTest_Stub_printMessage_printMessage
#  if defined(CPPTEST_UNDEFINED_printMessage) 
#   define CppTest_Stub_printMessage_printMessage printMessage
#  endif
#  define CPPTEST_USER_STUB_printMessage
# endif
#else
# define CppTest_Stub__Call_printMessage_printMessage printMessage
#endif

#if defined(CPPTEST_STUB_reportSensorFailure) || CPPTEST_ENABLE_ALL_STUBS
# if defined(CPPTEST_SAFE_STUB_reportSensorFailure)
#  define CppTest_Stub__Call_reportSensorFailure_reportSensorFailure CppTest_Safe_Stub_reportSensorFailure_reportSensorFailure
#  if defined(CPPTEST_UNDEFINED_reportSensorFailure) 
#   define CppTest_Safe_Stub_reportSensorFailure_reportSensorFailure reportSensorFailure
#  endif
# elif defined(CPPTEST_AUTO_STUB_reportSensorFailure)
#  define CppTest_Stub__Call_reportSensorFailure_reportSensorFailure CppTest_Auto_Stub_reportSensorFailure_reportSensorFailure
#  if defined(CPPTEST_UNDEFINED_reportSensorFailure) 
#   define CppTest_Auto_Stub_reportSensorFailure_reportSensorFailure reportSensorFailure
#  endif
# else
#  define CppTest_Stub__Call_reportSensorFailure_reportSensorFailure CppTest_Stub_reportSensorFailure_reportSensorFailure
#  if defined(CPPTEST_UNDEFINED_reportSensorFailure) 
#   define CppTest_Stub_reportSensorFailure_reportSensorFailure reportSensorFailure
#  endif
#  define CPPTEST_USER_STUB_reportSensorFailure
# endif
#else
# define CppTest_Stub__Call_reportSensorFailure_reportSensorFailure reportSensorFailure
#endif

#if defined(CPPTEST_STUB_handleSensorValue) || CPPTEST_ENABLE_ALL_STUBS
# if defined(CPPTEST_SAFE_STUB_handleSensorValue)
#  define CppTest_Stub__Call_handleSensorValue_handleSensorValue CppTest_Safe_Stub_handleSensorValue_handleSensorValue
#  if defined(CPPTEST_UNDEFINED_handleSensorValue) 
#   define CppTest_Safe_Stub_handleSensorValue_handleSensorValue handleSensorValue
#  endif
# elif defined(CPPTEST_AUTO_STUB_handleSensorValue)
#  define CppTest_Stub__Call_handleSensorValue_handleSensorValue CppTest_Auto_Stub_handleSensorValue_handleSensorValue
#  if defined(CPPTEST_UNDEFINED_handleSensorValue) 
#   define CppTest_Auto_Stub_handleSensorValue_handleSensorValue handleSensorValue
#  endif
# else
#  define CppTest_Stub__Call_handleSensorValue_handleSensorValue CppTest_Stub_handleSensorValue_handleSensorValue
#  if defined(CPPTEST_UNDEFINED_handleSensorValue) 
#   define CppTest_Stub_handleSensorValue_handleSensorValue handleSensorValue
#  endif
#  define CPPTEST_USER_STUB_handleSensorValue
# endif
#else
# define CppTest_Stub__Call_handleSensorValue_handleSensorValue handleSensorValue
#endif

#if defined(CPPTEST_STUB_mainLoop) || CPPTEST_ENABLE_ALL_STUBS
# if defined(CPPTEST_SAFE_STUB_mainLoop)
#  define CppTest_Stub__Call_mainLoop_mainLoop CppTest_Safe_Stub_mainLoop_mainLoop
#  if defined(CPPTEST_UNDEFINED_mainLoop) 
#   define CppTest_Safe_Stub_mainLoop_mainLoop mainLoop
#  endif
# elif defined(CPPTEST_AUTO_STUB_mainLoop)
#  define CppTest_Stub__Call_mainLoop_mainLoop CppTest_Auto_Stub_mainLoop_mainLoop
#  if defined(CPPTEST_UNDEFINED_mainLoop) 
#   define CppTest_Auto_Stub_mainLoop_mainLoop mainLoop
#  endif
# else
#  define CppTest_Stub__Call_mainLoop_mainLoop CppTest_Stub_mainLoop_mainLoop
#  if defined(CPPTEST_UNDEFINED_mainLoop) 
#   define CppTest_Stub_mainLoop_mainLoop mainLoop
#  endif
#  define CPPTEST_USER_STUB_mainLoop
# endif
#else
# define CppTest_Stub__Call_mainLoop_mainLoop mainLoop
#endif

# 11 "C:\\Program Files\\Parasoft\\C++test\\10.3.2\\engine\\runtime\\include\\cpptest_pre.h"
struct CppTest_Dummy_Type { 
char nonEmpty; 
}; 

struct CppTest_Safe_Dummy_Type { 
char nonEmpty; 
}; 

struct CppTest_Auto_Dummy_Type { 
char nonEmpty; 
}; 
# 39
typedef struct CppTest_Dummy_Type CppTest_Dummy; 
typedef struct CppTest_Safe_Dummy_Type CppTest_Safe_Dummy; 
typedef struct CppTest_Auto_Dummy_Type CppTest_Auto_Dummy; 
# 27 "/usr/include/machine/_default_types.h" 3
typedef signed char __int8_t; 

typedef unsigned char __uint8_t; 
# 41 "/usr/include/machine/_default_types.h" 3
typedef short __int16_t; 

typedef unsigned short __uint16_t; 
# 63 "/usr/include/machine/_default_types.h" 3
typedef int __int32_t; 

typedef unsigned __uint32_t; 
# 89 "/usr/include/machine/_default_types.h" 3
typedef long long __int64_t; 

typedef unsigned long long __uint64_t; 
# 120 "/usr/include/machine/_default_types.h" 3
typedef signed char __int_least8_t; 

typedef unsigned char __uint_least8_t; 
# 146 "/usr/include/machine/_default_types.h" 3
typedef short __int_least16_t; 

typedef unsigned short __uint_least16_t; 
# 168 "/usr/include/machine/_default_types.h" 3
typedef int __int_least32_t; 

typedef unsigned __uint_least32_t; 
# 186 "/usr/include/machine/_default_types.h" 3
typedef long long __int_least64_t; 

typedef unsigned long long __uint_least64_t; 
# 200 "/usr/include/machine/_default_types.h" 3
typedef int __intptr_t; 

typedef unsigned __uintptr_t; 
# 212 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/stddef.h" 3
typedef unsigned size_t; 
# 147 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/stddef.h" 3
typedef int ptrdiff_t; 
# 324 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/stddef.h" 3
typedef unsigned short wchar_t; 
# 40 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/stdarg.h" 3
typedef __builtin_va_list __gnuc_va_list; 
# 14 "/usr/include/sys/lock.h" 3
typedef void *_LOCK_T; 
# 44 "/usr/include/sys/lock.h" 3
void __cygwin_lock_init(_LOCK_T *); 
void __cygwin_lock_init_recursive(_LOCK_T *); 
void __cygwin_lock_fini(_LOCK_T *); 
void __cygwin_lock_lock(_LOCK_T *); 
int __cygwin_lock_trylock(_LOCK_T *); 
void __cygwin_lock_unlock(_LOCK_T *); 
# 16 "/usr/include/sys/_types.h" 3
typedef long _off_t; 



typedef short __dev_t; 



typedef unsigned short __uid_t; 


typedef unsigned short __gid_t; 



__extension__ typedef long long _off64_t; 
# 39
typedef long _fpos_t; 
# 45
typedef _off64_t _fpos64_t; 
# 55 "/usr/include/sys/_types.h" 3
typedef signed int _ssize_t; 
# 353 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/stddef.h" 3
typedef unsigned wint_t; 
# 79 "/usr/include/sys/_types.h" 3
typedef 
# 72
struct { 
int __count; 

union { 
wint_t __wch; 
unsigned char __wchb[4]; 
} __value; 
} _mbstate_t; 



typedef _LOCK_T _flock_t; 




typedef void *_iconv_t; 
# 22 "/usr/include/sys/reent.h" 3
typedef unsigned long __ULong; 
# 38 "/usr/include/sys/reent.h" 3
struct _reent; 
# 45
struct _Bigint { 

struct _Bigint *_next; 
int _k, _maxwds, _sign, _wds; 
__ULong _x[1]; 
}; 


struct __tm { 

int __tm_sec; 
int __tm_min; 
int __tm_hour; 
int __tm_mday; 
int __tm_mon; 
int __tm_year; 
int __tm_wday; 
int __tm_yday; 
int __tm_isdst; 
}; 
# 72
struct _on_exit_args { 
void *_fnargs[32]; 
void *_dso_handle[32]; 

__ULong _fntypes; 


__ULong _is_cxa; 
}; 
# 91 "/usr/include/sys/reent.h" 3
struct _atexit { 
struct _atexit *_next; 
int _ind; 

void (*_fns[32])(void); 
struct _on_exit_args _on_exit_args; 
}; 
# 115 "/usr/include/sys/reent.h" 3
struct __sbuf { 
unsigned char *_base; 
int _size; 
}; 
# 179 "/usr/include/sys/reent.h" 3
struct __sFILE { 
unsigned char *_p; 
int _r; 
int _w; 
short _flags; 
short _file; 
struct __sbuf _bf; 
int _lbfsize; 
# 193
void *_cookie; 

_ssize_t ( __attribute((__cdecl__))*_read)(struct _reent *, void *, char *, size_t) ; 

_ssize_t ( __attribute((__cdecl__))*_write)(struct _reent *, void *, const char *, size_t) ; 


_fpos_t ( __attribute((__cdecl__))*_seek)(struct _reent *, void *, _fpos_t, int) ; 
int ( __attribute((__cdecl__))*_close)(struct _reent *, void *) ; 


struct __sbuf _ub; 
unsigned char *_up; 
int _ur; 


unsigned char _ubuf[3]; 
unsigned char _nbuf[1]; 


struct __sbuf _lb; 


int _blksize; 
_off_t _offset; 


struct _reent *_data; 



_flock_t _lock; 

_mbstate_t _mbstate; 
int _flags2; 
}; 
# 237 "/usr/include/sys/reent.h" 3
struct __sFILE64 { 
unsigned char *_p; 
int _r; 
int _w; 
short _flags; 
short _file; 
struct __sbuf _bf; 
int _lbfsize; 

struct _reent *_data; 


void *_cookie; 

_ssize_t ( __attribute((__cdecl__))*_read)(struct _reent *, void *, char *, size_t) ; 

_ssize_t ( __attribute((__cdecl__))*_write)(struct _reent *, void *, const char *, size_t) ; 


_fpos_t ( __attribute((__cdecl__))*_seek)(struct _reent *, void *, _fpos_t, int) ; 
int ( __attribute((__cdecl__))*_close)(struct _reent *, void *) ; 


struct __sbuf _ub; 
unsigned char *_up; 
int _ur; 


unsigned char _ubuf[3]; 
unsigned char _nbuf[1]; 


struct __sbuf _lb; 


int _blksize; 
int _flags2; 

_off64_t _offset; 
_fpos64_t ( __attribute((__cdecl__))*_seek64)(struct _reent *, void *, _fpos64_t, int) ; 


_flock_t _lock; 

_mbstate_t _mbstate; 
}; 
typedef struct __sFILE64 __FILE; 
# 289
struct _glue { 

struct _glue *_next; 
int _niobs; 
__FILE *_iobs; 
}; 
# 317 "/usr/include/sys/reent.h" 3
struct _rand48 { 
unsigned short _seed[3]; 
unsigned short _mult[3]; 
unsigned short _add; 




}; 
# 569 "/usr/include/sys/reent.h" 3
struct _reent { 

int _errno; 




__FILE *_stdin, *_stdout, *_stderr; 

int _inc; 
char _emergency[25]; 

int _current_category; 
const char *_current_locale; 

int __sdidinit; 

void ( __attribute((__cdecl__))*__cleanup)(struct _reent *) ; 


struct _Bigint *_result; 
int _result_k; 
struct _Bigint *_p5s; 
struct _Bigint **_freelist; 


int _cvtlen; 
char *_cvtbuf; 


union { 

struct { 
unsigned _unused_rand; 
char *_strtok_last; 
char _asctime_buf[26]; 
struct __tm _localtime_buf; 
int _gamma_signgam; 
__extension__ unsigned long long _rand_next; 
struct _rand48 _r48; 
_mbstate_t _mblen_state; 
_mbstate_t _mbtowc_state; 
_mbstate_t _wctomb_state; 
char _l64a_buf[8]; 
char _signal_buf[24]; 
int _getdate_err; 
_mbstate_t _mbrlen_state; 
_mbstate_t _mbrtowc_state; 
_mbstate_t _mbsrtowcs_state; 
_mbstate_t _wcrtomb_state; 
_mbstate_t _wcsrtombs_state; 
int _h_errno; 
} _reent; 




struct { 

unsigned char *_nextf[30]; 
unsigned _nmalloc[30]; 
} _unused; 
} _new; 



struct _atexit *_atexit; 
struct _atexit _atexit0; 



void (**_sig_func)(int); 




struct _glue __sglue; 
__FILE __sf[3]; 
}; 
# 762 "/usr/include/sys/reent.h" 3
extern struct _reent *_impure_ptr; 
extern struct _reent *const _global_impure_ptr; 

void _reclaim_reent(struct _reent *); 
#if !defined(CppTest_Stub___getreent___getreent) && defined(CPPTEST_USER_STUB___getreent)
struct _reent *CppTest_Stub___getreent___getreent(void); 
#endif

#if !defined(CppTest_Safe_Stub___getreent___getreent) && defined(CPPTEST_SAFE_STUB___getreent)
struct _reent *CppTest_Safe_Stub___getreent___getreent(void); 
#endif

#if !defined(CppTest_Auto_Stub___getreent___getreent) && defined(CPPTEST_AUTO_STUB___getreent)
struct _reent *CppTest_Auto_Stub___getreent___getreent(void); 
#endif
# 771
struct _reent *__getreent(void) __attribute((__cdecl__)); 
# 19 "/usr/include/sys/_stdint.h" 3
typedef __int8_t int8_t; 
typedef __uint8_t uint8_t; 




typedef __int16_t int16_t; 
typedef __uint16_t uint16_t; 




typedef __int32_t int32_t; 
typedef __uint32_t uint32_t; 




typedef __int64_t int64_t; 
typedef __uint64_t uint64_t; 



typedef __intptr_t intptr_t; 
typedef __uintptr_t uintptr_t; 
# 19 "/usr/include/machine/types.h" 3
typedef long __off_t; 
typedef int __pid_t; 

__extension__ typedef long long __loff_t; 
# 28
typedef long __suseconds_t; 
# 94 "/usr/include/sys/types.h" 3
typedef unsigned char u_char; 



typedef unsigned short u_short; 



typedef unsigned u_int; 



typedef unsigned long u_long; 
# 112
typedef unsigned short ushort; 
typedef unsigned uint; 
typedef unsigned long ulong; 



typedef unsigned long clock_t; 




typedef long time_t; 




typedef long daddr_t; 



typedef char *caddr_t; 
# 179 "/usr/include/sys/types.h" 3
typedef int pid_t; 
# 189 "/usr/include/sys/types.h" 3
typedef _ssize_t ssize_t; 
# 208 "/usr/include/sys/types.h" 3
typedef unsigned short nlink_t; 
# 230 "/usr/include/sys/types.h" 3
typedef long fd_mask; 
# 240
typedef 
# 238
struct _types_fd_set { 
fd_mask fds_bits[(((64) + (((sizeof(fd_mask) * 8)) - 1)) / ((sizeof(fd_mask) * 8)))]; 
} _types_fd_set; 
# 261 "/usr/include/sys/types.h" 3
typedef unsigned long clockid_t; 




typedef unsigned long timer_t; 



typedef unsigned long useconds_t; 


typedef __suseconds_t suseconds_t; 



typedef __int64_t sbintime_t; 
# 19 "/usr/include/byteswap.h" 3
static __inline__ unsigned short bswap_16(unsigned short __x) 
{ 
return (__x >> 8) | (__x << 8); 
} 


static __inline__ unsigned bswap_32(unsigned __x) 
{ 
return (bswap_16(__x & 0xffff) << 16) | (bswap_16(__x >> 16)); 
} 


static __inline__ unsigned long long bswap_64(unsigned long long __x) 
{ 
return (((unsigned long long)bswap_32(__x & 0xffffffffULL)) << 32) | (bswap_32(__x >> 32)); 
} 
# 44 "/usr/include/sys/_timespec.h" 3
struct timespec { 
time_t tv_sec; 
long tv_nsec; 
}; 
# 27 "/usr/include/cygwin/types.h" 3
typedef struct timespec timespec_t; 




typedef struct timespec timestruc_t; 
# 41 "/usr/include/cygwin/types.h" 3
typedef _off64_t off_t; 



typedef __loff_t loff_t; 



typedef __int16_t __dev16_t; 
typedef __uint32_t dev_t; 




typedef __int32_t blksize_t; 




typedef __int32_t __blkcnt32_t; 
typedef __int64_t blkcnt_t; 
# 67
typedef unsigned long fsblkcnt_t; 
# 73
typedef unsigned long fsfilcnt_t; 




typedef unsigned short __uid16_t; 
typedef __uint32_t uid_t; 




typedef unsigned short __gid16_t; 
typedef __uint32_t gid_t; 
# 91
typedef __uint32_t __ino32_t; 

typedef __uint64_t ino_t; 
# 99
typedef __uint32_t id_t; 
# 113 "/usr/include/cygwin/types.h" 3
struct flock { 
short l_type; 
short l_whence; 
off_t l_start; 
off_t l_len; 
pid_t l_pid; 
}; 



typedef long long key_t; 
# 131
typedef unsigned long vm_offset_t; 




typedef unsigned long vm_size_t; 




typedef void *vm_object_t; 




typedef unsigned char u_int8_t; 



typedef __uint16_t u_int16_t; 



typedef __uint32_t u_int32_t; 



typedef __uint64_t u_int64_t; 




typedef __int32_t register_t; 




typedef char *addr_t; 




typedef unsigned mode_t; 
# 179
typedef struct __pthread_t { char __dummy; } *pthread_t; 
typedef struct __pthread_mutex_t { char __dummy; } *pthread_mutex_t; 

typedef struct __pthread_key_t { char __dummy; } *pthread_key_t; 
typedef struct __pthread_attr_t { char __dummy; } *pthread_attr_t; 
typedef struct __pthread_mutexattr_t { char __dummy; } *pthread_mutexattr_t; 
typedef struct __pthread_condattr_t { char __dummy; } *pthread_condattr_t; 
typedef struct __pthread_cond_t { char __dummy; } *pthread_cond_t; 
# 194
typedef 
# 190
struct { 
pthread_mutex_t mutex; 
int state; 

} pthread_once_t; 
typedef struct __pthread_spinlock_t { char __dummy; } *pthread_spinlock_t; 
typedef struct __pthread_rwlock_t { char __dummy; } *pthread_rwlock_t; 
typedef struct __pthread_rwlockattr_t { char __dummy; } *pthread_rwlockattr_t; 
# 16 "/usr/include/sys/sysmacros.h" 3
__attribute((__always_inline__)) extern __inline__ int gnu_dev_major(dev_t); 
__attribute((__always_inline__)) extern __inline__ int gnu_dev_minor(dev_t); 
__attribute((__always_inline__)) extern __inline__ dev_t gnu_dev_makedev(int, int); 


__attribute((__always_inline__)) extern __inline__ int gnu_dev_major(dev_t dev) 
{ 
return (int)(((dev) >> 16) & 0xffff); 
} 


__attribute((__always_inline__)) extern __inline__ int gnu_dev_minor(dev_t dev) 
{ 
return (int)((dev) & 0xffff); 
} 


__attribute((__always_inline__)) extern __inline__ dev_t gnu_dev_makedev(int maj, int min) 
{ 
return (((maj) << 16) | ((min) & 0xffff)); 
} 
# 53 "/usr/include/stdio.h" 3
typedef __FILE FILE; 




typedef _fpos64_t fpos_t; 
# 37 "/usr/include/sys/stdio.h" 3
__attribute((__cdecl__)) ssize_t getline(char **, size_t *, FILE *); 
__attribute((__cdecl__)) ssize_t getdelim(char **, size_t *, int, FILE *); 
# 167 "/usr/include/stdio.h" 3
FILE *tmpfile(void) __attribute((__cdecl__)); 
char *tmpnam(char *) __attribute((__cdecl__)); 

char *tempnam(const char *, const char *) __attribute((__cdecl__)); 

__attribute((__cdecl__)) int fclose(FILE *); 
#if !defined(CppTest_Stub_fflush_fflush) && defined(CPPTEST_USER_STUB_fflush)
int CppTest_Stub_fflush_fflush(FILE *); 
#endif

#if !defined(CppTest_Safe_Stub_fflush_fflush) && defined(CPPTEST_SAFE_STUB_fflush)
int CppTest_Safe_Stub_fflush_fflush(FILE *); 
#endif

#if !defined(CppTest_Auto_Stub_fflush_fflush) && defined(CPPTEST_AUTO_STUB_fflush)
int CppTest_Auto_Stub_fflush_fflush(FILE *); 
#endif
# 173
__attribute((__cdecl__)) int fflush(FILE *); 
FILE *freopen(const char *, const char *, FILE *) __attribute((__cdecl__)); 
__attribute((__cdecl__)) void setbuf(FILE *, char *); 
__attribute((__cdecl__)) int setvbuf(FILE *, char *, int, size_t); 
__attribute((__cdecl__)) int fprintf(FILE *, const char *, ...) __attribute((__format__(__printf__, 2, 3))); 

__attribute((__cdecl__)) int fscanf(FILE *, const char *, ...) __attribute((__format__(__scanf__, 2, 3))); 
#if !defined(CppTest_Stub_printf_printf) && defined(CPPTEST_USER_STUB_printf)
int CppTest_Stub_printf_printf(const char *, ...); 
#endif

#if !defined(CppTest_Safe_Stub_printf_printf) && defined(CPPTEST_SAFE_STUB_printf)
int CppTest_Safe_Stub_printf_printf(const char *, ...); 
#endif

#if !defined(CppTest_Auto_Stub_printf_printf) && defined(CPPTEST_AUTO_STUB_printf)
int CppTest_Auto_Stub_printf_printf(const char *, ...); 
#endif
# 181
__attribute((__cdecl__)) int printf(const char *, ...) __attribute((__format__(__printf__, 1, 2))); 

__attribute((__cdecl__)) int scanf(const char *, ...) __attribute((__format__(__scanf__, 1, 2))); 

__attribute((__cdecl__)) int sscanf(const char *, const char *, ...) __attribute((__format__(__scanf__, 2, 3))); 

__attribute((__cdecl__)) int vfprintf(FILE *, const char *, __gnuc_va_list) __attribute((__format__(__printf__, 2, 0))); 

__attribute((__cdecl__)) int vprintf(const char *, __gnuc_va_list) __attribute((__format__(__printf__, 1, 0))); 

__attribute((__cdecl__)) int vsprintf(char *, const char *, __gnuc_va_list) __attribute((__format__(__printf__, 2, 0))); 

__attribute((__cdecl__)) int fgetc(FILE *); 
char *fgets(char *, int, FILE *) __attribute((__cdecl__)); 
__attribute((__cdecl__)) int fputc(int, FILE *); 
__attribute((__cdecl__)) int fputs(const char *, FILE *); 
__attribute((__cdecl__)) int getc(FILE *); 
__attribute((__cdecl__)) int getchar(void); 
char *gets(char *) __attribute((__cdecl__)); 
__attribute((__cdecl__)) int putc(int, FILE *); 
__attribute((__cdecl__)) int putchar(int); 
__attribute((__cdecl__)) int puts(const char *); 
__attribute((__cdecl__)) int ungetc(int, FILE *); 
__attribute((__cdecl__)) size_t fread(void *, size_t _size, size_t _n, FILE *); 
__attribute((__cdecl__)) size_t fwrite(const void *, size_t _size, size_t _n, FILE *); 



__attribute((__cdecl__)) int fgetpos(FILE *, fpos_t *); 

__attribute((__cdecl__)) int fseek(FILE *, long, int); 



__attribute((__cdecl__)) int fsetpos(FILE *, const fpos_t *); 

__attribute((__cdecl__)) long ftell(FILE *); 
__attribute((__cdecl__)) void rewind(FILE *); 
__attribute((__cdecl__)) void clearerr(FILE *); 
__attribute((__cdecl__)) int feof(FILE *); 
__attribute((__cdecl__)) int ferror(FILE *); 
__attribute((__cdecl__)) void perror(const char *); 

FILE *fopen(const char * _name, const char * _type) __attribute((__cdecl__)); 
__attribute((__cdecl__)) int sprintf(char *, const char *, ...) __attribute((__format__(__printf__, 2, 3))); 

__attribute((__cdecl__)) int remove(const char *); 
__attribute((__cdecl__)) int rename(const char *, const char *); 
# 238 "/usr/include/stdio.h" 3
__attribute((__cdecl__)) int fseeko(FILE *, off_t, int); 
__attribute((__cdecl__)) off_t ftello(FILE *); 
# 247
__attribute((__cdecl__)) int asiprintf(char **, const char *, ...) __attribute((__format__(__printf__, 2, 3))); 

char *asniprintf(char *, size_t *, const char *, ...) __attribute((__format__(__printf__, 3, 4))) __attribute((__cdecl__)); 

char *asnprintf(char *, size_t *, const char *, ...) __attribute((__format__(__printf__, 3, 4))) __attribute((__cdecl__)); 

__attribute((__cdecl__)) int asprintf(char **, const char *, ...) __attribute((__format__(__printf__, 2, 3))); 


__attribute((__cdecl__)) int diprintf(int, const char *, ...) __attribute((__format__(__printf__, 2, 3))); 


__attribute((__cdecl__)) int fiprintf(FILE *, const char *, ...) __attribute((__format__(__printf__, 2, 3))); 

__attribute((__cdecl__)) int fiscanf(FILE *, const char *, ...) __attribute((__format__(__scanf__, 2, 3))); 

__attribute((__cdecl__)) int iprintf(const char *, ...) __attribute((__format__(__printf__, 1, 2))); 

__attribute((__cdecl__)) int iscanf(const char *, ...) __attribute((__format__(__scanf__, 1, 2))); 

__attribute((__cdecl__)) int siprintf(char *, const char *, ...) __attribute((__format__(__printf__, 2, 3))); 

__attribute((__cdecl__)) int siscanf(const char *, const char *, ...) __attribute((__format__(__scanf__, 2, 3))); 

__attribute((__cdecl__)) int snprintf(char *, size_t, const char *, ...) __attribute((__format__(__printf__, 3, 4))); 

__attribute((__cdecl__)) int sniprintf(char *, size_t, const char *, ...) __attribute((__format__(__printf__, 3, 4))); 

__attribute((__cdecl__)) int vasiprintf(char **, const char *, __gnuc_va_list) __attribute((__format__(__printf__, 2, 0))); 

char *vasniprintf(char *, size_t *, const char *, __gnuc_va_list) __attribute((__format__(__printf__, 3, 0))) __attribute((__cdecl__)); 

char *vasnprintf(char *, size_t *, const char *, __gnuc_va_list) __attribute((__format__(__printf__, 3, 0))) __attribute((__cdecl__)); 

__attribute((__cdecl__)) int vasprintf(char **, const char *, __gnuc_va_list) __attribute((__format__(__printf__, 2, 0))); 

__attribute((__cdecl__)) int vdiprintf(int, const char *, __gnuc_va_list) __attribute((__format__(__printf__, 2, 0))); 

__attribute((__cdecl__)) int vfiprintf(FILE *, const char *, __gnuc_va_list) __attribute((__format__(__printf__, 2, 0))); 

__attribute((__cdecl__)) int vfiscanf(FILE *, const char *, __gnuc_va_list) __attribute((__format__(__scanf__, 2, 0))); 

__attribute((__cdecl__)) int vfscanf(FILE *, const char *, __gnuc_va_list) __attribute((__format__(__scanf__, 2, 0))); 

__attribute((__cdecl__)) int viprintf(const char *, __gnuc_va_list) __attribute((__format__(__printf__, 1, 0))); 

__attribute((__cdecl__)) int viscanf(const char *, __gnuc_va_list) __attribute((__format__(__scanf__, 1, 0))); 

__attribute((__cdecl__)) int vscanf(const char *, __gnuc_va_list) __attribute((__format__(__scanf__, 1, 0))); 

__attribute((__cdecl__)) int vsiprintf(char *, const char *, __gnuc_va_list) __attribute((__format__(__printf__, 2, 0))); 

__attribute((__cdecl__)) int vsiscanf(const char *, const char *, __gnuc_va_list) __attribute((__format__(__scanf__, 2, 0))); 

__attribute((__cdecl__)) int vsniprintf(char *, size_t, const char *, __gnuc_va_list) __attribute((__format__(__printf__, 3, 0))); 

__attribute((__cdecl__)) int vsnprintf(char *, size_t, const char *, __gnuc_va_list) __attribute((__format__(__printf__, 3, 0))); 

__attribute((__cdecl__)) int vsscanf(const char *, const char *, __gnuc_va_list) __attribute((__format__(__scanf__, 2, 0))); 
# 316 "/usr/include/stdio.h" 3
FILE *fdopen(int, const char *) __attribute((__cdecl__)); 

__attribute((__cdecl__)) int fileno(FILE *); 
__attribute((__cdecl__)) int getw(FILE *); 
__attribute((__cdecl__)) int pclose(FILE *); 
FILE *popen(const char *, const char *) __attribute((__cdecl__)); 
__attribute((__cdecl__)) int putw(int, FILE *); 
__attribute((__cdecl__)) void setbuffer(FILE *, char *, int); 
__attribute((__cdecl__)) int setlinebuf(FILE *); 
__attribute((__cdecl__)) int getc_unlocked(FILE *); 
__attribute((__cdecl__)) int getchar_unlocked(void); 
__attribute((__cdecl__)) void flockfile(FILE *); 
__attribute((__cdecl__)) int ftrylockfile(FILE *); 
__attribute((__cdecl__)) void funlockfile(FILE *); 
__attribute((__cdecl__)) int putc_unlocked(int, FILE *); 
__attribute((__cdecl__)) int putchar_unlocked(int); 
# 341 "/usr/include/stdio.h" 3
__attribute((__cdecl__)) int dprintf(int, const char *, ...) __attribute((__format__(__printf__, 2, 3))); 


FILE *fmemopen(void *, size_t, const char *) __attribute((__cdecl__)); 


FILE *open_memstream(char **, size_t *) __attribute((__cdecl__)); 

__attribute((__cdecl__)) int renameat(int, const char *, int, const char *); 

__attribute((__cdecl__)) int vdprintf(int, const char *, __gnuc_va_list) __attribute((__format__(__printf__, 2, 0))); 
# 360
__attribute((__cdecl__)) int _asiprintf_r(struct _reent *, char **, const char *, ...) __attribute((__format__(__printf__, 3, 4))); 

char *_asniprintf_r(struct _reent *, char *, size_t *, const char *, ...) __attribute((__format__(__printf__, 4, 5))) __attribute((__cdecl__)); 

char *_asnprintf_r(struct _reent *, char *, size_t *, const char *, ...) __attribute((__format__(__printf__, 4, 5))) __attribute((__cdecl__)); 

__attribute((__cdecl__)) int _asprintf_r(struct _reent *, char **, const char *, ...) __attribute((__format__(__printf__, 3, 4))); 

__attribute((__cdecl__)) int _diprintf_r(struct _reent *, int, const char *, ...) __attribute((__format__(__printf__, 3, 4))); 

__attribute((__cdecl__)) int _dprintf_r(struct _reent *, int, const char *, ...) __attribute((__format__(__printf__, 3, 4))); 

__attribute((__cdecl__)) int _fclose_r(struct _reent *, FILE *); 
__attribute((__cdecl__)) int _fcloseall_r(struct _reent *); 
FILE *_fdopen_r(struct _reent *, int, const char *) __attribute((__cdecl__)); 
__attribute((__cdecl__)) int _fflush_r(struct _reent *, FILE *); 
__attribute((__cdecl__)) int _fgetc_r(struct _reent *, FILE *); 
__attribute((__cdecl__)) int _fgetc_unlocked_r(struct _reent *, FILE *); 
char *_fgets_r(struct _reent *, char *, int, FILE *) __attribute((__cdecl__)); 
char *_fgets_unlocked_r(struct _reent *, char *, int, FILE *) __attribute((__cdecl__)); 




__attribute((__cdecl__)) int _fgetpos_r(struct _reent *, FILE *, fpos_t *); 
__attribute((__cdecl__)) int _fsetpos_r(struct _reent *, FILE *, const fpos_t *); 

__attribute((__cdecl__)) int _fiprintf_r(struct _reent *, FILE *, const char *, ...) __attribute((__format__(__printf__, 3, 4))); 

__attribute((__cdecl__)) int _fiscanf_r(struct _reent *, FILE *, const char *, ...) __attribute((__format__(__scanf__, 3, 4))); 

FILE *_fmemopen_r(struct _reent *, void *, size_t, const char *) __attribute((__cdecl__)); 
FILE *_fopen_r(struct _reent *, const char *, const char *) __attribute((__cdecl__)); 
FILE *_freopen_r(struct _reent *, const char *, const char *, FILE *) __attribute((__cdecl__)); 
__attribute((__cdecl__)) int _fprintf_r(struct _reent *, FILE *, const char *, ...) __attribute((__format__(__printf__, 3, 4))); 

__attribute((__cdecl__)) int _fpurge_r(struct _reent *, FILE *); 
__attribute((__cdecl__)) int _fputc_r(struct _reent *, int, FILE *); 
__attribute((__cdecl__)) int _fputc_unlocked_r(struct _reent *, int, FILE *); 
__attribute((__cdecl__)) int _fputs_r(struct _reent *, const char *, FILE *); 
__attribute((__cdecl__)) int _fputs_unlocked_r(struct _reent *, const char *, FILE *); 
__attribute((__cdecl__)) size_t _fread_r(struct _reent *, void *, size_t _size, size_t _n, FILE *); 
__attribute((__cdecl__)) size_t _fread_unlocked_r(struct _reent *, void *, size_t _size, size_t _n, FILE *); 
__attribute((__cdecl__)) int _fscanf_r(struct _reent *, FILE *, const char *, ...) __attribute((__format__(__scanf__, 3, 4))); 

__attribute((__cdecl__)) int _fseek_r(struct _reent *, FILE *, long, int); 
__attribute((__cdecl__)) int _fseeko_r(struct _reent *, FILE *, _off_t, int); 
__attribute((__cdecl__)) long _ftell_r(struct _reent *, FILE *); 
__attribute((__cdecl__)) _off_t _ftello_r(struct _reent *, FILE *); 
__attribute((__cdecl__)) void _rewind_r(struct _reent *, FILE *); 
__attribute((__cdecl__)) size_t _fwrite_r(struct _reent *, const void *, size_t _size, size_t _n, FILE *); 
__attribute((__cdecl__)) size_t _fwrite_unlocked_r(struct _reent *, const void *, size_t _size, size_t _n, FILE *); 
__attribute((__cdecl__)) int _getc_r(struct _reent *, FILE *); 
__attribute((__cdecl__)) int _getc_unlocked_r(struct _reent *, FILE *); 
__attribute((__cdecl__)) int _getchar_r(struct _reent *); 
__attribute((__cdecl__)) int _getchar_unlocked_r(struct _reent *); 
char *_gets_r(struct _reent *, char *) __attribute((__cdecl__)); 
__attribute((__cdecl__)) int _iprintf_r(struct _reent *, const char *, ...) __attribute((__format__(__printf__, 2, 3))); 

__attribute((__cdecl__)) int _iscanf_r(struct _reent *, const char *, ...) __attribute((__format__(__scanf__, 2, 3))); 

FILE *_open_memstream_r(struct _reent *, char **, size_t *) __attribute((__cdecl__)); 
__attribute((__cdecl__)) void _perror_r(struct _reent *, const char *); 
__attribute((__cdecl__)) int _printf_r(struct _reent *, const char *, ...) __attribute((__format__(__printf__, 2, 3))); 

__attribute((__cdecl__)) int _putc_r(struct _reent *, int, FILE *); 
__attribute((__cdecl__)) int _putc_unlocked_r(struct _reent *, int, FILE *); 
__attribute((__cdecl__)) int _putchar_unlocked_r(struct _reent *, int); 
__attribute((__cdecl__)) int _putchar_r(struct _reent *, int); 
__attribute((__cdecl__)) int _puts_r(struct _reent *, const char *); 
__attribute((__cdecl__)) int _remove_r(struct _reent *, const char *); 
__attribute((__cdecl__)) int _rename_r(struct _reent *, const char * _old, const char * _new); 

__attribute((__cdecl__)) int _scanf_r(struct _reent *, const char *, ...) __attribute((__format__(__scanf__, 2, 3))); 

__attribute((__cdecl__)) int _siprintf_r(struct _reent *, char *, const char *, ...) __attribute((__format__(__printf__, 3, 4))); 

__attribute((__cdecl__)) int _siscanf_r(struct _reent *, const char *, const char *, ...) __attribute((__format__(__scanf__, 3, 4))); 

__attribute((__cdecl__)) int _sniprintf_r(struct _reent *, char *, size_t, const char *, ...) __attribute((__format__(__printf__, 4, 5))); 

__attribute((__cdecl__)) int _snprintf_r(struct _reent *, char *, size_t, const char *, ...) __attribute((__format__(__printf__, 4, 5))); 

__attribute((__cdecl__)) int _sprintf_r(struct _reent *, char *, const char *, ...) __attribute((__format__(__printf__, 3, 4))); 

__attribute((__cdecl__)) int _sscanf_r(struct _reent *, const char *, const char *, ...) __attribute((__format__(__scanf__, 3, 4))); 

char *_tempnam_r(struct _reent *, const char *, const char *) __attribute((__cdecl__)); 
FILE *_tmpfile_r(struct _reent *) __attribute((__cdecl__)); 
char *_tmpnam_r(struct _reent *, char *) __attribute((__cdecl__)); 
__attribute((__cdecl__)) int _ungetc_r(struct _reent *, int, FILE *); 
__attribute((__cdecl__)) int _vasiprintf_r(struct _reent *, char **, const char *, __gnuc_va_list) __attribute((__format__(__printf__, 3, 0))); 

char *_vasniprintf_r(struct _reent *, char *, size_t *, const char *, __gnuc_va_list) __attribute((__format__(__printf__, 4, 0))) __attribute((__cdecl__)); 

char *_vasnprintf_r(struct _reent *, char *, size_t *, const char *, __gnuc_va_list) __attribute((__format__(__printf__, 4, 0))) __attribute((__cdecl__)); 

__attribute((__cdecl__)) int _vasprintf_r(struct _reent *, char **, const char *, __gnuc_va_list) __attribute((__format__(__printf__, 3, 0))); 

__attribute((__cdecl__)) int _vdiprintf_r(struct _reent *, int, const char *, __gnuc_va_list) __attribute((__format__(__printf__, 3, 0))); 

__attribute((__cdecl__)) int _vdprintf_r(struct _reent *, int, const char *, __gnuc_va_list) __attribute((__format__(__printf__, 3, 0))); 

__attribute((__cdecl__)) int _vfiprintf_r(struct _reent *, FILE *, const char *, __gnuc_va_list) __attribute((__format__(__printf__, 3, 0))); 

__attribute((__cdecl__)) int _vfiscanf_r(struct _reent *, FILE *, const char *, __gnuc_va_list) __attribute((__format__(__scanf__, 3, 0))); 

__attribute((__cdecl__)) int _vfprintf_r(struct _reent *, FILE *, const char *, __gnuc_va_list) __attribute((__format__(__printf__, 3, 0))); 

__attribute((__cdecl__)) int _vfscanf_r(struct _reent *, FILE *, const char *, __gnuc_va_list) __attribute((__format__(__scanf__, 3, 0))); 

__attribute((__cdecl__)) int _viprintf_r(struct _reent *, const char *, __gnuc_va_list) __attribute((__format__(__printf__, 2, 0))); 

__attribute((__cdecl__)) int _viscanf_r(struct _reent *, const char *, __gnuc_va_list) __attribute((__format__(__scanf__, 2, 0))); 

__attribute((__cdecl__)) int _vprintf_r(struct _reent *, const char *, __gnuc_va_list) __attribute((__format__(__printf__, 2, 0))); 

__attribute((__cdecl__)) int _vscanf_r(struct _reent *, const char *, __gnuc_va_list) __attribute((__format__(__scanf__, 2, 0))); 

__attribute((__cdecl__)) int _vsiprintf_r(struct _reent *, char *, const char *, __gnuc_va_list) __attribute((__format__(__printf__, 3, 0))); 

__attribute((__cdecl__)) int _vsiscanf_r(struct _reent *, const char *, const char *, __gnuc_va_list) __attribute((__format__(__scanf__, 3, 0))); 

__attribute((__cdecl__)) int _vsniprintf_r(struct _reent *, char *, size_t, const char *, __gnuc_va_list) __attribute((__format__(__printf__, 4, 0))); 

__attribute((__cdecl__)) int _vsnprintf_r(struct _reent *, char *, size_t, const char *, __gnuc_va_list) __attribute((__format__(__printf__, 4, 0))); 

__attribute((__cdecl__)) int _vsprintf_r(struct _reent *, char *, const char *, __gnuc_va_list) __attribute((__format__(__printf__, 3, 0))); 

__attribute((__cdecl__)) int _vsscanf_r(struct _reent *, const char *, const char *, __gnuc_va_list) __attribute((__format__(__scanf__, 3, 0))); 




__attribute((__cdecl__)) int fpurge(FILE *); 
__attribute((__cdecl__)) ssize_t __getdelim(char **, size_t *, int, FILE *); 
__attribute((__cdecl__)) ssize_t __getline(char **, size_t *, FILE *); 


__attribute((__cdecl__)) void clearerr_unlocked(FILE *); 
__attribute((__cdecl__)) int feof_unlocked(FILE *); 
__attribute((__cdecl__)) int ferror_unlocked(FILE *); 
__attribute((__cdecl__)) int fileno_unlocked(FILE *); 
__attribute((__cdecl__)) int fflush_unlocked(FILE *); 
__attribute((__cdecl__)) int fgetc_unlocked(FILE *); 
__attribute((__cdecl__)) int fputc_unlocked(int, FILE *); 
__attribute((__cdecl__)) size_t fread_unlocked(void *, size_t _size, size_t _n, FILE *); 
__attribute((__cdecl__)) size_t fwrite_unlocked(const void *, size_t _size, size_t _n, FILE *); 
# 541 "/usr/include/stdio.h" 3
__attribute((__cdecl__)) int __srget_r(struct _reent *, FILE *); 
__attribute((__cdecl__)) int __swbuf_r(struct _reent *, int, FILE *); 
# 550
FILE *funopen(const void * __cookie, int (* __readfn)(void * __c, char * __buf, size_t __n), int (* __writefn)(void * __c, const char * __buf, size_t __n), _fpos64_t (* __seekfn)(void * __c, _fpos64_t __off, int __whence), int (* __closefn)(void * __c)) __attribute((__cdecl__)); 
# 557
FILE *_funopen_r(struct _reent *, const void * __cookie, int (* __readfn)(void * __c, char * __buf, size_t __n), int (* __writefn)(void * __c, const char * __buf, size_t __n), _fpos64_t (* __seekfn)(void * __c, _fpos64_t __off, int __whence), int (* __closefn)(void * __c)) __attribute((__cdecl__)); 
# 586 "/usr/include/stdio.h" 3
typedef ssize_t cookie_read_function_t(void * __cookie, char * __buf, size_t __n); 
typedef ssize_t cookie_write_function_t(void * __cookie, const char * __buf, size_t __n); 


typedef int cookie_seek_function_t(void * __cookie, _off64_t * __off, int __whence); 




typedef int cookie_close_function_t(void * __cookie); 
# 604
typedef 
# 597
struct { 


cookie_read_function_t *read; 
cookie_write_function_t *write; 
cookie_seek_function_t *seek; 
cookie_close_function_t *close; 
} cookie_io_functions_t; 
FILE *fopencookie(void * __cookie, const char * __mode, cookie_io_functions_t __functions) __attribute((__cdecl__)); 

FILE *_fopencookie_r(struct _reent *, void * __cookie, const char * __mode, cookie_io_functions_t __functions) __attribute((__cdecl__)); 
# 629 "/usr/include/stdio.h" 3
__attribute((__always_inline__)) extern __inline__ int __sgetc_r(struct _reent * __ptr, FILE * __p); 

__attribute((__always_inline__)) extern __inline__ int __sgetc_r(struct _reent *__ptr, FILE *__p) 
{ 
int __c = ((--(__p)->_r < 0) ? __srget_r(__ptr, __p) : ((int)(*(((__p)->_p)++)))); 
if ((__p->_flags & 0x4000) && (__c == 13)) 
{ 
int __c2 = ((--(__p)->_r < 0) ? __srget_r(__ptr, __p) : ((int)(*(((__p)->_p)++)))); 
if (__c2 == 10) 
__c = __c2;  else 

ungetc(__c2, __p);   
}  
return __c; 
} 
# 17 "/usr/include/machine/stdlib.h" 3
char *mkdtemp(char *); 
# 22 "/usr/include/cygwin/stdlib.h" 3
__uint32_t arc4random(void); 
void arc4random_addrandom(unsigned char *, int); 
void arc4random_buf(void *, size_t); 
void arc4random_stir(void); 
__uint32_t arc4random_uniform(__uint32_t); 

const char *getprogname(void); 
void setprogname(const char *); 


char *canonicalize_file_name(const char *); 
int unsetenv(const char *); 


char *initstate(unsigned seed, char * state, size_t size); 
long random(void); 
char *setstate(const char * state); 
void srandom(unsigned); 


char *ptsname(int); 
int ptsname_r(int, char *, size_t); 
int getpt(void); 
int grantpt(int); 
int unlockpt(int); 


int posix_openpt(int); 
int posix_memalign(void **, size_t, size_t); 
# 57
extern void *memalign(size_t, size_t); 
extern void *valloc(size_t); 
# 35 "/usr/include/stdlib.h" 3
typedef 
# 32
struct { 
int quot; 
int rem; 
} div_t; 
# 41
typedef 
# 38
struct { 
long quot; 
long rem; 
} ldiv_t; 
# 50
typedef 
# 47
struct { 
long long quot; 
long long rem; 
} lldiv_t; 




typedef int (*__compar_fn_t)(const void *, const void *); 
# 63
__attribute((__cdecl__)) int __locale_mb_cur_max(void); 



__attribute((__cdecl__)) void abort(void) __attribute((__noreturn__)); 
__attribute((__cdecl__)) int abs(int); 
__attribute((__cdecl__)) int atexit(void (* __func)(void)); 
__attribute((__cdecl__)) double atof(const char * __nptr); 

__attribute((__cdecl__)) float atoff(const char * __nptr); 

__attribute((__cdecl__)) int atoi(const char * __nptr); 
__attribute((__cdecl__)) int _atoi_r(struct _reent *, const char * __nptr); 
__attribute((__cdecl__)) long atol(const char * __nptr); 
__attribute((__cdecl__)) long _atol_r(struct _reent *, const char * __nptr); 
void *bsearch(const void * __key, const void * __base, size_t __nmemb, size_t __size, __compar_fn_t _compar) __attribute((__cdecl__)); 




void *calloc(size_t __nmemb, size_t __size) __attribute((__cdecl__)); 
__attribute((__cdecl__)) div_t div(int __numer, int __denom); 
__attribute((__cdecl__)) void exit(int __status) __attribute((__noreturn__)); 
#if !defined(CppTest_Stub_free_free) && defined(CPPTEST_USER_STUB_free)
void CppTest_Stub_free_free(void *); 
#endif

#if !defined(CppTest_Safe_Stub_free_free) && defined(CPPTEST_SAFE_STUB_free)
void CppTest_Safe_Stub_free_free(void *); 
#endif

#if !defined(CppTest_Auto_Stub_free_free) && defined(CPPTEST_AUTO_STUB_free)
void CppTest_Auto_Stub_free_free(void *); 
#endif
# 86
__attribute((__cdecl__)) void free(void *); 
char *getenv(const char * __string) __attribute((__cdecl__)); 
char *_getenv_r(struct _reent *, const char * __string) __attribute((__cdecl__)); 
char *_findenv(const char *, int *) __attribute((__cdecl__)); 
char *_findenv_r(struct _reent *, const char *, int *) __attribute((__cdecl__)); 

extern char *suboptarg; 
__attribute((__cdecl__)) int getsubopt(char **, char *const *, char **); 

__attribute((__cdecl__)) long labs(long); 
__attribute((__cdecl__)) ldiv_t ldiv(long __numer, long __denom); 
#if !defined(CppTest_Stub_malloc_malloc) && defined(CPPTEST_USER_STUB_malloc)
void *CppTest_Stub_malloc_malloc(size_t __size); 
#endif

#if !defined(CppTest_Safe_Stub_malloc_malloc) && defined(CPPTEST_SAFE_STUB_malloc)
void *CppTest_Safe_Stub_malloc_malloc(size_t __size); 
#endif

#if !defined(CppTest_Auto_Stub_malloc_malloc) && defined(CPPTEST_AUTO_STUB_malloc)
void *CppTest_Auto_Stub_malloc_malloc(size_t __size); 
#endif
# 97
void *malloc(size_t __size) __attribute((__cdecl__)); 
__attribute((__cdecl__)) int mblen(const char *, size_t); 
__attribute((__cdecl__)) int _mblen_r(struct _reent *, const char *, size_t, _mbstate_t *); 
__attribute((__cdecl__)) int mbtowc(wchar_t *, const char *, size_t); 
__attribute((__cdecl__)) int _mbtowc_r(struct _reent *, wchar_t *, const char *, size_t, _mbstate_t *); 
__attribute((__cdecl__)) int wctomb(char *, wchar_t); 
__attribute((__cdecl__)) int _wctomb_r(struct _reent *, char *, wchar_t, _mbstate_t *); 
__attribute((__cdecl__)) size_t mbstowcs(wchar_t *, const char *, size_t); 
__attribute((__cdecl__)) size_t _mbstowcs_r(struct _reent *, wchar_t *, const char *, size_t, _mbstate_t *); 
__attribute((__cdecl__)) size_t wcstombs(char *, const wchar_t *, size_t); 
__attribute((__cdecl__)) size_t _wcstombs_r(struct _reent *, char *, const wchar_t *, size_t, _mbstate_t *); 


char *mkdtemp(char *) __attribute((__cdecl__)); 
__attribute((__cdecl__)) int mkostemp(char *, int); 
__attribute((__cdecl__)) int mkostemps(char *, int, int); 
__attribute((__cdecl__)) int mkstemp(char *); 
__attribute((__cdecl__)) int mkstemps(char *, int); 
char *mktemp(char *) __attribute((__warning__("the use of `mktemp\' is dangerous; use `mkstemp\' instead"))) __attribute((__cdecl__)); 

char *_mkdtemp_r(struct _reent *, char *) __attribute((__cdecl__)); 
__attribute((__cdecl__)) int _mkostemp_r(struct _reent *, char *, int); 
__attribute((__cdecl__)) int _mkostemps_r(struct _reent *, char *, int, int); 
__attribute((__cdecl__)) int _mkstemp_r(struct _reent *, char *); 
__attribute((__cdecl__)) int _mkstemps_r(struct _reent *, char *, int); 
char *_mktemp_r(struct _reent *, char *) __attribute((__warning__("the use of `mktemp\' is dangerous; use `mkstemp\' instead"))) __attribute((__cdecl__)); 

__attribute((__cdecl__)) void qsort(void * __base, size_t __nmemb, size_t __size, __compar_fn_t _compar); 
__attribute((__cdecl__)) int rand(void); 
void *realloc(void * __r, size_t __size) __attribute((__cdecl__)); 

void *reallocf(void * __r, size_t __size) __attribute((__cdecl__)); 
char *realpath(const char * path, char * resolved_path) __attribute((__cdecl__)); 

__attribute((__cdecl__)) void srand(unsigned __seed); 
__attribute((__cdecl__)) double strtod(const char * __n, char ** __end_PTR); 
__attribute((__cdecl__)) double _strtod_r(struct _reent *, const char * __n, char ** __end_PTR); 



__attribute((__cdecl__)) float strtof(const char * __n, char ** __end_PTR); 
# 145
__attribute((__cdecl__)) long strtol(const char * __n, char ** __end_PTR, int __base); 
__attribute((__cdecl__)) long _strtol_r(struct _reent *, const char * __n, char ** __end_PTR, int __base); 
__attribute((__cdecl__)) unsigned long strtoul(const char * __n, char ** __end_PTR, int __base); 
__attribute((__cdecl__)) unsigned long _strtoul_r(struct _reent *, const char * __n, char ** __end_PTR, int __base); 

__attribute((__cdecl__)) int system(const char * __string); 


__attribute((__cdecl__)) long a64l(const char * __input); 
char *l64a(long __input) __attribute((__cdecl__)); 
char *_l64a_r(struct _reent *, long __input) __attribute((__cdecl__)); 
__attribute((__cdecl__)) int on_exit(void (* __func)(int, void *), void * __arg); 




__attribute((__cdecl__)) void _Exit(int __status) __attribute((__noreturn__)); 


__attribute((__cdecl__)) int putenv(char * __string); 
__attribute((__cdecl__)) int _putenv_r(struct _reent *, char * __string); 
void *_reallocf_r(struct _reent *, void *, size_t) __attribute((__cdecl__)); 
__attribute((__cdecl__)) int setenv(const char * __string, const char * __value, int __overwrite); 
__attribute((__cdecl__)) int _setenv_r(struct _reent *, const char * __string, const char * __value, int __overwrite); 

char *gcvt(double, int, char *) __attribute((__cdecl__)); 
char *gcvtf(float, int, char *) __attribute((__cdecl__)); 
char *fcvt(double, int, int *, int *) __attribute((__cdecl__)); 
char *fcvtf(float, int, int *, int *) __attribute((__cdecl__)); 
char *ecvt(double, int, int *, int *) __attribute((__cdecl__)); 
char *ecvtbuf(double, int, int *, int *, char *) __attribute((__cdecl__)); 
char *fcvtbuf(double, int, int *, int *, char *) __attribute((__cdecl__)); 
char *ecvtf(float, int, int *, int *) __attribute((__cdecl__)); 
char *dtoa(double, int, int, int *, int *, char **) __attribute((__cdecl__)); 

char *__itoa(int, char *, int) __attribute((__cdecl__)); 
char *__utoa(unsigned, char *, int) __attribute((__cdecl__)); 

char *itoa(int, char *, int) __attribute((__cdecl__)); 
char *utoa(unsigned, char *, int) __attribute((__cdecl__)); 
__attribute((__cdecl__)) int rand_r(unsigned * __seed); 

__attribute((__cdecl__)) double drand48(void); 
__attribute((__cdecl__)) double _drand48_r(struct _reent *); 
__attribute((__cdecl__)) double erand48(unsigned short [3]); 
__attribute((__cdecl__)) double _erand48_r(struct _reent *, unsigned short [3]); 
__attribute((__cdecl__)) long jrand48(unsigned short [3]); 
__attribute((__cdecl__)) long _jrand48_r(struct _reent *, unsigned short [3]); 
__attribute((__cdecl__)) void lcong48(unsigned short [7]); 
__attribute((__cdecl__)) void _lcong48_r(struct _reent *, unsigned short [7]); 
__attribute((__cdecl__)) long lrand48(void); 
__attribute((__cdecl__)) long _lrand48_r(struct _reent *); 
__attribute((__cdecl__)) long mrand48(void); 
__attribute((__cdecl__)) long _mrand48_r(struct _reent *); 
__attribute((__cdecl__)) long nrand48(unsigned short [3]); 
__attribute((__cdecl__)) long _nrand48_r(struct _reent *, unsigned short [3]); 

unsigned short *seed48(unsigned short [3]) __attribute((__cdecl__)); 

unsigned short *_seed48_r(struct _reent *, unsigned short [3]) __attribute((__cdecl__)); 
__attribute((__cdecl__)) void srand48(long); 
__attribute((__cdecl__)) void _srand48_r(struct _reent *, long); 




__attribute((__cdecl__)) long long atoll(const char * __nptr); 


__attribute((__cdecl__)) long long _atoll_r(struct _reent *, const char * __nptr); 




__attribute((__cdecl__)) long long llabs(long long); 
__attribute((__cdecl__)) lldiv_t lldiv(long long __numer, long long __denom); 
__attribute((__cdecl__)) long long strtoll(const char * __n, char ** __end_PTR, int __base); 


__attribute((__cdecl__)) long long _strtoll_r(struct _reent *, const char * __n, char ** __end_PTR, int __base); 




__attribute((__cdecl__)) unsigned long long strtoull(const char * __n, char ** __end_PTR, int __base); 


__attribute((__cdecl__)) unsigned long long _strtoull_r(struct _reent *, const char * __n, char ** __end_PTR, int __base); 
# 246 "/usr/include/stdlib.h" 3
char *_dtoa_r(struct _reent *, double, int, int, int *, int *, char **) __attribute((__cdecl__)); 
# 254
__attribute((__cdecl__)) int _system_r(struct _reent *, const char *); 

__attribute((__cdecl__)) void __eprintf(const char *, const char *, unsigned, const char *); 
# 279 "/usr/include/stdlib.h" 3
extern long double strtold(const char *, char **); 
# 21 "/usr/include/string.h" 3
void *memchr(const void *, int, size_t) __attribute((__cdecl__)); 
__attribute((__cdecl__)) int memcmp(const void *, const void *, size_t); 
void *memcpy(void *, const void *, size_t) __attribute((__cdecl__)); 
void *memmove(void *, const void *, size_t) __attribute((__cdecl__)); 
void *memset(void *, int, size_t) __attribute((__cdecl__)); 
char *strcat(char *, const char *) __attribute((__cdecl__)); 
char *strchr(const char *, int) __attribute((__cdecl__)); 
__attribute((__cdecl__)) int strcmp(const char *, const char *); 
__attribute((__cdecl__)) int strcoll(const char *, const char *); 
#if !defined(CppTest_Stub_strcpy_strcpy) && defined(CPPTEST_USER_STUB_strcpy)
char *CppTest_Stub_strcpy_strcpy(char *, const char *); 
#endif

#if !defined(CppTest_Safe_Stub_strcpy_strcpy) && defined(CPPTEST_SAFE_STUB_strcpy)
char *CppTest_Safe_Stub_strcpy_strcpy(char *, const char *); 
#endif

#if !defined(CppTest_Auto_Stub_strcpy_strcpy) && defined(CPPTEST_AUTO_STUB_strcpy)
char *CppTest_Auto_Stub_strcpy_strcpy(char *, const char *); 
#endif
# 30
char *strcpy(char *, const char *) __attribute((__cdecl__)); 
__attribute((__cdecl__)) size_t strcspn(const char *, const char *); 
char *strerror(int) __attribute((__cdecl__)); 
__attribute((__cdecl__)) size_t strlen(const char *); 
char *strncat(char *, const char *, size_t) __attribute((__cdecl__)); 
__attribute((__cdecl__)) int strncmp(const char *, const char *, size_t); 
char *strncpy(char *, const char *, size_t) __attribute((__cdecl__)); 
char *strpbrk(const char *, const char *) __attribute((__cdecl__)); 
char *strrchr(const char *, int) __attribute((__cdecl__)); 
__attribute((__cdecl__)) size_t strspn(const char *, const char *); 
char *strstr(const char *, const char *) __attribute((__cdecl__)); 

char *strtok(char *, const char *) __attribute((__cdecl__)); 

__attribute((__cdecl__)) size_t strxfrm(char *, const char *, size_t); 


char *strtok_r(char *, const char *, char **) __attribute((__cdecl__)); 


__attribute((__cdecl__)) int bcmp(const void *, const void *, size_t); 
__attribute((__cdecl__)) void bcopy(const void *, void *, size_t); 
__attribute((__cdecl__)) void bzero(void *, size_t); 
__attribute((__cdecl__)) int ffs(int); 
char *index(const char *, int) __attribute((__cdecl__)); 


void *memccpy(void *, const void *, int, size_t) __attribute((__cdecl__)); 
# 63
void *memrchr(const void *, int, size_t) __attribute((__cdecl__)); 




char *rindex(const char *, int) __attribute((__cdecl__)); 

char *stpcpy(char *, const char *) __attribute((__cdecl__)); 
char *stpncpy(char *, const char *, size_t) __attribute((__cdecl__)); 

__attribute((__cdecl__)) int strcasecmp(const char *, const char *); 
# 80
char *strdup(const char *) __attribute((__cdecl__)); 


char *_strdup_r(struct _reent *, const char *) __attribute((__cdecl__)); 


char *strndup(const char *, size_t) __attribute((__cdecl__)); 



char *_strndup_r(struct _reent *, const char *, size_t) __attribute((__cdecl__)); 
# 106 "/usr/include/string.h" 3
__attribute((__cdecl__)) int strerror_r(int, char *, size_t) __asm__("___xpg_strerror_r"); 
# 118
char *_strerror_r(struct _reent *, int, int, int *) __attribute((__cdecl__)); 


__attribute((__cdecl__)) size_t strlcat(char *, const char *, size_t); 
__attribute((__cdecl__)) size_t strlcpy(char *, const char *, size_t); 


__attribute((__cdecl__)) int strncasecmp(const char *, const char *, size_t); 



__attribute((__cdecl__)) size_t strnlen(const char *, size_t); 


char *strsep(char **, const char *) __attribute((__cdecl__)); 
# 140
char *strlwr(char *) __attribute((__cdecl__)); 
char *strupr(char *) __attribute((__cdecl__)); 



char *strsignal(int __signo) __attribute((__cdecl__)); 



__attribute((__cdecl__)) int strtosigno(const char * __name); 
# 5 "C:\\Parasoft_Tutorial\\workspace_tutorial_tantai\\Sensor\\sensor.c"
extern const int STATUS_OK = 0; 
extern const int STATUS_FAILED = 1; 
extern const int STATUS_STOPPED = 2; 

extern const int MAX_NUMBER_OF_SAMPLES = 30; 
#if !defined(CppTest_Stub_readSensor_readSensor) && defined(CPPTEST_USER_STUB_readSensor)
int CppTest_Stub_readSensor_readSensor(int * value); 
#endif

#if !defined(CppTest_Safe_Stub_readSensor_readSensor) && defined(CPPTEST_SAFE_STUB_readSensor)
int CppTest_Safe_Stub_readSensor_readSensor(int * value); 
#endif

#if !defined(CppTest_Auto_Stub_readSensor_readSensor) && defined(CPPTEST_AUTO_STUB_readSensor)
int CppTest_Auto_Stub_readSensor_readSensor(int * value); 
#endif
# 11
int readSensor(int *value) 
{ CPPTEST_STACK_TRACE_FUNC_START_INFO() const unsigned int _CppTest_funcId = cpptestCoverageFunction(__CPTR_cui, _cpptest_strdata[2], 1);int _coverage_decl_var_1 = cpptestCoverageStmt(1U, -1, __CPTR_cui, _CppTest_funcId, 1);
static int v = 0; cpptestCoverageStmt(2U, -1, __CPTR_cui, _CppTest_funcId, 1);CPPTEST_STACK_TRACE_STMT_INFO(1) 
*value = v; cpptestCoverageStmt(3U, -1, __CPTR_cui, _CppTest_funcId, 1);CPPTEST_STACK_TRACE_STMT_INFO(2) 
v++; cpptestCoverageStmt(4U, -1, __CPTR_cui, _CppTest_funcId, 1);CPPTEST_STACK_TRACE_STMT_INFO(3) 
{int __T48176800 =  (cpptestCoverageCond(((v > MAX_NUMBER_OF_SAMPLES)), 1, 1 + 0, 1 + 1, __CPTR_cui, _CppTest_funcId, 1) ? STATUS_STOPPED : STATUS_OK);CPPTEST_STACK_TRACE_EXIT_ROUTINE() return __T48176800;}
} 

char **messages = (0); 

static const int VALUE_LOW_MSG = 0; 
static const int VALUE_HIGH_MSG = 1; 
static const int ERROR_MSG = 2; 
#if !defined(CppTest_Stub_initialize_initialize) && defined(CPPTEST_USER_STUB_initialize)
void CppTest_Stub_initialize_initialize(); 
#endif

#if !defined(CppTest_Safe_Stub_initialize_initialize) && defined(CPPTEST_SAFE_STUB_initialize)
void CppTest_Safe_Stub_initialize_initialize(); 
#endif

#if !defined(CppTest_Auto_Stub_initialize_initialize) && defined(CPPTEST_AUTO_STUB_initialize)
void CppTest_Auto_Stub_initialize_initialize(); 
#endif
# 25
void initialize() 
{ CPPTEST_STACK_TRACE_FUNC_START_INFO() const unsigned int _CppTest_funcId = cpptestCoverageFunctionCall(__CPTR_cui, _cpptest_strdata[3], 2);
if (((void)CPPTEST_STACK_TRACE_IF_COND_INFO(4) , ((void)cpptestCoverageStmt(1U, -1, __CPTR_cui, _CppTest_funcId, 2), cpptestCoverageCond((messages == 0), 1, 3 + 0, 3 + 1, __CPTR_cui, _CppTest_funcId, 2)))) { cpptestCoverageBlock(2, -1, __CPTR_cui, _CppTest_funcId, 2);cpptestCoverageStmt(2U, -1, __CPTR_cui, _CppTest_funcId, 2);CPPTEST_STACK_TRACE_STMT_INFO(5) 
messages = (char **)((void)cpptestCoverageCall(1U, 3 + 4, __CPTR_cui, _CppTest_funcId, 2), CppTest_Stub__Call_malloc_malloc(sizeof(char *) * 3)); cpptestCoverageStmt(3U, -1, __CPTR_cui, _CppTest_funcId, 2);CPPTEST_STACK_TRACE_STMT_INFO(6) 
messages[0] = (char *)((void)cpptestCoverageCall(2U, 3 + 4, __CPTR_cui, _CppTest_funcId, 2), CppTest_Stub__Call_malloc_malloc(128)); cpptestCoverageStmt(4U, -1, __CPTR_cui, _CppTest_funcId, 2);CPPTEST_STACK_TRACE_STMT_INFO(7) 
messages[1] = (char *)((void)cpptestCoverageCall(3U, 3 + 4, __CPTR_cui, _CppTest_funcId, 2), CppTest_Stub__Call_malloc_malloc(128)); cpptestCoverageStmt(5U, -1, __CPTR_cui, _CppTest_funcId, 2);CPPTEST_STACK_TRACE_STMT_INFO(8) 
messages[2] = (char *)((void)cpptestCoverageCall(4U, 3 + 4, __CPTR_cui, _CppTest_funcId, 2), CppTest_Stub__Call_malloc_malloc(128)); cpptestCoverageStmt(6U, -1, __CPTR_cui, _CppTest_funcId, 2);CPPTEST_STACK_TRACE_STMT_INFO(9) 
((void)cpptestCoverageCall(5U, 3 + 4, __CPTR_cui, _CppTest_funcId, 2), CppTest_Stub__Call_strcpy_strcpy(messages[VALUE_LOW_MSG], "Low")); cpptestCoverageStmt(7U, -1, __CPTR_cui, _CppTest_funcId, 2);CPPTEST_STACK_TRACE_STMT_INFO(10) 
((void)cpptestCoverageCall(6U, 3 + 4, __CPTR_cui, _CppTest_funcId, 2), CppTest_Stub__Call_strcpy_strcpy(messages[VALUE_HIGH_MSG], "High")); cpptestCoverageStmt(8U, -1, __CPTR_cui, _CppTest_funcId, 2);CPPTEST_STACK_TRACE_STMT_INFO(11) 
((void)cpptestCoverageCall(7U, 3 + 4, __CPTR_cui, _CppTest_funcId, 2), CppTest_Stub__Call_strcpy_strcpy(messages[ERROR_MSG], "Error occurred")); CPPTEST_STACK_TRACE_BLOCK_END_INFO(12) 
}  CPPTEST_STACK_TRACE_EXIT_ROUTINE() cpptestCoverageBlock(3, -1, __CPTR_cui, _CppTest_funcId, 2);
} 
#if !defined(CppTest_Stub_finalize_finalize) && defined(CPPTEST_USER_STUB_finalize)
void CppTest_Stub_finalize_finalize(); 
#endif

#if !defined(CppTest_Safe_Stub_finalize_finalize) && defined(CPPTEST_SAFE_STUB_finalize)
void CppTest_Safe_Stub_finalize_finalize(); 
#endif

#if !defined(CppTest_Auto_Stub_finalize_finalize) && defined(CPPTEST_AUTO_STUB_finalize)
void CppTest_Auto_Stub_finalize_finalize(); 
#endif
# 38
void finalize() 
{ CPPTEST_STACK_TRACE_FUNC_START_INFO() const unsigned int _CppTest_funcId = cpptestCoverageFunctionCall(__CPTR_cui, _cpptest_strdata[4], 3);
if (((void)CPPTEST_STACK_TRACE_IF_COND_INFO(13) , ((void)cpptestCoverageStmt(1U, -1, __CPTR_cui, _CppTest_funcId, 3), cpptestCoverageCond((messages) != 0, 1, 14 + 0, 14 + 1, __CPTR_cui, _CppTest_funcId, 3)))) { cpptestCoverageBlock(2, -1, __CPTR_cui, _CppTest_funcId, 3);cpptestCoverageStmt(2U, -1, __CPTR_cui, _CppTest_funcId, 3);CPPTEST_STACK_TRACE_STMT_INFO(14) 
((void)cpptestCoverageCall(1U, 14 + 4, __CPTR_cui, _CppTest_funcId, 3), CppTest_Stub__Call_free_free(messages[0])); cpptestCoverageStmt(3U, -1, __CPTR_cui, _CppTest_funcId, 3);CPPTEST_STACK_TRACE_STMT_INFO(15) 
((void)cpptestCoverageCall(2U, 14 + 4, __CPTR_cui, _CppTest_funcId, 3), CppTest_Stub__Call_free_free(messages[1])); cpptestCoverageStmt(4U, -1, __CPTR_cui, _CppTest_funcId, 3);CPPTEST_STACK_TRACE_STMT_INFO(16) 
((void)cpptestCoverageCall(3U, 14 + 4, __CPTR_cui, _CppTest_funcId, 3), CppTest_Stub__Call_free_free(messages[2])); CPPTEST_STACK_TRACE_BLOCK_END_INFO(17) 
}  cpptestCoverageBlock(3, -1, __CPTR_cui, _CppTest_funcId, 3);cpptestCoverageStmt(5U, -1, __CPTR_cui, _CppTest_funcId, 3);CPPTEST_STACK_TRACE_STMT_INFO(18) 
((void)cpptestCoverageCall(4U, 14 + 4, __CPTR_cui, _CppTest_funcId, 3), CppTest_Stub__Call_free_free(messages)); CPPTEST_STACK_TRACE_EXIT_ROUTINE() 
} 
#if !defined(CppTest_Stub_printMessage_printMessage) && defined(CPPTEST_USER_STUB_printMessage)
void CppTest_Stub_printMessage_printMessage(int msgIndex, int value); 
#endif

#if !defined(CppTest_Safe_Stub_printMessage_printMessage) && defined(CPPTEST_SAFE_STUB_printMessage)
void CppTest_Safe_Stub_printMessage_printMessage(int msgIndex, int value); 
#endif

#if !defined(CppTest_Auto_Stub_printMessage_printMessage) && defined(CPPTEST_AUTO_STUB_printMessage)
void CppTest_Auto_Stub_printMessage_printMessage(int msgIndex, int value); 
#endif
# 48
void printMessage(int msgIndex, int value) 
{ CPPTEST_STACK_TRACE_FUNC_START_INFO() const unsigned int _CppTest_funcId = cpptestCoverageFunction(__CPTR_cui, _cpptest_strdata[5], 4);int _coverage_decl_var_1 = cpptestCoverageStmt(1U, -1, __CPTR_cui, _CppTest_funcId, 4);
CPPTEST_STACK_TRACE_VARIABLE_INFO(anonymous__CPTR_0, 19) const char *msg = messages[msgIndex]; cpptestCoverageStmt(2U, -1, __CPTR_cui, _CppTest_funcId, 4);CPPTEST_STACK_TRACE_STMT_INFO(20) 
((void)cpptestCoverageCall(1U, 22 + 0, __CPTR_cui, _CppTest_funcId, 4), CppTest_Stub__Call_printf_printf("Value: %d, State: %s\n", value, msg)); cpptestCoverageStmt(3U, -1, __CPTR_cui, _CppTest_funcId, 4);CPPTEST_STACK_TRACE_STMT_INFO(21) 
((void)cpptestCoverageCall(2U, 22 + 0, __CPTR_cui, _CppTest_funcId, 4), CppTest_Stub__Call_fflush_fflush(((((void)cpptestCoverageCall(3U, 22 + 0, __CPTR_cui, _CppTest_funcId, 4), CppTest_Stub__Call___getreent___getreent()))->_stdout))); CPPTEST_STACK_TRACE_EXIT_ROUTINE() 
} 
#if !defined(CppTest_Stub_reportSensorFailure_reportSensorFailure) && defined(CPPTEST_USER_STUB_reportSensorFailure)
void CppTest_Stub_reportSensorFailure_reportSensorFailure(); 
#endif

#if !defined(CppTest_Safe_Stub_reportSensorFailure_reportSensorFailure) && defined(CPPTEST_SAFE_STUB_reportSensorFailure)
void CppTest_Safe_Stub_reportSensorFailure_reportSensorFailure(); 
#endif

#if !defined(CppTest_Auto_Stub_reportSensorFailure_reportSensorFailure) && defined(CPPTEST_AUTO_STUB_reportSensorFailure)
void CppTest_Auto_Stub_reportSensorFailure_reportSensorFailure(); 
#endif
# 55
void reportSensorFailure() 
{ CPPTEST_STACK_TRACE_FUNC_START_INFO() const unsigned int _CppTest_funcId = cpptestCoverageFunction(__CPTR_cui, _cpptest_strdata[6], 5);cpptestCoverageStmt(1U, -1, __CPTR_cui, _CppTest_funcId, 5);CPPTEST_STACK_TRACE_STMT_INFO(22) 
((void)cpptestCoverageCall(1U, 25 + 0, __CPTR_cui, _CppTest_funcId, 5), CppTest_Stub__Call_finalize_finalize()); cpptestCoverageStmt(2U, -1, __CPTR_cui, _CppTest_funcId, 5);CPPTEST_STACK_TRACE_STMT_INFO(23) 
((void)cpptestCoverageCall(2U, 25 + 0, __CPTR_cui, _CppTest_funcId, 5), CppTest_Stub__Call_printMessage_printMessage(ERROR_MSG, 0)); CPPTEST_STACK_TRACE_EXIT_ROUTINE() 
} 
#if !defined(CppTest_Stub_handleSensorValue_handleSensorValue) && defined(CPPTEST_USER_STUB_handleSensorValue)
void CppTest_Stub_handleSensorValue_handleSensorValue(int value); 
#endif

#if !defined(CppTest_Safe_Stub_handleSensorValue_handleSensorValue) && defined(CPPTEST_SAFE_STUB_handleSensorValue)
void CppTest_Safe_Stub_handleSensorValue_handleSensorValue(int value); 
#endif

#if !defined(CppTest_Auto_Stub_handleSensorValue_handleSensorValue) && defined(CPPTEST_AUTO_STUB_handleSensorValue)
void CppTest_Auto_Stub_handleSensorValue_handleSensorValue(int value); 
#endif
# 61
void handleSensorValue(int value) 
{ CPPTEST_STACK_TRACE_FUNC_START_INFO() const unsigned int _CppTest_funcId = cpptestCoverageFunctionCall(__CPTR_cui, _cpptest_strdata[7], 6);int _coverage_decl_var_1 = cpptestCoverageStmt(1U, -1, __CPTR_cui, _CppTest_funcId, 6);
CPPTEST_STACK_TRACE_VARIABLE_INFO(anonymous__CPTR_1, 24) int index = (-1); cpptestCoverageStmt(2U, -1, __CPTR_cui, _CppTest_funcId, 6);CPPTEST_STACK_TRACE_STMT_INFO(25) 
((void)cpptestCoverageCall(1U, 27 + 12, __CPTR_cui, _CppTest_funcId, 6), CppTest_Stub__Call_initialize_initialize()); 
if (((void)CPPTEST_STACK_TRACE_IF_COND_INFO(26) , ((void)cpptestCoverageStmt(3U, -1, __CPTR_cui, _CppTest_funcId, 6), cpptestCoverageCond((value >= 0), 1, 27 + 0, 27 + 1, __CPTR_cui, _CppTest_funcId, 6) && cpptestCoverageCond((value <= 10), 2, 27 + 2, 27 + 3, __CPTR_cui, _CppTest_funcId, 6)))) { cpptestCoverageBlock(2, -1, __CPTR_cui, _CppTest_funcId, 6);cpptestCoverageStmt(4U, -1, __CPTR_cui, _CppTest_funcId, 6);CPPTEST_STACK_TRACE_STMT_INFO(27) 
index = VALUE_LOW_MSG; CPPTEST_STACK_TRACE_BLOCK_END_INFO(28) 
} else { if (((void)CPPTEST_STACK_TRACE_IF_COND_INFO(29) , ((void)cpptestCoverageBlock(3, -1, __CPTR_cui, _CppTest_funcId, 6), ((void)cpptestCoverageStmt(5U, -1, __CPTR_cui, _CppTest_funcId, 6), cpptestCoverageCond((value > 10), 3, 27 + 4, 27 + 5, __CPTR_cui, _CppTest_funcId, 6) && cpptestCoverageCond((value <= 20), 4, 27 + 6, 27 + 7, __CPTR_cui, _CppTest_funcId, 6))))) { cpptestCoverageBlock(4, -1, __CPTR_cui, _CppTest_funcId, 6);cpptestCoverageStmt(6U, -1, __CPTR_cui, _CppTest_funcId, 6);CPPTEST_STACK_TRACE_STMT_INFO(30) 
index = VALUE_HIGH_MSG; CPPTEST_STACK_TRACE_BLOCK_END_INFO(31) 
}  }  cpptestCoverageBlock(6, -1, __CPTR_cui, _CppTest_funcId, 6);cpptestCoverageStmt(7U, -1, __CPTR_cui, _CppTest_funcId, 6);CPPTEST_STACK_TRACE_STMT_INFO(32) 
((void)cpptestCoverageCall(2U, 27 + 12, __CPTR_cui, _CppTest_funcId, 6), CppTest_Stub__Call_printMessage_printMessage(index, value)); CPPTEST_STACK_TRACE_EXIT_ROUTINE() 
} 
#if !defined(CppTest_Stub_mainLoop_mainLoop) && defined(CPPTEST_USER_STUB_mainLoop)
void CppTest_Stub_mainLoop_mainLoop(); 
#endif

#if !defined(CppTest_Safe_Stub_mainLoop_mainLoop) && defined(CPPTEST_SAFE_STUB_mainLoop)
void CppTest_Safe_Stub_mainLoop_mainLoop(); 
#endif

#if !defined(CppTest_Auto_Stub_mainLoop_mainLoop) && defined(CPPTEST_AUTO_STUB_mainLoop)
void CppTest_Auto_Stub_mainLoop_mainLoop(); 
#endif
# 73
void mainLoop() 
{ CPPTEST_STACK_TRACE_FUNC_START_INFO() const unsigned int _CppTest_funcId = cpptestCoverageFunctionCall(__CPTR_cui, _cpptest_strdata[8], 7);int _coverage_decl_var_1 = cpptestCoverageStmt(1U, -1, __CPTR_cui, _CppTest_funcId, 7);
int sensorValue; int _coverage_decl_var_2 = cpptestCoverageStmt(2U, -1, __CPTR_cui, _CppTest_funcId, 7);
CPPTEST_STACK_TRACE_VARIABLE_INFO(anonymous__CPTR_2, 33) int status = 1; CPPTEST_STACK_TRACE_STMT_INFO(34) 
while (((void)cpptestCoverageBlock(2, -1, __CPTR_cui, _CppTest_funcId, 7), ((void)cpptestCoverageStmt(3U, -1, __CPTR_cui, _CppTest_funcId, 7), cpptestCoverageDec((1), 2, __CPTR_cui, _CppTest_funcId, 7)))) { cpptestCoverageBlock(3, -1, __CPTR_cui, _CppTest_funcId, 7);cpptestCoverageStmt(4U, -1, __CPTR_cui, _CppTest_funcId, 7);CPPTEST_STACK_TRACE_STMT_INFO(35) 
status = ((void)cpptestCoverageCall(1U, 41 + 10, __CPTR_cui, _CppTest_funcId, 7), CppTest_Stub__Call_readSensor_readSensor(&sensorValue)); 
if (((void)CPPTEST_STACK_TRACE_IF_COND_INFO(36) , ((void)cpptestCoverageStmt(5U, -1, __CPTR_cui, _CppTest_funcId, 7), cpptestCoverageCond((status = STATUS_STOPPED), 1, 41 + 0, 41 + 1, __CPTR_cui, _CppTest_funcId, 7)))) { cpptestCoverageBlock(4, -1, __CPTR_cui, _CppTest_funcId, 7);cpptestCoverageStmt(6U, -1, __CPTR_cui, _CppTest_funcId, 7);CPPTEST_STACK_TRACE_STMT_INFO(37) 
break; 
} else { if (((void)CPPTEST_STACK_TRACE_IF_COND_INFO(38) , ((void)cpptestCoverageBlock(6, -1, __CPTR_cui, _CppTest_funcId, 7), ((void)cpptestCoverageStmt(7U, -1, __CPTR_cui, _CppTest_funcId, 7), cpptestCoverageCond((status == STATUS_FAILED), 2, 41 + 2, 41 + 3, __CPTR_cui, _CppTest_funcId, 7))))) { cpptestCoverageBlock(7, -1, __CPTR_cui, _CppTest_funcId, 7);cpptestCoverageStmt(8U, -1, __CPTR_cui, _CppTest_funcId, 7);CPPTEST_STACK_TRACE_STMT_INFO(39) 
((void)cpptestCoverageCall(2U, 41 + 10, __CPTR_cui, _CppTest_funcId, 7), CppTest_Stub__Call_reportSensorFailure_reportSensorFailure()); cpptestCoverageStmt(9U, -1, __CPTR_cui, _CppTest_funcId, 7);CPPTEST_STACK_TRACE_STMT_INFO(40) 
break; 
}  }  cpptestCoverageBlock(10, -1, __CPTR_cui, _CppTest_funcId, 7);cpptestCoverageStmt(10U, -1, __CPTR_cui, _CppTest_funcId, 7);CPPTEST_STACK_TRACE_STMT_INFO(41) 
((void)cpptestCoverageCall(3U, 41 + 10, __CPTR_cui, _CppTest_funcId, 7), CppTest_Stub__Call_handleSensorValue_handleSensorValue(sensorValue)); CPPTEST_STACK_TRACE_BLOCK_END_INFO(42) 
}  cpptestCoverageBlock(12, -1, __CPTR_cui, _CppTest_funcId, 7);cpptestCoverageStmt(11U, -1, __CPTR_cui, _CppTest_funcId, 7);CPPTEST_STACK_TRACE_STMT_INFO(43) 
((void)cpptestCoverageCall(4U, 41 + 10, __CPTR_cui, _CppTest_funcId, 7), CppTest_Stub__Call_finalize_finalize()); CPPTEST_STACK_TRACE_EXIT_ROUTINE() 
} 

int newMain() 
{ CPPTEST_STACK_TRACE_FUNC_START_INFO() const unsigned int _CppTest_funcId = cpptestCoverageFunction(__CPTR_cui, _cpptest_strdata[9], 8);cpptestCoverageStmt(1U, -1, __CPTR_cui, _CppTest_funcId, 8);CPPTEST_STACK_TRACE_STMT_INFO(44) 
((void)cpptestCoverageCall(1U, 55 + 0, __CPTR_cui, _CppTest_funcId, 8), CppTest_Stub__Call_mainLoop_mainLoop()); cpptestCoverageStmt(2U, -1, __CPTR_cui, _CppTest_funcId, 8);CPPTEST_STACK_TRACE_EXIT_ROUTINE() 
return 0; return 0;
} 
#line 1 "__TEST_HARNESS__"
;


