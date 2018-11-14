# 1 "C:\\Users\\shito\\AppData\\Local\\Temp\\ParaSoft.18788.22570\\ParaSoft.18788.31642.cxx"

#define CPPTEST_INSTRUMENTATION


#include "cpptest_i.h"
#include "C:\Parasoft_Tutorial\workspace_tutorial_tantai\.cpptest\ATM\unit-data\current_tubf179707\cpptest_stubconfig.h"


struct __CPTR_Dummy_Type {
    char nonEmpty;
};




#include "cpptest_runtime_i.h"

#ifdef __cplusplus
extern "C" void __CPTR_Initialize(void);
extern "C" void __CPTR_Finalize(void);

struct __CPTR_Initializer_116576103_18788_4074263123 {
    __CPTR_Initializer_116576103_18788_4074263123()
    {
        CPPTEST_INITIALIZE_RUNTIME();
    }
    ~__CPTR_Initializer_116576103_18788_4074263123()
    {
        CPPTEST_FINALIZE_RUNTIME();
    }
};

#if CPPTEST_USE_GLOBAL_OBJECTS_TO_INIT_RUNTIME
static struct __CPTR_Initializer_116576103_18788_4074263123 __CPTR_initializer_116576103_18788_4074263123;
#endif

#define CPPTEST_ENTER_MAIN_ROUTINE() __CPTR_Initializer_116576103_18788_4074263123 __CPTR_main_initializer

#define CPPTEST_EXIT_MAIN_ROUTINE()

#else
extern void __CPTR_Initialize(void);
extern void __CPTR_Finalize(void);

#define CPPTEST_ENTER_MAIN_ROUTINE() CPPTEST_INITIALIZE_RUNTIME()

#define CPPTEST_EXIT_MAIN_ROUTINE() CPPTEST_FINALIZE_RUNTIME()

#endif


#define _cpptest_strdata_var(id, bogus) _cpptest_strdata[id]
static 
const char* _cpptest_strdata[] = {
    0,
    0
};
#undef unix
#undef __unix

#if defined(CPPTEST_STUB__ZN11BaseDisplay14showInfoToUserEPKc) || CPPTEST_ENABLE_ALL_STUBS
# if defined(CPPTEST_SAFE_STUB__ZN11BaseDisplay14showInfoToUserEPKc)
#  define CppTest_Stub__Call_showInfoToUser__ZN11BaseDisplay14showInfoToUserEPKc CppTest_Safe_Stub_showInfoToUser__ZN11BaseDisplay14showInfoToUserEPKc
#  if defined(CPPTEST_UNDEFINED__ZN11BaseDisplay14showInfoToUserEPKc) 
#   define CppTest_Safe_Stub_showInfoToUser__ZN11BaseDisplay14showInfoToUserEPKc showInfoToUser
#  endif
# elif defined(CPPTEST_AUTO_STUB__ZN11BaseDisplay14showInfoToUserEPKc)
#  define CppTest_Stub__Call_showInfoToUser__ZN11BaseDisplay14showInfoToUserEPKc CppTest_Auto_Stub_showInfoToUser__ZN11BaseDisplay14showInfoToUserEPKc
#  if defined(CPPTEST_UNDEFINED__ZN11BaseDisplay14showInfoToUserEPKc) 
#   define CppTest_Auto_Stub_showInfoToUser__ZN11BaseDisplay14showInfoToUserEPKc showInfoToUser
#  endif
# else
#  define CppTest_Stub__Call_showInfoToUser__ZN11BaseDisplay14showInfoToUserEPKc CppTest_Stub_showInfoToUser__ZN11BaseDisplay14showInfoToUserEPKc
#  if defined(CPPTEST_UNDEFINED__ZN11BaseDisplay14showInfoToUserEPKc) 
#   define CppTest_Stub_showInfoToUser__ZN11BaseDisplay14showInfoToUserEPKc showInfoToUser
#  endif
#  define CPPTEST_USER_STUB__ZN11BaseDisplay14showInfoToUserEPKc
# endif
#else
# define CppTest_Stub__Call_showInfoToUser__ZN11BaseDisplay14showInfoToUserEPKc showInfoToUser
#endif

#if defined(CPPTEST_STUB__ZN11BaseDisplay11showBalanceEd) || CPPTEST_ENABLE_ALL_STUBS
# if defined(CPPTEST_SAFE_STUB__ZN11BaseDisplay11showBalanceEd)
#  define CppTest_Stub__Call_showBalance__ZN11BaseDisplay11showBalanceEd CppTest_Safe_Stub_showBalance__ZN11BaseDisplay11showBalanceEd
#  if defined(CPPTEST_UNDEFINED__ZN11BaseDisplay11showBalanceEd) 
#   define CppTest_Safe_Stub_showBalance__ZN11BaseDisplay11showBalanceEd showBalance
#  endif
# elif defined(CPPTEST_AUTO_STUB__ZN11BaseDisplay11showBalanceEd)
#  define CppTest_Stub__Call_showBalance__ZN11BaseDisplay11showBalanceEd CppTest_Auto_Stub_showBalance__ZN11BaseDisplay11showBalanceEd
#  if defined(CPPTEST_UNDEFINED__ZN11BaseDisplay11showBalanceEd) 
#   define CppTest_Auto_Stub_showBalance__ZN11BaseDisplay11showBalanceEd showBalance
#  endif
# else
#  define CppTest_Stub__Call_showBalance__ZN11BaseDisplay11showBalanceEd CppTest_Stub_showBalance__ZN11BaseDisplay11showBalanceEd
#  if defined(CPPTEST_UNDEFINED__ZN11BaseDisplay11showBalanceEd) 
#   define CppTest_Stub_showBalance__ZN11BaseDisplay11showBalanceEd showBalance
#  endif
#  define CPPTEST_USER_STUB__ZN11BaseDisplay11showBalanceEd
# endif
#else
# define CppTest_Stub__Call_showBalance__ZN11BaseDisplay11showBalanceEd showBalance
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



typedef CppTest_Dummy_Type &CppTest_Dummy; 
static CppTest_Dummy_Type CppTest_Dummy_InstanceT; 
static CppTest_Dummy CppTest_Dummy_Instance = (CppTest_Dummy_InstanceT); 

typedef CppTest_Safe_Dummy_Type &CppTest_Safe_Dummy; 
static CppTest_Safe_Dummy_Type CppTest_Safe_Dummy_InstanceT; 
static CppTest_Safe_Dummy CppTest_Safe_Dummy_Instance = (CppTest_Safe_Dummy_InstanceT); 

typedef CppTest_Auto_Dummy_Type &CppTest_Auto_Dummy; 
static CppTest_Auto_Dummy_Type CppTest_Auto_Dummy_InstanceT; 
static CppTest_Auto_Dummy CppTest_Auto_Dummy_Instance = (CppTest_Auto_Dummy_InstanceT); 
# 25 "/usr/include/sys/features.h" 3
extern "C" {
# 233 "/usr/include/sys/features.h" 3
}
# 18 "/usr/include/cygwin/config.h" 3
extern "C" {
# 100 "/usr/include/cygwin/config.h" 3
}
# 212 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/stddef.h" 3
typedef unsigned size_t; 
# 9 "/usr/include/sys/reent.h" 3
extern "C" {
# 147 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/stddef.h" 3
typedef int ptrdiff_t; 
# 23 "/usr/include/machine/_default_types.h" 3
extern "C" {



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
# 217 "/usr/include/machine/_default_types.h" 3
}
# 14 "/usr/include/sys/lock.h" 3
typedef void *_LOCK_T; 
# 41 "/usr/include/sys/lock.h" 3
extern "C" {


void __cygwin_lock_init(_LOCK_T *); 
void __cygwin_lock_init_recursive(_LOCK_T *); 
void __cygwin_lock_fini(_LOCK_T *); 
void __cygwin_lock_lock(_LOCK_T *); 
int __cygwin_lock_trylock(_LOCK_T *); 
void __cygwin_lock_unlock(_LOCK_T *); 

}
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

_Bigint *_next; 
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
_atexit *_next; 
int _ind; 

void (*_fns[32])(void); 
::_on_exit_args _on_exit_args; 
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
__sbuf _bf; 
int _lbfsize; 
# 193
void *_cookie; 

_ssize_t ( __attribute((__cdecl__))*_read)(_reent *, void *, char *, size_t) ; 

_ssize_t ( __attribute((__cdecl__))*_write)(_reent *, void *, const char *, size_t) ; 


_fpos_t ( __attribute((__cdecl__))*_seek)(_reent *, void *, _fpos_t, int) ; 
int ( __attribute((__cdecl__))*_close)(_reent *, void *) ; 


__sbuf _ub; 
unsigned char *_up; 
int _ur; 


unsigned char _ubuf[3]; 
unsigned char _nbuf[1]; 


__sbuf _lb; 


int _blksize; 
_off_t _offset; 


_reent *_data; 



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
__sbuf _bf; 
int _lbfsize; 

_reent *_data; 


void *_cookie; 

_ssize_t ( __attribute((__cdecl__))*_read)(_reent *, void *, char *, size_t) ; 

_ssize_t ( __attribute((__cdecl__))*_write)(_reent *, void *, const char *, size_t) ; 


_fpos_t ( __attribute((__cdecl__))*_seek)(_reent *, void *, _fpos_t, int) ; 
int ( __attribute((__cdecl__))*_close)(_reent *, void *) ; 


__sbuf _ub; 
unsigned char *_up; 
int _ur; 


unsigned char _ubuf[3]; 
unsigned char _nbuf[1]; 


__sbuf _lb; 


int _blksize; 
int _flags2; 

_off64_t _offset; 
_fpos64_t ( __attribute((__cdecl__))*_seek64)(_reent *, void *, _fpos64_t, int) ; 


_flock_t _lock; 

_mbstate_t _mbstate; 
}; 
typedef __sFILE64 __FILE; 
# 289
struct _glue { 

_glue *_next; 
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

void ( __attribute((__cdecl__))*__cleanup)(_reent *) ; 


_Bigint *_result; 
int _result_k; 
_Bigint *_p5s; 
_Bigint **_freelist; 


int _cvtlen; 
char *_cvtbuf; 


union { 

struct { 
unsigned _unused_rand; 
char *_strtok_last; 
char _asctime_buf[26]; 
__tm _localtime_buf; 
int _gamma_signgam; 
__extension__ unsigned long long _rand_next; 
_rand48 _r48; 
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



::_atexit *_atexit; 
::_atexit _atexit0; 



void (**_sig_func)(int); 




_glue __sglue; 
__FILE __sf[3]; 
}; 
# 762 "/usr/include/sys/reent.h" 3
extern _reent *_impure_ptr; 
extern _reent *const _global_impure_ptr; 

void _reclaim_reent(_reent *); 
# 771
_reent *__getreent() __attribute((__cdecl__)); 
# 788 "/usr/include/sys/reent.h" 3
}
# 14 "/usr/include/machine/stdlib.h" 3
extern "C" {


char *mkdtemp(char *); 


}
# 18 "/usr/include/cygwin/stdlib.h" 3
extern "C" {



__uint32_t arc4random(); 
void arc4random_addrandom(unsigned char *, int); 
void arc4random_buf(void *, size_t); 
void arc4random_stir(); 
__uint32_t arc4random_uniform(__uint32_t); 

const char *getprogname(); 
void setprogname(const char *); 


char *canonicalize_file_name(const char *); 
int unsetenv(const char *); 


char *initstate(unsigned seed, char * state, size_t size); 
long random(); 
char *setstate(const char * state); 
void srandom(unsigned); 


char *ptsname(int); 
int ptsname_r(int, char *, size_t); 
int getpt(); 
int grantpt(int); 
int unlockpt(int); 


int posix_openpt(int); 
int posix_memalign(void **, size_t, size_t); 
# 57
extern void *memalign(size_t, size_t); 
extern void *valloc(size_t); 
# 88 "/usr/include/cygwin/stdlib.h" 3
}
# 29 "/usr/include/stdlib.h" 3
extern "C" {
# 35
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
__attribute((__cdecl__)) int __locale_mb_cur_max(); 



__attribute((__cdecl__)) void abort() __attribute((__noreturn__)); 
__attribute((__cdecl__)) int abs(int); 
__attribute((__cdecl__)) int atexit(void (* __func)(void)); 
__attribute((__cdecl__)) double atof(const char * __nptr); 

__attribute((__cdecl__)) float atoff(const char * __nptr); 

__attribute((__cdecl__)) int atoi(const char * __nptr); 
__attribute((__cdecl__)) int _atoi_r(_reent *, const char * __nptr); 
__attribute((__cdecl__)) long atol(const char * __nptr); 
__attribute((__cdecl__)) long _atol_r(_reent *, const char * __nptr); 
void *bsearch(const void * __key, const void * __base, size_t __nmemb, size_t __size, __compar_fn_t _compar) __attribute((__cdecl__)); 




void *calloc(size_t __nmemb, size_t __size) __attribute((__nothrow__)) __attribute((__cdecl__)); 
__attribute((__cdecl__)) div_t div(int __numer, int __denom); 
__attribute((__cdecl__)) void exit(int __status) __attribute((__noreturn__)); 
__attribute((__cdecl__)) void free(void *) __attribute((__nothrow__)); 
char *getenv(const char * __string) __attribute((__cdecl__)); 
char *_getenv_r(_reent *, const char * __string) __attribute((__cdecl__)); 
char *_findenv(const char *, int *) __attribute((__cdecl__)); 
char *_findenv_r(_reent *, const char *, int *) __attribute((__cdecl__)); 

extern char *suboptarg; 
__attribute((__cdecl__)) int getsubopt(char **, char *const *, char **); 

__attribute((__cdecl__)) long labs(long); 
__attribute((__cdecl__)) ldiv_t ldiv(long __numer, long __denom); 
void *malloc(size_t __size) __attribute((__nothrow__)) __attribute((__cdecl__)); 
__attribute((__cdecl__)) int mblen(const char *, size_t); 
__attribute((__cdecl__)) int _mblen_r(_reent *, const char *, size_t, _mbstate_t *); 
__attribute((__cdecl__)) int mbtowc(wchar_t *, const char *, size_t); 
__attribute((__cdecl__)) int _mbtowc_r(_reent *, wchar_t *, const char *, size_t, _mbstate_t *); 
__attribute((__cdecl__)) int wctomb(char *, wchar_t); 
__attribute((__cdecl__)) int _wctomb_r(_reent *, char *, wchar_t, _mbstate_t *); 
__attribute((__cdecl__)) size_t mbstowcs(wchar_t *, const char *, size_t); 
__attribute((__cdecl__)) size_t _mbstowcs_r(_reent *, wchar_t *, const char *, size_t, _mbstate_t *); 
__attribute((__cdecl__)) size_t wcstombs(char *, const wchar_t *, size_t); 
__attribute((__cdecl__)) size_t _wcstombs_r(_reent *, char *, const wchar_t *, size_t, _mbstate_t *); 


char *mkdtemp(char *) __attribute((__cdecl__)); 
__attribute((__cdecl__)) int mkostemp(char *, int); 
__attribute((__cdecl__)) int mkostemps(char *, int, int); 
__attribute((__cdecl__)) int mkstemp(char *); 
__attribute((__cdecl__)) int mkstemps(char *, int); 
char *mktemp(char *) __attribute((__warning__("the use of `mktemp\' is dangerous; use `mkstemp\' instead"))) __attribute((__cdecl__)); 

char *_mkdtemp_r(_reent *, char *) __attribute((__cdecl__)); 
__attribute((__cdecl__)) int _mkostemp_r(_reent *, char *, int); 
__attribute((__cdecl__)) int _mkostemps_r(_reent *, char *, int, int); 
__attribute((__cdecl__)) int _mkstemp_r(_reent *, char *); 
__attribute((__cdecl__)) int _mkstemps_r(_reent *, char *, int); 
char *_mktemp_r(_reent *, char *) __attribute((__warning__("the use of `mktemp\' is dangerous; use `mkstemp\' instead"))) __attribute((__cdecl__)); 

__attribute((__cdecl__)) void qsort(void * __base, size_t __nmemb, size_t __size, __compar_fn_t _compar); 
__attribute((__cdecl__)) int rand(); 
void *realloc(void * __r, size_t __size) __attribute((__nothrow__)) __attribute((__cdecl__)); 

void *reallocf(void * __r, size_t __size) __attribute((__cdecl__)); 
char *realpath(const char * path, char * resolved_path) __attribute((__cdecl__)); 

__attribute((__cdecl__)) void srand(unsigned __seed); 
__attribute((__cdecl__)) double strtod(const char * __n, char ** __end_PTR); 
__attribute((__cdecl__)) double _strtod_r(_reent *, const char * __n, char ** __end_PTR); 



__attribute((__cdecl__)) float strtof(const char * __n, char ** __end_PTR); 
# 145
__attribute((__cdecl__)) long strtol(const char * __n, char ** __end_PTR, int __base); 
__attribute((__cdecl__)) long _strtol_r(_reent *, const char * __n, char ** __end_PTR, int __base); 
__attribute((__cdecl__)) unsigned long strtoul(const char * __n, char ** __end_PTR, int __base); 
__attribute((__cdecl__)) unsigned long _strtoul_r(_reent *, const char * __n, char ** __end_PTR, int __base); 

__attribute((__cdecl__)) int system(const char * __string); 


__attribute((__cdecl__)) long a64l(const char * __input); 
char *l64a(long __input) __attribute((__cdecl__)); 
char *_l64a_r(_reent *, long __input) __attribute((__cdecl__)); 
__attribute((__cdecl__)) int on_exit(void (* __func)(int, void *), void * __arg); 




__attribute((__cdecl__)) void _Exit(int __status) __attribute((__noreturn__)); 


__attribute((__cdecl__)) int putenv(char * __string); 
__attribute((__cdecl__)) int _putenv_r(_reent *, char * __string); 
void *_reallocf_r(_reent *, void *, size_t) __attribute((__cdecl__)); 
__attribute((__cdecl__)) int setenv(const char * __string, const char * __value, int __overwrite); 
__attribute((__cdecl__)) int _setenv_r(_reent *, const char * __string, const char * __value, int __overwrite); 

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

__attribute((__cdecl__)) double drand48(); 
__attribute((__cdecl__)) double _drand48_r(_reent *); 
__attribute((__cdecl__)) double erand48(unsigned short [3]); 
__attribute((__cdecl__)) double _erand48_r(_reent *, unsigned short [3]); 
__attribute((__cdecl__)) long jrand48(unsigned short [3]); 
__attribute((__cdecl__)) long _jrand48_r(_reent *, unsigned short [3]); 
__attribute((__cdecl__)) void lcong48(unsigned short [7]); 
__attribute((__cdecl__)) void _lcong48_r(_reent *, unsigned short [7]); 
__attribute((__cdecl__)) long lrand48(); 
__attribute((__cdecl__)) long _lrand48_r(_reent *); 
__attribute((__cdecl__)) long mrand48(); 
__attribute((__cdecl__)) long _mrand48_r(_reent *); 
__attribute((__cdecl__)) long nrand48(unsigned short [3]); 
__attribute((__cdecl__)) long _nrand48_r(_reent *, unsigned short [3]); 

unsigned short *seed48(unsigned short [3]) __attribute((__cdecl__)); 

unsigned short *_seed48_r(_reent *, unsigned short [3]) __attribute((__cdecl__)); 
__attribute((__cdecl__)) void srand48(long); 
__attribute((__cdecl__)) void _srand48_r(_reent *, long); 




__attribute((__cdecl__)) long long atoll(const char * __nptr); 


__attribute((__cdecl__)) long long _atoll_r(_reent *, const char * __nptr); 




__attribute((__cdecl__)) long long llabs(long long); 
__attribute((__cdecl__)) lldiv_t lldiv(long long __numer, long long __denom); 
__attribute((__cdecl__)) long long strtoll(const char * __n, char ** __end_PTR, int __base); 


__attribute((__cdecl__)) long long _strtoll_r(_reent *, const char * __n, char ** __end_PTR, int __base); 




__attribute((__cdecl__)) unsigned long long strtoull(const char * __n, char ** __end_PTR, int __base); 


__attribute((__cdecl__)) unsigned long long _strtoull_r(_reent *, const char * __n, char ** __end_PTR, int __base); 
# 246 "/usr/include/stdlib.h" 3
char *_dtoa_r(_reent *, double, int, int, int *, int *, char **) __attribute((__cdecl__)); 
# 254
__attribute((__cdecl__)) int _system_r(_reent *, const char *); 

__attribute((__cdecl__)) void __eprintf(const char *, const char *, unsigned, const char *); 
# 279 "/usr/include/stdlib.h" 3
extern long double strtold(const char *, char **); 



}
# 40 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/stdarg.h" 3
typedef __builtin_va_list __gnuc_va_list; 
# 98 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/stdarg.h" 3
typedef __gnuc_va_list va_list; 
# 73 "C:\\Program Files\\Parasoft\\C++test\\10.3.2\\engine\\runtime\\include/cpptest_common.h"
typedef 
# 66
struct { 

char *ptr; 

size_t len; 

size_t size; 
} CppTestExpandableString; 
# 82
typedef 
# 75
struct CppTestListElement_s { 

char *data; 

CppTestListElement_s *next; 

CppTestListElement_s *prev; 
} CppTestListElement; 
# 89
typedef 
# 84
struct { 

CppTestListElement *head; 

CppTestListElement *tail; 
} CppTestList; 

typedef CppTestListElement *CppTestListIterator; 
typedef const CppTestListElement *CppTestListConstIterator; 

typedef unsigned long CppTest_ULong; 



typedef wchar_t CppTest_wchar_t; 



extern "C" __attribute((__cdecl__)) void cpptestExpandableStringInit(CppTestExpandableString * es, size_t initSize); 



extern "C" __attribute((__cdecl__)) void cpptestExpandableStringClear(CppTestExpandableString * es); 



extern "C" __attribute((__cdecl__)) void cpptestExpandableStringExpand(CppTestExpandableString * es); 



extern "C" __attribute((__cdecl__)) void cpptestExpandableStringAppend(CppTestExpandableString * es, const char * str, size_t len); 



extern "C" __attribute((__cdecl__)) void cpptestExpandableStringAppendChar(CppTestExpandableString * es, char c); 



extern "C" __attribute((__cdecl__)) void cpptestExpandableStringDispose(CppTestExpandableString * es); 



extern "C" __attribute((__cdecl__)) void cpptestListInit(CppTestList * l); 

extern "C" {
typedef void ( __attribute((__cdecl__))*ListElementDestructor)(char * data, void * additionalParameter) ; 
}


extern "C" __attribute((__cdecl__)) void cpptestListClear(CppTestList * l, ListElementDestructor destructor, void * additionalParameter); 


extern "C" __attribute((__cdecl__)) CppTestListIterator cpptestListRemove(CppTestList * l, CppTestListIterator it); 


extern "C" __attribute((__cdecl__)) void cpptestListPushFront(CppTestList * l, char * data); 


extern "C" char *cpptestListFrontElement(const CppTestList * l) __attribute((__cdecl__)); 


extern "C" __attribute((__cdecl__)) void cpptestListPushBack(CppTestList * l, char * data); 


extern "C" __attribute((__cdecl__)) CppTestListIterator cpptestListGetIterator(const CppTestList * l); 


extern "C" char *cpptestListIteratorElement(CppTestListConstIterator it) __attribute((__cdecl__)); 


extern "C" __attribute((__cdecl__)) CppTestListIterator cpptestListIteratorNext(CppTestListConstIterator it); 


extern "C" __attribute((__cdecl__)) int cpptestListIteratorEnd(CppTestListConstIterator it); 


extern "C" char *cpptestStrDup(const char * str) __attribute((__cdecl__)); 


extern "C" __attribute((__cdecl__)) unsigned cpptestStrLen(const char * str); 


extern "C" __attribute((__cdecl__)) int cpptestStrCmp(const char * str1, const char * str2); 


extern "C" __attribute((__cdecl__)) int cpptestStrNCmp(const char * str1, const char * str2, unsigned n); 


extern "C" __attribute((__cdecl__)) int cpptestStrCaseCmp(const char * str1, const char * str2); 


extern "C" __attribute((__cdecl__)) int cpptestStrNCaseCmp(const char * str1, const char * str2, unsigned n); 


extern "C" __attribute((__cdecl__)) unsigned cpptestCharToDigit(char c); 


extern "C" const char *cpptestStrToInteger(const char * str, long long * integer) __attribute((__cdecl__)); 


extern "C" const char *cpptestStrToUInteger(const char * str, unsigned long long * uinteger) __attribute((__cdecl__)); 


extern "C" const char *cpptestStrToBool(const char * str, int * result) __attribute((__cdecl__)); 


extern "C" char *cpptestAllocateString(size_t size, unsigned char content) __attribute((__cdecl__)); 


extern "C" __attribute((__cdecl__)) void cpptestIntToBitStrMask(char * bitString, unsigned value, unsigned mask); 



extern "C" CppTest_wchar_t *cpptestWStrDup(const CppTest_wchar_t * str) __attribute((__cdecl__)); 


extern "C" __attribute((__cdecl__)) unsigned cpptestWStrLen(const CppTest_wchar_t * str); 


extern "C" __attribute((__cdecl__)) int cpptestWStrCmp(const CppTest_wchar_t * str1, const CppTest_wchar_t * str2); 


extern "C" __attribute((__cdecl__)) int cpptestWStrNCmp(const CppTest_wchar_t * str1, const CppTest_wchar_t * str2, unsigned n); 


extern "C" __attribute((__cdecl__)) unsigned cpptestWCharToDigit(CppTest_wchar_t c); 


extern "C" const CppTest_wchar_t *cpptestWStrToInteger(const CppTest_wchar_t * str, long long * integer) __attribute((__cdecl__)); 


extern "C" const CppTest_wchar_t *cpptestWStrToUInteger(const CppTest_wchar_t * str, unsigned long long * uinteger) __attribute((__cdecl__)); 
# 221
extern "C" void *cpptestMalloc(size_t size) __attribute((__cdecl__)); 


extern "C" void *cpptestAlloc(size_t size) __attribute((__cdecl__)); 


extern "C" __attribute((__cdecl__)) void cpptestFree(void * str); 


extern "C" void *cpptestMemset(void * ptr, int c, size_t size) __attribute((__cdecl__)); 
# 248 "C:\\Program Files\\Parasoft\\C++test\\10.3.2\\engine\\runtime\\include/cpptest_common.h"
typedef struct CppTestTreeNode *CppTestTree; 
# 254
extern "C" __attribute((__cdecl__)) void cpptestTreeInit(CppTestTree * tree); 
# 260
extern "C" __attribute((__cdecl__)) void cpptestTreeClear(CppTestTree * tree); 
# 267
extern "C" __attribute((__cdecl__)) int cpptestTreeFind(CppTestTree * tree, const char * key, void ** ret); 
# 273
extern "C" __attribute((__cdecl__)) void cpptestTreeAdd(CppTestTree * tree, const char * key, void * value); 

__attribute((__cdecl__)) typedef void CppTestTreeCallBackRoutine(const char * key, void * value); 
typedef CppTestTreeCallBackRoutine *CppTestTreeCallBack; 
# 282
extern "C" __attribute((__cdecl__)) void cpptestTreeTraverseInorder(const CppTestTree * tree, const CppTestTreeCallBack callback); 
# 290
extern "C" __attribute((__cdecl__)) void cpptestAddProperty(const char * name, const char * value); 
# 298
extern "C" __attribute((__cdecl__)) void cpptestAddWeakProperty(const char * name, const char * value); 
# 311 "C:\\Program Files\\Parasoft\\C++test\\10.3.2\\engine\\runtime\\include/cpptest_common.h"
extern "C" __attribute((__cdecl__)) void cpptestParseAndAddProperties(char * properties); 
# 317
extern "C" __attribute((__cdecl__)) int cpptestHasProperty(const char * name); 
# 324
extern "C" const char *cpptestGetProperty(const char * name) __attribute((__cdecl__)); 
# 331
extern "C" const char *cpptestGetPropertyEx(const char * name, const char * defaultValue) __attribute((__cdecl__)); 
# 338
extern "C" __attribute((__cdecl__)) long long cpptestGetIntProperty(const char * name); 
# 345
extern "C" __attribute((__cdecl__)) long long cpptestGetIntPropertyEx(const char * name, long long defaultValue); 
# 352
extern "C" __attribute((__cdecl__)) unsigned long long cpptestGetUIntProperty(const char * name); 
# 359
extern "C" __attribute((__cdecl__)) unsigned long long cpptestGetUIntPropertyEx(const char * name, unsigned long long defaultValue); 
# 366
extern "C" __attribute((__cdecl__)) int cpptestGetBoolProperty(const char * name); 
# 373
extern "C" __attribute((__cdecl__)) int cpptestGetBoolPropertyEx(const char * name, int defaultValue); 
# 379
extern "C" const char *cpptestPathRelativeToAbsolute(const char * relPath, const char * relToFileName) __attribute((__cdecl__)); 
# 21 "C:\\Program Files\\Parasoft\\C++test\\10.3.2\\engine\\runtime\\include/cpptest_system.h"
typedef 
# 15
struct { 
void *(*mallocFunc)(size_t size); 
void *(*callocFunc)(size_t elements, size_t elem_size); 
void *(*reallocFunc)(void * ptr, size_t new_size); 
void (*freeFunc)(void * ptr); 
void *(*memsetFunc)(void * ptr, int value, size_t size); 
} CppTest_System; 
# 2 "/usr/include/machine/setjmp.h" 3
extern "C" {
# 350 "/usr/include/machine/setjmp.h" 3
typedef int jmp_buf[(13 * 4)]; 



}
# 6 "/usr/include/sys/signal.h" 3
extern "C" {
# 15 "/usr/include/sys/_stdint.h" 3
extern "C" {



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


}
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
# 16 "/usr/include/cygwin/types.h" 3
extern "C" {
# 15 "/usr/include/byteswap.h" 3
extern "C" {



static inline unsigned short bswap_16(unsigned short __x) 
{ 
return (__x >> 8) | (__x << 8); 
} 


static inline unsigned bswap_32(unsigned __x) 
{ 
return (bswap_16(__x & 0xffff) << 16) | (bswap_16(__x >> 16)); 
} 


static inline unsigned long long bswap_64(unsigned long long __x) 
{ 
return (((unsigned long long)bswap_32(__x & 0xffffffffULL)) << 32) | (bswap_32(__x >> 32)); 
} 


}
# 44 "/usr/include/sys/_timespec.h" 3
struct timespec { 
time_t tv_sec; 
long tv_nsec; 
}; 
# 27 "/usr/include/cygwin/types.h" 3
typedef timespec timespec_t; 




typedef timespec timestruc_t; 
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
__attribute((__always_inline__)) extern inline int gnu_dev_major(dev_t); 
__attribute((__always_inline__)) extern inline int gnu_dev_minor(dev_t); 
__attribute((__always_inline__)) extern inline dev_t gnu_dev_makedev(int, int); 


__attribute((__always_inline__)) extern inline int gnu_dev_major(dev_t dev) 
{ 
return (int)(((dev) >> 16) & 0xffff); 
} 


__attribute((__always_inline__)) extern inline int gnu_dev_minor(dev_t dev) 
{ 
return (int)((dev) & 0xffff); 
} 


__attribute((__always_inline__)) extern inline dev_t gnu_dev_makedev(int maj, int min) 
{ 
return (((maj) << 16) | ((min) & 0xffff)); 
} 
# 223 "/usr/include/cygwin/types.h" 3
}
# 18 "/usr/include/cygwin/signal.h" 3
extern "C" {
# 106 "/usr/include/cygwin/signal.h" 3
struct _uc_fpreg { 

__uint16_t significand[4]; 
__uint16_t exponent; 
}; 

struct _fpstate { 

__uint32_t cw; 
__uint32_t sw; 
__uint32_t tag; 
__uint32_t ipoff; 
__uint32_t cssel; 
__uint32_t dataoff; 
__uint32_t datasel; 
_uc_fpreg _st[8]; 
__uint32_t nxst; 
}; 

struct __mcontext { 

__uint32_t ctxflags; 
__uint32_t dr0; 
__uint32_t dr1; 
__uint32_t dr2; 
__uint32_t dr3; 
__uint32_t dr6; 
__uint32_t dr7; 
_fpstate fpstate; 
__uint32_t gs; 
__uint32_t fs; 
__uint32_t es; 
__uint32_t ds; 
__uint32_t edi; 
__uint32_t esi; 
__uint32_t ebx; 
__uint32_t edx; 
__uint32_t ecx; 
__uint32_t eax; 
__uint32_t ebp; 
__uint32_t eip; 
__uint32_t cs; 
__uint32_t eflags; 
__uint32_t esp; 
__uint32_t ss; 
__uint32_t reserved[128]; 
__uint32_t oldmask; 
__uint32_t cr2; 
}; 
# 170 "/usr/include/cygwin/signal.h" 3
typedef 
# 166
union sigval { 

int sival_int; 
void *sival_ptr; 
} sigval_t; 
# 179
typedef 
# 172
struct sigevent { 

sigval_t sigev_value; 
int sigev_signo; 
int sigev_notify; 
void (*sigev_notify_function)(sigval_t); 
pthread_attr_t *sigev_notify_attributes; 
} sigevent_t; 

#pragma pack ( push, 4 )
struct _sigcommune { 

__uint32_t _si_code; 
void *_si_read_handle; 
void *_si_write_handle; 
void *_si_process_handle; 

__extension__ union { 
int _si_fd; 
void *_si_pipe_fhandler; 
char *_si_str; 
}; 
}; 
# 254 "/usr/include/cygwin/signal.h" 3
typedef 
# 210 "/usr/include/cygwin/signal.h" 3
struct { 
int si_signo; 
int si_code; 
pid_t si_pid; 
uid_t si_uid; 
int si_errno; 


__extension__ union { 
__uint32_t __pad[32]; 
_sigcommune _si_commune; 

__extension__ struct { 

__extension__ union { 
sigval_t si_sigval; 
sigval_t si_value; 
}; 

__extension__ struct { 
timer_t si_tid; 
unsigned si_overrun; 
}; 
}; 


__extension__ struct { 
int si_status; 
clock_t si_utime; 
clock_t si_stime; 
}; 

void *si_addr; 
# 253 "/usr/include/cygwin/signal.h" 3
}; 
} siginfo_t; 
#pragma pack ( pop )


enum { 
SI_USER, 
SI_ASYNCIO = 2, 

SI_MESGQ, 

SI_TIMER, 
SI_QUEUE, 

SI_KERNEL, 

ILL_ILLOPC, 
ILL_ILLOPN, 
ILL_ILLADR, 
ILL_ILLTRP, 
ILL_PRVOPC, 
ILL_PRVREG, 
ILL_COPROC, 
ILL_BADSTK, 

FPE_INTDIV, 
FPE_INTOVF, 
FPE_FLTDIV, 
FPE_FLTOVF, 
FPE_FLTUND, 
FPE_FLTRES, 
FPE_FLTINV, 
FPE_FLTSUB, 

SEGV_MAPERR, 
SEGV_ACCERR, 

BUS_ADRALN, 
BUS_ADRERR, 
BUS_OBJERR, 

CLD_EXITED, 
CLD_KILLED, 
CLD_DUMPED, 
CLD_TRAPPED, 
CLD_STOPPED, 
CLD_CONTINUED
}; 


enum { 
SIGEV_SIGNAL, 


SIGEV_NONE, 


SIGEV_THREAD

}; 
# 319
typedef __uint32_t sigset_t; 


typedef void (*_sig_func_ptr)(int); 

struct sigaction { 


__extension__ union { 
_sig_func_ptr sa_handler; 
void (*sa_sigaction)(int, siginfo_t *, void *); 
}; 
sigset_t sa_mask; 
int sa_flags; 
}; 
# 398 "/usr/include/cygwin/signal.h" 3
void psiginfo(const siginfo_t *, const char *); 
int sigwait(const sigset_t *, int *); 
int sigwaitinfo(const sigset_t *, siginfo_t *); 
int sighold(int); 
int sigignore(int); 
int sigrelse(int); 
_sig_func_ptr sigset(int, _sig_func_ptr); 

int sigqueue(pid_t, int, const sigval); 
int siginterrupt(int, int); 




__attribute((dllimport)) extern const char *sys_sigabbrev[]; 
__attribute((dllimport)) extern const char *sys_siglist[]; 



}
# 152 "/usr/include/sys/signal.h" 3
typedef 
# 148
struct sigaltstack { 
void *ss_sp; 
int ss_flags; 
size_t ss_size; 
} stack_t; 
# 167 "/usr/include/sys/signal.h" 3
__attribute((__cdecl__)) int sigprocmask(int how, const sigset_t * set, sigset_t * oset); 


__attribute((__cdecl__)) int pthread_sigmask(int how, const sigset_t * set, sigset_t * oset); 
# 185 "/usr/include/sys/signal.h" 3
__attribute((__cdecl__)) int kill(pid_t, int); 


__attribute((__cdecl__)) int killpg(pid_t, int); 
__attribute((__cdecl__)) int sigaction(int, const struct sigaction *, struct sigaction *); 
__attribute((__cdecl__)) int sigaddset(sigset_t *, const int); 
__attribute((__cdecl__)) int sigdelset(sigset_t *, const int); 
__attribute((__cdecl__)) int sigismember(const sigset_t *, int); 
__attribute((__cdecl__)) int sigfillset(sigset_t *); 
__attribute((__cdecl__)) int sigemptyset(sigset_t *); 
__attribute((__cdecl__)) int sigpending(sigset_t *); 
__attribute((__cdecl__)) int sigsuspend(const sigset_t *); 
__attribute((__cdecl__)) int sigpause(int); 
# 211 "/usr/include/sys/signal.h" 3
__attribute((__cdecl__)) int pthread_kill(pthread_t thread, int sig); 
# 219
__attribute((__cdecl__)) int sigwaitinfo(const sigset_t * set, siginfo_t * info); 
__attribute((__cdecl__)) int sigtimedwait(const sigset_t * set, siginfo_t * info, const timespec * timeout); 


__attribute((__cdecl__)) int sigwait(const sigset_t * set, int * sig); 


__attribute((__cdecl__)) int sigqueue(pid_t pid, int signo, const sigval value); 
# 350 "/usr/include/sys/signal.h" 3
}
# 7 "/usr/include/signal.h" 3
extern "C" {

typedef int sig_atomic_t; 

typedef _sig_func_ptr sig_t; 
typedef _sig_func_ptr sighandler_t; 
# 19
struct _reent; 

__attribute((__cdecl__)) _sig_func_ptr _signal_r(_reent *, int, _sig_func_ptr); 
__attribute((__cdecl__)) int _raise_r(_reent *, int); 


__attribute((__cdecl__)) _sig_func_ptr signal(int, _sig_func_ptr); 
__attribute((__cdecl__)) int raise(int); 
__attribute((__cdecl__)) void psignal(int, const char *); 


}
# 360 "/usr/include/machine/setjmp.h" 3
extern "C" {
# 368
typedef int sigjmp_buf[((13 * 4) + 1) + (sizeof(sigset_t) / sizeof(int))]; 
# 421 "/usr/include/machine/setjmp.h" 3
extern void _longjmp(jmp_buf, int); 
extern int _setjmp(jmp_buf); 
# 429
}
# 12 "/usr/include/setjmp.h" 3
extern "C" {


__attribute((__cdecl__)) void longjmp(jmp_buf __jmpb, int __retval) __attribute((__noreturn__)); 




__attribute((__cdecl__)) int setjmp(jmp_buf __jmpb); 

}
# 193 "C:\\Program Files\\Parasoft\\C++test\\10.3.2\\engine\\runtime\\include/cpptest_runtime_u.h"
typedef unsigned CppTest_ErrorCode; 
# 207 "C:\\Program Files\\Parasoft\\C++test\\10.3.2\\engine\\runtime\\include/cpptest_runtime_u.h"
typedef void (*__CPTR_TestCasePtr)(void); 


typedef void (*__CPTR_TestCaseBreakFuncPtr)(void); 

struct _CONTEXT; 
struct _EXCEPTION_RECORD; 

struct CppTest_DataSource; 
struct CppTest_DsCsvData; 
# 232 "C:\\Program Files\\Parasoft\\C++test\\10.3.2\\engine\\runtime\\include/cpptest_runtime_u.h"
extern "C" const char *cpptestGetCurrentTestCaseName() __attribute((__cdecl__)); 
# 238
extern "C" const char *cpptestGetCurrentTestSuiteName() __attribute((__cdecl__)); 
# 244
extern "C" __attribute((__cdecl__)) unsigned cpptestGetCurrentTestCaseIteration(); 
# 258 "C:\\Program Files\\Parasoft\\C++test\\10.3.2\\engine\\runtime\\include/cpptest_runtime_u.h"
extern "C" const char *cpptestGetCurrentTestCaseFile() __attribute((__cdecl__)); 
# 264
extern "C" __attribute((__cdecl__)) unsigned cpptestGetCurrentTestCaseLine(); 
# 271
extern "C" __attribute((__cdecl__)) void cpptestCommunicationBegin(); 


extern "C" __attribute((__cdecl__)) void cpptestCommunicationEnd(); 


extern "C" __attribute((__cdecl__)) void cpptestTestRunnerBegin(); 


extern "C" __attribute((__cdecl__)) void cpptestTestRunnerEnd(); 


extern "C" __attribute((__cdecl__)) void cpptestTestSuiteBegin(const char * name, const char * file, unsigned line); 



extern "C" __attribute((__cdecl__)) void cpptestTestSuiteEnd(); 


extern "C" __attribute((__cdecl__)) void cpptestTestCaseBegin(const char * name, CppTest_ErrorCode expectedErrorCode, unsigned expectedErrorCodeMask, int isCpp, const char * file, unsigned line); 




extern "C" __attribute((__cdecl__)) void cpptestTestCaseEnd(); 


extern "C" __attribute((__cdecl__)) void cpptestDsForCurrentTestCaseInitialized(CppTest_DataSource * dataSource); 


extern "C" __attribute((__cdecl__)) void cpptestDsTestCaseBegin(const char * name, CppTest_ErrorCode expectedErrorCode, unsigned expectedErrorCodeMask, int isCpp, const char * file, unsigned line); 


extern "C" __attribute((__cdecl__)) void cpptestDsTestCaseEnd(); 


extern "C" __attribute((__cdecl__)) void cpptestDsTestCaseIterationBegin(unsigned iteration, const char * signature); 


extern "C" __attribute((__cdecl__)) void cpptestDsTestCaseIterationEnd(); 




extern "C" void CppTest_DsFinalize(CppTest_DataSource * ds); 


extern "C" void CppTest_DsDumpInt(CppTestExpandableString * es, int i); 


extern "C" const char *CppTest_DsGetMemBuffer(CppTest_DataSource * ds, const char * name, unsigned * size); 


extern "C" long long CppTest_DsGetInteger(CppTest_DataSource * ds, const char * name); 


extern "C" unsigned long long CppTest_DsGetUInteger(CppTest_DataSource * ds, const char * name); 


extern "C" double CppTest_DsGetFloat(CppTest_DataSource * ds, const char * name); 


extern "C" int CppTest_DsGetBool(CppTest_DataSource * ds, const char * name); 


extern "C" char CppTest_DsGetChar(CppTest_DataSource * ds, const char * name); 


extern "C" int CppTest_DsErrorHasMoreData(CppTest_DataSource * ds); 


extern "C" const char *CppTest_DsErrorGetDataSignature(CppTest_DataSource * ds); 


extern "C" unsigned CppTest_DsErrorGetIteration(CppTest_DataSource * ds); 


extern "C" int CppTest_DsRepeatLoadNextData(CppTest_DataSource * ds); 


extern "C" unsigned CppTest_DsRepeatGetIteration(CppTest_DataSource * ds); 


extern "C" int CppTest_DsRepeatHasMoreData(CppTest_DataSource * ds); 
# 364 "C:\\Program Files\\Parasoft\\C++test\\10.3.2\\engine\\runtime\\include/cpptest_runtime_u.h"
extern "C" void CppTest_DsRepeatFinalize(CppTest_DataSource * ds); 


extern "C" CppTest_DataSource *CppTest_DsRepeat(int count) __attribute((__cdecl__)); 


extern "C" int CppTest_DsArrayLoadNextData(CppTest_DataSource * ds); 


extern "C" unsigned CppTest_DsArrayGetIteration(CppTest_DataSource * ds); 


extern "C" int CppTest_DsArrayHasMoreData(CppTest_DataSource * ds); 


extern "C" int CppTest_DsArrayGetColumn(CppTest_DataSource * ds, const char * name); 


extern "C" int CppTest_DsArrayHasColumn(CppTest_DataSource * ds, const char * name); 


extern "C" const char *CppTest_DsArrayGetCStr(CppTest_DataSource * ds, const char * name); 



extern "C" const CppTest_wchar_t *CppTest_DsArrayGetWCStr(CppTest_DataSource * ds, const char * name); 
# 398
extern "C" void CppTest_DsArrayFinalize(CppTest_DataSource * ds); 


extern "C" CppTest_DataSource *CppTest_DsArray(const char ** data, int rows, int columns) __attribute((__cdecl__)); 




extern "C" int CppTest_DsCsvPeekChar(CppTest_DsCsvData * dsCsv); 


extern "C" int CppTest_DsCsvReadChar(CppTest_DsCsvData * dsCsv); 


extern "C" void CppTest_DsCsvGetSkipWS(CppTest_DsCsvData * dsCsv); 


extern "C" int CppTest_DsCsvIsEndOfField(CppTest_DsCsvData * dsCsv, int * pC); 


extern "C" int CppTest_DsCsvLoadQuotedField(CppTest_DsCsvData * dsCsv, CppTestExpandableString * pEs, int * pC); 


extern "C" int CppTest_DsCsvLoadField(CppTest_DsCsvData * dsCsv, CppTestExpandableString * pEs, int * pC); 
# 429
extern "C" int CppTest_DsCsvLoadNextData(CppTest_DataSource * ds); 


extern "C" unsigned CppTest_DsCsvGetIteration(CppTest_DataSource * ds); 


extern "C" int CppTest_DsCsvHasMoreData(CppTest_DataSource * ds); 


extern "C" CppTestListIterator CppTest_DsCsvGetColumn(CppTest_DataSource * ds, const char * name); 


extern "C" int CppTest_DsCsvHasColumn(CppTest_DataSource * ds, const char * name); 


extern "C" const char *CppTest_DsCsvGetCStr(CppTest_DataSource * ds, const char * name); 



extern "C" const CppTest_wchar_t *CppTest_DsCsvGetWCStr(CppTest_DataSource * ds, const char * name); 



extern "C" const char *CppTest_DsCsvGetMemBuffer(CppTest_DataSource * ds, const char * name, unsigned * size); 
# 460
extern "C" void CppTest_DsCsvFinalize(CppTest_DataSource * ds); 


extern "C" CppTest_DataSource *CppTest_DsCsv(const char * fileName, char separator, int useCollumns, int trimValues) __attribute((__cdecl__)); 
# 469
extern "C" CppTest_DataSource *CppTest_Ds(const char * dataSourceName) __attribute((__cdecl__)); 
# 486 "C:\\Program Files\\Parasoft\\C++test\\10.3.2\\engine\\runtime\\include/cpptest_runtime_u.h"
extern "C" const char *cpptestFormatBuffer(char * buffer, const char * format, ...) __attribute((__cdecl__)); 
# 495
extern "C" __attribute((__cdecl__)) int cpptestCharPtrsEqual(const char * expected, const char * actual); 
# 506 "C:\\Program Files\\Parasoft\\C++test\\10.3.2\\engine\\runtime\\include/cpptest_runtime_u.h"
extern "C" int cpptestWCharPtrsEqual(const void * expected, const void * actual); 



extern "C" int cpptestWCharPtrsNEqual(const void * expected, const void * actual, unsigned maxSize); 




extern "C" __attribute((__cdecl__)) void cpptestUnhandledStructuredExceptionInThread(unsigned code); 

extern "C" __attribute((__cdecl__)) int cpptestUnhandledStructuredExceptionInTestCase(unsigned code); 

extern "C" __attribute((__cdecl__)) void cpptestUnhandledCppExceptionInThread(); 

extern "C" __attribute((__cdecl__)) void cpptestNoExpectedCppExceptionInTestCase(const char * e); 

extern "C" __attribute((__cdecl__)) void cpptestUnhandledStdExceptionInTestCase(const char * what); 

extern "C" __attribute((__cdecl__)) void cpptestUnhandledCppExceptionInTestCase(); 
# 533
extern "C" __attribute((__cdecl__)) void cpptestSignalFound(int sigNo); 


extern "C" __attribute((__cdecl__)) __CPTR_TestCaseBreakFuncPtr cpptestGetTestCaseBreakFuncPtr(); 


extern "C" __attribute((__cdecl__)) __CPTR_TestCaseBreakFuncPtr cpptestSetTestCaseBreakFuncPtr(__CPTR_TestCaseBreakFuncPtr funcpPtr); 
# 556 "C:\\Program Files\\Parasoft\\C++test\\10.3.2\\engine\\runtime\\include/cpptest_runtime_u.h"
extern "C" __attribute((__cdecl__)) char cpptestLimitsGetMaxChar(); 
# 562
extern "C" __attribute((__cdecl__)) char cpptestLimitsGetMinChar(); 
# 568
extern "C" __attribute((__cdecl__)) signed char cpptestLimitsGetMaxSignedChar(); 
# 574
extern "C" __attribute((__cdecl__)) signed char cpptestLimitsGetMinSignedChar(); 
# 580
extern "C" __attribute((__cdecl__)) unsigned char cpptestLimitsGetMaxUnsignedChar(); 
# 587
extern "C" __attribute((__cdecl__)) short cpptestLimitsGetMaxShort(); 
# 593
extern "C" __attribute((__cdecl__)) short cpptestLimitsGetMinShort(); 
# 599
extern "C" __attribute((__cdecl__)) unsigned short cpptestLimitsGetMaxUnsignedShort(); 
# 606
extern "C" __attribute((__cdecl__)) int cpptestLimitsGetMaxInt(); 
# 612
extern "C" __attribute((__cdecl__)) int cpptestLimitsGetMinInt(); 
# 618
extern "C" __attribute((__cdecl__)) unsigned cpptestLimitsGetMaxUnsignedInt(); 
# 625
extern "C" __attribute((__cdecl__)) long cpptestLimitsGetMaxLong(); 
# 631
extern "C" __attribute((__cdecl__)) long cpptestLimitsGetMinLong(); 
# 637
extern "C" __attribute((__cdecl__)) unsigned long cpptestLimitsGetMaxUnsignedLong(); 
# 644
extern "C" __attribute((__cdecl__)) float cpptestLimitsGetMaxPosFloat(); 
# 650
extern "C" __attribute((__cdecl__)) float cpptestLimitsGetMinNegFloat(); 
# 656
extern "C" __attribute((__cdecl__)) float cpptestLimitsGetMaxNegFloat(); 
# 662
extern "C" __attribute((__cdecl__)) float cpptestLimitsGetMinPosFloat(); 
# 669
extern "C" __attribute((__cdecl__)) double cpptestLimitsGetMaxPosDouble(); 
# 675
extern "C" __attribute((__cdecl__)) double cpptestLimitsGetMinNegDouble(); 
# 681
extern "C" __attribute((__cdecl__)) double cpptestLimitsGetMaxNegDouble(); 
# 687
extern "C" __attribute((__cdecl__)) double cpptestLimitsGetMinPosDouble(); 
# 694
extern "C" __attribute((__cdecl__)) long double cpptestLimitsGetMaxPosLongDouble(); 
# 700
extern "C" __attribute((__cdecl__)) long double cpptestLimitsGetMinNegLongDouble(); 
# 706
extern "C" __attribute((__cdecl__)) long double cpptestLimitsGetMaxNegLongDouble(); 
# 712
extern "C" __attribute((__cdecl__)) long double cpptestLimitsGetMinPosLongDouble(); 
# 729 "C:\\Program Files\\Parasoft\\C++test\\10.3.2\\engine\\runtime\\include/cpptest_runtime_u.h"
extern "C" __attribute((__cdecl__)) int CppTest_IsCurrentTestCase(const char * id); 
# 735
extern "C" const char *CppTest_GetCurrentTestCaseName() __attribute((__cdecl__)); 
# 741
extern "C" const char *CppTest_GetCurrentTestSuiteName() __attribute((__cdecl__)); 
# 749
extern "C" const char *CppTest_Format(const char * format, ...) __attribute((__cdecl__)); 
# 755
typedef struct CppTest_StreamRedirectStruct CppTest_StreamRedirect; 
typedef void (*CppTest_ClearFlush)(void); 
typedef int (*CppTest_StreamDup)(long, int); 
# 764
void CppTest_flushStdOutput(); 
# 772
void CppTest_flushStdError(); 
# 779
void CppTest_clearStdInput(); 

int CppTest_streamDup(long, int); 
# 848 "C:\\Program Files\\Parasoft\\C++test\\10.3.2\\engine\\runtime\\include/cpptest_runtime_u.h"
extern "C" CppTest_StreamRedirect *CppTest_StreamRedirectInput(int fd, const char * value, CppTest_ClearFlush ptr, CppTest_StreamDup ptr1) __attribute((__cdecl__)); 
# 863 "C:\\Program Files\\Parasoft\\C++test\\10.3.2\\engine\\runtime\\include/cpptest_runtime_u.h"
extern "C" CppTest_StreamRedirect *CppTest_StreamRedirectNInput(int fd, const char * value, unsigned size, CppTest_ClearFlush ptr, CppTest_StreamDup ptr1) __attribute((__cdecl__)); 
# 875 "C:\\Program Files\\Parasoft\\C++test\\10.3.2\\engine\\runtime\\include/cpptest_runtime_u.h"
extern "C" CppTest_StreamRedirect *CppTest_StreamRedirectOutput(int fd, CppTest_ClearFlush ptr) __attribute((__cdecl__)); 
# 890 "C:\\Program Files\\Parasoft\\C++test\\10.3.2\\engine\\runtime\\include/cpptest_runtime_u.h"
extern "C" __attribute((__cdecl__)) int CppTest_StreamCompare(CppTest_StreamRedirect * redirect, const char * value); 
# 908 "C:\\Program Files\\Parasoft\\C++test\\10.3.2\\engine\\runtime\\include/cpptest_runtime_u.h"
extern "C" __attribute((__cdecl__)) int CppTest_StreamNCompare(CppTest_StreamRedirect * redirect, const char * value, unsigned size); 
# 921 "C:\\Program Files\\Parasoft\\C++test\\10.3.2\\engine\\runtime\\include/cpptest_runtime_u.h"
extern "C" __attribute((__cdecl__)) int CppTest_StreamSearch(CppTest_StreamRedirect * redirect, const char * pattern); 
# 934 "C:\\Program Files\\Parasoft\\C++test\\10.3.2\\engine\\runtime\\include/cpptest_runtime_u.h"
extern "C" __attribute((__cdecl__)) int CppTest_StreamNSearch(CppTest_StreamRedirect * redirect, const char * pattern, unsigned size); 
# 948 "C:\\Program Files\\Parasoft\\C++test\\10.3.2\\engine\\runtime\\include/cpptest_runtime_u.h"
extern "C" char *CppTest_StreamReadData(CppTest_StreamRedirect * redirect, unsigned * len) __attribute((__cdecl__)); 
# 958
extern "C" __attribute((__cdecl__)) void CppTest_StreamReset(CppTest_StreamRedirect * redirect); 
# 966
extern "C" __attribute((__cdecl__)) void CppTest_ClearRedirects(); 
# 975 "C:\\Program Files\\Parasoft\\C++test\\10.3.2\\engine\\runtime\\include/cpptest_runtime_u.h"
extern "C" CppTest_DataSource *cpptestGetCurrentDataSource() __attribute((__cdecl__)); 
# 981
extern "C" __attribute((__cdecl__)) void cpptestIgnoreCurrStackElement(); 


typedef void (*CppTestThreadInitCallback)(void); 




extern "C" __attribute((__cdecl__)) void cpptestSetThreadInitCallback(CppTestThreadInitCallback callback); 


typedef void (*CppTestPropertiesInitCallback)(void); 




extern "C" __attribute((__cdecl__)) void cpptestSetPropertiesInitCallback(CppTestPropertiesInitCallback callback); 
# 1003
extern "C" __attribute((__cdecl__)) void cpptestInitializeRuntime(CppTestPropertiesInitCallback propInitCallback, CppTestThreadInitCallback threadInitCallback, CppTest_System * system); 
# 1012
extern "C" __attribute((__cdecl__)) void cpptestFinalizeRuntime(); 
# 1018
extern "C" __attribute((__cdecl__)) void cpptestCheckMemoryLeaks(const char * file, unsigned line, int isAssert); 




typedef 
# 1020
struct { 
long long seconds; 
long long nanoseconds; 
} CppTest_Time; 
# 1030
extern "C" void cpptestCheckTimeout(); 
# 1036
extern "C" __attribute((__cdecl__)) CppTest_Time CppTest_TimeInit(long long seconds, long long nanoseconds); 
# 1043
extern "C" __attribute((__cdecl__)) CppTest_Time CppTest_TimeCurrent(); 




extern "C" __attribute((__cdecl__)) CppTest_Time CppTest_TimeDiff(CppTest_Time t1, CppTest_Time t2); 
# 1057 "C:\\Program Files\\Parasoft\\C++test\\10.3.2\\engine\\runtime\\include/cpptest_runtime_u.h"
extern "C" __attribute((__cdecl__)) int CppTest_TimeCompare(CppTest_Time t1, CppTest_Time t2); 
# 1063
extern "C" const char *CppTestCallProgramWrapper(const char * program, int * pResult, const char * param1, const char * param2, const char * param3) __attribute((__cdecl__)); 
# 1070
extern "C" __attribute((__cdecl__)) void cpptestUnhandledExceptionTerminate(); 
# 1077
extern "C" __attribute((__cdecl__)) void cpptestAssertException(const char * file, unsigned line, const char * message, const char * arg1, const char * arg2, const char * arg3, const char * arg4, int kind); 


extern "C" void CppTest_InitializeRuntime(); 

extern "C" void CppTest_FinalizeRuntime(); 

extern "C" char **CppTest_CmdLineToArgv(const char * cmdLine, int * argc) __attribute((__cdecl__)); 

extern "C" __attribute((__cdecl__)) void CppTest_FreeArgv(int argc, char * argv[]); 



extern "C" CppTest_wchar_t **CppTest_CmdLineToArgvW(const CppTest_wchar_t * cmdLine, int * argc) __attribute((__cdecl__)); 

extern "C" __attribute((__cdecl__)) void CppTest_FreeArgvW(int argc, CppTest_wchar_t * argv[]); 



extern "C" int CppTest_Main(int argc, char * argv[]); 



extern "C" int CppTest_MainW(int argc, CppTest_wchar_t * argv[]); 



extern "C" const char *cpptestStringPool(int id, const char * str) __attribute((__cdecl__)); 

__attribute((__cdecl__)) int CppTest_IsCurrentContext(const char * context); 




extern "C" __attribute((__cdecl__)) int cpptestUnhandledStructuredExceptionInTestCaseHandler(_EXCEPTION_RECORD * exception, void * b, _CONTEXT * c, void * d); 
# 1118
extern "C" void *cpptestDsMalloc(size_t size) __attribute((__cdecl__)); 


extern "C" __attribute((__cdecl__)) void cpptestDsFree(void * str); 


extern "C" __attribute((__cdecl__)) void cpptestDsCsvError(CppTest_ErrorCode errorCode, const char * err, const char * file, unsigned line, unsigned column); 



extern "C" __attribute((__cdecl__)) void cpptestDsCsvErrorOpeningFile(const char * err, const char * file); 


extern "C" __attribute((__cdecl__)) void cpptestNoDsError(const char * dataSourceName); 


extern "C" __attribute((__cdecl__)) void cpptestDsErrorInValue(const char * value); 


extern "C" __attribute((__cdecl__)) void cpptestDsUnknownValue(const char * name); 


extern "C" __attribute((__cdecl__)) int cpptestDsNotInitialized(); 


extern "C" __attribute((__cdecl__)) int cpptestDsMethodNotInitialized(const char * method); 


extern "C" __attribute((__cdecl__)) void cpptestAssertCall(const char * message, const char * file, unsigned line); 


extern "C" __attribute((__cdecl__)) void cpptestExitCall(int exitCode); 


extern "C" __attribute((__cdecl__)) void cpptestAbortCall(); 


extern "C" __attribute((__cdecl__)) void cpptestRiseCall(int exitCode); 
# 1164
extern "C" __attribute((__cdecl__)) void cpptestTooLargeStackTrace(unsigned maxAllowedStackTraceDepth); 



extern "C" __attribute((__cdecl__)) void cpptestTestCaseNotValidated(const char * file, unsigned line); 


extern "C" __attribute((__cdecl__)) void cpptestTriggerError(const char * triggerName, unsigned errorCode, const void * details, const char * file, unsigned line); 


extern "C" __attribute((__cdecl__)) void cpptestReport(const char * txt, const char * file, unsigned line, int reportStackTrace); 


extern "C" __attribute((__cdecl__)) void cpptestReportBool(const char * txt, int value, const char * file, unsigned line); 


extern "C" __attribute((__cdecl__)) void cpptestReportInteger(const char * txt, long long value, const char * file, unsigned line); 


extern "C" __attribute((__cdecl__)) void cpptestReportUInteger(const char * txt, unsigned long long value, const char * file, unsigned line); 


extern "C" __attribute((__cdecl__)) void cpptestReportFloat(const char * txt, double value, const char * file, unsigned line); 


extern "C" __attribute((__cdecl__)) void cpptestReportCStr(const char * txt, const char * value, const char * file, unsigned line); 


extern "C" __attribute((__cdecl__)) void cpptestReportCStrN(const char * txt, const char * value, unsigned maxSize, const char * file, unsigned line); 


extern "C" __attribute((__cdecl__)) void cpptestReportMemBuffer(const char * txt, const void * value, unsigned size, const char * file, unsigned line); 


extern "C" __attribute((__cdecl__)) void cpptestReportPtr(const char * txt, int isNull, const char * file, unsigned line); 


extern "C" __attribute((__cdecl__)) void cpptestTriggerReport(const char * triggerName, const char * txt, const char * file, unsigned line); 


extern "C" __attribute((__cdecl__)) void cpptestPostConditionBool(const char * valueString, int value, const char * file, unsigned line); 


extern "C" __attribute((__cdecl__)) void cpptestPostConditionInteger(const char * valueString, long long value, const char * file, unsigned line); 


extern "C" __attribute((__cdecl__)) void cpptestPostConditionUInteger(const char * valueString, unsigned long long value, const char * file, unsigned line); 


extern "C" __attribute((__cdecl__)) void cpptestPostConditionFloat(const char * valueString, double value, const char * file, unsigned line); 


extern "C" __attribute((__cdecl__)) void cpptestPostConditionCStr(const char * valueString, const char * value, const char * file, unsigned line); 


extern "C" __attribute((__cdecl__)) void cpptestPostConditionCStrN(const char * valueString, const char * value, unsigned maxSize, const char * file, unsigned line); 


extern "C" __attribute((__cdecl__)) void cpptestPostConditionMemBuffer(const char * valueString, const void * value, unsigned size, const char * file, unsigned line); 


extern "C" __attribute((__cdecl__)) void cpptestPostConditionPtr(const char * valueString, int isNull, const char * file, unsigned line); 


extern "C" __attribute((__cdecl__)) void cpptestPostConditionExternal(const char * userMessage, const char * ret, const char * file, unsigned line); 


extern "C" __attribute((__cdecl__)) void cpptestExternalProcessError(CppTest_ErrorCode errorCode, const char * err); 


extern "C" __attribute((__cdecl__)) void cpptestExternalProcessErrorFull(CppTest_ErrorCode errorCode, const char * err, const char * program, const char * param1, const char * param2, const char * param3); 
# 1240
extern "C" __attribute((__cdecl__)) int cpptestAssertion(int value, const char * userMessage, const char * conditionStr, const char * file, unsigned line); 


extern "C" __attribute((__cdecl__)) int cpptestBitAssertion(int value, unsigned mask, unsigned expected, unsigned actual, const char * userMessage, const char * actualStr, const char * file, unsigned line); 



extern "C" __attribute((__cdecl__)) int cpptestEqualAssertion(int value, const char * userMessage, const char * expectedStr, const char * actualStr, const char * file, unsigned line); 



extern "C" __attribute((__cdecl__)) int cpptestBoolEqualAssertion(int value, int expected, int actual, const char * userMessage, const char * expectedStr, const char * actualStr, const char * file, unsigned line); 



extern "C" __attribute((__cdecl__)) int cpptestIntegerEqualAssertion(int value, long long expected, long long actual, int hasDelta, long long delta, unsigned * arrayIndex, const char * userMessage, const char * expectedStr, const char * actualStr, const char * file, unsigned line); 




extern "C" __attribute((__cdecl__)) int cpptestUIntegerEqualAssertion(int value, unsigned long long expected, unsigned long long actual, int hasDelta, unsigned long long delta, unsigned * arrayIndex, const char * userMessage, const char * expectedStr, const char * actualStr, const char * file, unsigned line); 




extern "C" __attribute((__cdecl__)) int cpptestFloatEqualAssertion(int value, double expected, double actual, int hasDelta, double delta, unsigned * arrayIndex, const char * userMessage, const char * expectedStr, const char * actualStr, const char * file, unsigned line); 




extern "C" __attribute((__cdecl__)) int cpptestFloatFmtEqualAssertion(int value, double actual, const char * userMessage, const char * expectedStr, const char * actualStr, const char * file, unsigned line); 



extern "C" __attribute((__cdecl__)) int cpptestCstrEqualAssertion(int value, const char * expected, const char * actual, unsigned * arrayIndex, const char * userMessage, const char * expectedStr, const char * actualStr, const char * file, unsigned line); 



extern "C" __attribute((__cdecl__)) int cpptestCstrNEqualAssertion(int value, const char * expected, const char * actual, unsigned maxSize, const char * userMessage, const char * expectedStr, const char * actualStr, const char * file, unsigned line); 



extern "C" __attribute((__cdecl__)) int cpptestMemBufferEqualAssertion(int value, const void * expected, const void * actual, unsigned size, const char * userMessage, const char * expectedStr, const char * actualStr, const char * file, unsigned line); 




extern "C" __attribute((__cdecl__)) int cpptestPtrEqualAssertion(int value, const void * expected, const void * actual, unsigned * arrayIndex, const char * userMessage, const char * expectedStr, const char * actualStr, const char * file, unsigned line); 
# 1293
extern "C" __attribute((__cdecl__)) int cpptestWCstrEqualAssertion(int value, const CppTest_wchar_t * expected, const CppTest_wchar_t * actual, unsigned * arrayIndex, const char * userMessage, const char * expectedStr, const char * actualStr, const char * file, unsigned line); 
# 1299
extern "C" __attribute((__cdecl__)) void cpptestThrowAssertion(int value, const char * userMessage, const char * exceptionTypeStr, const char * file, unsigned line); 


extern "C" __attribute((__cdecl__)) void cpptestNoThrowAssertion(int value, const char * userMessage, const char * file, unsigned line); 


extern "C" __attribute((__cdecl__)) void cpptestTriggerAssertion(const char * triggerName, const char * userMessage, const char * file, unsigned line); 


extern "C" __attribute((__cdecl__)) void cpptestNoExpectedExceptionInTestCase(const char * e); 


extern "C" __attribute((__cdecl__)) void cpptestStdExceptionInTestCase(const char * what); 


extern "C" __attribute((__cdecl__)) void cpptestExceptionInTestCase(); 


extern "C" __attribute((__cdecl__)) void cpptestTestCaseDisabled(const char * name, const char * file, unsigned line); 



extern "C" __attribute((__cdecl__)) int cpptestCharPtrsNEqual(const char * expected, const char * actual, unsigned maxSize); 


extern "C" __attribute((__cdecl__)) int cpptestMemBuffersEqual(const void * expected, const void * actual, unsigned size); 


extern "C" __attribute((__cdecl__)) int cpptestFloatsFmtEqual(const char * expected, double actual); 


extern "C" __attribute((__cdecl__)) void cpptestTimeout(unsigned long long timeout); 


extern "C" __attribute((__cdecl__)) void cpptestUserBreak(const char * file, unsigned line); 




extern "C" sigjmp_buf *cpptestGetJmpBuf() __attribute((__cdecl__)); 


extern "C" __attribute((__cdecl__)) void cpptestSetJmpCalled(int jmpCalled); 


extern "C" __attribute((__cdecl__)) int cpptestGetJmpCalled(); 


extern "C" __attribute((__cdecl__)) int cpptestSetJmpReturn(int jmpReturn); 


extern "C" __attribute((__cdecl__)) int cpptestGetJmpReturn(); 



typedef struct CppTestRuntimeCommandHandlerNodeStruct CppTestRuntimeCommandHandlerNode; 

struct CppTestRuntimeCommandHandlerNodeStruct { 

CppTestRuntimeCommandHandlerNode *prev; 

void (*handler)(unsigned commandId); 
}; 


extern "C" __attribute((__cdecl__)) void cpptestAddRuntimeCommandHandler(CppTestRuntimeCommandHandlerNode * handler); 


extern "C" __attribute((__cdecl__)) void cpptestExecuteRuntimeCommand(unsigned commandId); 


extern "C" __attribute((__cdecl__)) void cpptestTestCaseSlave(__CPTR_TestCasePtr tc); 


typedef struct CppTestExpectationStruct CppTestExpectation; 
typedef struct CppTestCallSequenceNodeStruct CppTestCallSequenceNode; 

struct CppTestCallSequenceNodeStruct { 

const char *funcId; 
int times; 
unsigned calls; 
CppTestCallSequenceNode *prev; 
CppTestCallSequenceNode *next; 
CppTestExpectation *expectation; 
}; 


struct CppTestExpectationStruct { 

CppTestExpectation *next; 
const char *file; 
unsigned line; 
unsigned reported; 
unsigned passed; 

void (*endOfCheckExpectation)(CppTestExpectation * expectation); 

union { 
struct { 
int min; 
int max; 
const char *funcId; 
int calls; 
} expectedCalls; 

struct { 
CppTestCallSequenceNode *first; 
CppTestCallSequenceNode *last; 
CppTestCallSequenceNode *it; 
int isLoop; 
int repeat; 
int inside; 
} sequence; 

} variant; 
}; 


extern "C" void cpptestCreateCallExpectation(const char * funcId, int min, int max, const char * file, unsigned line); 


typedef struct CppTestCallSequenceExpectationStruct CppTestCallSequenceExpectation; 
struct CppTestCallSequenceExpectationStruct { 

CppTestCallSequenceExpectation *(*Add)(const char * funcId); 
CppTestCallSequenceExpectation *(*AddNTimes)(const char * funcId, int times); 
CppTestCallSequenceExpectation *(*AddAnyTimes)(const char * funcId); 
}; 

extern "C" CppTestCallSequenceExpectation *cpptestCreateCallSequenceExpectation(int isLoop, const char * file, unsigned line); 


extern "C" __attribute((__cdecl__)) void cpptestCallExpectationAssertion(CppTestExpectation * expectation); 


extern "C" __attribute((__cdecl__)) void cpptestNullCallSequenceExpectationAssertion(CppTestExpectation * expectation, const char * funcId); 


extern "C" __attribute((__cdecl__)) void cpptestWrongCallSequenceExpectationAssertion(CppTestExpectation * expectation, const char * funcId, const char * expectedFuncId); 


extern "C" __attribute((__cdecl__)) void cpptestIncompleteCallSequenceExpectationAssertion(CppTestExpectation * expectation); 


extern "C" __attribute((__cdecl__)) void cpptestCallSequenceExpectationPassed(CppTestExpectation * expectation); 
# 14 "C:\\Program Files\\Parasoft\\C++test\\10.3.2\\engine\\runtime\\include/cpptest_data_source.h"
extern "C" {
# 41
typedef 
# 16
struct CppTest_DataSource { 

const char *(*getMemBuffer)(CppTest_DataSource *, const char * name, unsigned * size); 
const char *(*getCStr)(CppTest_DataSource *, const char * name); 

const CppTest_wchar_t *(*getWCStr)(CppTest_DataSource *, const char * name); 

long long (*getInteger)(CppTest_DataSource *, const char * name); 
unsigned long long (*getUInteger)(CppTest_DataSource *, const char * name); 
double (*getFloat)(CppTest_DataSource *, const char * name); 
int (*getBool)(CppTest_DataSource *, const char * name); 
char (*getChar)(CppTest_DataSource *, const char * name); 

int (*hasColumn)(CppTest_DataSource *, const char * name); 

int (*loadNextData)(CppTest_DataSource *); 
int (*hasMoreData)(CppTest_DataSource *); 
unsigned (*getIteration)(CppTest_DataSource *); 




void (*finalize)(CppTest_DataSource *); 

void *data; 
} CppTest_DataSource; 

typedef CppTest_DataSource *(*CppTest_GetDataSourceFPtr)(const char * dataSource, const char * testSuite); 

}
# 52
extern "C" CppTest_DataSource *CppTest_DsArray(const char ** data, int rows, int columns) __attribute((__cdecl__)); 
extern "C" CppTest_DataSource *CppTest_DsRepeat(int count) __attribute((__cdecl__)); 
extern "C" CppTest_DataSource *CppTest_Ds(const char * dataSourceName) __attribute((__cdecl__)); 


extern "C" CppTest_DataSource *CppTest_DsCsv(const char * fileName, char separator, int useCollumns, int trimValues) __attribute((__cdecl__)); 
# 20 "C:\\Program Files\\Parasoft\\C++test\\10.3.2\\engine\\runtime\\include/trigger/c/common.h"
extern "C" {

typedef void (*tgr_func_ptr)(void); 

typedef struct tgr_value_s tgr_value; 

typedef struct tgr_type_vtbl *tgr_type_vtbl_ptr; 
typedef struct tgr_type *tgr_type_ptr; 
typedef tgr_value_s *tgr_value_ptr; 
typedef struct tgr_code *tgr_code_ptr; 
typedef struct tgr_code_helper *tgr_code_helper_ptr; 
typedef struct tgr_trigger_list *tgr_trigger_list_ptr; 
typedef struct tgr_arg *tgr_arg_ptr; 
typedef struct tgr_args *tgr_args_ptr; 
typedef struct tgr_runner *tgr_runner_ptr; 
typedef struct tgr_running_data *tgr_running_data_ptr; 
typedef struct tgr_runner_helper *tgr_runner_helper_ptr; 
typedef struct tgr_trigger *tgr_trigger_ptr; 
typedef struct tgr_class_definition *tgr_class_definition_ptr; 

typedef unsigned tgr_time; 


void *tgr_malloc(unsigned size); 


void tgr_free(void * ptr); 


unsigned tgr_strlen(const char * str); 


int tgr_strcmp(const char * str1, const char * str2); 


char *tgr_strdup(const char * str); 


tgr_time tgr_get_curr_time(); 
# 135 "C:\\Program Files\\Parasoft\\C++test\\10.3.2\\engine\\runtime\\include/trigger/c/common.h"
}
# 13 "C:\\Program Files\\Parasoft\\C++test\\10.3.2\\engine\\runtime\\include/trigger/c/type.h"
extern "C" {

struct tgr_type_vtbl { 

int (*is_integer)(tgr_value_ptr value); 

int (*is_floating)(tgr_value_ptr value); 

int (*is_pointer)(tgr_value_ptr value); 

int (*is_func_pointer)(tgr_value_ptr value); 

int (*is_object)(tgr_value_ptr value); 

int (*is_void)(tgr_value_ptr value); 

int (*is_error)(tgr_value_ptr value); 

long long (*get_integer)(tgr_value_ptr value); 

int (*get_bool)(tgr_value_ptr value); 

long double (*get_floating)(tgr_value_ptr value); 

void *(*get_pointer)(tgr_value_ptr value); 

tgr_func_ptr (*get_func_pointer)(tgr_value_ptr value); 

const char *(*get_string)(tgr_value_ptr value); 

tgr_value (*get_bool_value)(tgr_value_ptr value); 

tgr_value (*is_equal)(tgr_value_ptr left, tgr_value_ptr right); 

tgr_value (*is_greater)(tgr_value_ptr left, tgr_value_ptr right); 

tgr_value (*is_greater_or_equal)(tgr_value_ptr left, tgr_value_ptr right); 

tgr_value (*multiply)(tgr_value_ptr left, tgr_value_ptr right); 

tgr_value (*divide)(tgr_value_ptr left, tgr_value_ptr right); 

tgr_value (*plus)(tgr_value_ptr left, tgr_value_ptr right); 

tgr_value (*minus)(tgr_value_ptr left, tgr_value_ptr right); 

tgr_value (*do_assign)(tgr_value_ptr left, tgr_value_ptr right); 

tgr_value (*do_ref_assign)(tgr_value_ptr left, tgr_value_ptr right); 

tgr_value (*do_not)(tgr_value_ptr operand); 

tgr_value (*do_inc)(tgr_value_ptr operand); 

tgr_value (*do_dec)(tgr_value_ptr operand); 

tgr_value (*get_field)(tgr_value_ptr obj, tgr_value_ptr field_name); 

tgr_value (*do_at)(tgr_value_ptr arr, tgr_value_ptr idx); 

tgr_value (*to_rvalue)(tgr_value_ptr ref); 
}; 

struct tgr_type { 

tgr_type_vtbl_ptr vtbl; 
tgr_type_ptr sub_type; 
tgr_type_ptr ref_type; 
tgr_type_ptr ptr_type; 
tgr_type_ptr array_type; 
tgr_type_ptr next_type; 
unsigned size; 
}; 


tgr_type_ptr tgr_type_create(tgr_type_vtbl_ptr vtbl); 


int tgr_type_is_integer(tgr_value_ptr value); 


int tgr_type_is_floating(tgr_value_ptr value); 


int tgr_type_is_pointer(tgr_value_ptr value); 


int tgr_type_is_func_pointer(tgr_value_ptr value); 


int tgr_type_is_object(tgr_value_ptr value); 


int tgr_type_is_void(tgr_value_ptr value); 


int tgr_type_is_error(tgr_value_ptr value); 


long long tgr_type_get_integer(tgr_value_ptr value); 


int tgr_type_get_bool(tgr_value_ptr value); 


long double tgr_type_get_floating(tgr_value_ptr value); 


void *tgr_type_get_pointer(tgr_value_ptr value); 


tgr_func_ptr tgr_type_get_func_pointer(tgr_value_ptr value); 
# 222 "C:\\Program Files\\Parasoft\\C++test\\10.3.2\\engine\\runtime\\include/trigger/c/type.h"
}
# 13 "C:\\Program Files\\Parasoft\\C++test\\10.3.2\\engine\\runtime\\include/trigger/c/value.h"
extern "C" {

struct tgr_error_wrapper { 

int kind; 
int reported; 
}; 

struct tgr_position_wrapper { 

const char *file; 
unsigned line; 
}; 

struct tgr_value_s { 

union { 
int b; 
char c; 
unsigned char uc; 
signed char sc; 
wchar_t w; 
short s; 
unsigned short us; 
int i; 
unsigned ui; 
long l; 
unsigned long ul; 
long long ll; 
unsigned long long ull; 
float f; 
double d; 
long double ld; 
const volatile void *ptr; 
tgr_func_ptr func; 
tgr_error_wrapper err; 
tgr_position_wrapper pos; 
} value; 

tgr_type_ptr type; 
}; 



int tgr_value_is_integer(tgr_value_ptr value); 


int tgr_value_is_floating(tgr_value_ptr value); 


int tgr_value_is_pointer(tgr_value_ptr value); 


int tgr_value_is_func_pointer(tgr_value_ptr value); 


int tgr_value_is_object(tgr_value_ptr value); 


int tgr_value_is_void(tgr_value_ptr value); 


int tgr_value_is_error(tgr_value_ptr value); 


long long tgr_value_get_integer(tgr_value_ptr value); 


int tgr_value_get_bool(tgr_value_ptr value); 


long double tgr_value_get_floating(tgr_value_ptr value); 


void *tgr_value_get_pointer(tgr_value_ptr value); 


tgr_func_ptr tgr_value_get_func_pointer(tgr_value_ptr value); 


const char *tgr_value_get_string(tgr_value_ptr value); 


tgr_value tgr_value_get_bool_value(tgr_value_ptr value); 


tgr_value tgr_value_do_not(tgr_value_ptr value); 


tgr_value tgr_value_do_inc(tgr_value_ptr value); 


tgr_value tgr_value_do_dec(tgr_value_ptr value); 


tgr_value tgr_value_is_equal(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_value_is_not_equal(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_value_is_greater(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_value_is_greater_or_equal(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_value_is_less(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_value_is_less_or_equal(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_value_do_multiply(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_value_do_divide(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_value_do_plus(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_value_do_minus(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_value_do_assign(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_value_do_ref_assign(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_value_get_field(tgr_value_ptr obj, tgr_value_ptr field_name); 


tgr_value tgr_value_do_at(tgr_value_ptr arr, tgr_value_ptr index); 
# 344 "C:\\Program Files\\Parasoft\\C++test\\10.3.2\\engine\\runtime\\include/trigger/c/value.h"
}
# 14 "C:\\Program Files\\Parasoft\\C++test\\10.3.2\\engine\\runtime\\include/trigger/c/error_type.h"
extern "C" {
# 40
typedef 
# 16
enum tgr_error_kind { 

c_tgr_error_unknown, 
c_tgr_error_missing_right_paren, 
c_tgr_error_expected_bool_expression, 
c_tgr_error_wrong_equal_arguments, 
c_tgr_error_wrong_relational_arguments, 
c_tgr_error_wrong_multiply_arguments, 
c_tgr_error_wrong_divide_arguments, 
c_tgr_error_wrong_plus_arguments, 
c_tgr_error_wrong_minus_arguments, 
c_tgr_error_assign_to_rvalue, 
c_tgr_error_wrong_get_field_argument, 
c_tgr_error_wrong_at_argument, 
c_tgr_error_wrong_at_index_type, 
c_tgr_error_assign_incompatible_types, 
c_tgr_error_wrong_not_argument, 
c_tgr_error_wrong_inc_argument, 
c_tgr_error_wrong_dec_argument, 
c_tgr_error_unexpected_end_of_tokens, 
c_tgr_error_expected_an_expression, 
c_tgr_error_wrong_arg_name, 
c_tgr_error_null_func_ptr, 
c_tgr_error_deprecated_assert
} tgr_error_kind; 



int tgr_error_type_is_error(tgr_value_ptr value); 


const char *tgr_error_type_get_string(tgr_value_ptr value); 


tgr_value tgr_error_type_get_bool_value(tgr_value_ptr value); 


tgr_value tgr_error_type_is_equal(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_error_type_is_greater(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_error_type_is_greater_or_equal(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_error_type_do_multiply(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_error_type_do_divide(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_error_type_do_plus(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_error_type_do_minus(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_error_type_do_assign(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_error_type_do_ref_assign(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_error_type_do_not(tgr_value_ptr operand); 


tgr_value tgr_error_type_do_inc(tgr_value_ptr operand); 


tgr_value tgr_error_type_do_dec(tgr_value_ptr operand); 


tgr_value tgr_error_type_get_field(tgr_value_ptr obj, tgr_value_ptr field_name); 


tgr_value tgr_error_type_do_at(tgr_value_ptr arr, tgr_value_ptr idx); 


tgr_value tgr_error_type_to_rvalue(tgr_value_ptr ref); 


tgr_type_ptr tgr_error_type(); 


tgr_value tgr_error(tgr_error_kind kind); 




tgr_value tgr_get_bool_value_error(tgr_value_ptr value); 


tgr_value tgr_is_equal_error(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_is_greater_error(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_is_greater_or_equal_error(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_do_multiply_error(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_do_divide_error(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_do_plus_error(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_do_minus_error(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_do_assign_error(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_do_ref_assign_error(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_do_not_error(tgr_value_ptr operand); 


tgr_value tgr_do_inc_error(tgr_value_ptr operand); 


tgr_value tgr_do_dec_error(tgr_value_ptr operand); 


tgr_value tgr_get_field_error(tgr_value_ptr obj, tgr_value_ptr field_name); 


tgr_value tgr_do_at_error(tgr_value_ptr arr, tgr_value_ptr idx); 


tgr_value tgr_to_rvalue_error(tgr_value_ptr ref); 
# 428 "C:\\Program Files\\Parasoft\\C++test\\10.3.2\\engine\\runtime\\include/trigger/c/error_type.h"
}
# 13 "C:\\Program Files\\Parasoft\\C++test\\10.3.2\\engine\\runtime\\include/trigger/c/void_type.h"
extern "C" {


int tgr_void_type_is_void(tgr_value_ptr value); 


const char *tgr_void_type_get_string(tgr_value_ptr value); 


tgr_type_ptr tgr_void_type(); 


tgr_value tgr_void(); 
# 106 "C:\\Program Files\\Parasoft\\C++test\\10.3.2\\engine\\runtime\\include/trigger/c/void_type.h"
}
# 14 "C:\\Program Files\\Parasoft\\C++test\\10.3.2\\engine\\runtime\\include/trigger/c/instruction.h"
extern "C" {
# 52
typedef 
# 16
enum tgr_instruction_kind { 

c_tgr_instruction_assert, 
c_tgr_instruction_fail, 
c_tgr_instruction_report, 
c_tgr_instruction_arg, 
c_tgr_instruction_field, 
c_tgr_instruction_if, 
c_tgr_instruction_else, 
c_tgr_instruction_assign, 
c_tgr_instruction_or, 
c_tgr_instruction_and, 
c_tgr_instruction_equal, 
c_tgr_instruction_not_equal, 
c_tgr_instruction_greater, 
c_tgr_instruction_greater_or_equal, 
c_tgr_instruction_less, 
c_tgr_instruction_less_or_equal, 
c_tgr_instruction_multiply, 
c_tgr_instruction_divide, 
c_tgr_instruction_plus, 
c_tgr_instruction_minus, 
c_tgr_instruction_not, 
c_tgr_instruction_at, 
c_tgr_instruction_inc, 
c_tgr_instruction_dec, 
c_tgr_instruction_value, 
c_tgr_instruction_left_paren, 
c_tgr_instruction_right_paren, 
c_tgr_instruction_run_id, 
c_tgr_instruction_execute, 
c_tgr_instruction_with_arg, 
c_tgr_instruction_return, 
c_tgr_instruction_left_brace, 
c_tgr_instruction_right_brace, 
c_tgr_instruction_line_directive
} tgr_instruction_kind; 

typedef struct tgr_instruction *tgr_instruction_ptr; 

struct tgr_instruction { 


tgr_instruction_kind kind; 
tgr_value arg; 
tgr_instruction_ptr next; 
}; 


typedef struct tgr_instruction_list *tgr_instruction_list_ptr; 

struct tgr_instruction_list { 

tgr_instruction_ptr first; 
tgr_instruction_ptr last; 
}; 


tgr_instruction_ptr tgr_create_instruction(tgr_instruction_kind kind); 


tgr_instruction_ptr tgr_create_instruction_with_arg(tgr_instruction_kind kind, tgr_value arg); 



int tgr_instruction_has_arg(tgr_instruction_ptr instruction); 


void tgr_instruction_list_initialize(tgr_instruction_list_ptr list); 


void tgr_instruction_list_add(tgr_instruction_list_ptr list, tgr_instruction_ptr instruction); 



void tgr_instruction_list_clear(tgr_instruction_list_ptr list); 


void tgr_instruction_list_destroy(tgr_instruction_list_ptr list); 
# 170 "C:\\Program Files\\Parasoft\\C++test\\10.3.2\\engine\\runtime\\include/trigger/c/instruction.h"
}
# 13 "C:\\Program Files\\Parasoft\\C++test\\10.3.2\\engine\\runtime\\include/trigger/c/pos_type.h"
extern "C" {


const char *tgr_pos_type_get_string(tgr_value_ptr value); 


tgr_type_ptr tgr_pos_type(); 


tgr_value tgr_pos(const char * file, unsigned line); 
# 100 "C:\\Program Files\\Parasoft\\C++test\\10.3.2\\engine\\runtime\\include/trigger/c/pos_type.h"
}
# 14 "C:\\Program Files\\Parasoft\\C++test\\10.3.2\\engine\\runtime\\include/trigger/c/boolean_type.h"
extern "C" {


int tgr_boolean_type_is_integer(tgr_value_ptr value); 


long long tgr_boolean_type_get_integer(tgr_value_ptr value); 


int tgr_boolean_type_get_bool(tgr_value_ptr value); 


long double tgr_boolean_type_get_floating(tgr_value_ptr value); 


const char *tgr_boolean_type_get_string(tgr_value_ptr value); 


tgr_value tgr_boolean_type_get_bool_value(tgr_value_ptr value); 


tgr_value tgr_boolean_type_is_equal(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_boolean_type_is_greater(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_boolean_type_is_greater_or_equal(tgr_value_ptr left, tgr_value_ptr right); 



tgr_value tgr_boolean_type_do_ref_assign(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_boolean_type_do_not(tgr_value_ptr operand); 


tgr_value tgr_boolean_type_to_rvalue(tgr_value_ptr ref); 


tgr_type_ptr tgr_boolean_type(); 


tgr_value tgr_boolean(int v); 
# 233 "C:\\Program Files\\Parasoft\\C++test\\10.3.2\\engine\\runtime\\include/trigger/c/boolean_type.h"
}
# 14 "C:\\Program Files\\Parasoft\\C++test\\10.3.2\\engine\\runtime\\include/trigger/c/integer_type.h"
extern "C" {


int tgr_integer_type_is_integer(tgr_value_ptr value); 


int tgr_integer_type_get_bool(tgr_value_ptr value); 


long double tgr_integer_type_get_floating(tgr_value_ptr value); 


void *tgr_integer_type_get_pointer(tgr_value_ptr value); 


const char *tgr_integer_type_get_string(tgr_value_ptr value); 


tgr_value tgr_integer_type_get_bool_value(tgr_value_ptr value); 


tgr_value tgr_integer_type_is_equal(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_integer_type_is_greater(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_integer_type_is_greater_or_equal(tgr_value_ptr left, tgr_value_ptr right); 




tgr_value tgr_integer_type_do_not(tgr_value_ptr operand); 


long long tgr_char_type_get_integer(tgr_value_ptr value); 


tgr_value tgr_char_type_do_multiply(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_char_type_do_divide(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_char_type_do_plus(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_char_type_do_minus(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_char_type_do_ref_assign(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_char_type_to_rvalue(tgr_value_ptr ref); 


tgr_type_ptr tgr_char_type(); 


tgr_value tgr_char(char c); 


long long tgr_schar_type_get_integer(tgr_value_ptr value); 


tgr_value tgr_schar_type_do_multiply(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_schar_type_do_divide(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_schar_type_do_plus(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_schar_type_do_minus(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_schar_type_do_ref_assign(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_schar_type_to_rvalue(tgr_value_ptr ref); 


tgr_type_ptr tgr_schar_type(); 


tgr_value tgr_schar(signed char sc); 


long long tgr_uchar_type_get_integer(tgr_value_ptr value); 


tgr_value tgr_uchar_type_do_multiply(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_uchar_type_do_divide(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_uchar_type_do_plus(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_uchar_type_do_minus(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_uchar_type_do_ref_assign(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_uchar_type_to_rvalue(tgr_value_ptr ref); 


tgr_type_ptr tgr_uchar_type(); 


tgr_value tgr_uchar(unsigned char uc); 



long long tgr_wchar_t_type_get_integer(tgr_value_ptr value); 


tgr_value tgr_wchar_t_type_do_multiply(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_wchar_t_type_do_divide(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_wchar_t_type_do_plus(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_wchar_t_type_do_minus(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_wchar_t_type_do_ref_assign(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_wchar_t_type_to_rvalue(tgr_value_ptr ref); 


tgr_type_ptr tgr_wchar_t_type(); 


tgr_value tgr_wchar_t(wchar_t c); 


long long tgr_short_type_get_integer(tgr_value_ptr value); 


tgr_value tgr_short_type_do_multiply(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_short_type_do_divide(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_short_type_do_plus(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_short_type_do_minus(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_short_type_do_ref_assign(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_short_type_to_rvalue(tgr_value_ptr ref); 


tgr_type_ptr tgr_short_type(); 


tgr_value tgr_short(short s); 


long long tgr_ushort_type_get_integer(tgr_value_ptr value); 


tgr_value tgr_ushort_type_do_multiply(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_ushort_type_do_divide(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_ushort_type_do_plus(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_ushort_type_do_minus(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_ushort_type_do_ref_assign(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_ushort_type_to_rvalue(tgr_value_ptr ref); 


tgr_type_ptr tgr_ushort_type(); 


tgr_value tgr_ushort(unsigned short us); 


long long tgr_int_type_get_integer(tgr_value_ptr value); 


tgr_value tgr_int_type_do_multiply(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_int_type_do_divide(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_int_type_do_plus(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_int_type_do_minus(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_int_type_do_ref_assign(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_int_type_to_rvalue(tgr_value_ptr ref); 


tgr_type_ptr tgr_int_type(); 


tgr_value tgr_int(int i); 


long long tgr_uint_type_get_integer(tgr_value_ptr value); 


tgr_value tgr_uint_type_do_multiply(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_uint_type_do_divide(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_uint_type_do_plus(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_uint_type_do_minus(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_uint_type_do_ref_assign(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_uint_type_to_rvalue(tgr_value_ptr ref); 


tgr_type_ptr tgr_uint_type(); 


tgr_value tgr_uint(unsigned ui); 


long long tgr_long_type_get_integer(tgr_value_ptr value); 


tgr_value tgr_long_type_do_multiply(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_long_type_do_divide(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_long_type_do_plus(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_long_type_do_minus(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_long_type_do_ref_assign(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_long_type_to_rvalue(tgr_value_ptr ref); 


tgr_type_ptr tgr_long_type(); 


tgr_value tgr_long(long l); 


long long tgr_ulong_type_get_integer(tgr_value_ptr value); 


tgr_value tgr_ulong_type_do_multiply(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_ulong_type_do_divide(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_ulong_type_do_plus(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_ulong_type_do_minus(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_ulong_type_do_ref_assign(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_ulong_type_to_rvalue(tgr_value_ptr ref); 


tgr_type_ptr tgr_ulong_type(); 


tgr_value tgr_ulong(unsigned long ul); 


long long tgr_llong_type_get_integer(tgr_value_ptr value); 


tgr_value tgr_llong_type_do_multiply(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_llong_type_do_divide(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_llong_type_do_plus(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_llong_type_do_minus(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_llong_type_do_ref_assign(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_llong_type_to_rvalue(tgr_value_ptr ref); 


tgr_type_ptr tgr_llong_type(); 


tgr_value tgr_llong(long long ll); 


long long tgr_ullong_type_get_integer(tgr_value_ptr value); 


tgr_value tgr_ullong_type_do_multiply(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_ullong_type_do_divide(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_ullong_type_do_plus(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_ullong_type_do_minus(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_ullong_type_do_ref_assign(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_ullong_type_to_rvalue(tgr_value_ptr ref); 


tgr_type_ptr tgr_ullong_type(); 


tgr_value tgr_ullong(unsigned long long ull); 


tgr_type_ptr tgr_integer_type(unsigned size, int sign); 
# 1968 "C:\\Program Files\\Parasoft\\C++test\\10.3.2\\engine\\runtime\\include/trigger/c/integer_type.h"
}
# 15 "C:\\Program Files\\Parasoft\\C++test\\10.3.2\\engine\\runtime\\include/trigger/c/ref_type.h"
extern "C" {



tgr_value tgr_get_referenced_value(tgr_value_ptr value); 


int tgr_ref_type_is_integer(tgr_value_ptr value); 


int tgr_ref_type_is_floating(tgr_value_ptr value); 


int tgr_ref_type_is_pointer(tgr_value_ptr value); 


int tgr_ref_type_is_func_pointer(tgr_value_ptr value); 


long long tgr_ref_type_get_integer(tgr_value_ptr value); 


int tgr_ref_type_get_bool(tgr_value_ptr value); 


long double tgr_ref_type_get_floating(tgr_value_ptr value); 


void *tgr_ref_type_get_pointer(tgr_value_ptr value); 


tgr_func_ptr tgr_ref_type_get_func_pointer(tgr_value_ptr value); 


const char *tgr_ref_type_get_string(tgr_value_ptr value); 


tgr_value tgr_ref_type_get_bool_value(tgr_value_ptr value); 


tgr_value tgr_ref_type_is_equal(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_ref_type_is_greater(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_ref_type_is_greater_or_equal(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_ref_type_do_multiply(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_ref_type_do_divide(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_ref_type_do_plus(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_ref_type_do_minus(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_ref_type_do_assign(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_ref_type_do_ref_assign(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_ref_type_do_not(tgr_value_ptr operand); 


tgr_value tgr_ref_type_do_inc(tgr_value_ptr operand); 


tgr_value tgr_ref_type_do_dec(tgr_value_ptr operand); 


tgr_value tgr_ref_type_get_field(tgr_value_ptr obj, tgr_value_ptr field_name); 


tgr_value tgr_ref_type_do_at(tgr_value_ptr arr, tgr_value_ptr idx); 


tgr_value tgr_ref_type_to_rvalue(tgr_value_ptr ref); 


tgr_type_ptr tgr_ref_type(tgr_type_ptr sub_type); 
# 356 "C:\\Program Files\\Parasoft\\C++test\\10.3.2\\engine\\runtime\\include/trigger/c/ref_type.h"
}
# 14 "C:\\Program Files\\Parasoft\\C++test\\10.3.2\\engine\\runtime\\include/trigger/c/floating_type.h"
extern "C" {


int tgr_floating_type_is_floating(tgr_value_ptr value); 


const char *tgr_floating_type_get_string(tgr_value_ptr value); 


tgr_value tgr_floating_type_get_bool_value(tgr_value_ptr value); 


tgr_value tgr_floating_type_is_equal(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_floating_type_is_greater(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_floating_type_is_greater_or_equal(tgr_value_ptr left, tgr_value_ptr right); 



tgr_value tgr_floating_type_do_not(tgr_value_ptr operand); 


long long tgr_float_type_get_integer(tgr_value_ptr value); 


int tgr_float_type_get_bool(tgr_value_ptr value); 


long double tgr_float_type_get_floating(tgr_value_ptr value); 


tgr_value tgr_float_type_do_multiply(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_float_type_do_divide(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_float_type_do_plus(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_float_type_do_minus(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_float_type_do_ref_assign(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_float_type_to_rvalue(tgr_value_ptr ref); 


tgr_type_ptr tgr_float_type(); 


tgr_value tgr_float(float f); 


long long tgr_double_type_get_integer(tgr_value_ptr value); 


int tgr_double_type_get_bool(tgr_value_ptr value); 


long double tgr_double_type_get_floating(tgr_value_ptr value); 


tgr_value tgr_double_type_do_multiply(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_double_type_do_divide(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_double_type_do_plus(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_double_type_do_minus(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_double_type_do_ref_assign(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_double_type_to_rvalue(tgr_value_ptr ref); 


tgr_type_ptr tgr_double_type(); 


tgr_value tgr_double(double d); 


long long tgr_ldouble_type_get_integer(tgr_value_ptr value); 


int tgr_ldouble_type_get_bool(tgr_value_ptr value); 


long double tgr_ldouble_type_get_floating(tgr_value_ptr value); 


tgr_value tgr_ldouble_type_do_multiply(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_ldouble_type_do_divide(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_ldouble_type_do_plus(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_ldouble_type_do_minus(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_ldouble_type_do_ref_assign(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_ldouble_type_to_rvalue(tgr_value_ptr ref); 


tgr_type_ptr tgr_ldouble_type(); 


tgr_value tgr_ldouble(long double ld); 
# 607 "C:\\Program Files\\Parasoft\\C++test\\10.3.2\\engine\\runtime\\include/trigger/c/floating_type.h"
}
# 16 "C:\\Program Files\\Parasoft\\C++test\\10.3.2\\engine\\runtime\\include/trigger/c/func_ptr_type.h"
extern "C" {


int tgr_func_ptr_type_is_func_pointer(tgr_value_ptr value); 


int tgr_func_ptr_type_get_bool(tgr_value_ptr value); 


tgr_func_ptr tgr_func_ptr_type_get_func_pointer(tgr_value_ptr value); 


const char *tgr_func_ptr_type_get_string(tgr_value_ptr value); 


tgr_value tgr_func_ptr_type_get_bool_value(tgr_value_ptr value); 


tgr_value tgr_func_ptr_type_is_equal(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_func_ptr_type_do_ref_assign(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_func_ptr_type_do_not(tgr_value_ptr operand); 


tgr_value tgr_func_ptr_type_to_rvalue(tgr_value_ptr ref); 


tgr_type_ptr tgr_func_ptr_type(); 


tgr_value tgr_func(tgr_func_ptr func); 
# 192 "C:\\Program Files\\Parasoft\\C++test\\10.3.2\\engine\\runtime\\include/trigger/c/func_ptr_type.h"
}
# 13 "C:\\Program Files\\Parasoft\\C++test\\10.3.2\\engine\\runtime\\include/trigger/c/class_type.h"
extern "C" {



int tgr_class_type_is_object(tgr_value_ptr value); 


const char *tgr_class_type_get_string(tgr_value_ptr value); 


tgr_value tgr_class_type_to_rvalue(tgr_value_ptr ref); 


tgr_type_vtbl_ptr tgr_class_type_default_vtbl(); 


tgr_value tgr_object(const volatile void * obj_ptr, tgr_type_ptr class_type); 

struct tgr_class_definition { 

int initialized; 
tgr_type_vtbl vtbl; 
tgr_type type; 
}; 



void tgr_initialize_class_definition(tgr_class_definition_ptr class_definition, unsigned class_size); 
# 134 "C:\\Program Files\\Parasoft\\C++test\\10.3.2\\engine\\runtime\\include/trigger/c/class_type.h"
}
# 20 "C:\\Program Files\\Parasoft\\C++test\\10.3.2\\engine\\runtime\\include/trigger/c/ptr_type.h"
extern "C" {


int tgr_ptr_type_is_pointer(tgr_value_ptr value); 


int tgr_ptr_type_get_bool(tgr_value_ptr value); 


void *tgr_ptr_type_get_pointer(tgr_value_ptr value); 


const char *tgr_ptr_type_get_string(tgr_value_ptr value); 


tgr_value tgr_ptr_type_get_bool_value(tgr_value_ptr value); 


tgr_value tgr_ptr_type_is_equal(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_ptr_type_is_greater(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_ptr_type_is_greater_or_equal(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_ptr_type_do_ref_assign(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_ptr_type_do_not(tgr_value_ptr operand); 


tgr_value tgr_ptr_type_get_field(tgr_value_ptr obj, tgr_value_ptr field_name); 


tgr_value tgr_ptr_type_do_at(tgr_value_ptr arr, tgr_value_ptr idx); 


tgr_value tgr_ptr_type_to_rvalue(tgr_value_ptr ref); 


tgr_type_ptr tgr_ptr_type(tgr_type_ptr sub_type); 


tgr_value tgr_void_ptr(const volatile void * ptr); 


tgr_value tgr_char_ptr(const volatile char * ptr); 


tgr_value tgr_schar_ptr(const volatile signed char * ptr); 


tgr_value tgr_uchar_ptr(const volatile unsigned char * ptr); 


tgr_value tgr_wchar_t_ptr(const volatile wchar_t * ptr); 


tgr_value tgr_short_ptr(const volatile short * ptr); 


tgr_value tgr_ushort_ptr(const volatile unsigned short * ptr); 


tgr_value tgr_int_ptr(const volatile int * ptr); 


tgr_value tgr_uint_ptr(const volatile unsigned * ptr); 


tgr_value tgr_long_ptr(const volatile long * ptr); 


tgr_value tgr_ulong_ptr(const volatile unsigned long * ptr); 


tgr_value tgr_llong_ptr(const volatile long long * ptr); 


tgr_value tgr_ullong_ptr(const volatile unsigned long long * ptr); 


tgr_value tgr_float_ptr(const volatile float * ptr); 


tgr_value tgr_double_ptr(const volatile double * ptr); 


tgr_value tgr_ldouble_ptr(const volatile long double * ptr); 


tgr_value tgr_function_ptr(const volatile tgr_func_ptr * ptr); 


tgr_value tgr_char_ref(const volatile char * ptr); 


tgr_value tgr_schar_ref(const volatile signed char * ptr); 


tgr_value tgr_uchar_ref(const volatile unsigned char * ptr); 


tgr_value tgr_wchar_t_ref(const volatile wchar_t * ptr); 


tgr_value tgr_short_ref(const volatile short * ptr); 


tgr_value tgr_ushort_ref(const volatile unsigned short * ptr); 


tgr_value tgr_int_ref(const volatile int * ptr); 


tgr_value tgr_uint_ref(const volatile unsigned * ptr); 


tgr_value tgr_long_ref(const volatile long * ptr); 


tgr_value tgr_ulong_ref(const volatile unsigned long * ptr); 


tgr_value tgr_llong_ref(const volatile long long * ptr); 


tgr_value tgr_ullong_ref(const volatile unsigned long long * ptr); 


tgr_value tgr_float_ref(const volatile float * ptr); 


tgr_value tgr_double_ref(const volatile double * ptr); 


tgr_value tgr_ldouble_ref(const volatile long double * ptr); 


tgr_value tgr_void_ptr_ref(const volatile void * ptr); 


tgr_value tgr_func_ptr_ref(const volatile void * ptr); 


tgr_value tgr_ptr_ref(const volatile void * ptr, tgr_type_ptr pointed_type); 
# 710 "C:\\Program Files\\Parasoft\\C++test\\10.3.2\\engine\\runtime\\include/trigger/c/ptr_type.h"
}
# 20 "C:\\Program Files\\Parasoft\\C++test\\10.3.2\\engine\\runtime\\include/trigger/c/array_type.h"
extern "C" {


const char *tgr_array_type_get_string(tgr_value_ptr value); 


tgr_value tgr_array_type_do_at(tgr_value_ptr arr, tgr_value_ptr idx); 


tgr_value tgr_array_type_to_rvalue(tgr_value_ptr ref); 


tgr_type_ptr tgr_array_type(tgr_type_ptr sub_type, unsigned size); 
# 130 "C:\\Program Files\\Parasoft\\C++test\\10.3.2\\engine\\runtime\\include/trigger/c/array_type.h"
}
# 15 "C:\\Program Files\\Parasoft\\C++test\\10.3.2\\engine\\runtime\\include/trigger/c/code.h"
extern "C" {

typedef tgr_value (*tgr_external_func_ptr)(tgr_running_data_ptr running_data, tgr_args_ptr args); 


struct tgr_code { 

tgr_instruction_list instructions; 
}; 


void tgr_code_initialize(tgr_code_ptr code); 


void tgr_code_clear(tgr_code_ptr code); 


void tgr_code_add_instruction(tgr_code_ptr code, tgr_instruction_kind kind); 


void tgr_code_add_instruction_with_arg(tgr_code_ptr code, tgr_instruction_kind kind, tgr_value arg); 
# 73 "C:\\Program Files\\Parasoft\\C++test\\10.3.2\\engine\\runtime\\include/trigger/c/code.h"
}
# 13 "C:\\Program Files\\Parasoft\\C++test\\10.3.2\\engine\\runtime\\include/trigger/c/trigger.h"
extern "C" {
# 21
typedef 
# 16
enum tgr_run_mode { 

c_tgr_run_before, 
c_tgr_run_instead_of, 
c_tgr_run_after
} tgr_run_mode; 

struct tgr_trigger { 

char *name; 
tgr_run_mode run_mode; 
unsigned number_of_runs; 
tgr_time creation_time; 
tgr_trigger_ptr next; 
tgr_code code; 
}; 

struct tgr_trigger_list { 

tgr_trigger_ptr first; 
tgr_trigger_ptr last; 
}; 



tgr_trigger_ptr tgr_trigger_construct(const char * name, tgr_run_mode run_mode); 


void tgr_trigger_clear(tgr_trigger_ptr trigger); 


void tgr_trigger_destroy(tgr_trigger_ptr trigger); 


void tgr_trigger_list_initialize(tgr_trigger_list_ptr list); 


void tgr_trigger_list_add(tgr_trigger_list_ptr list, tgr_trigger_ptr trigger); 


void tgr_trigger_list_remove(tgr_trigger_list_ptr list, tgr_trigger_ptr to_remove); 


void tgr_trigger_list_clear(tgr_trigger_list_ptr list); 
# 149 "C:\\Program Files\\Parasoft\\C++test\\10.3.2\\engine\\runtime\\include/trigger/c/trigger.h"
}
# 14 "C:\\Program Files\\Parasoft\\C++test\\10.3.2\\engine\\runtime\\include/trigger/c/manager.h"
extern "C" {


tgr_trigger_list_ptr tgr_get_triggers(); 


tgr_trigger_ptr tgr_add(const char * name, tgr_run_mode run_mode); 


void tgr_remove(const char * name); 


void tgr_remove_all_with_creation_time(tgr_time start, tgr_time stop); 


void tgr_remove_all(); 
# 99 "C:\\Program Files\\Parasoft\\C++test\\10.3.2\\engine\\runtime\\include/trigger/c/manager.h"
}
# 13 "C:\\Program Files\\Parasoft\\C++test\\10.3.2\\engine\\runtime\\include/trigger/c/code_helper.h"
extern "C" {


struct tgr_code_helper { 

tgr_code_helper_ptr (*Assert)(const char * message); 

tgr_code_helper_ptr (*Fail)(const char * message); 

tgr_code_helper_ptr (*Report)(const char * message); 

tgr_code_helper_ptr (*Arg)(const char * argName); 

tgr_code_helper_ptr (*ArgByExpr)(void); 

tgr_code_helper_ptr (*Field)(const char * field_name); 

tgr_code_helper_ptr (*FieldByExpr)(void); 

tgr_code_helper_ptr (*If)(void); 

tgr_code_helper_ptr (*Else)(void); 

tgr_code_helper_ptr (*Assign)(void); 

tgr_code_helper_ptr (*Or)(void); 

tgr_code_helper_ptr (*And)(void); 

tgr_code_helper_ptr (*Equal)(void); 

tgr_code_helper_ptr (*NotEqual)(void); 

tgr_code_helper_ptr (*Greater)(void); 

tgr_code_helper_ptr (*GreaterOrEqual)(void); 

tgr_code_helper_ptr (*Less)(void); 

tgr_code_helper_ptr (*LessOrEqual)(void); 

tgr_code_helper_ptr (*Multiply)(void); 

tgr_code_helper_ptr (*Divide)(void); 

tgr_code_helper_ptr (*Plus)(void); 

tgr_code_helper_ptr (*Minus)(void); 

tgr_code_helper_ptr (*Not)(void); 

tgr_code_helper_ptr (*At)(void); 

tgr_code_helper_ptr (*Inc)(void); 

tgr_code_helper_ptr (*Dec)(void); 

tgr_code_helper_ptr (*LP)(void); 

tgr_code_helper_ptr (*RP)(void); 

tgr_code_helper_ptr (*RunId)(void); 

tgr_code_helper_ptr (*Execute)(tgr_external_func_ptr function); 

tgr_code_helper_ptr (*WithArg)(const char * name); 

tgr_code_helper_ptr (*Return)(void); 

tgr_code_helper_ptr (*LB)(void); 

tgr_code_helper_ptr (*RB)(void); 

tgr_code_helper_ptr (*FileLine)(const char * file, unsigned line); 

tgr_code_helper_ptr (*Line)(unsigned line); 

tgr_code_helper_ptr (*Value)(tgr_value value); 

tgr_code_helper_ptr (*Char)(char c); 

tgr_code_helper_ptr (*SChar)(signed char sc); 

tgr_code_helper_ptr (*UChar)(unsigned char uc); 

tgr_code_helper_ptr (*WChar)(wchar_t w); 

tgr_code_helper_ptr (*Short)(short s); 

tgr_code_helper_ptr (*UShort)(unsigned short us); 

tgr_code_helper_ptr (*Int)(int i); 

tgr_code_helper_ptr (*UInt)(unsigned ui); 

tgr_code_helper_ptr (*Long)(long l); 

tgr_code_helper_ptr (*ULong)(unsigned long ul); 

tgr_code_helper_ptr (*LLong)(long long ll); 

tgr_code_helper_ptr (*ULLong)(unsigned long long ull); 

tgr_code_helper_ptr (*Float)(float f); 

tgr_code_helper_ptr (*Double)(double d); 

tgr_code_helper_ptr (*LDouble)(long double ld); 

tgr_code_helper_ptr (*Func)(tgr_func_ptr func); 

tgr_code_helper_ptr (*VoidPtr)(const volatile void * ptr); 

tgr_code_helper_ptr (*CharPtr)(const volatile char * ptr); 

tgr_code_helper_ptr (*SCharPtr)(const volatile signed char * ptr); 

tgr_code_helper_ptr (*UCharPtr)(const volatile unsigned char * ptr); 

tgr_code_helper_ptr (*WCharPtr)(const volatile wchar_t * ptr); 

tgr_code_helper_ptr (*ShortPtr)(const volatile short * ptr); 

tgr_code_helper_ptr (*UShortPtr)(const volatile unsigned short * ptr); 

tgr_code_helper_ptr (*IntPtr)(const volatile int * ptr); 

tgr_code_helper_ptr (*UIntPtr)(const volatile unsigned * ptr); 

tgr_code_helper_ptr (*LongPtr)(const volatile long * ptr); 

tgr_code_helper_ptr (*ULongPtr)(const volatile unsigned long * ptr); 

tgr_code_helper_ptr (*LLongPtr)(const volatile long long * ptr); 

tgr_code_helper_ptr (*ULLongPtr)(const volatile unsigned long long * ptr); 

tgr_code_helper_ptr (*FloatPtr)(const volatile float * ptr); 

tgr_code_helper_ptr (*DoublePtr)(const volatile double * ptr); 

tgr_code_helper_ptr (*LDoublePtr)(const volatile long double * ptr); 

tgr_code_helper_ptr (*CharRef)(const volatile char * ref); 

tgr_code_helper_ptr (*SCharRef)(const volatile signed char * ref); 

tgr_code_helper_ptr (*UCharRef)(const volatile unsigned char * ref); 

tgr_code_helper_ptr (*WCharRef)(const volatile wchar_t * ref); 

tgr_code_helper_ptr (*ShortRef)(const volatile short * ref); 

tgr_code_helper_ptr (*UShortRef)(const volatile unsigned short * ref); 

tgr_code_helper_ptr (*IntRef)(const volatile int * ref); 

tgr_code_helper_ptr (*UIntRef)(const volatile unsigned * ref); 

tgr_code_helper_ptr (*LongRef)(const volatile long * ref); 

tgr_code_helper_ptr (*ULongRef)(const volatile unsigned long * ref); 

tgr_code_helper_ptr (*LLongRef)(const volatile long long * ref); 

tgr_code_helper_ptr (*ULLongRef)(const volatile unsigned long long * ref); 

tgr_code_helper_ptr (*FloatRef)(const volatile float * ref); 

tgr_code_helper_ptr (*DoubleRef)(const volatile double * ref); 

tgr_code_helper_ptr (*LDoubleRef)(const volatile long double * ref); 

tgr_code_helper_ptr (*VoidPtrRef)(const volatile void * ref); 

tgr_code_helper_ptr (*Object)(const volatile void * obj, tgr_type_ptr class_type); 

tgr_code_helper_ptr (*Ptr)(const volatile void * value, tgr_type_ptr element_type); 

tgr_code_helper_ptr (*Ref)(const volatile void * value, tgr_type_ptr element_type); 

}; 


tgr_code_ptr *tgr_get_curr_code(); 


tgr_code_helper_ptr tgr_code_helper_assert(const char * message); 


tgr_code_helper_ptr tgr_code_helper_fail(const char * message); 


tgr_code_helper_ptr tgr_code_helper_report(const char * message); 


tgr_code_helper_ptr tgr_code_helper_arg(const char * argName); 


tgr_code_helper_ptr tgr_code_helper_arg_by_expr(); 


tgr_code_helper_ptr tgr_code_helper_field(const char * field_name); 


tgr_code_helper_ptr tgr_code_helper_field_by_expr(); 


tgr_code_helper_ptr tgr_code_helper_if(); 


tgr_code_helper_ptr tgr_code_helper_else(); 


tgr_code_helper_ptr tgr_code_helper_assign(); 


tgr_code_helper_ptr tgr_code_helper_or(); 


tgr_code_helper_ptr tgr_code_helper_and(); 


tgr_code_helper_ptr tgr_code_helper_equal(); 


tgr_code_helper_ptr tgr_code_helper_not_equal(); 


tgr_code_helper_ptr tgr_code_helper_greater(); 


tgr_code_helper_ptr tgr_code_helper_greater_or_equal(); 


tgr_code_helper_ptr tgr_code_helper_less(); 


tgr_code_helper_ptr tgr_code_helper_less_or_equal(); 


tgr_code_helper_ptr tgr_code_helper_multiply(); 


tgr_code_helper_ptr tgr_code_helper_divide(); 


tgr_code_helper_ptr tgr_code_helper_plus(); 


tgr_code_helper_ptr tgr_code_helper_minus(); 


tgr_code_helper_ptr tgr_code_helper_not(); 


tgr_code_helper_ptr tgr_code_helper_at(); 


tgr_code_helper_ptr tgr_code_helper_inc(); 


tgr_code_helper_ptr tgr_code_helper_dec(); 


tgr_code_helper_ptr tgr_code_helper_lp(); 


tgr_code_helper_ptr tgr_code_helper_rp(); 


tgr_code_helper_ptr tgr_code_helper_run_id(); 


tgr_code_helper_ptr tgr_code_helper_execute(tgr_external_func_ptr function); 


tgr_code_helper_ptr tgr_code_helper_with_arg(const char * name); 


tgr_code_helper_ptr tgr_code_helper_return(); 


tgr_code_helper_ptr tgr_code_helper_lb(); 


tgr_code_helper_ptr tgr_code_helper_rb(); 


tgr_code_helper_ptr tgr_code_helper_file_line(const char * file, unsigned line); 


tgr_code_helper_ptr tgr_code_helper_line(unsigned line); 


tgr_code_helper_ptr tgr_code_helper_value(tgr_value value); 


tgr_code_helper_ptr tgr_code_helper_char(char c); 


tgr_code_helper_ptr tgr_code_helper_schar(signed char sc); 


tgr_code_helper_ptr tgr_code_helper_uchar(unsigned char uc); 


tgr_code_helper_ptr tgr_code_helper_wchar_t(wchar_t w); 


tgr_code_helper_ptr tgr_code_helper_short(short s); 


tgr_code_helper_ptr tgr_code_helper_ushort(unsigned short us); 


tgr_code_helper_ptr tgr_code_helper_int(int i); 


tgr_code_helper_ptr tgr_code_helper_uint(unsigned ui); 


tgr_code_helper_ptr tgr_code_helper_long(long l); 


tgr_code_helper_ptr tgr_code_helper_ulong(unsigned long ul); 


tgr_code_helper_ptr tgr_code_helper_llong(long long ll); 


tgr_code_helper_ptr tgr_code_helper_ullong(unsigned long long ull); 


tgr_code_helper_ptr tgr_code_helper_float(float f); 


tgr_code_helper_ptr tgr_code_helper_double(double d); 


tgr_code_helper_ptr tgr_code_helper_ldouble(long double ld); 


tgr_code_helper_ptr tgr_code_helper_func(tgr_func_ptr func); 


tgr_code_helper_ptr tgr_code_helper_void_ptr(const volatile void * ptr); 


tgr_code_helper_ptr tgr_code_helper_char_ptr(const volatile char * ptr); 


tgr_code_helper_ptr tgr_code_helper_schar_ptr(const volatile signed char * ptr); 


tgr_code_helper_ptr tgr_code_helper_uchar_ptr(const volatile unsigned char * ptr); 


tgr_code_helper_ptr tgr_code_helper_wchar_t_ptr(const volatile wchar_t * ptr); 


tgr_code_helper_ptr tgr_code_helper_short_ptr(const volatile short * ptr); 


tgr_code_helper_ptr tgr_code_helper_ushort_ptr(const volatile unsigned short * ptr); 


tgr_code_helper_ptr tgr_code_helper_int_ptr(const volatile int * ptr); 


tgr_code_helper_ptr tgr_code_helper_uint_ptr(const volatile unsigned * ptr); 


tgr_code_helper_ptr tgr_code_helper_long_ptr(const volatile long * ptr); 


tgr_code_helper_ptr tgr_code_helper_ulong_ptr(const volatile unsigned long * ptr); 


tgr_code_helper_ptr tgr_code_helper_llong_ptr(const volatile long long * ptr); 


tgr_code_helper_ptr tgr_code_helper_ullong_ptr(const volatile unsigned long long * ptr); 


tgr_code_helper_ptr tgr_code_helper_float_ptr(const volatile float * ptr); 


tgr_code_helper_ptr tgr_code_helper_double_ptr(const volatile double * ptr); 


tgr_code_helper_ptr tgr_code_helper_ldouble_ptr(const volatile long double * ptr); 


tgr_code_helper_ptr tgr_code_helper_char_ref(const volatile char * ref); 


tgr_code_helper_ptr tgr_code_helper_schar_ref(const volatile signed char * ref); 


tgr_code_helper_ptr tgr_code_helper_uchar_ref(const volatile unsigned char * ref); 


tgr_code_helper_ptr tgr_code_helper_wchar_t_ref(const volatile wchar_t * ref); 


tgr_code_helper_ptr tgr_code_helper_short_ref(const volatile short * ref); 


tgr_code_helper_ptr tgr_code_helper_ushort_ref(const volatile unsigned short * ref); 


tgr_code_helper_ptr tgr_code_helper_int_ref(const volatile int * ref); 


tgr_code_helper_ptr tgr_code_helper_uint_ref(const volatile unsigned * ref); 


tgr_code_helper_ptr tgr_code_helper_long_ref(const volatile long * ref); 


tgr_code_helper_ptr tgr_code_helper_ulong_ref(const volatile unsigned long * ref); 


tgr_code_helper_ptr tgr_code_helper_llong_ref(const volatile long long * ref); 


tgr_code_helper_ptr tgr_code_helper_ullong_ref(const volatile unsigned long long * ref); 


tgr_code_helper_ptr tgr_code_helper_float_ref(const volatile float * ref); 


tgr_code_helper_ptr tgr_code_helper_double_ref(const volatile double * ref); 


tgr_code_helper_ptr tgr_code_helper_ldouble_ref(const volatile long double * ref); 


tgr_code_helper_ptr tgr_code_helper_void_ptr_ref(const volatile void * ref); 


tgr_code_helper_ptr tgr_code_helper_object(const volatile void * obj, tgr_type_ptr class_type); 



tgr_code_helper_ptr tgr_code_helper_pointer(const volatile void * value, tgr_type_ptr element_type); 



tgr_code_helper_ptr tgr_code_helper_reference(const volatile void * value, tgr_type_ptr element_type); 



tgr_code_helper_ptr tgr_code_helper_instance(); 


tgr_code_helper_ptr tgr_create_full(const char * name, tgr_run_mode run_mode, const char * file, unsigned line); 
# 476
tgr_code_helper_ptr tgr_create(const char * name, tgr_run_mode run_mode); 
# 1348 "C:\\Program Files\\Parasoft\\C++test\\10.3.2\\engine\\runtime\\include/trigger/c/code_helper.h"
}
# 37 "C:\\Program Files\\Parasoft\\C++test\\10.3.2\\engine\\runtime\\include/trigger/c/handlers.h"
extern "C" {

typedef void (*tgr_error_handler_func_ptr)(const char * trigger_name, unsigned error_kind, const void * details, const char * def_file, unsigned def_line); 
# 45
typedef void (*tgr_fail_handler_func_ptr)(const char * trigger_name, const char * message, const char * def_file, unsigned def_line); 




typedef void (*tgr_report_handler_func_ptr)(const char * trigger_name, const char * message, const char * def_file, unsigned def_line); 
# 86 "C:\\Program Files\\Parasoft\\C++test\\10.3.2\\engine\\runtime\\include/trigger/c/handlers.h"
tgr_error_handler_func_ptr *tgr_get_error_handler(); 


tgr_fail_handler_func_ptr *tgr_get_fail_handler(); 


tgr_report_handler_func_ptr *tgr_get_report_handler(); 


void tgr_handle_error(const char * trigger_name, unsigned error_kind, const void * details, const char * def_file, unsigned def_line); 
# 102
void tgr_handle_fail(const char * trigger_name, const char * message, const char * def_file, unsigned def_line); 
# 108
void tgr_handle_report(const char * trigger_name, const char * message, const char * def_file, unsigned def_line); 
# 296 "C:\\Program Files\\Parasoft\\C++test\\10.3.2\\engine\\runtime\\include/trigger/c/handlers.h"
}
# 15 "C:\\Program Files\\Parasoft\\C++test\\10.3.2\\engine\\runtime\\include/trigger/c/runner.h"
extern "C" {

struct tgr_arg { 

char *name; 
tgr_value value; 
tgr_arg_ptr next; 
}; 

struct tgr_args { 

tgr_arg_ptr first_arg; 
tgr_arg_ptr last_arg; 
unsigned number_of_args; 
}; 

struct tgr_running_data { 

tgr_trigger_ptr trigger; 
unsigned run_id; 
tgr_args args; 
}; 


struct tgr_runner { 

tgr_running_data running_data; 
char *triggerable_name; 
tgr_run_mode run_mode; 
tgr_instruction_ptr prev_instruction; 
tgr_instruction_ptr curr_instruction; 
int in_false_block; 
tgr_value return_value; 
tgr_runner_ptr prev_runner; 
}; 



tgr_arg_ptr tgr_arg_alloc(const char * name, tgr_value value); 


void tgr_arg_destroy(tgr_arg_ptr arg); 


void tgr_args_initialize(tgr_args_ptr args); 


tgr_value tgr_args_get_arg(tgr_args_ptr args, const char * name); 


void tgr_args_clear(tgr_args_ptr args); 


void tgr_args_add(tgr_args_ptr args, const char * name, const tgr_value value); 


tgr_runner_ptr tgr_runner_alloc(const char * triggerable_name, tgr_run_mode run_mode, tgr_runner_ptr prev_runner); 




void tgr_runner_destroy(tgr_runner_ptr runner); 


void tgr_runner_skip_directives(tgr_runner_ptr runner); 


void tgr_runner_go_to_next_instruction(tgr_runner_ptr runner); 


void tgr_runner_get_position_for(tgr_runner_ptr runner, tgr_instruction_ptr instruction, const char ** file, unsigned * line); 
# 91
int tgr_runner_check_for_error_full(tgr_runner_ptr runner, tgr_value_ptr value, const void * details); 




int tgr_runner_check_for_error(tgr_runner_ptr runner, tgr_value_ptr value); 



tgr_value tgr_runner_make_error_full(tgr_runner_ptr runner, tgr_error_kind kind, const void * details); 




tgr_value tgr_runner_make_error(tgr_runner_ptr runner, tgr_error_kind kind); 


int tgr_runner_execute_binary_expression(tgr_runner_ptr runner, tgr_value_ptr left, tgr_value_ptr right, tgr_instruction_ptr instruction); 
# 114
int tgr_runner_execute_unary_expression(tgr_runner_ptr runner, tgr_value_ptr operand, tgr_instruction_ptr instruction); 




int tgr_runner_execute_built_in_function(tgr_runner_ptr runner, tgr_value_ptr arg, tgr_instruction_ptr instruction); 




int tgr_runner_execute_bool_cast(tgr_runner_ptr runner, tgr_value_ptr value); 



int tgr_runner_parse_args(tgr_runner_ptr runner, tgr_args_ptr args); 


tgr_value tgr_runner_parse_primary_expression(tgr_runner_ptr runner); 


tgr_value tgr_runner_parse_postfix_expression(tgr_runner_ptr runner); 


tgr_value tgr_runner_parse_unary_expression(tgr_runner_ptr runner); 


tgr_value tgr_runner_parse_multiplicative_expression(tgr_runner_ptr runner); 


tgr_value tgr_runner_parse_additive_expression(tgr_runner_ptr runner); 


tgr_value tgr_runner_parse_relational_expression(tgr_runner_ptr runner); 


tgr_value tgr_runner_parse_equality_expression(tgr_runner_ptr runner); 


tgr_value tgr_runner_parse_logical_and_expression(tgr_runner_ptr runner); 


tgr_value tgr_runner_parse_logical_or_expression(tgr_runner_ptr runner); 


tgr_value tgr_runner_parse_assignment_expression(tgr_runner_ptr runner); 


void tgr_runner_parse_statement(tgr_runner_ptr runner); 


tgr_value tgr_runner_run(tgr_runner_ptr runner); 


void tgr_runner_add_arg(tgr_runner_ptr runner, const char * name, const tgr_value arg); 
# 884 "C:\\Program Files\\Parasoft\\C++test\\10.3.2\\engine\\runtime\\include/trigger/c/runner.h"
}
# 13 "C:\\Program Files\\Parasoft\\C++test\\10.3.2\\engine\\runtime\\include/trigger/c/runner_helper.h"
extern "C" {


struct tgr_runner_helper { 

tgr_runner_helper_ptr (*WithValueArg)(const char * name, tgr_value value); 

tgr_runner_helper_ptr (*WithCharArg)(const char * name, char c); 

tgr_runner_helper_ptr (*WithSCharArg)(const char * name, signed char sc); 

tgr_runner_helper_ptr (*WithUCharArg)(const char * name, unsigned char uc); 

tgr_runner_helper_ptr (*WithWCharArg)(const char * name, wchar_t w); 

tgr_runner_helper_ptr (*WithShortArg)(const char * name, short s); 

tgr_runner_helper_ptr (*WithUShortArg)(const char * name, unsigned short us); 

tgr_runner_helper_ptr (*WithIntArg)(const char * name, int i); 

tgr_runner_helper_ptr (*WithUIntArg)(const char * name, unsigned ui); 

tgr_runner_helper_ptr (*WithLongArg)(const char * name, long l); 

tgr_runner_helper_ptr (*WithULongArg)(const char * name, unsigned long ul); 

tgr_runner_helper_ptr (*WithLLongArg)(const char * name, long long ll); 

tgr_runner_helper_ptr (*WithULLongArg)(const char * name, unsigned long long ull); 

tgr_runner_helper_ptr (*WithFloatArg)(const char * name, float f); 

tgr_runner_helper_ptr (*WithDoubleArg)(const char * name, double d); 

tgr_runner_helper_ptr (*WithLDoubleArg)(const char * name, long double ld); 

tgr_runner_helper_ptr (*WithFuncArg)(const char * name, tgr_func_ptr func); 

tgr_runner_helper_ptr (*WithObjectArg)(const char * name, const volatile void * obj, tgr_type_ptr type); 



tgr_runner_helper_ptr (*WithVoidPtrArg)(const char * name, const volatile void * ptr); 

tgr_runner_helper_ptr (*WithCharPtrArg)(const char * name, const volatile char * ptr); 

tgr_runner_helper_ptr (*WithSCharPtrArg)(const char * name, const volatile signed char * ptr); 


tgr_runner_helper_ptr (*WithUCharPtrArg)(const char * name, const volatile unsigned char * ptr); 


tgr_runner_helper_ptr (*WithWCharPtrArg)(const char * name, const volatile wchar_t * ptr); 


tgr_runner_helper_ptr (*WithShortPtrArg)(const char * name, const volatile short * ptr); 


tgr_runner_helper_ptr (*WithUShortPtrArg)(const char * name, const volatile unsigned short * ptr); 


tgr_runner_helper_ptr (*WithIntPtrArg)(const char * name, const volatile int * ptr); 

tgr_runner_helper_ptr (*WithUIntPtrArg)(const char * name, const volatile unsigned * ptr); 


tgr_runner_helper_ptr (*WithLongPtrArg)(const char * name, const volatile long * ptr); 

tgr_runner_helper_ptr (*WithULongPtrArg)(const char * name, const volatile unsigned long * ptr); 


tgr_runner_helper_ptr (*WithLLongPtrArg)(const char * name, const volatile long long * ptr); 


tgr_runner_helper_ptr (*WithULLongPtrArg)(const char * name, const volatile unsigned long long * ptr); 


tgr_runner_helper_ptr (*WithFloatPtrArg)(const char * name, const volatile float * ptr); 


tgr_runner_helper_ptr (*WithDoublePtrArg)(const char * name, const volatile double * ptr); 


tgr_runner_helper_ptr (*WithLDoublePtrArg)(const char * name, const volatile long double * ptr); 


tgr_runner_helper_ptr (*WithPtrArg)(const char * name, const volatile void * ptr, tgr_type_ptr element_type); 



tgr_runner_helper_ptr (*WithCharRefArg)(const char * name, const volatile char * ref); 

tgr_runner_helper_ptr (*WithSCharRefArg)(const char * name, const volatile signed char * ref); 


tgr_runner_helper_ptr (*WithUCharRefArg)(const char * name, const volatile unsigned char * ref); 


tgr_runner_helper_ptr (*WithWCharRefArg)(const char * name, const volatile wchar_t * ref); 


tgr_runner_helper_ptr (*WithShortRefArg)(const char * name, const volatile short * ref); 


tgr_runner_helper_ptr (*WithUShortRefArg)(const char * name, const volatile unsigned short * ref); 


tgr_runner_helper_ptr (*WithIntRefArg)(const char * name, const volatile int * ref); 

tgr_runner_helper_ptr (*WithUIntRefArg)(const char * name, const volatile unsigned * ref); 


tgr_runner_helper_ptr (*WithLongRefArg)(const char * name, const volatile long * ref); 

tgr_runner_helper_ptr (*WithULongRefArg)(const char * name, const volatile unsigned long * ref); 


tgr_runner_helper_ptr (*WithLLongRefArg)(const char * name, const volatile long long * ref); 


tgr_runner_helper_ptr (*WithULLongRefArg)(const char * name, const volatile unsigned long long * ref); 


tgr_runner_helper_ptr (*WithFloatRefArg)(const char * name, const volatile float * ref); 


tgr_runner_helper_ptr (*WithDoubleRefArg)(const char * name, const volatile double * ref); 


tgr_runner_helper_ptr (*WithLDoubleRefArg)(const char * name, const volatile long double * ref); 


tgr_runner_helper_ptr (*WithVoidPtrRefArg)(const char * name, const volatile void * ref); 


tgr_runner_helper_ptr (*WithPtrRefArg)(const char * name, const volatile void * ptr, tgr_type_ptr element_type); 



tgr_runner_helper_ptr (*WithRefArg)(const char * name, const volatile void * ptr, tgr_type_ptr element_type); 



tgr_value (*End)(void); 
}; 


tgr_runner_ptr *tgr_get_curr_runner(); 


tgr_runner_helper_ptr tgr_runner_helper_with_value_arg(const char * name, tgr_value arg); 



tgr_runner_helper_ptr tgr_runner_helper_with_char_arg(const char * name, char c); 


tgr_runner_helper_ptr tgr_runner_helper_with_schar_arg(const char * name, signed char sc); 


tgr_runner_helper_ptr tgr_runner_helper_with_uchar_arg(const char * name, unsigned char uc); 



tgr_runner_helper_ptr tgr_runner_helper_with_wchar_t_arg(const char * name, wchar_t w); 



tgr_runner_helper_ptr tgr_runner_helper_with_short_arg(const char * name, short s); 


tgr_runner_helper_ptr tgr_runner_helper_with_ushort_arg(const char * name, unsigned short us); 



tgr_runner_helper_ptr tgr_runner_helper_with_int_arg(const char * name, int i); 


tgr_runner_helper_ptr tgr_runner_helper_with_uint_arg(const char * name, unsigned ui); 



tgr_runner_helper_ptr tgr_runner_helper_with_long_arg(const char * name, long l); 


tgr_runner_helper_ptr tgr_runner_helper_with_ulong_arg(const char * name, unsigned long ul); 



tgr_runner_helper_ptr tgr_runner_helper_with_llong_arg(const char * name, long long ll); 



tgr_runner_helper_ptr tgr_runner_helper_with_ullong_arg(const char * name, unsigned long long ull); 



tgr_runner_helper_ptr tgr_runner_helper_with_float_arg(const char * name, float f); 


tgr_runner_helper_ptr tgr_runner_helper_with_double_arg(const char * name, double d); 


tgr_runner_helper_ptr tgr_runner_helper_with_ldouble_arg(const char * name, long double ld); 



tgr_runner_helper_ptr tgr_runner_helper_with_func_arg(const char * name, tgr_func_ptr func); 



tgr_runner_helper_ptr tgr_runner_helper_with_object_arg(const char * name, const volatile void * obj, tgr_type_ptr class_type); 



tgr_runner_helper_ptr tgr_runner_helper_with_void_ptr_arg(const char * name, const volatile void * ptr); 



tgr_runner_helper_ptr tgr_runner_helper_with_char_ptr_arg(const char * name, const volatile char * ptr); 



tgr_runner_helper_ptr tgr_runner_helper_with_schar_ptr_arg(const char * name, const volatile signed char * ptr); 




tgr_runner_helper_ptr tgr_runner_helper_with_uchar_ptr_arg(const char * name, const volatile unsigned char * ptr); 




tgr_runner_helper_ptr tgr_runner_helper_with_wchar_t_ptr_arg(const char * name, const volatile wchar_t * ptr); 




tgr_runner_helper_ptr tgr_runner_helper_with_short_ptr_arg(const char * name, const volatile short * ptr); 



tgr_runner_helper_ptr tgr_runner_helper_with_ushort_ptr_arg(const char * name, const volatile unsigned short * ptr); 




tgr_runner_helper_ptr tgr_runner_helper_with_int_ptr_arg(const char * name, const volatile int * ptr); 



tgr_runner_helper_ptr tgr_runner_helper_with_uint_ptr_arg(const char * name, const volatile unsigned * ptr); 




tgr_runner_helper_ptr tgr_runner_helper_with_long_ptr_arg(const char * name, const volatile long * ptr); 



tgr_runner_helper_ptr tgr_runner_helper_with_ulong_ptr_arg(const char * name, const volatile unsigned long * ptr); 




tgr_runner_helper_ptr tgr_runner_helper_with_llong_ptr_arg(const char * name, const volatile long long * ptr); 




tgr_runner_helper_ptr tgr_runner_helper_with_ullong_ptr_arg(const char * name, const volatile unsigned long long * ptr); 




tgr_runner_helper_ptr tgr_runner_helper_with_float_ptr_arg(const char * name, const volatile float * ptr); 



tgr_runner_helper_ptr tgr_runner_helper_with_double_ptr_arg(const char * name, const volatile double * ptr); 




tgr_runner_helper_ptr tgr_runner_helper_with_ldouble_ptr_arg(const char * name, const volatile long double * ptr); 




tgr_runner_helper_ptr tgr_runner_helper_with_ptr_arg(const char * name, const volatile void * ptr, tgr_type_ptr element_type); 




tgr_runner_helper_ptr tgr_runner_helper_with_char_ref_arg(const char * name, const volatile char * ref); 



tgr_runner_helper_ptr tgr_runner_helper_with_schar_ref_arg(const char * name, const volatile signed char * ref); 




tgr_runner_helper_ptr tgr_runner_helper_with_uchar_ref_arg(const char * name, const volatile unsigned char * ref); 




tgr_runner_helper_ptr tgr_runner_helper_with_wchar_t_ref_arg(const char * name, const volatile wchar_t * ref); 




tgr_runner_helper_ptr tgr_runner_helper_with_short_ref_arg(const char * name, const volatile short * ref); 



tgr_runner_helper_ptr tgr_runner_helper_with_ushort_ref_arg(const char * name, const volatile unsigned short * ref); 




tgr_runner_helper_ptr tgr_runner_helper_with_int_ref_arg(const char * name, const volatile int * ref); 



tgr_runner_helper_ptr tgr_runner_helper_with_uint_ref_arg(const char * name, const volatile unsigned * ref); 




tgr_runner_helper_ptr tgr_runner_helper_with_long_ref_arg(const char * name, const volatile long * ref); 



tgr_runner_helper_ptr tgr_runner_helper_with_ulong_ref_arg(const char * name, const volatile unsigned long * ref); 




tgr_runner_helper_ptr tgr_runner_helper_with_llong_ref_arg(const char * name, const volatile long long * ref); 




tgr_runner_helper_ptr tgr_runner_helper_with_ullong_ref_arg(const char * name, const volatile unsigned long long * ref); 




tgr_runner_helper_ptr tgr_runner_helper_with_float_ref_arg(const char * name, const volatile float * ref); 



tgr_runner_helper_ptr tgr_runner_helper_with_double_ref_arg(const char * name, const volatile double * ref); 




tgr_runner_helper_ptr tgr_runner_helper_with_ldouble_ref_arg(const char * name, const volatile long double * ref); 




tgr_runner_helper_ptr tgr_runner_helper_with_void_ptr_ref_arg(const char * name, const volatile void * ref); 




tgr_runner_helper_ptr tgr_runner_helper_with_ptr_ref_arg(const char * name, const volatile void * ref, tgr_type_ptr element_type); 
# 389
tgr_runner_helper_ptr tgr_runner_helper_with_ref_arg(const char * name, const volatile void * ref, tgr_type_ptr element_type); 




tgr_value tgr_runner_helper_end(); 


tgr_runner_helper_ptr tgr_runner_helper_instance(); 


tgr_runner_helper_ptr tgr_run(const char * name, tgr_run_mode run_mode); 
# 914 "C:\\Program Files\\Parasoft\\C++test\\10.3.2\\engine\\runtime\\include/trigger/c/runner_helper.h"
}
# 13 "C:\\Program Files\\Parasoft\\C++test\\10.3.2\\engine\\runtime\\include/trigger/cpp/Value.h"
namespace trigger { 

struct Value : public tgr_value { 

Value(tgr_type_ptr type_) 
{ 
type = type_; 
} 

Value(const tgr_value &value) 
{ 
*((tgr_value_s *)this) = value; 
} 

bool IsInteger() 
{ 
return ((type->vtbl->is_integer)(this)) ? true : false; 
} 

bool IsFloating() 
{ 
return ((type->vtbl->is_floating)(this)) ? true : false; 
} 

bool IsPointer() 
{ 
return ((type->vtbl->is_pointer)(this)) ? true : false; 
} 

bool IsFuncPointer() 
{ 
return ((type->vtbl->is_func_pointer)(this)) ? true : false; 
} 

bool IsObject() 
{ 
return ((type->vtbl->is_object)(this)) ? true : false; 
} 

bool IsVoid() 
{ 
return ((type->vtbl->is_void)(this)) ? true : false; 
} 

bool IsError() 
{ 
return ((type->vtbl->is_error)(this)) ? true : false; 
} 

long long GetInteger() 
{ 
return (type->vtbl->get_integer)(this); 
} 

bool GetBool() 
{ 
return ((type->vtbl->get_bool)(this)) ? true : false; 
} 

long double GetFloating() 
{ 
return (type->vtbl->get_floating)(this); 
} 

void *GetPointer() 
{ 
return (type->vtbl->get_pointer)(this); 
} 

tgr_func_ptr GetFuncPointer() 
{ 
return (type->vtbl->get_func_pointer)(this); 
} 

const char *GetString() 
{ 
return (type->vtbl->get_string)(this); 
} 

Value GetBoolValue() 
{ 
return (type->vtbl->get_bool_value)(this); 
} 

Value IsEqual(Value &right) 
{ 
return (type->vtbl->is_equal)(this, &right); 
} 

Value IsNotEqual(Value &right) 
{ 
return ((Value)((type->vtbl->is_equal)(this, &right))).DoNot(); 
} 

Value IsGreater(Value &right) 
{ 
return (type->vtbl->is_greater)(this, &right); 
} 

Value IsGreaterOrEqual(Value &right) 
{ 
return (type->vtbl->is_greater_or_equal)(this, &right); 
} 

Value IsLess(Value &right) 
{ 
return (type->vtbl->is_greater_or_equal)(&right, this); 
} 

Value IsLessOrEqual(Value &right) 
{ 
return (type->vtbl->is_greater)(&right, this); 
} 

Value DoAssign(Value &right) 
{ 
return (type->vtbl->do_assign)(this, &right); 
} 

Value DoRefAssign(Value &right) 
{ 
return (type->vtbl->do_ref_assign)(this, &right); 
} 

Value DoNot() 
{ 
return (type->vtbl->do_not)(this); 
} 

Value GetField(Value &fieldName) 
{ 
return (type->vtbl->get_field)(this, &fieldName); 
} 

Value DoAt(Value &index) 
{ 
return (type->vtbl->do_at)(this, &index); 
} 


}; 

}
# 17 "C:\\Program Files\\Parasoft\\C++test\\10.3.2\\engine\\runtime\\include/trigger/cpp/BoolType.h"
tgr_type_ptr tgr_bool_type(); 


tgr_value tgr_bool(bool b); 


tgr_value tgr_bool_ptr(const volatile bool * ptr); 


tgr_value tgr_bool_ref(const volatile bool * ptr); 
# 15 "C:\\Program Files\\Parasoft\\C++test\\10.3.2\\engine\\runtime\\include/trigger/cpp/LValue.h"
namespace trigger { 

class LValue : public Value { 


public: LValue(const volatile bool *ptr) : Value(tgr_bool_ref(ptr)) 
{ 
} 

LValue(const volatile char *ptr) : Value(tgr_char_ref(ptr)) 
{ 
} 

LValue(const volatile unsigned char *ptr) : Value(tgr_uchar_ref(ptr)) 
{ 
} 

LValue(const volatile signed char *ptr) : Value(tgr_schar_ref(ptr)) 
{ 
} 

LValue(const volatile short *ptr) : Value(tgr_short_ref(ptr)) 
{ 
} 

LValue(const volatile unsigned short *ptr) : Value(tgr_ushort_ref(ptr)) 
{ 
} 

LValue(const volatile int *ptr) : Value(tgr_int_ref(ptr)) 
{ 
} 

LValue(const volatile unsigned *ptr) : Value(tgr_uint_ref(ptr)) 
{ 
} 

LValue(const volatile long *ptr) : Value(tgr_long_ref(ptr)) 
{ 
} 

LValue(const unsigned long *ptr) : Value(tgr_ulong_ref(ptr)) 
{ 
} 


LValue(const volatile long long *ptr) : Value(tgr_llong_ref(ptr)) 
{ 
} 

LValue(const volatile unsigned long long *ptr) : Value(tgr_ullong_ref(ptr)) 
{ 
} 


LValue(const volatile float *ptr) : Value(tgr_float_ref(ptr)) 
{ 
} 


LValue(const volatile double *ptr) : Value(tgr_double_ref(ptr)) 
{ 
} 



LValue(const volatile long double *ptr) : Value(tgr_ldouble_ref(ptr)) 
{ 
} 


LValue(const volatile void *ptr) : Value(tgr_void_ptr_ref(ptr)) 
{ 
} 
}; 




}
# 13 "C:\\Program Files\\Parasoft\\C++test\\10.3.2\\engine\\runtime\\include/trigger/cpp/RValue.h"
namespace trigger { 

class RValue : public Value { 


public: RValue(Value value) : Value(value) 
{ 
} 

RValue(tgr_value value) : Value(value) 
{ 
} 

RValue(bool value) : Value(tgr_bool(value)) 
{ 
} 

RValue(char value) : Value(tgr_char(value)) 
{ 
} 

RValue(unsigned char value) : Value(tgr_uchar(value)) 
{ 
} 

RValue(signed char value) : Value(tgr_schar(value)) 
{ 
} 

RValue(short value) : Value(tgr_short(value)) 
{ 
} 

RValue(unsigned short value) : Value(tgr_ushort(value)) 
{ 
} 

RValue(int value) : Value(tgr_int(value)) 
{ 
} 

RValue(unsigned value) : Value(tgr_uint(value)) 
{ 
} 

RValue(long value) : Value(tgr_long(value)) 
{ 
} 

RValue(unsigned long value) : Value(tgr_ulong(value)) 
{ 
} 


RValue(long long value) : Value(tgr_llong(value)) 
{ 
} 

RValue(unsigned long long value) : Value(tgr_ullong(value)) 
{ 
} 


RValue(float value) : Value(tgr_float(value)) 
{ 
} 


RValue(double value) : Value(tgr_double(value)) 
{ 
} 



RValue(long double value) : Value(tgr_ldouble(value)) 
{ 
} 


RValue(const volatile void *value) : Value(tgr_void_ptr(value)) 
{ 
} 

RValue(const volatile bool *value) : Value(tgr_bool_ptr(value)) 
{ 
} 

RValue(const volatile char *value) : Value(tgr_char_ptr(value)) 
{ 
} 

RValue(const volatile unsigned char *value) : Value(tgr_uchar_ptr(value)) 
{ 
} 

RValue(const volatile signed char *value) : Value(tgr_schar_ptr(value)) 
{ 
} 

RValue(const volatile short *value) : Value(tgr_short_ptr(value)) 
{ 
} 

RValue(const volatile unsigned short *value) : Value(tgr_ushort_ptr(value)) 
{ 
} 

RValue(const volatile int *value) : Value(tgr_int_ptr(value)) 
{ 
} 

RValue(const volatile unsigned *value) : Value(tgr_uint_ptr(value)) 
{ 
} 

RValue(const volatile long *value) : Value(tgr_long_ptr(value)) 
{ 
} 

RValue(const volatile unsigned long *value) : Value(tgr_ulong_ptr(value)) 
{ 
} 


RValue(const volatile long long *value) : Value(tgr_llong_ptr(value)) 
{ 
} 

RValue(const volatile unsigned long long *value) : Value(tgr_ullong_ptr(value)) 
{ 
} 


RValue(const volatile float *value) : Value(tgr_float_ptr(value)) 
{ 
} 


RValue(const volatile double *value) : Value(tgr_double_ptr(value)) 
{ 
} 



RValue(const volatile long double *value) : Value(tgr_ldouble_ptr(value)) 
{ 
} 


RValue(tgr_func_ptr func) : Value(tgr_func(func)) 
{ 
} 

RValue(const volatile void *obj, tgr_type_ptr type) : Value(tgr_object(obj, type)) 
{ 
} 

RValue(LValue &value) : Value(value) 
{ 
} 
}; 



}
# 15 "C:\\Program Files\\Parasoft\\C++test\\10.3.2\\engine\\runtime\\include/trigger/cpp/Code.h"
namespace trigger { 

class CodeHelper { 



public: CodeHelper(tgr_code_ptr code) : mCode(code) 

{ 
} 

CodeHelper &Assert(const char *message) 
{ 
tgr_code_add_instruction_with_arg(mCode, c_tgr_instruction_assert, tgr_char_ptr(message)); 
return *this; 
} 

CodeHelper &Fail(const char *message) 
{ 
tgr_code_add_instruction_with_arg(mCode, c_tgr_instruction_fail, tgr_char_ptr(message)); 
return *this; 
} 

CodeHelper &Report(const char *message) 
{ 
tgr_code_add_instruction_with_arg(mCode, c_tgr_instruction_report, tgr_char_ptr(message)); 
return *this; 
} 

CodeHelper &ArgByExpr() 
{ 
tgr_code_add_instruction(mCode, c_tgr_instruction_arg); 
return *this; 
} 

CodeHelper &Arg(const char *argName) 
{ 
tgr_code_add_instruction_with_arg(mCode, c_tgr_instruction_arg, tgr_char_ptr(argName)); 
return *this; 
} 

CodeHelper &FieldByExpr() 
{ 
tgr_code_add_instruction(mCode, c_tgr_instruction_field); 
return *this; 
} 

CodeHelper &Field(const char *fieldName) 
{ 
tgr_code_add_instruction_with_arg(mCode, c_tgr_instruction_field, tgr_char_ptr(fieldName)); 
return *this; 
} 

CodeHelper &If() 
{ 
tgr_code_add_instruction(mCode, c_tgr_instruction_if); 
return *this; 
} 

CodeHelper &Else() 
{ 
tgr_code_add_instruction(mCode, c_tgr_instruction_else); 
return *this; 
} 

CodeHelper &Assign() 
{ 
tgr_code_add_instruction(mCode, c_tgr_instruction_assign); 
return *this; 
} 

CodeHelper &Assign(RValue value) 
{ 
tgr_code_add_instruction_with_arg(mCode, c_tgr_instruction_assign, value); 
return *this; 
} 

CodeHelper &Or() 
{ 
tgr_code_add_instruction(mCode, c_tgr_instruction_or); 
return *this; 
} 

CodeHelper &Or(RValue value) 
{ 
tgr_code_add_instruction_with_arg(mCode, c_tgr_instruction_or, value); 
return *this; 
} 

CodeHelper &And() 
{ 
tgr_code_add_instruction(mCode, c_tgr_instruction_and); 
return *this; 
} 

CodeHelper &And(RValue value) 
{ 
tgr_code_add_instruction_with_arg(mCode, c_tgr_instruction_and, value); 
return *this; 
} 

CodeHelper &Equal() 
{ 
tgr_code_add_instruction(mCode, c_tgr_instruction_equal); 
return *this; 
} 

CodeHelper &Equal(RValue value) 
{ 
tgr_code_add_instruction_with_arg(mCode, c_tgr_instruction_equal, value); 
return *this; 
} 

CodeHelper &NotEqual() 
{ 
tgr_code_add_instruction(mCode, c_tgr_instruction_not_equal); 
return *this; 
} 

CodeHelper &NotEqual(RValue value) 
{ 
tgr_code_add_instruction_with_arg(mCode, c_tgr_instruction_not_equal, value); 
return *this; 
} 

CodeHelper &Greater() 
{ 
tgr_code_add_instruction(mCode, c_tgr_instruction_greater); 

return *this; 
} 

CodeHelper &Greater(RValue value) 
{ 
tgr_code_add_instruction_with_arg(mCode, c_tgr_instruction_greater, value); 
return *this; 
} 

CodeHelper &GreaterOrEqual() 
{ 
tgr_code_add_instruction(mCode, c_tgr_instruction_greater_or_equal); 
return *this; 
} 

CodeHelper &GreaterOrEqual(RValue value) 
{ 
tgr_code_add_instruction_with_arg(mCode, c_tgr_instruction_greater_or_equal, value); 
return *this; 
} 

CodeHelper &Less() 
{ 
tgr_code_add_instruction(mCode, c_tgr_instruction_less); 
return *this; 
} 

CodeHelper &Less(RValue value) 
{ 
tgr_code_add_instruction_with_arg(mCode, c_tgr_instruction_less, value); 
return *this; 
} 

CodeHelper &LessOrEqual() 
{ 
tgr_code_add_instruction(mCode, c_tgr_instruction_less_or_equal); 
return *this; 
} 

CodeHelper &LessOrEqual(RValue value) 
{ 
tgr_code_add_instruction_with_arg(mCode, c_tgr_instruction_less_or_equal, value); 
return *this; 
} 

CodeHelper &Multiply() 
{ 
tgr_code_add_instruction(mCode, c_tgr_instruction_multiply); 
return *this; 
} 

CodeHelper &Multiply(RValue value) 
{ 
tgr_code_add_instruction_with_arg(mCode, c_tgr_instruction_multiply, value); 
return *this; 
} 

CodeHelper &Divide() 
{ 
tgr_code_add_instruction(mCode, c_tgr_instruction_divide); 
return *this; 
} 

CodeHelper &Divide(RValue value) 
{ 
tgr_code_add_instruction_with_arg(mCode, c_tgr_instruction_divide, value); 
return *this; 
} 

CodeHelper &Plus() 
{ 
tgr_code_add_instruction(mCode, c_tgr_instruction_plus); 
return *this; 
} 

CodeHelper &Plus(RValue value) 
{ 
tgr_code_add_instruction_with_arg(mCode, c_tgr_instruction_plus, value); 
return *this; 
} 

CodeHelper &Minus() 
{ 
tgr_code_add_instruction(mCode, c_tgr_instruction_minus); 
return *this; 
} 

CodeHelper &Minus(RValue value) 
{ 
tgr_code_add_instruction_with_arg(mCode, c_tgr_instruction_minus, value); 
return *this; 
} 

CodeHelper &Not() 
{ 
tgr_code_add_instruction(mCode, c_tgr_instruction_not); 
return *this; 
} 

CodeHelper &At() 
{ 
tgr_code_add_instruction(mCode, c_tgr_instruction_at); 
return *this; 
} 

CodeHelper &At(RValue value) 
{ 
tgr_code_add_instruction_with_arg(mCode, c_tgr_instruction_at, value); 
return *this; 
} 

CodeHelper &Inc() 
{ 
tgr_code_add_instruction(mCode, c_tgr_instruction_inc); 
return *this; 
} 

CodeHelper &Inc(RValue value) 
{ 
tgr_code_add_instruction_with_arg(mCode, c_tgr_instruction_inc, value); 
return *this; 
} 

CodeHelper &Dec() 
{ 
tgr_code_add_instruction(mCode, c_tgr_instruction_dec); 
return *this; 
} 

CodeHelper &Dec(RValue value) 
{ 
tgr_code_add_instruction_with_arg(mCode, c_tgr_instruction_dec, value); 
return *this; 
} 

CodeHelper &Value(RValue value) 
{ 
tgr_code_add_instruction_with_arg(mCode, c_tgr_instruction_value, value); 
return *this; 
} 

CodeHelper &LP() 
{ 
tgr_code_add_instruction(mCode, c_tgr_instruction_left_paren); 
return *this; 
} 

CodeHelper &RP() 
{ 
tgr_code_add_instruction(mCode, c_tgr_instruction_right_paren); 
return *this; 
} 

CodeHelper &RunId() 
{ 
tgr_code_add_instruction(mCode, c_tgr_instruction_run_id); 
return *this; 
} 


CodeHelper &Execute(tgr_external_func_ptr function) 
{ 
tgr_code_add_instruction_with_arg(mCode, c_tgr_instruction_execute, (tgr_func((tgr_func_ptr)function))); 
return *this; 
} 

CodeHelper &WithArg(const char *name) 
{ 
tgr_code_add_instruction_with_arg(mCode, c_tgr_instruction_with_arg, tgr_char_ptr(name)); 
return *this; 
} 

CodeHelper &WithArg(const char *name, RValue value) 
{ 
tgr_code_add_instruction_with_arg(mCode, c_tgr_instruction_with_arg, tgr_char_ptr(name)); 
tgr_code_add_instruction_with_arg(mCode, c_tgr_instruction_value, value); 
return *this; 
} 

CodeHelper &Return() 
{ 
tgr_code_add_instruction(mCode, c_tgr_instruction_return); 
return *this; 
} 

CodeHelper &Return(RValue value) 
{ 
tgr_code_add_instruction_with_arg(mCode, c_tgr_instruction_return, value); 
return *this; 
} 

CodeHelper &LB() 
{ 
tgr_code_add_instruction(mCode, c_tgr_instruction_left_brace); 
return *this; 
} 

CodeHelper &RB() 
{ 
tgr_code_add_instruction(mCode, c_tgr_instruction_right_brace); 
return *this; 
} 

CodeHelper &FileLine(const char *file, unsigned line) 
{ 
tgr_code_add_instruction_with_arg(mCode, c_tgr_instruction_line_directive, tgr_pos(file, line)); 
return *this; 
} 

CodeHelper &Line(unsigned line) 
{ 
return this->FileLine(0, line); 
} 

CodeHelper &Char(char c) 
{ 
tgr_code_add_instruction_with_arg(mCode, c_tgr_instruction_value, tgr_char(c)); 
return *this; 
} 

CodeHelper &SChar(signed char sc) 
{ 
tgr_code_add_instruction_with_arg(mCode, c_tgr_instruction_value, tgr_schar(sc)); 
return *this; 
} 

CodeHelper &UChar(unsigned char uc) 
{ 
tgr_code_add_instruction_with_arg(mCode, c_tgr_instruction_value, tgr_uchar(uc)); 
return *this; 
} 

CodeHelper &WChar(wchar_t w) 
{ 
tgr_code_add_instruction_with_arg(mCode, c_tgr_instruction_value, tgr_wchar_t(w)); 
return *this; 
} 

CodeHelper &Short(short s) 
{ 
tgr_code_add_instruction_with_arg(mCode, c_tgr_instruction_value, tgr_short(s)); 
return *this; 
} 

CodeHelper &UShort(unsigned short us) 
{ 
tgr_code_add_instruction_with_arg(mCode, c_tgr_instruction_value, tgr_ushort(us)); 
return *this; 
} 

CodeHelper &Int(int i) 
{ 
tgr_code_add_instruction_with_arg(mCode, c_tgr_instruction_value, tgr_int(i)); 
return *this; 
} 

CodeHelper &UInt(unsigned ui) 
{ 
tgr_code_add_instruction_with_arg(mCode, c_tgr_instruction_value, tgr_uint(ui)); 
return *this; 
} 

CodeHelper &Long(long l) 
{ 
tgr_code_add_instruction_with_arg(mCode, c_tgr_instruction_value, tgr_long(l)); 
return *this; 
} 

CodeHelper &ULong(unsigned long ul) 
{ 
tgr_code_add_instruction_with_arg(mCode, c_tgr_instruction_value, tgr_ulong(ul)); 
return *this; 
} 

CodeHelper &LLong(long long ll) 
{ 
tgr_code_add_instruction_with_arg(mCode, c_tgr_instruction_value, tgr_llong(ll)); 
return *this; 
} 

CodeHelper &ULLong(unsigned long long ull) 
{ 
tgr_code_add_instruction_with_arg(mCode, c_tgr_instruction_value, tgr_ullong(ull)); 
return *this; 
} 

CodeHelper &Float(float f) 
{ 
tgr_code_add_instruction_with_arg(mCode, c_tgr_instruction_value, tgr_float(f)); 
return *this; 
} 

CodeHelper &Double(double d) 
{ 
tgr_code_add_instruction_with_arg(mCode, c_tgr_instruction_value, tgr_double(d)); 
return *this; 
} 

CodeHelper &LDouble(long double ld) 
{ 
tgr_code_add_instruction_with_arg(mCode, c_tgr_instruction_value, tgr_ldouble(ld)); 
return *this; 
} 

CodeHelper &Func(tgr_func_ptr func) 
{ 
tgr_code_add_instruction_with_arg(mCode, c_tgr_instruction_value, tgr_func(func)); 
return *this; 
} 

CodeHelper &VoidPtr(const void *ptr) 
{ 
tgr_code_add_instruction_with_arg(mCode, c_tgr_instruction_value, tgr_void_ptr(ptr)); 
return *this; 
} 

CodeHelper &CharPtr(const volatile char *ptr) 
{ 
tgr_code_add_instruction_with_arg(mCode, c_tgr_instruction_value, tgr_char_ptr(ptr)); 
return *this; 
} 

CodeHelper &SCharPtr(const volatile signed char *ptr) 
{ 
tgr_code_add_instruction_with_arg(mCode, c_tgr_instruction_value, tgr_schar_ptr(ptr)); 
return *this; 
} 

CodeHelper &UCharPtr(const volatile unsigned char *ptr) 
{ 
tgr_code_add_instruction_with_arg(mCode, c_tgr_instruction_value, tgr_uchar_ptr(ptr)); 
return *this; 
} 

CodeHelper &WCharPtr(const volatile wchar_t *ptr) 
{ 
tgr_code_add_instruction_with_arg(mCode, c_tgr_instruction_value, tgr_wchar_t_ptr(ptr)); 
return *this; 
} 

CodeHelper &ShortPtr(const volatile short *ptr) 
{ 
tgr_code_add_instruction_with_arg(mCode, c_tgr_instruction_value, tgr_short_ptr(ptr)); 
return *this; 
} 

CodeHelper &UShortPtr(const volatile unsigned short *ptr) 
{ 
tgr_code_add_instruction_with_arg(mCode, c_tgr_instruction_value, tgr_ushort_ptr(ptr)); 
return *this; 
} 

CodeHelper &IntPtr(const volatile int *ptr) 
{ 
tgr_code_add_instruction_with_arg(mCode, c_tgr_instruction_value, tgr_int_ptr(ptr)); 
return *this; 
} 

CodeHelper &UIntPtr(const volatile unsigned *ptr) 
{ 
tgr_code_add_instruction_with_arg(mCode, c_tgr_instruction_value, tgr_uint_ptr(ptr)); 
return *this; 
} 

CodeHelper &LongPtr(const volatile long *ptr) 
{ 
tgr_code_add_instruction_with_arg(mCode, c_tgr_instruction_value, tgr_long_ptr(ptr)); 
return *this; 
} 

CodeHelper &ULongPtr(const volatile unsigned long *ptr) 
{ 
tgr_code_add_instruction_with_arg(mCode, c_tgr_instruction_value, tgr_ulong_ptr(ptr)); 
return *this; 
} 

CodeHelper &LLongPtr(const volatile long long *ptr) 
{ 
tgr_code_add_instruction_with_arg(mCode, c_tgr_instruction_value, tgr_llong_ptr(ptr)); 
return *this; 
} 

CodeHelper &ULLongPtr(const volatile unsigned long long *ptr) 
{ 
tgr_code_add_instruction_with_arg(mCode, c_tgr_instruction_value, tgr_ullong_ptr(ptr)); 
return *this; 
} 

CodeHelper &FloatPtr(const volatile float *ptr) 
{ 
tgr_code_add_instruction_with_arg(mCode, c_tgr_instruction_value, tgr_float_ptr(ptr)); 
return *this; 
} 

CodeHelper &DoublePtr(const volatile double *ptr) 
{ 
tgr_code_add_instruction_with_arg(mCode, c_tgr_instruction_value, tgr_double_ptr(ptr)); 
return *this; 
} 

CodeHelper &LDoublePtr(const volatile long double *ptr) 
{ 
tgr_code_add_instruction_with_arg(mCode, c_tgr_instruction_value, tgr_ldouble_ptr(ptr)); 
return *this; 
} 

CodeHelper &CharRef(const volatile char *ref) 
{ 
tgr_code_add_instruction_with_arg(mCode, c_tgr_instruction_value, tgr_char_ref(ref)); 
return *this; 
} 

CodeHelper &SCharRef(const volatile signed char *ref) 
{ 
tgr_code_add_instruction_with_arg(mCode, c_tgr_instruction_value, tgr_schar_ref(ref)); 
return *this; 
} 

CodeHelper &UCharRef(const volatile unsigned char *ref) 
{ 
tgr_code_add_instruction_with_arg(mCode, c_tgr_instruction_value, tgr_uchar_ref(ref)); 
return *this; 
} 

CodeHelper &WCharRef(const volatile wchar_t *ref) 
{ 
tgr_code_add_instruction_with_arg(mCode, c_tgr_instruction_value, tgr_wchar_t_ref(ref)); 
return *this; 
} 

CodeHelper &ShortRef(const volatile short *ref) 
{ 
tgr_code_add_instruction_with_arg(mCode, c_tgr_instruction_value, tgr_short_ref(ref)); 
return *this; 
} 

CodeHelper &UShortRef(const volatile unsigned short *ref) 
{ 
tgr_code_add_instruction_with_arg(mCode, c_tgr_instruction_value, tgr_ushort_ref(ref)); 
return *this; 
} 

CodeHelper &IntRef(const volatile int *ref) 
{ 
tgr_code_add_instruction_with_arg(mCode, c_tgr_instruction_value, tgr_int_ref(ref)); 
return *this; 
} 

CodeHelper &UIntRef(const volatile unsigned *ref) 
{ 
tgr_code_add_instruction_with_arg(mCode, c_tgr_instruction_value, tgr_uint_ref(ref)); 
return *this; 
} 

CodeHelper &LongRef(const volatile long *ref) 
{ 
tgr_code_add_instruction_with_arg(mCode, c_tgr_instruction_value, tgr_long_ref(ref)); 
return *this; 
} 

CodeHelper &ULongRef(const volatile unsigned long *ref) 
{ 
tgr_code_add_instruction_with_arg(mCode, c_tgr_instruction_value, tgr_ulong_ref(ref)); 
return *this; 
} 

CodeHelper &LLongRef(const volatile long long *ref) 
{ 
tgr_code_add_instruction_with_arg(mCode, c_tgr_instruction_value, tgr_llong_ref(ref)); 
return *this; 
} 

CodeHelper &ULLongRef(const volatile unsigned long long *ref) 
{ 
tgr_code_add_instruction_with_arg(mCode, c_tgr_instruction_value, tgr_ullong_ref(ref)); 
return *this; 
} 

CodeHelper &FloatRef(const volatile float *ref) 
{ 
tgr_code_add_instruction_with_arg(mCode, c_tgr_instruction_value, tgr_float_ref(ref)); 
return *this; 
} 

CodeHelper &DoubleRef(const volatile double *ref) 
{ 
tgr_code_add_instruction_with_arg(mCode, c_tgr_instruction_value, tgr_double_ref(ref)); 
return *this; 
} 

CodeHelper &LDoubleRef(const volatile long double *ref) 
{ 
tgr_code_add_instruction_with_arg(mCode, c_tgr_instruction_value, tgr_ldouble_ref(ref)); 
return *this; 
} 

CodeHelper &VoidPtrRef(const volatile void *ref) 
{ 
tgr_code_add_instruction_with_arg(mCode, c_tgr_instruction_value, tgr_void_ptr_ref(ref)); 
return *this; 
} 

CodeHelper &Object(const volatile void *obj, tgr_type_ptr class_type) 
{ 
tgr_code_add_instruction_with_arg(mCode, c_tgr_instruction_value, tgr_object(obj, class_type)); 
return *this; 
} 

CodeHelper &Ptr(const volatile void *value, tgr_type_ptr element_type) 
{ 
tgr_code_add_instruction_with_arg(mCode, c_tgr_instruction_value, tgr_object(value, tgr_ptr_type(element_type))); 


return *this; 
} 

CodeHelper &Ref(const volatile void *value, tgr_type_ptr element_type) 
{ 
tgr_code_add_instruction_with_arg(mCode, c_tgr_instruction_value, tgr_object(value, tgr_ref_type(element_type))); 


return *this; 
} 

CodeHelper *operator->() 
{ 
return this; 
} 



private: tgr_code_ptr mCode; 
}; 


class Manager { 



public: static CodeHelper CreateTrigger(const char *name, tgr_run_mode 
run_mode, const char *
file, unsigned 
line) 
{ 
tgr_trigger_ptr trigger = tgr_add(name, run_mode); 
CodeHelper codeHelper(&(trigger->code)); 
if (file) { 
codeHelper.FileLine(file, line); 
}  
return codeHelper; 
} 

static CodeHelper CreateTrigger(const char *name, tgr_run_mode run_mode) 
{ 
return CreateTrigger(name, run_mode, 0, 0); 
} 

}; 


}
# 13 "C:\\Program Files\\Parasoft\\C++test\\10.3.2\\engine\\runtime\\include/trigger/cpp/Runner.h"
namespace trigger { 


class RunnerHelper { 


public: RunnerHelper(const char *name, tgr_run_mode run_mode) : mRunner(tgr_runner_alloc(name, run_mode, 0)) 

{ 
} 

RunnerHelper(const RunnerHelper &other) : mRunner(other.mRunner) 

{ 
((RunnerHelper &)other).mRunner = 0; 
} 

RunnerHelper &WithArg(const char *name, RValue value) 
{ 
if (mRunner) { 
tgr_runner_add_arg(mRunner, name, value); 
}  
return *this; 
} 

RunnerHelper &WithArg(const char *name, const volatile void *obj, tgr_type_ptr type) 
{ 
if (mRunner) { 
tgr_runner_add_arg(mRunner, name, tgr_object(obj, type)); 
}  
return *this; 
} 

RunnerHelper &WithIntArg(const char *name, int value) 
{ 
if (mRunner) { 
tgr_runner_add_arg(mRunner, name, tgr_int(value)); 
}  
return *this; 
} 

RunnerHelper &WithRefArg(const char *name, const volatile void *ref, tgr_type_ptr type) 
{ 
if (mRunner) { 
tgr_runner_add_arg(mRunner, name, tgr_object(ref, tgr_ref_type(type))); 
}  
return *this; 
} 

RunnerHelper &WithPtrArg(const char *name, const volatile void *ref, tgr_type_ptr type) 
{ 
if (mRunner) { 
tgr_runner_add_arg(mRunner, name, tgr_object(ref, tgr_ptr_type(type))); 
}  
return *this; 
} 

RunnerHelper *operator->() 
{ 
return this; 
} 

Value End() 
{ 
if (mRunner) { 
Value result = tgr_runner_run(mRunner); 
tgr_runner_destroy(mRunner); 
mRunner = 0; 
return result; 
} else { 
return tgr_void(); 
}  
} 



private: tgr_runner *mRunner; 
}; 


class Runner { 



public: static RunnerHelper RunTrigger(const char *name, tgr_run_mode run_mode) 
{ 
return RunnerHelper(name, run_mode); 
} 
}; 

}
# 35 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/exception" 3
#pragma GCC visibility push ( default )
# 186 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/i686-pc-cygwin/bits/c++config.h" 3
namespace std { 

typedef unsigned size_t; 
typedef int ptrdiff_t; 




}
# 40 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/exception" 3
extern "C++" {

namespace std { 
# 60 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/exception" 3
class exception { 


public: exception() throw() { } 
virtual ~exception() throw(); 



virtual const char *what() const throw(); 
}; 



class bad_exception : public exception { 


public: bad_exception() throw() { } 



virtual ~bad_exception() throw(); 


virtual const char *what() const throw(); 
}; 


typedef void (*terminate_handler)(void); 


typedef void (*unexpected_handler)(void); 


terminate_handler set_terminate(terminate_handler) throw(); 
# 102 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/exception" 3
void terminate() throw() __attribute((__noreturn__)); 


unexpected_handler set_unexpected(unexpected_handler) throw(); 
# 114 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/exception" 3
void unexpected() __attribute((__noreturn__)); 
# 127 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/exception" 3
bool uncaught_exception() throw() __attribute((__pure__)); 


}

namespace __gnu_cxx { 
# 152 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/exception" 3
void __verbose_terminate_handler(); 


}

}

#pragma GCC visibility pop
# 23 "C:\\Program Files\\Parasoft\\C++test\\10.3.2\\engine\\runtime\\include/cpptest.h"
struct __CPTR_AddressOfType { }; 
# 516 "C:\\Program Files\\Parasoft\\C++test\\10.3.2\\engine\\runtime\\include/cpptest.h"
struct __CPTR_TestRunner; 
# 618 "C:\\Program Files\\Parasoft\\C++test\\10.3.2\\engine\\runtime\\include/cpptest.h"
static const char *CPPTEST_DS_GET_CSTR(const char *name) 
{ 
return (((cpptestGetCurrentDataSource() || cpptestDsNotInitialized()), (cpptestGetCurrentDataSource()->getCStr || cpptestDsMethodNotInitialized("getCStr"))), (cpptestGetCurrentDataSource()->getCStr))(cpptestGetCurrentDataSource(), name); 
} 

static const CppTest_wchar_t *CPPTEST_DS_GET_WCSTR(const char *name) 
{ 
return (((cpptestGetCurrentDataSource() || cpptestDsNotInitialized()), (cpptestGetCurrentDataSource()->getWCStr || cpptestDsMethodNotInitialized("getWCStr"))), (cpptestGetCurrentDataSource()->getWCStr))(cpptestGetCurrentDataSource(), name); 
} 

static const char *CPPTEST_DS_GET_MEM_BUFFER(const char *name, unsigned *sizePtr) 
{ 
return (((cpptestGetCurrentDataSource() || cpptestDsNotInitialized()), (cpptestGetCurrentDataSource()->getMemBuffer || cpptestDsMethodNotInitialized("getMemBuffer"))), (cpptestGetCurrentDataSource()->getMemBuffer))(cpptestGetCurrentDataSource(), name, sizePtr); 
} 
static long long CPPTEST_DS_GET_INTEGER(const char *name) 
{ 
return (((cpptestGetCurrentDataSource() || cpptestDsNotInitialized()), (cpptestGetCurrentDataSource()->getInteger || cpptestDsMethodNotInitialized("getInteger"))), (cpptestGetCurrentDataSource()->getInteger))(cpptestGetCurrentDataSource(), name); 
} 
static unsigned long long CPPTEST_DS_GET_UINTEGER(const char *name) 
{ 
return (((cpptestGetCurrentDataSource() || cpptestDsNotInitialized()), (cpptestGetCurrentDataSource()->getUInteger || cpptestDsMethodNotInitialized("getUInteger"))), (cpptestGetCurrentDataSource()->getUInteger))(cpptestGetCurrentDataSource(), name); 
} 
static double CPPTEST_DS_GET_FLOAT(const char *name) 
{ 
return (((cpptestGetCurrentDataSource() || cpptestDsNotInitialized()), (cpptestGetCurrentDataSource()->getFloat || cpptestDsMethodNotInitialized("getFloat"))), (cpptestGetCurrentDataSource()->getFloat))(cpptestGetCurrentDataSource(), name); 
} 
static int CPPTEST_DS_GET_BOOL(const char *name) 
{ 
return (((cpptestGetCurrentDataSource() || cpptestDsNotInitialized()), (cpptestGetCurrentDataSource()->getBool || cpptestDsMethodNotInitialized("getBool"))), (cpptestGetCurrentDataSource()->getBool))(cpptestGetCurrentDataSource(), name); 
} 
static char CPPTEST_DS_GET_CHAR(const char *name) 
{ 
return (((cpptestGetCurrentDataSource() || cpptestDsNotInitialized()), (cpptestGetCurrentDataSource()->getChar || cpptestDsMethodNotInitialized("getChar"))), (cpptestGetCurrentDataSource()->getChar))(cpptestGetCurrentDataSource(), name); 
} 
static unsigned CPPTEST_DS_GET_ITERATION() 
{ 
return (((cpptestGetCurrentDataSource() || cpptestDsNotInitialized()), (cpptestGetCurrentDataSource()->getIteration || cpptestDsMethodNotInitialized("getIteration"))), (cpptestGetCurrentDataSource()->getIteration))(cpptestGetCurrentDataSource()); 
} 
static int CPPTEST_DS_HAS_COLUMN(const char *name) 
{ 
if (cpptestGetCurrentDataSource() && ((((cpptestGetCurrentDataSource() || cpptestDsNotInitialized()), (cpptestGetCurrentDataSource()->hasColumn || cpptestDsMethodNotInitialized("hasColumn"))), (cpptestGetCurrentDataSource()->hasColumn)))) { 
return (((cpptestGetCurrentDataSource() || cpptestDsNotInitialized()), (cpptestGetCurrentDataSource()->hasColumn || cpptestDsMethodNotInitialized("hasColumn"))), (cpptestGetCurrentDataSource()->hasColumn))(cpptestGetCurrentDataSource(), name); 
}  
return 0; 
} 
# 809 "C:\\Program Files\\Parasoft\\C++test\\10.3.2\\engine\\runtime\\include/cpptest.h"
extern "C" {
typedef int CPPTEST_CALL_ROUTINE(const char *); 
}
# 949 "C:\\Program Files\\Parasoft\\C++test\\10.3.2\\engine\\runtime\\include/cpptest.h"
struct CppTest_TestSuite { 




virtual void setUp() 
{ 
} 




virtual void tearDown() 
{ 
} 

virtual ~CppTest_TestSuite() 
{ 
} 
}; 
# 1031 "C:\\Program Files\\Parasoft\\C++test\\10.3.2\\engine\\runtime\\include/cpptest.h"
class CppTestCallSequenceExpectationCpp { 


public: CppTestCallSequenceExpectationCpp(CppTestCallSequenceExpectation *seq) : _seq(seq) 
{ 
} 

CppTestCallSequenceExpectationCpp Add(const char *funcId) 
{ 
return (_seq->Add)(funcId); 
} 

CppTestCallSequenceExpectationCpp AddNTimes(const char *funcId, int times) 
{ 
return (_seq->AddNTimes)(funcId, times); 
} 

CppTestCallSequenceExpectationCpp AddAnyTimes(const char *funcId) 
{ 
return (_seq->AddAnyTimes)(funcId); 
} 

CppTestCallSequenceExpectationCpp *operator->() 
{ 
return this; 
} 


private: CppTestCallSequenceExpectation *_seq; 
}; 
# 4 "include/BaseDisplay.hxx"
class BaseDisplay { 




public: BaseDisplay() { } 
~BaseDisplay() { } 

virtual void showInfoToUser(const char * message); 
#if !defined(CppTest_Stub_showInfoToUser__ZN11BaseDisplay14showInfoToUserEPKc) && defined(CPPTEST_USER_STUB__ZN11BaseDisplay14showInfoToUserEPKc)
# 12
void CppTest_Stub_showInfoToUser__ZN11BaseDisplay14showInfoToUserEPKc(const char * message); 
#endif

#if !defined(CppTest_Safe_Stub_showInfoToUser__ZN11BaseDisplay14showInfoToUserEPKc) && defined(CPPTEST_SAFE_STUB__ZN11BaseDisplay14showInfoToUserEPKc)
# 12
void CppTest_Safe_Stub_showInfoToUser__ZN11BaseDisplay14showInfoToUserEPKc(const char * message); 
#endif

#if !defined(CppTest_Auto_Stub_showInfoToUser__ZN11BaseDisplay14showInfoToUserEPKc) && defined(CPPTEST_AUTO_STUB__ZN11BaseDisplay14showInfoToUserEPKc)
# 12
void CppTest_Auto_Stub_showInfoToUser__ZN11BaseDisplay14showInfoToUserEPKc(const char * message); 
#endif
# 13
virtual void showBalance(double balance); 
#if !defined(CppTest_Stub_showBalance__ZN11BaseDisplay11showBalanceEd) && defined(CPPTEST_USER_STUB__ZN11BaseDisplay11showBalanceEd)
# 13
void CppTest_Stub_showBalance__ZN11BaseDisplay11showBalanceEd(double balance); 
#endif

#if !defined(CppTest_Safe_Stub_showBalance__ZN11BaseDisplay11showBalanceEd) && defined(CPPTEST_SAFE_STUB__ZN11BaseDisplay11showBalanceEd)
# 13
void CppTest_Safe_Stub_showBalance__ZN11BaseDisplay11showBalanceEd(double balance); 
#endif

#if !defined(CppTest_Auto_Stub_showBalance__ZN11BaseDisplay11showBalanceEd) && defined(CPPTEST_AUTO_STUB__ZN11BaseDisplay11showBalanceEd)
# 13
void CppTest_Auto_Stub_showBalance__ZN11BaseDisplay11showBalanceEd(double balance); 
#endif
# 14
}; 
#if defined(CPPTEST_AUTO_STUB__ZN11BaseDisplay11showBalanceEd)
# 21 "C:\\Parasoft_Tutorial\\workspace_tutorial_tantai\\ATM\\stubs\\autogenerated\\auto_37d5170.cxx"
void BaseDisplay::CppTest_Auto_Stub_showBalance__ZN11BaseDisplay11showBalanceEd(double balance) 
{ 

int __callOrig = 0; 

trigger::Runner::RunTrigger("BaseDisplay::showBalance", c_tgr_run_before)->WithPtrArg("this", this, tgr_void_type())->WithRefArg("balance", &balance, tgr_double_type())->WithRefArg("__callOrig", &__callOrig, tgr_int_type())->End(); 
if (__callOrig) { 
this->BaseDisplay::showBalance(balance); 
trigger::Runner::RunTrigger("BaseDisplay::showBalance", c_tgr_run_after)->WithPtrArg("this", this, tgr_void_type())->WithRefArg("balance", &balance, tgr_double_type())->End(); 
}  

} 
#endif

#if defined(CPPTEST_AUTO_STUB__ZN11BaseDisplay14showInfoToUserEPKc)
# 35
void BaseDisplay::CppTest_Auto_Stub_showInfoToUser__ZN11BaseDisplay14showInfoToUserEPKc(const char *message) 
{ 

int __callOrig = 0; 

trigger::Runner::RunTrigger("BaseDisplay::showInfoToUser", c_tgr_run_before)->WithPtrArg("this", this, tgr_void_type())->WithRefArg("message", &message, tgr_ptr_type(tgr_char_type()))->WithRefArg("__callOrig", &__callOrig, tgr_int_type())->End(); 
if (__callOrig) { 
this->BaseDisplay::showInfoToUser(message); 
trigger::Runner::RunTrigger("BaseDisplay::showInfoToUser", c_tgr_run_after)->WithPtrArg("this", this, tgr_void_type())->WithRefArg("message", &message, tgr_ptr_type(tgr_char_type()))->End(); 
}  

} 
#endif

#line 1 "__TEST_HARNESS__"
;

