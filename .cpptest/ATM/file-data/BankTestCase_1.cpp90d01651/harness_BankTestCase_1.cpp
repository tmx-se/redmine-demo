# 1 "C:\\Users\\shito\\AppData\\Local\\Temp\\ParaSoft.1164.14056\\ParaSoft.1164.21392.cpp"

#define CPPTEST_INSTRUMENTATION


#include "cpptest_coverage.h"
#include "cpptest_runtime_i.h"
#include "cpptest_i.h"
#include "C:\Parasoft_Tutorial\workspace_tutorial_tantai\.cpptest\ATM\unit-data\current_tubf179707\cpptest_stubconfig.h"
#include "C:\Parasoft_Tutorial\workspace_tutorial_tantai\.cpptest\ATM\unit-data\current_tubf179707\cpptest_stubconfig.h"


struct __CPTR_Dummy_Type {
    char nonEmpty;
};

CppTestTranslationUnitInfo __CPTR_tui_4227230740_1164_157209600 = 
{
    0U, 
    "C:\\Parasoft_Tutorial\\workspace_tutorial_tantai\\.cpptest\\ATM\\file-data\\BankTestCase_1.cpp90d01651\\harness_BankTestCase_1.ildb"
};

#define __CPTR_tui &__CPTR_tui_4227230740_1164_157209600




#include "cpptest_runtime_i.h"

#ifdef __cplusplus
extern "C" void __CPTR_Initialize(void);
extern "C" void __CPTR_Finalize(void);

struct __CPTR_Initializer_4227230740_1164_157209600 {
    __CPTR_Initializer_4227230740_1164_157209600()
    {
        CPPTEST_INITIALIZE_RUNTIME();
    }
    ~__CPTR_Initializer_4227230740_1164_157209600()
    {
        CPPTEST_FINALIZE_RUNTIME();
    }
};

#if CPPTEST_USE_GLOBAL_OBJECTS_TO_INIT_RUNTIME
static struct __CPTR_Initializer_4227230740_1164_157209600 __CPTR_initializer_4227230740_1164_157209600;
#endif

#define CPPTEST_ENTER_MAIN_ROUTINE() __CPTR_Initializer_4227230740_1164_157209600 __CPTR_main_initializer

#define CPPTEST_EXIT_MAIN_ROUTINE()

#else
extern void __CPTR_Initialize(void);
extern void __CPTR_Finalize(void);

#define CPPTEST_ENTER_MAIN_ROUTINE() CPPTEST_INITIALIZE_RUNTIME()

#define CPPTEST_EXIT_MAIN_ROUTINE() CPPTEST_FINALIZE_RUNTIME()

#endif



#define _coverage_data_unit_size 0
    


#define _coverage_code_size (1 + (9) / (sizeof(unsigned char) * 8))
#define _coverage_func_data_offset 2

static unsigned char _coverage_code[_coverage_code_size];

EXTERN_C_LINKAGE CppTestCoverageInfo __CPTR_cui_4227230740_1164_157209600 = 
{ 
    /*prev=*/0, 
    /*covDataUnitSize=*/_coverage_data_unit_size,
    /*data=*/(unsigned char*)_coverage_code, 
    /*size=*/_coverage_code_size, 
    /*funcDataOffset=*/_coverage_func_data_offset,
    /*numberOfFunctions=*/7,
    /*id=*/0U,
    /*funcIdOffset=*/0U,
    /*flags=*/0
    | CPPTEST_COVERAGE_INITIALIZE_BUFFERS_FLAG
};

#define __CPTR_cui &__CPTR_cui_4227230740_1164_157209600
#define __CPTR_fid(ID) ID + __CPTR_cui_4227230740_1164_157209600.funcIdOffset


#define _cpptest_strdata_var(id, bogus) _cpptest_strdata[id]
static 
const char* _cpptest_strdata[] = {
    0,
    "",
    "_ZN7AccountC9Ev",
    "_ZN7AccountC9Ed",
    "_ZN7Account10getBalanceEv",
    "_ZNK7Account16getAccountNumberEv",
    "_ZN7Account16setAccountNumberEi",
    "_ZN7Account11setPasswordEPKc",
    "_ZN7Account11getPasswordEv",
    "BankTestCase",
    "C:\\Parasoft_Tutorial\\workspace_tutorial_tantai\\ATM\\CppUnit\\BankTestCase_1.h",
    "testGetAccount",
    "_return != 0",
    "C:\\Parasoft_Tutorial\\workspace_tutorial_tantai\\ATM\\CppUnit\\BankTestCase_1.cpp",
    0
};
#undef unix
#undef __unix

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
# 17 "C:\\Program Files\\Parasoft\\C++test\\10.3.2\\engine\\runtime\\include/cppunit/TestFixture.h"
namespace CppTest_CppUnit_Namespace { 
typedef CppTest_TestSuite TestFixture; 
}
# 17 "C:\\Program Files\\Parasoft\\C++test\\10.3.2\\engine\\runtime\\include/cppunit/TestCase.h"
namespace CppTest_CppUnit_Namespace { 
typedef CppTest_TestSuite TestCase; 
}
# 6 "C:\\Parasoft_Tutorial\\workspace_tutorial_tantai\\ATM\\CppUnit\\BankTestCase_1.h"
class BankTestCase : public CppTest_CppUnit_Namespace::TestCase { 

public: typedef BankTestCase ThisTestSuite; static void (BankTestCase::*call_slave_ptr)(void); static void call_slave() { CPPTEST_STACK_TRACE_FUNC_START_INFO() CPPTEST_STACK_TRACE_VARIABLE_INFO(anonymous__CPTR_0, 1) BankTestCase s; CPPTEST_STACK_TRACE_STMT_INFO(2) cpptestIgnoreCurrStackElement(); CPPTEST_STACK_TRACE_STMT_INFO(3) s.setUp(); CPPTEST_STACK_TRACE_STMT_INFO(4) (s.*call_slave_ptr)(); CPPTEST_STACK_TRACE_STMT_INFO(5) s.tearDown(); CPPTEST_STACK_TRACE_EXIT_ROUTINE() } static void testSuiteBegin() { CPPTEST_STACK_TRACE_FUNC_START_INFO() CPPTEST_STACK_TRACE_STMT_INFO(6) cpptestTestSuiteBegin(_cpptest_strdata_var(9, "BankTestCase"), _cpptest_strdata_var(10, "C:\\Parasoft_Tutorial\\workspace_tutorial_tantai\\ATM\\CppUnit\\BankTestCase_1.h"), 8); CPPTEST_STACK_TRACE_EXIT_ROUTINE() } static void cpptest_test_no_exception(void (BankTestCase::*testcase_ptr)(void)) { CPPTEST_STACK_TRACE_FUNC_START_INFO() CPPTEST_STACK_TRACE_STMT_INFO(7) cpptestIgnoreCurrStackElement(); CPPTEST_STACK_TRACE_STMT_INFO(8) try { CPPTEST_STACK_TRACE_STMT_INFO(9) try { CPPTEST_STACK_TRACE_STMT_INFO(10) call_slave_ptr = testcase_ptr; CPPTEST_STACK_TRACE_STMT_INFO(11) cpptestTestCaseSlave(&call_slave); CPPTEST_STACK_TRACE_BLOCK_END_INFO(12) } catch (std::exception &except) { CPPTEST_STACK_TRACE_EXCEPTION_HANDLER_START_INFO() CPPTEST_STACK_TRACE_STMT_INFO(13) cpptestIgnoreCurrStackElement(); CPPTEST_STACK_TRACE_STMT_INFO(14) cpptestUnhandledStdExceptionInTestCase(except.what()); CPPTEST_STACK_TRACE_BLOCK_END_INFO(15) CPPTEST_STACK_TRACE_EXIT_EXCEPTION_HANDLER() } catch (...) { CPPTEST_STACK_TRACE_EXCEPTION_HANDLER_START_INFO() CPPTEST_STACK_TRACE_STMT_INFO(16) cpptestIgnoreCurrStackElement(); CPPTEST_STACK_TRACE_STMT_INFO(17) cpptestUnhandledCppExceptionInTestCase(); CPPTEST_STACK_TRACE_BLOCK_END_INFO(18) CPPTEST_STACK_TRACE_EXIT_EXCEPTION_HANDLER() }  CPPTEST_STACK_TRACE_BLOCK_END_INFO(19) } catch (...) { CPPTEST_STACK_TRACE_EXCEPTION_HANDLER_START_INFO() CPPTEST_STACK_TRACE_BLOCK_END_INFO(20) CPPTEST_STACK_TRACE_EXIT_EXCEPTION_HANDLER() }  CPPTEST_STACK_TRACE_EXIT_ROUTINE() } static int call(const char *name) { CPPTEST_STACK_TRACE_FUNC_START_INFO() CPPTEST_STACK_TRACE_STMT_INFO(21) cpptestIgnoreCurrStackElement(); CPPTEST_STACK_TRACE_STMT_INFO(22) ; 
if (((void)CPPTEST_STACK_TRACE_IF_COND_INFO(23) , cpptestStrCmp(name, "testGetAccount") == 0)) { CPPTEST_STACK_TRACE_STMT_INFO(24) cpptestTestCaseBegin(_cpptest_strdata_var(11, "testGetAccount"), 0U, 0xffffU, 1, _cpptest_strdata_var(10, "C:\\Parasoft_Tutorial\\workspace_tutorial_tantai\\ATM\\CppUnit\\BankTestCase_1.h"), 9); CPPTEST_STACK_TRACE_STMT_INFO(25) cpptest_test_no_exception(&ThisTestSuite::testGetAccount); CPPTEST_STACK_TRACE_STMT_INFO(26) cpptestTestCaseEnd(); CPPTEST_STACK_TRACE_STMT_INFO(27) return 0; }  CPPTEST_STACK_TRACE_STMT_INFO(28) ; CPPTEST_STACK_TRACE_STMT_INFO(29) 
return 1; CPPTEST_STACK_TRACE_EXIT_ROUTINE() } 


BankTestCase(); 
virtual ~BankTestCase(); 

virtual void setUp(); 
virtual void tearDown(); 

void testGetAccount(); 


private: BankTestCase(const BankTestCase & copy); 
void operator=(const BankTestCase & copy); 
}; 
# 50 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/bits/memoryfwd.h" 3
namespace std { 
# 63 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/bits/memoryfwd.h" 3
template < typename >
    class allocator;


template<> class allocator< void> ; 


template < typename, typename >
    struct uses_allocator;




}
# 42 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/bits/stringfwd.h" 3
namespace std { 
# 52
template < class _CharT >
    struct char_traits;

template < typename _CharT, typename _Traits = char_traits < _CharT >,
           typename _Alloc = allocator < _CharT > >
    class basic_string;

template<> struct char_traits< char> ; 


typedef basic_string< char>  string; 


template<> struct char_traits< wchar_t> ; 


typedef basic_string< wchar_t>  wstring; 
# 87 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/bits/stringfwd.h" 3
}
# 42 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/bits/functexcept.h" 3
namespace std { 
# 48
void __throw_bad_exception() __attribute((__noreturn__)); 



void __throw_bad_alloc() __attribute((__noreturn__)); 



void __throw_bad_cast() __attribute((__noreturn__)); 


void __throw_bad_typeid() __attribute((__noreturn__)); 



void __throw_logic_error(const char *) __attribute((__noreturn__)); 


void __throw_domain_error(const char *) __attribute((__noreturn__)); 


void __throw_invalid_argument(const char *) __attribute((__noreturn__)); 


void __throw_length_error(const char *) __attribute((__noreturn__)); 


void __throw_out_of_range(const char *) __attribute((__noreturn__)); 


void __throw_out_of_range_fmt(const char *, ...) __attribute((__noreturn__)) __attribute((__format__(__printf__, 1, 2))); 



void __throw_runtime_error(const char *) __attribute((__noreturn__)); 


void __throw_range_error(const char *) __attribute((__noreturn__)); 


void __throw_overflow_error(const char *) __attribute((__noreturn__)); 


void __throw_underflow_error(const char *) __attribute((__noreturn__)); 



void __throw_ios_failure(const char *) __attribute((__noreturn__)); 


void __throw_system_error(int) __attribute((__noreturn__)); 


void __throw_future_error(int) __attribute((__noreturn__)); 



void __throw_bad_function_call() __attribute((__noreturn__)); 


}
# 68 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/bits/cpp_type_traits.h" 3
namespace __gnu_cxx { 



template < typename _Iterator, typename _Container >
    class __normal_iterator;


}

namespace std { 



struct __true_type { }; 
struct __false_type { }; 

template < bool >
    struct __truth_type{ 
typedef __false_type __type; };


template<> struct __truth_type< true>  { 
typedef __true_type __type; }; 



template < class _Sp, class _Tp >
    struct __traitor{ 

enum { __value = bool ( _Sp :: __value ) || bool ( _Tp :: __value )}; 
typedef typename __truth_type < __value > :: __type __type; 
};


template < typename, typename >
    struct __are_same{ 

enum { __value = 0}; 
typedef __false_type __type; 
};

template < typename _Tp >
    struct __are_same < _Tp, _Tp >{ 

enum { __value = 1}; 
typedef __true_type __type; 
};


template < typename _Tp >
    struct __is_void{ 

enum { __value = 0}; 
typedef __false_type __type; 
};


template<> struct __is_void< void>  { 

enum { __value = 1}; 
typedef __true_type __type; 
}; 




template < typename _Tp >
    struct __is_integer{ 

enum { __value = 0}; 
typedef __false_type __type; 
};
# 146
template<> struct __is_integer< bool>  { 

enum { __value = 1}; 
typedef __true_type __type; 
}; 


template<> struct __is_integer< char>  { 

enum { __value = 1}; 
typedef __true_type __type; 
}; 


template<> struct __is_integer< signed char>  { 

enum { __value = 1}; 
typedef __true_type __type; 
}; 


template<> struct __is_integer< unsigned char>  { 

enum { __value = 1}; 
typedef __true_type __type; 
}; 



template<> struct __is_integer< wchar_t>  { 

enum { __value = 1}; 
typedef __true_type __type; 
}; 
# 199 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/bits/cpp_type_traits.h" 3
template<> struct __is_integer< short>  { 

enum { __value = 1}; 
typedef __true_type __type; 
}; 


template<> struct __is_integer< unsigned short>  { 

enum { __value = 1}; 
typedef __true_type __type; 
}; 


template<> struct __is_integer< int>  { 

enum { __value = 1}; 
typedef __true_type __type; 
}; 


template<> struct __is_integer< unsigned>  { 

enum { __value = 1}; 
typedef __true_type __type; 
}; 


template<> struct __is_integer< long>  { 

enum { __value = 1}; 
typedef __true_type __type; 
}; 


template<> struct __is_integer< unsigned long>  { 

enum { __value = 1}; 
typedef __true_type __type; 
}; 


template<> struct __is_integer< long long>  { 

enum { __value = 1}; 
typedef __true_type __type; 
}; 


template<> struct __is_integer< unsigned long long>  { 

enum { __value = 1}; 
typedef __true_type __type; 
}; 




template < typename _Tp >
    struct __is_floating{ 

enum { __value = 0}; 
typedef __false_type __type; 
};



template<> struct __is_floating< float>  { 

enum { __value = 1}; 
typedef __true_type __type; 
}; 


template<> struct __is_floating< double>  { 

enum { __value = 1}; 
typedef __true_type __type; 
}; 


template<> struct __is_floating< long double>  { 

enum { __value = 1}; 
typedef __true_type __type; 
}; 




template < typename _Tp >
    struct __is_pointer{ 

enum { __value = 0}; 
typedef __false_type __type; 
};

template < typename _Tp >
    struct __is_pointer < _Tp * >{ 

enum { __value = 1}; 
typedef __true_type __type; 
};




template < typename _Tp >
    struct __is_normal_iterator{ 

enum { __value = 0}; 
typedef __false_type __type; 
};

template < typename _Iterator, typename _Container >
    struct __is_normal_iterator < __gnu_cxx :: __normal_iterator < _Iterator,
             _Container > >{ 

enum { __value = 1}; 
typedef __true_type __type; 
};




template < typename _Tp >
    struct __is_arithmetic
    : public __traitor < __is_integer < _Tp >, __is_floating < _Tp > >{ 
};




template < typename _Tp >
    struct __is_scalar
    : public __traitor < __is_arithmetic < _Tp >, __is_pointer < _Tp > >{ 
};




template < typename _Tp >
    struct __is_char{ 

enum { __value = 0}; 
typedef __false_type __type; 
};


template<> struct __is_char< char>  { 

enum { __value = 1}; 
typedef __true_type __type; 
}; 



template<> struct __is_char< wchar_t>  { 

enum { __value = 1}; 
typedef __true_type __type; 
}; 


template < typename _Tp >
    struct __is_byte{ 

enum { __value = 0}; 
typedef __false_type __type; 
};


template<> struct __is_byte< char>  { 

enum { __value = 1}; 
typedef __true_type __type; 
}; 


template<> struct __is_byte< signed char>  { 

enum { __value = 1}; 
typedef __true_type __type; 
}; 


template<> struct __is_byte< unsigned char>  { 

enum { __value = 1}; 
typedef __true_type __type; 
}; 




template < typename _Tp >
    struct __is_move_iterator{ 

enum { __value = 0}; 
typedef __false_type __type; 
};
# 414 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/bits/cpp_type_traits.h" 3
}
# 37 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/ext/type_traits.h" 3
namespace __gnu_cxx { 




template < bool, typename >
    struct __enable_if{ 
};

template < typename _Tp >
    struct __enable_if < true, _Tp >{ 
typedef _Tp __type; };



template < bool _Cond, typename _Iftrue, typename _Iffalse >
    struct __conditional_type{ 
typedef _Iftrue __type; };

template < typename _Iftrue, typename _Iffalse >
    struct __conditional_type < false, _Iftrue, _Iffalse >{ 
typedef _Iffalse __type; };



template < typename _Tp >
    struct __add_unsigned{ 


private: typedef __enable_if < std :: __is_integer < _Tp > :: __value, _Tp > __if_type; 


public: typedef typename __if_type :: __type __type; 
};


template<> struct __add_unsigned< char>  { 
typedef unsigned char __type; }; 


template<> struct __add_unsigned< signed char>  { 
typedef unsigned char __type; }; 


template<> struct __add_unsigned< short>  { 
typedef unsigned short __type; }; 


template<> struct __add_unsigned< int>  { 
typedef unsigned __type; }; 


template<> struct __add_unsigned< long>  { 
typedef unsigned long __type; }; 


template<> struct __add_unsigned< long long>  { 
typedef unsigned long long __type; }; 



template<> struct __add_unsigned< bool> ; 


template<> struct __add_unsigned< wchar_t> ; 



template < typename _Tp >
    struct __remove_unsigned{ 


private: typedef __enable_if < std :: __is_integer < _Tp > :: __value, _Tp > __if_type; 


public: typedef typename __if_type :: __type __type; 
};


template<> struct __remove_unsigned< char>  { 
typedef signed char __type; }; 


template<> struct __remove_unsigned< unsigned char>  { 
typedef signed char __type; }; 


template<> struct __remove_unsigned< unsigned short>  { 
typedef short __type; }; 


template<> struct __remove_unsigned< unsigned>  { 
typedef int __type; }; 


template<> struct __remove_unsigned< unsigned long>  { 
typedef long __type; }; 


template<> struct __remove_unsigned< unsigned long long>  { 
typedef long long __type; }; 



template<> struct __remove_unsigned< bool> ; 


template<> struct __remove_unsigned< wchar_t> ; 



template < typename _Type >
    inline bool
    __is_null_pointer ( _Type * __ptr )
    { return __ptr == 0; }

template < typename _Type >
    inline bool
    __is_null_pointer ( _Type )
    { return false; }
# 165 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/ext/type_traits.h" 3
template < typename _Tp, bool = std :: __is_integer < _Tp > :: __value >
    struct __promote{ 
typedef double __type; };




template < typename _Tp >
    struct __promote < _Tp, false >{ 
};


template<> struct __promote< long double>  { 
typedef long double __type; }; 


template<> struct __promote< double>  { 
typedef double __type; }; 


template<> struct __promote< float>  { 
typedef float __type; }; 

template < typename _Tp, typename _Up,
           typename _Tp2 = typename __promote < _Tp > :: __type,
           typename _Up2 = typename __promote < _Up > :: __type >
    struct __promote_2{ 

typedef __typeof__ ( _Tp2 ( ) + _Up2 ( ) ) __type; 
};

template < typename _Tp, typename _Up, typename _Vp,
           typename _Tp2 = typename __promote < _Tp > :: __type,
           typename _Up2 = typename __promote < _Up > :: __type,
           typename _Vp2 = typename __promote < _Vp > :: __type >
    struct __promote_3{ 

typedef __typeof__ ( _Tp2 ( ) + _Up2 ( ) + _Vp2 ( ) ) __type; 
};

template < typename _Tp, typename _Up, typename _Vp, typename _Wp,
           typename _Tp2 = typename __promote < _Tp > :: __type,
           typename _Up2 = typename __promote < _Up > :: __type,
           typename _Vp2 = typename __promote < _Vp > :: __type,
           typename _Wp2 = typename __promote < _Wp > :: __type >
    struct __promote_4{ 

typedef __typeof__ ( _Tp2 ( ) + _Up2 ( ) + _Vp2 ( ) + _Wp2 ( ) ) __type; 
};


}
# 37 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/ext/numeric_traits.h" 3
namespace __gnu_cxx { 
# 54 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/ext/numeric_traits.h" 3
template < typename _Value >
    struct __numeric_traits_integer{ 


static const _Value __min = ( ( ( _Value ) ( - 1 ) < 0 ) ? ( _Value ) 1 << ( sizeof ( _Value ) * 8 - ( ( _Value ) ( - 1 ) < 0 ) ) : ( _Value ) 0 ); 
static const _Value __max = ( ( ( _Value ) ( - 1 ) < 0 ) ? ( ( ( ( ( _Value ) 1 << ( ( sizeof ( _Value ) * 8 - ( ( _Value ) ( - 1 ) < 0 ) ) - 1 ) ) - 1 ) << 1 ) + 1 ) : ~ ( _Value ) 0 ); 



static const bool __is_signed = ( ( _Value ) ( - 1 ) < 0 ); 
static const int __digits = ( sizeof ( _Value ) * 8 - ( ( _Value ) ( - 1 ) < 0 ) ); 
};

template < typename _Value >
    const _Value __numeric_traits_integer < _Value > :: __min;

template < typename _Value >
    const _Value __numeric_traits_integer < _Value > :: __max;

template < typename _Value >
    const bool __numeric_traits_integer < _Value > :: __is_signed;

template < typename _Value >
    const int __numeric_traits_integer < _Value > :: __digits;
# 99 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/ext/numeric_traits.h" 3
template < typename _Value >
    struct __numeric_traits_floating{ 


static const int __max_digits10 = ( 2 + ( std :: __are_same < _Value, float > :: __value ? 24 : std :: __are_same < _Value, double > :: __value ? 53 : 64 ) * 643L / 2136 ); 


static const bool __is_signed = true; 
static const int __digits10 = ( std :: __are_same < _Value, float > :: __value ? 6 : std :: __are_same < _Value, double > :: __value ? 15 : 18 ); 
static const int __max_exponent10 = ( std :: __are_same < _Value, float > :: __value ? 38 : std :: __are_same < _Value, double > :: __value ? 308 : 4932 ); 
};

template < typename _Value >
    const int __numeric_traits_floating < _Value > :: __max_digits10;

template < typename _Value >
    const bool __numeric_traits_floating < _Value > :: __is_signed;

template < typename _Value >
    const int __numeric_traits_floating < _Value > :: __digits10;

template < typename _Value >
    const int __numeric_traits_floating < _Value > :: __max_exponent10;

template < typename _Value >
    struct __numeric_traits
    : public __conditional_type < std :: __is_integer < _Value > :: __value,
    __numeric_traits_integer < _Value >,
    __numeric_traits_floating < _Value > > :: __type{ 
};


}
# 36 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/bits/move.h" 3
namespace std { 
# 45
template < typename _Tp >
    inline _Tp *
    __addressof ( _Tp & __r )
    {
      return reinterpret_cast < _Tp * >
 ( & const_cast < char & > ( reinterpret_cast < const volatile char & > ( __r ) ) );
    }


}
# 149 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/bits/move.h" 3
namespace std { 
# 164 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/bits/move.h" 3
template < typename _Tp >
    inline void
    swap ( _Tp & __a, _Tp & __b )




    {



      _Tp __tmp = ( __a );
      __a = ( __b );
      __b = ( __tmp );
    }




template < typename _Tp, size_t _Nm >
    inline void
    swap ( _Tp ( & __a ) [ _Nm ], _Tp ( & __b ) [ _Nm ] )



    {
      for ( size_t __n = 0; __n < _Nm; ++ __n )
 swap ( __a [ __n ], __b [ __n ] );
    }



}
# 65 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/bits/stl_pair.h" 3
namespace std { 
# 95 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/bits/stl_pair.h" 3
template < class _T1, class _T2 >
    struct pair{ 

typedef _T1 first_type; 
typedef _T2 second_type; 

_T1 first; 
_T2 second; 
# 108
 pair ( )
      : first ( ), second ( ) { }


 pair ( const _T1 & __a, const _T2 & __b )
      : first ( __a ), second ( __b ) { }



template < class _U1, class _U2 >
 pair ( const pair < _U1, _U2 > & __p )
 : first ( __p . first ), second ( __p . second ) { }
# 209 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/bits/stl_pair.h" 3
};


template < class _T1, class _T2 >
    inline bool
    operator == ( const pair < _T1, _T2 > & __x, const pair < _T1, _T2 > & __y )
    { return __x . first == __y . first && __x . second == __y . second; }


template < class _T1, class _T2 >
    inline bool
    operator < ( const pair < _T1, _T2 > & __x, const pair < _T1, _T2 > & __y )
    { return __x . first < __y . first
      || ( ! ( __y . first < __x . first ) && __x . second < __y . second ); }


template < class _T1, class _T2 >
    inline bool
    operator != ( const pair < _T1, _T2 > & __x, const pair < _T1, _T2 > & __y )
    { return ! ( __x == __y ); }


template < class _T1, class _T2 >
    inline bool
    operator > ( const pair < _T1, _T2 > & __x, const pair < _T1, _T2 > & __y )
    { return __y < __x; }


template < class _T1, class _T2 >
    inline bool
    operator <= ( const pair < _T1, _T2 > & __x, const pair < _T1, _T2 > & __y )
    { return ! ( __y < __x ); }


template < class _T1, class _T2 >
    inline bool
    operator >= ( const pair < _T1, _T2 > & __x, const pair < _T1, _T2 > & __y )
    { return ! ( __x < __y ); }
# 284 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/bits/stl_pair.h" 3
template < class _T1, class _T2 >
    inline pair < _T1, _T2 >
    make_pair ( _T1 __x, _T2 __y )
    { return pair < _T1, _T2 > ( __x, __y ); }
# 293
}
# 70 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/bits/stl_iterator_base_types.h" 3
namespace std { 
# 89 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/bits/stl_iterator_base_types.h" 3
struct input_iterator_tag { }; 


struct output_iterator_tag { }; 


struct forward_iterator_tag : public input_iterator_tag { }; 



struct bidirectional_iterator_tag : public forward_iterator_tag { }; 



struct random_access_iterator_tag : public bidirectional_iterator_tag { }; 
# 116 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/bits/stl_iterator_base_types.h" 3
template < typename _Category, typename _Tp, typename _Distance = ptrdiff_t,
           typename _Pointer = _Tp *, typename _Reference = _Tp & >
    struct iterator{ 


typedef _Category iterator_category; 

typedef _Tp value_type; 

typedef _Distance difference_type; 

typedef _Pointer pointer; 

typedef _Reference reference; 
};
# 162 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/bits/stl_iterator_base_types.h" 3
template < typename _Iterator >
    struct iterator_traits{ 

typedef typename _Iterator :: iterator_category iterator_category; 
typedef typename _Iterator :: value_type value_type; 
typedef typename _Iterator :: difference_type difference_type; 
typedef typename _Iterator :: pointer pointer; 
typedef typename _Iterator :: reference reference; 
};



template < typename _Tp >
    struct iterator_traits < _Tp * >{ 

typedef random_access_iterator_tag iterator_category; 
typedef _Tp value_type; 
typedef ptrdiff_t difference_type; 
typedef _Tp * pointer; 
typedef _Tp & reference; 
};


template < typename _Tp >
    struct iterator_traits < const _Tp * >{ 

typedef random_access_iterator_tag iterator_category; 
typedef _Tp value_type; 
typedef ptrdiff_t difference_type; 
typedef const _Tp * pointer; 
typedef const _Tp & reference; 
};
# 199
template < typename _Iter >
    inline typename iterator_traits < _Iter > :: iterator_category
    __iterator_category ( const _Iter & )
    { return typename iterator_traits < _Iter > :: iterator_category ( ); }
# 208
template < typename _Iterator, bool _HasBase >
    struct _Iter_base{ 

typedef _Iterator iterator_type; 
static iterator_type _S_base ( _Iterator __it )
      { return __it; }
};

template < typename _Iterator >
    struct _Iter_base < _Iterator, true >{ 

typedef typename _Iterator :: iterator_type iterator_type; 
static iterator_type _S_base ( _Iterator __it )
      { return __it . base ( ); }
};
# 233 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/bits/stl_iterator_base_types.h" 3
}
# 46 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/debug/debug.h" 3
namespace std { 

namespace __debug { }
}




namespace __gnu_debug { 

using namespace std::__debug;
}
# 67 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/bits/stl_iterator_base_funcs.h" 3
namespace std { 



template < typename _InputIterator >
    inline typename iterator_traits < _InputIterator > :: difference_type
    __distance ( _InputIterator __first, _InputIterator __last,
               input_iterator_tag )
    {



      typename iterator_traits < _InputIterator > :: difference_type __n = 0;
      while ( __first != __last )
 {
   ++ __first;
   ++ __n;
 }
      return __n;
    }

template < typename _RandomAccessIterator >
    inline typename iterator_traits < _RandomAccessIterator > :: difference_type
    __distance ( _RandomAccessIterator __first, _RandomAccessIterator __last,
               random_access_iterator_tag )
    {



      return __last - __first;
    }
# 112 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/bits/stl_iterator_base_funcs.h" 3
template < typename _InputIterator >
    inline typename iterator_traits < _InputIterator > :: difference_type
    distance ( _InputIterator __first, _InputIterator __last )
    {

      return std :: __distance ( __first, __last,
        std :: __iterator_category ( __first ) );
    }

template < typename _InputIterator, typename _Distance >
    inline void
    __advance ( _InputIterator & __i, _Distance __n, input_iterator_tag )
    {


      ;
      while ( __n -- )
 ++ __i;
    }

template < typename _BidirectionalIterator, typename _Distance >
    inline void
    __advance ( _BidirectionalIterator & __i, _Distance __n,
       bidirectional_iterator_tag )
    {



      if ( __n > 0 )
        while ( __n -- )
   ++ __i;
      else
        while ( __n ++ )
   -- __i;
    }

template < typename _RandomAccessIterator, typename _Distance >
    inline void
    __advance ( _RandomAccessIterator & __i, _Distance __n,
              random_access_iterator_tag )
    {



      __i += __n;
    }
# 171 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/bits/stl_iterator_base_funcs.h" 3
template < typename _InputIterator, typename _Distance >
    inline void
    advance ( _InputIterator & __i, _Distance __n )
    {

      typename iterator_traits < _InputIterator > :: difference_type __d = __n;
      std :: __advance ( __i, __d, std :: __iterator_category ( __i ) );
    }
# 203 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/bits/stl_iterator_base_funcs.h" 3
}
# 68 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/bits/stl_iterator.h" 3
namespace std { 
# 96 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/bits/stl_iterator.h" 3
template < typename _Iterator >
    class reverse_iterator
    : public iterator < typename iterator_traits < _Iterator > :: iterator_category,
        typename iterator_traits < _Iterator > :: value_type,
        typename iterator_traits < _Iterator > :: difference_type,
        typename iterator_traits < _Iterator > :: pointer,
                      typename iterator_traits < _Iterator > :: reference >{ 


protected: _Iterator current; 

typedef iterator_traits < _Iterator > __traits_type; 


public: typedef _Iterator iterator_type; 
typedef typename __traits_type :: difference_type difference_type; 
typedef typename __traits_type :: pointer pointer; 
typedef typename __traits_type :: reference reference; 
# 121
 reverse_iterator ( ): current ( ) { }
# 127
explicit reverse_iterator ( iterator_type __x ): current ( __x ) { }




 reverse_iterator ( const reverse_iterator & __x )
      : current ( __x . current ) { }
# 139
template < typename _Iter >
        reverse_iterator ( const reverse_iterator < _Iter > & __x )
 : current ( __x . base ( ) ) { }
# 147
iterator_type base ( ) const
      { return current; }
# 161 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/bits/stl_iterator.h" 3
reference operator * ( ) const
      {
 _Iterator __tmp = current;
 return * -- __tmp;
      }
# 173
pointer operator -> ( ) const
      { return & ( operator * ( ) ); }
# 182
reverse_iterator & operator ++ ( )
      {
 -- current;
 return * this;
      }
# 194
reverse_iterator operator ++ ( int )
      {
 reverse_iterator __tmp = * this;
 -- current;
 return __tmp;
      }
# 207
reverse_iterator & operator -- ( )
      {
 ++ current;
 return * this;
      }
# 219
reverse_iterator operator -- ( int )
      {
 reverse_iterator __tmp = * this;
 ++ current;
 return __tmp;
      }
# 232
reverse_iterator operator + ( difference_type __n ) const
      { return reverse_iterator ( current - __n ); }
# 242
reverse_iterator & operator += ( difference_type __n )
      {
 current -= __n;
 return * this;
      }
# 254
reverse_iterator operator - ( difference_type __n ) const
      { return reverse_iterator ( current + __n ); }
# 264
reverse_iterator & operator -= ( difference_type __n )
      {
 current += __n;
 return * this;
      }
# 276
reference operator [ ] ( difference_type __n ) const
      { return * ( * this + __n ); }
};
# 290 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/bits/stl_iterator.h" 3
template < typename _Iterator >
    inline bool
    operator == ( const reverse_iterator < _Iterator > & __x,
        const reverse_iterator < _Iterator > & __y )
    { return __x . base ( ) == __y . base ( ); }

template < typename _Iterator >
    inline bool
    operator < ( const reverse_iterator < _Iterator > & __x,
       const reverse_iterator < _Iterator > & __y )
    { return __y . base ( ) < __x . base ( ); }

template < typename _Iterator >
    inline bool
    operator != ( const reverse_iterator < _Iterator > & __x,
        const reverse_iterator < _Iterator > & __y )
    { return ! ( __x == __y ); }

template < typename _Iterator >
    inline bool
    operator > ( const reverse_iterator < _Iterator > & __x,
       const reverse_iterator < _Iterator > & __y )
    { return __y < __x; }

template < typename _Iterator >
    inline bool
    operator <= ( const reverse_iterator < _Iterator > & __x,
        const reverse_iterator < _Iterator > & __y )
    { return ! ( __y < __x ); }

template < typename _Iterator >
    inline bool
    operator >= ( const reverse_iterator < _Iterator > & __x,
        const reverse_iterator < _Iterator > & __y )
    { return ! ( __x < __y ); }

template < typename _Iterator >
    inline typename reverse_iterator < _Iterator > :: difference_type
    operator - ( const reverse_iterator < _Iterator > & __x,
       const reverse_iterator < _Iterator > & __y )
    { return __y . base ( ) - __x . base ( ); }

template < typename _Iterator >
    inline reverse_iterator < _Iterator >
    operator + ( typename reverse_iterator < _Iterator > :: difference_type __n,
       const reverse_iterator < _Iterator > & __x )
    { return reverse_iterator < _Iterator > ( __x . base ( ) - __n ); }



template < typename _IteratorL, typename _IteratorR >
    inline bool
    operator == ( const reverse_iterator < _IteratorL > & __x,
        const reverse_iterator < _IteratorR > & __y )
    { return __x . base ( ) == __y . base ( ); }

template < typename _IteratorL, typename _IteratorR >
    inline bool
    operator < ( const reverse_iterator < _IteratorL > & __x,
       const reverse_iterator < _IteratorR > & __y )
    { return __y . base ( ) < __x . base ( ); }

template < typename _IteratorL, typename _IteratorR >
    inline bool
    operator != ( const reverse_iterator < _IteratorL > & __x,
        const reverse_iterator < _IteratorR > & __y )
    { return ! ( __x == __y ); }

template < typename _IteratorL, typename _IteratorR >
    inline bool
    operator > ( const reverse_iterator < _IteratorL > & __x,
       const reverse_iterator < _IteratorR > & __y )
    { return __y < __x; }

template < typename _IteratorL, typename _IteratorR >
    inline bool
    operator <= ( const reverse_iterator < _IteratorL > & __x,
        const reverse_iterator < _IteratorR > & __y )
    { return ! ( __y < __x ); }

template < typename _IteratorL, typename _IteratorR >
    inline bool
    operator >= ( const reverse_iterator < _IteratorL > & __x,
        const reverse_iterator < _IteratorR > & __y )
    { return ! ( __x < __y ); }

template < typename _IteratorL, typename _IteratorR >







    inline typename reverse_iterator < _IteratorL > :: difference_type
    operator - ( const reverse_iterator < _IteratorL > & __x,
       const reverse_iterator < _IteratorR > & __y )

    { return __y . base ( ) - __x . base ( ); }
# 402 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/bits/stl_iterator.h" 3
template < typename _Container >
    class back_insert_iterator
    : public iterator < output_iterator_tag, void, void, void, void >{ 


protected: _Container * container; 



public: typedef _Container container_type; 



explicit back_insert_iterator ( _Container & __x ): container ( & __x ) { }
# 430 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/bits/stl_iterator.h" 3
back_insert_iterator & operator = ( typename _Container :: const_reference __value )
      {
 container -> push_back ( __value );
 return * this;
      }
# 453 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/bits/stl_iterator.h" 3
back_insert_iterator & operator * ( )
      { return * this; }



back_insert_iterator & operator ++ ( )
      { return * this; }



back_insert_iterator operator ++ ( int )
      { return * this; }
};
# 478 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/bits/stl_iterator.h" 3
template < typename _Container >
    inline back_insert_iterator < _Container >
    back_inserter ( _Container & __x )
    { return back_insert_iterator < _Container > ( __x ); }
# 493 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/bits/stl_iterator.h" 3
template < typename _Container >
    class front_insert_iterator
    : public iterator < output_iterator_tag, void, void, void, void >{ 


protected: _Container * container; 



public: typedef _Container container_type; 


explicit front_insert_iterator ( _Container & __x ): container ( & __x ) { }
# 520 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/bits/stl_iterator.h" 3
front_insert_iterator & operator = ( typename _Container :: const_reference __value )
      {
 container -> push_front ( __value );
 return * this;
      }
# 543 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/bits/stl_iterator.h" 3
front_insert_iterator & operator * ( )
      { return * this; }



front_insert_iterator & operator ++ ( )
      { return * this; }



front_insert_iterator operator ++ ( int )
      { return * this; }
};
# 568 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/bits/stl_iterator.h" 3
template < typename _Container >
    inline front_insert_iterator < _Container >
    front_inserter ( _Container & __x )
    { return front_insert_iterator < _Container > ( __x ); }
# 587 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/bits/stl_iterator.h" 3
template < typename _Container >
    class insert_iterator
    : public iterator < output_iterator_tag, void, void, void, void >{ 


protected: _Container * container; 
typename _Container :: iterator iter; 



public: typedef _Container container_type; 
# 603
 insert_iterator ( _Container & __x, typename _Container :: iterator __i )
      : container ( & __x ), iter ( __i ) { }
# 631 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/bits/stl_iterator.h" 3
insert_iterator & operator = ( typename _Container :: const_reference __value )
      {
 iter = container -> insert ( iter, __value );
 ++ iter;
 return * this;
      }
# 657 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/bits/stl_iterator.h" 3
insert_iterator & operator * ( )
      { return * this; }



insert_iterator & operator ++ ( )
      { return * this; }



insert_iterator & operator ++ ( int )
      { return * this; }
};
# 682 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/bits/stl_iterator.h" 3
template < typename _Container, typename _Iterator >
    inline insert_iterator < _Container >
    inserter ( _Container & __x, _Iterator __i )
    {
      return insert_iterator < _Container > ( __x,
      typename _Container :: iterator ( __i ) );
    }




}

namespace __gnu_cxx { 
# 706 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/bits/stl_iterator.h" 3
using std::iterator_traits;
using std::iterator;
template < typename _Iterator, typename _Container >
    class __normal_iterator{ 


protected: _Iterator _M_current; 

typedef iterator_traits < _Iterator > __traits_type; 


public: typedef _Iterator iterator_type; 
typedef typename __traits_type :: iterator_category iterator_category; 
typedef typename __traits_type :: value_type value_type; 
typedef typename __traits_type :: difference_type difference_type; 
typedef typename __traits_type :: reference reference; 
typedef typename __traits_type :: pointer pointer; 

 __normal_iterator ( )
      : _M_current ( _Iterator ( ) ) { }


explicit __normal_iterator ( const _Iterator & __i )
      : _M_current ( __i ) { }


template < typename _Iter >
        __normal_iterator ( const __normal_iterator < _Iter,
     typename __enable_if <
              ( std :: __are_same < _Iter, typename _Container :: pointer > :: __value ),
        _Container > :: __type > & __i )
        : _M_current ( __i . base ( ) ) { }



reference operator * ( ) const
      { return * _M_current; }


pointer operator -> ( ) const
      { return _M_current; }


__normal_iterator & operator ++ ( )
      {
 ++ _M_current;
 return * this;
      }


__normal_iterator operator ++ ( int )
      { return __normal_iterator ( _M_current ++ ); }



__normal_iterator & operator -- ( )
      {
 -- _M_current;
 return * this;
      }


__normal_iterator operator -- ( int )
      { return __normal_iterator ( _M_current -- ); }



reference operator [ ] ( difference_type __n ) const
      { return _M_current [ __n ]; }


__normal_iterator & operator += ( difference_type __n )
      { _M_current += __n; return * this; }


__normal_iterator operator + ( difference_type __n ) const
      { return __normal_iterator ( _M_current + __n ); }


__normal_iterator & operator -= ( difference_type __n )
      { _M_current -= __n; return * this; }


__normal_iterator operator - ( difference_type __n ) const
      { return __normal_iterator ( _M_current - __n ); }


const _Iterator & base ( ) const
      { return _M_current; }
};
# 806 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/bits/stl_iterator.h" 3
template < typename _IteratorL, typename _IteratorR, typename _Container >
    inline bool
    operator == ( const __normal_iterator < _IteratorL, _Container > & __lhs,
        const __normal_iterator < _IteratorR, _Container > & __rhs )

    { return __lhs . base ( ) == __rhs . base ( ); }

template < typename _Iterator, typename _Container >
    inline bool
    operator == ( const __normal_iterator < _Iterator, _Container > & __lhs,
        const __normal_iterator < _Iterator, _Container > & __rhs )

    { return __lhs . base ( ) == __rhs . base ( ); }

template < typename _IteratorL, typename _IteratorR, typename _Container >
    inline bool
    operator != ( const __normal_iterator < _IteratorL, _Container > & __lhs,
        const __normal_iterator < _IteratorR, _Container > & __rhs )

    { return __lhs . base ( ) != __rhs . base ( ); }

template < typename _Iterator, typename _Container >
    inline bool
    operator != ( const __normal_iterator < _Iterator, _Container > & __lhs,
        const __normal_iterator < _Iterator, _Container > & __rhs )

    { return __lhs . base ( ) != __rhs . base ( ); }


template < typename _IteratorL, typename _IteratorR, typename _Container >
    inline bool
    operator < ( const __normal_iterator < _IteratorL, _Container > & __lhs,
       const __normal_iterator < _IteratorR, _Container > & __rhs )

    { return __lhs . base ( ) < __rhs . base ( ); }

template < typename _Iterator, typename _Container >
    inline bool
    operator < ( const __normal_iterator < _Iterator, _Container > & __lhs,
       const __normal_iterator < _Iterator, _Container > & __rhs )

    { return __lhs . base ( ) < __rhs . base ( ); }

template < typename _IteratorL, typename _IteratorR, typename _Container >
    inline bool
    operator > ( const __normal_iterator < _IteratorL, _Container > & __lhs,
       const __normal_iterator < _IteratorR, _Container > & __rhs )

    { return __lhs . base ( ) > __rhs . base ( ); }

template < typename _Iterator, typename _Container >
    inline bool
    operator > ( const __normal_iterator < _Iterator, _Container > & __lhs,
       const __normal_iterator < _Iterator, _Container > & __rhs )

    { return __lhs . base ( ) > __rhs . base ( ); }

template < typename _IteratorL, typename _IteratorR, typename _Container >
    inline bool
    operator <= ( const __normal_iterator < _IteratorL, _Container > & __lhs,
        const __normal_iterator < _IteratorR, _Container > & __rhs )

    { return __lhs . base ( ) <= __rhs . base ( ); }

template < typename _Iterator, typename _Container >
    inline bool
    operator <= ( const __normal_iterator < _Iterator, _Container > & __lhs,
        const __normal_iterator < _Iterator, _Container > & __rhs )

    { return __lhs . base ( ) <= __rhs . base ( ); }

template < typename _IteratorL, typename _IteratorR, typename _Container >
    inline bool
    operator >= ( const __normal_iterator < _IteratorL, _Container > & __lhs,
        const __normal_iterator < _IteratorR, _Container > & __rhs )

    { return __lhs . base ( ) >= __rhs . base ( ); }

template < typename _Iterator, typename _Container >
    inline bool
    operator >= ( const __normal_iterator < _Iterator, _Container > & __lhs,
        const __normal_iterator < _Iterator, _Container > & __rhs )

    { return __lhs . base ( ) >= __rhs . base ( ); }
# 895
template < typename _IteratorL, typename _IteratorR, typename _Container >







    inline typename __normal_iterator < _IteratorL, _Container > :: difference_type
    operator - ( const __normal_iterator < _IteratorL, _Container > & __lhs,
       const __normal_iterator < _IteratorR, _Container > & __rhs )

    { return __lhs . base ( ) - __rhs . base ( ); }

template < typename _Iterator, typename _Container >
    inline typename __normal_iterator < _Iterator, _Container > :: difference_type
    operator - ( const __normal_iterator < _Iterator, _Container > & __lhs,
       const __normal_iterator < _Iterator, _Container > & __rhs )

    { return __lhs . base ( ) - __rhs . base ( ); }

template < typename _Iterator, typename _Container >
    inline __normal_iterator < _Iterator, _Container >
    operator + ( typename __normal_iterator < _Iterator, _Container > :: difference_type
       __n, const __normal_iterator < _Iterator, _Container > & __i )

    { return __normal_iterator < _Iterator, _Container > ( __i . base ( ) + __n ); }


}
# 33 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/bits/predefined_ops.h" 3
namespace __gnu_cxx { 

namespace __ops { 

struct _Iter_less_iter { 

template < typename _Iterator1, typename _Iterator2 >
      bool
      operator ( ) ( _Iterator1 __it1, _Iterator2 __it2 ) const
      { return * __it1 < * __it2; }
}; 


inline _Iter_less_iter __iter_less_iter() 
{ return _Iter_less_iter(); } 

struct _Iter_less_val { 

template < typename _Iterator, typename _Value >
      bool
      operator ( ) ( _Iterator __it, _Value & __val ) const
      { return * __it < __val; }
}; 


inline _Iter_less_val __iter_less_val() 
{ return _Iter_less_val(); } 


inline _Iter_less_val __iter_comp_val(_Iter_less_iter) 
{ return _Iter_less_val(); } 

struct _Val_less_iter { 

template < typename _Value, typename _Iterator >
      bool
      operator ( ) ( _Value & __val, _Iterator __it ) const
      { return __val < * __it; }
}; 


inline _Val_less_iter __val_less_iter() 
{ return _Val_less_iter(); } 


inline _Val_less_iter __val_comp_iter(_Iter_less_iter) 
{ return _Val_less_iter(); } 

struct _Iter_equal_to_iter { 

template < typename _Iterator1, typename _Iterator2 >
      bool
      operator ( ) ( _Iterator1 __it1, _Iterator2 __it2 ) const
      { return * __it1 == * __it2; }
}; 


inline _Iter_equal_to_iter __iter_equal_to_iter() 
{ return _Iter_equal_to_iter(); } 

struct _Iter_equal_to_val { 

template < typename _Iterator, typename _Value >
      bool
      operator ( ) ( _Iterator __it, _Value & __val ) const
      { return * __it == __val; }
}; 


inline _Iter_equal_to_val __iter_equal_to_val() 
{ return _Iter_equal_to_val(); } 


inline _Iter_equal_to_val __iter_comp_val(_Iter_equal_to_iter) 
{ return _Iter_equal_to_val(); } 

template < typename _Compare >
    struct _Iter_comp_iter{ 

_Compare _M_comp; 

 _Iter_comp_iter ( _Compare __comp )
 : _M_comp ( __comp )
      { }

template < typename _Iterator1, typename _Iterator2 >
        bool
        operator ( ) ( _Iterator1 __it1, _Iterator2 __it2 )
        { return bool ( _M_comp ( * __it1, * __it2 ) ); }
};

template < typename _Compare >
    inline _Iter_comp_iter < _Compare >
    __iter_comp_iter ( _Compare __comp )
    { return _Iter_comp_iter < _Compare > ( __comp ); }

template < typename _Compare >
    struct _Iter_comp_val{ 

_Compare _M_comp; 

 _Iter_comp_val ( _Compare __comp )
 : _M_comp ( __comp )
      { }

template < typename _Iterator, typename _Value >
 bool
 operator ( ) ( _Iterator __it, _Value & __val )
 { return bool ( _M_comp ( * __it, __val ) ); }
};

template < typename _Compare >
   inline _Iter_comp_val < _Compare >
    __iter_comp_val ( _Compare __comp )
    { return _Iter_comp_val < _Compare > ( __comp ); }

template < typename _Compare >
    inline _Iter_comp_val < _Compare >
    __iter_comp_val ( _Iter_comp_iter < _Compare > __comp )
    { return _Iter_comp_val < _Compare > ( __comp . _M_comp ); }

template < typename _Compare >
    struct _Val_comp_iter{ 

_Compare _M_comp; 

 _Val_comp_iter ( _Compare __comp )
 : _M_comp ( __comp )
      { }

template < typename _Value, typename _Iterator >
 bool
 operator ( ) ( _Value & __val, _Iterator __it )
 { return bool ( _M_comp ( __val, * __it ) ); }
};

template < typename _Compare >
    inline _Val_comp_iter < _Compare >
    __val_comp_iter ( _Compare __comp )
    { return _Val_comp_iter < _Compare > ( __comp ); }

template < typename _Compare >
    inline _Val_comp_iter < _Compare >
    __val_comp_iter ( _Iter_comp_iter < _Compare > __comp )
    { return _Val_comp_iter < _Compare > ( __comp . _M_comp ); }

template < typename _Value >
    struct _Iter_equals_val{ 

_Value & _M_value; 

 _Iter_equals_val ( _Value & __value )
 : _M_value ( __value )
      { }

template < typename _Iterator >
 bool
 operator ( ) ( _Iterator __it )
 { return * __it == _M_value; }
};

template < typename _Value >
    inline _Iter_equals_val < _Value >
    __iter_equals_val ( _Value & __val )
    { return _Iter_equals_val < _Value > ( __val ); }

template < typename _Iterator1 >
    struct _Iter_equals_iter{ 

typename std :: iterator_traits < _Iterator1 > :: reference _M_ref; 

 _Iter_equals_iter ( _Iterator1 __it1 )
 : _M_ref ( * __it1 )
      { }

template < typename _Iterator2 >
 bool
 operator ( ) ( _Iterator2 __it2 )
 { return * __it2 == _M_ref; }
};

template < typename _Iterator >
    inline _Iter_equals_iter < _Iterator >
    __iter_comp_iter ( _Iter_equal_to_iter, _Iterator __it )
    { return _Iter_equals_iter < _Iterator > ( __it ); }

template < typename _Predicate >
    struct _Iter_pred{ 

_Predicate _M_pred; 

 _Iter_pred ( _Predicate __pred )
 : _M_pred ( __pred )
      { }

template < typename _Iterator >
 bool
 operator ( ) ( _Iterator __it )
 { return bool ( _M_pred ( * __it ) ); }
};

template < typename _Predicate >
    inline _Iter_pred < _Predicate >
    __pred_iter ( _Predicate __pred )
    { return _Iter_pred < _Predicate > ( __pred ); }

template < typename _Compare, typename _Value >
    struct _Iter_comp_to_val{ 

_Compare _M_comp; 
_Value & _M_value; 

 _Iter_comp_to_val ( _Compare __comp, _Value & __value )
 : _M_comp ( __comp ), _M_value ( __value )
      { }

template < typename _Iterator >
 bool
 operator ( ) ( _Iterator __it )
 { return bool ( _M_comp ( * __it, _M_value ) ); }
};

template < typename _Compare, typename _Value >
    _Iter_comp_to_val < _Compare, _Value >
    __iter_comp_val ( _Compare __comp, _Value & __val )
    { return _Iter_comp_to_val < _Compare, _Value > ( __comp, __val ); }

template < typename _Compare, typename _Iterator1 >
    struct _Iter_comp_to_iter{ 

_Compare _M_comp; 
typename std :: iterator_traits < _Iterator1 > :: reference _M_ref; 

 _Iter_comp_to_iter ( _Compare __comp, _Iterator1 __it1 )
 : _M_comp ( __comp ), _M_ref ( * __it1 )
      { }

template < typename _Iterator2 >
 bool
 operator ( ) ( _Iterator2 __it2 )
 { return bool ( _M_comp ( * __it2, _M_ref ) ); }
};

template < typename _Compare, typename _Iterator >
    inline _Iter_comp_to_iter < _Compare, _Iterator >
    __iter_comp_iter ( _Iter_comp_iter < _Compare > __comp, _Iterator __it )
    { return _Iter_comp_to_iter < _Compare, _Iterator > ( __comp . _M_comp, __it ); }

template < typename _Predicate >
    struct _Iter_negate{ 

_Predicate _M_pred; 

 _Iter_negate ( _Predicate __pred )
 : _M_pred ( __pred )
      { }

template < typename _Iterator >
 bool
 operator ( ) ( _Iterator __it )
 { return ! bool ( _M_pred ( * __it ) ); }
};

template < typename _Predicate >
    inline _Iter_negate < _Predicate >
    __negate ( _Iter_pred < _Predicate > __pred )
    { return _Iter_negate < _Predicate > ( __pred . _M_pred ); }

}
}
# 73 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/bits/stl_algobase.h" 3
namespace std { 
# 81
template < bool _BoolType >
    struct __iter_swap{ 

template < typename _ForwardIterator1, typename _ForwardIterator2 >
        static void
        iter_swap ( _ForwardIterator1 __a, _ForwardIterator2 __b )
        {
          typedef typename iterator_traits < _ForwardIterator1 > :: value_type
            _ValueType1;
          _ValueType1 __tmp = ( * __a );
          * __a = ( * __b );
          * __b = ( __tmp );
 }
};


template<> struct __iter_swap< true>  { 

template < typename _ForwardIterator1, typename _ForwardIterator2 >
        static void
        iter_swap ( _ForwardIterator1 __a, _ForwardIterator2 __b )
        {
          swap ( * __a, * __b );
        }
}; 
# 118 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/bits/stl_algobase.h" 3
template < typename _ForwardIterator1, typename _ForwardIterator2 >
    inline void
    iter_swap ( _ForwardIterator1 __a, _ForwardIterator2 __b )
    {







      typedef typename iterator_traits < _ForwardIterator1 > :: value_type
 _ValueType1;
      typedef typename iterator_traits < _ForwardIterator2 > :: value_type
 _ValueType2;






      typedef typename iterator_traits < _ForwardIterator1 > :: reference
 _ReferenceType1;
      typedef typename iterator_traits < _ForwardIterator2 > :: reference
 _ReferenceType2;
      std :: __iter_swap < __are_same < _ValueType1, _ValueType2 > :: __value
 && __are_same < _ValueType1 &, _ReferenceType1 > :: __value
 && __are_same < _ValueType2 &, _ReferenceType2 > :: __value > ::
 iter_swap ( __a, __b );



    }
# 164 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/bits/stl_algobase.h" 3
template < typename _ForwardIterator1, typename _ForwardIterator2 >
    _ForwardIterator2
    swap_ranges ( _ForwardIterator1 __first1, _ForwardIterator1 __last1,
  _ForwardIterator2 __first2 )
    {





      ;

      for (; __first1 != __last1; ++ __first1, ++ __first2 )
 std :: iter_swap ( __first1, __first2 );
      return __first2;
    }
# 192 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/bits/stl_algobase.h" 3
template < typename _Tp >
    inline const _Tp &
    min ( const _Tp & __a, const _Tp & __b )
    {



      if ( __b < __a )
 return __b;
      return __a;
    }
# 215 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/bits/stl_algobase.h" 3
template < typename _Tp >
    inline const _Tp &
    max ( const _Tp & __a, const _Tp & __b )
    {



      if ( __a < __b )
 return __b;
      return __a;
    }
# 238 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/bits/stl_algobase.h" 3
template < typename _Tp, typename _Compare >
    inline const _Tp &
    min ( const _Tp & __a, const _Tp & __b, _Compare __comp )
    {

      if ( __comp ( __b, __a ) )
 return __b;
      return __a;
    }
# 259 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/bits/stl_algobase.h" 3
template < typename _Tp, typename _Compare >
    inline const _Tp &
    max ( const _Tp & __a, const _Tp & __b, _Compare __comp )
    {

      if ( __comp ( __a, __b ) )
 return __b;
      return __a;
    }



template < typename _Iterator >
    struct _Niter_base
    : _Iter_base < _Iterator, __is_normal_iterator < _Iterator > :: __value >{ 
};

template < typename _Iterator >
    inline typename _Niter_base < _Iterator > :: iterator_type
    __niter_base ( _Iterator __it )
    { return std :: _Niter_base < _Iterator > :: _S_base ( __it ); }


template < typename _Iterator >
    struct _Miter_base
    : _Iter_base < _Iterator, __is_move_iterator < _Iterator > :: __value >{ 
};

template < typename _Iterator >
    inline typename _Miter_base < _Iterator > :: iterator_type
    __miter_base ( _Iterator __it )
    { return std :: _Miter_base < _Iterator > :: _S_base ( __it ); }
# 298
template < bool, bool, typename >
    struct __copy_move{ 

template < typename _II, typename _OI >
        static _OI
        __copy_m ( _II __first, _II __last, _OI __result )
        {
   for (; __first != __last; ++ __result, ++ __first )
     * __result = * __first;
   return __result;
 }
};
# 327 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/bits/stl_algobase.h" 3
template<> struct __copy_move< false, false, random_access_iterator_tag>  { 

template < typename _II, typename _OI >
        static _OI
        __copy_m ( _II __first, _II __last, _OI __result )
        {
   typedef typename iterator_traits < _II > :: difference_type _Distance;
   for ( _Distance __n = __last - __first; __n > 0; -- __n )
     {
       * __result = * __first;
       ++ __first;
       ++ __result;
     }
   return __result;
 }
}; 
# 364 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/bits/stl_algobase.h" 3
template < bool _IsMove >
    struct __copy_move < _IsMove, true, random_access_iterator_tag >{ 

template < typename _Tp >
        static _Tp *
        __copy_m ( const _Tp * __first, const _Tp * __last, _Tp * __result )
        {





   const ptrdiff_t _Num = __last - __first;
   if ( _Num )
     __builtin_memmove ( __result, __first, sizeof ( _Tp ) * _Num );
   return __result + _Num;
 }
};

template < bool _IsMove, typename _II, typename _OI >
    inline _OI
    __copy_move_a ( _II __first, _II __last, _OI __result )
    {
      typedef typename iterator_traits < _II > :: value_type _ValueTypeI;
      typedef typename iterator_traits < _OI > :: value_type _ValueTypeO;
      typedef typename iterator_traits < _II > :: iterator_category _Category;
      const bool __simple = ( __is_trivial ( _ValueTypeI )
                      && __is_pointer < _II > :: __value
                      && __is_pointer < _OI > :: __value
        && __are_same < _ValueTypeI, _ValueTypeO > :: __value );

      return std :: __copy_move < _IsMove, __simple,
                       _Category > :: __copy_m ( __first, __last, __result );
    }



template < typename _CharT >
    struct char_traits;

template < typename _CharT, typename _Traits >
    class istreambuf_iterator;

template < typename _CharT, typename _Traits >
    class ostreambuf_iterator;

template < bool _IsMove, typename _CharT >
    typename __gnu_cxx :: __enable_if < __is_char < _CharT > :: __value,
      ostreambuf_iterator < _CharT, char_traits < _CharT > > > :: __type
    __copy_move_a2 ( _CharT *, _CharT *,
     ostreambuf_iterator < _CharT, char_traits < _CharT > > );

template < bool _IsMove, typename _CharT >
    typename __gnu_cxx :: __enable_if < __is_char < _CharT > :: __value,
      ostreambuf_iterator < _CharT, char_traits < _CharT > > > :: __type
    __copy_move_a2 ( const _CharT *, const _CharT *,
     ostreambuf_iterator < _CharT, char_traits < _CharT > > );

template < bool _IsMove, typename _CharT >
    typename __gnu_cxx :: __enable_if < __is_char < _CharT > :: __value,
        _CharT * > :: __type
    __copy_move_a2 ( istreambuf_iterator < _CharT, char_traits < _CharT > >,
     istreambuf_iterator < _CharT, char_traits < _CharT > >, _CharT * );

template < bool _IsMove, typename _II, typename _OI >
    inline _OI
    __copy_move_a2 ( _II __first, _II __last, _OI __result )
    {
      return _OI ( std :: __copy_move_a < _IsMove > ( std :: __niter_base ( __first ),
          std :: __niter_base ( __last ),
          std :: __niter_base ( __result ) ) );
    }
# 454 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/bits/stl_algobase.h" 3
template < typename _II, typename _OI >
    inline _OI
    copy ( _II __first, _II __last, _OI __result )
    {




      ;

      return ( std :: __copy_move_a2 < __is_move_iterator < _II > :: __value >
       ( std :: __miter_base ( __first ), std :: __miter_base ( __last ),
        __result ) );
    }
# 506 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/bits/stl_algobase.h" 3
template < bool, bool, typename >
    struct __copy_move_backward{ 

template < typename _BI1, typename _BI2 >
        static _BI2
        __copy_move_b ( _BI1 __first, _BI1 __last, _BI2 __result )
        {
   while ( __first != __last )
     * -- __result = * -- __last;
   return __result;
 }
};
# 535 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/bits/stl_algobase.h" 3
template<> struct __copy_move_backward< false, false, random_access_iterator_tag>  { 

template < typename _BI1, typename _BI2 >
        static _BI2
        __copy_move_b ( _BI1 __first, _BI1 __last, _BI2 __result )
        {
   typename iterator_traits < _BI1 > :: difference_type __n;
   for ( __n = __last - __first; __n > 0; -- __n )
     * -- __result = * -- __last;
   return __result;
 }
}; 
# 564 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/bits/stl_algobase.h" 3
template < bool _IsMove >
    struct __copy_move_backward < _IsMove, true, random_access_iterator_tag >{ 

template < typename _Tp >
        static _Tp *
        __copy_move_b ( const _Tp * __first, const _Tp * __last, _Tp * __result )
        {





   const ptrdiff_t _Num = __last - __first;
   if ( _Num )
     __builtin_memmove ( __result - _Num, __first, sizeof ( _Tp ) * _Num );
   return __result - _Num;
 }
};

template < bool _IsMove, typename _BI1, typename _BI2 >
    inline _BI2
    __copy_move_backward_a ( _BI1 __first, _BI1 __last, _BI2 __result )
    {
      typedef typename iterator_traits < _BI1 > :: value_type _ValueType1;
      typedef typename iterator_traits < _BI2 > :: value_type _ValueType2;
      typedef typename iterator_traits < _BI1 > :: iterator_category _Category;
      const bool __simple = ( __is_trivial ( _ValueType1 )
                      && __is_pointer < _BI1 > :: __value
                      && __is_pointer < _BI2 > :: __value
        && __are_same < _ValueType1, _ValueType2 > :: __value );

      return std :: __copy_move_backward < _IsMove, __simple,
                                _Category > :: __copy_move_b ( __first,
         __last,
         __result );
    }

template < bool _IsMove, typename _BI1, typename _BI2 >
    inline _BI2
    __copy_move_backward_a2 ( _BI1 __first, _BI1 __last, _BI2 __result )
    {
      return _BI2 ( std :: __copy_move_backward_a < _IsMove >
    ( std :: __niter_base ( __first ), std :: __niter_base ( __last ),
     std :: __niter_base ( __result ) ) );
    }
# 628 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/bits/stl_algobase.h" 3
template < typename _BI1, typename _BI2 >
    inline _BI2
    copy_backward ( _BI1 __first, _BI1 __last, _BI2 __result )
    {






      ;

      return ( std :: __copy_move_backward_a2 < __is_move_iterator < _BI1 > :: __value >
       ( std :: __miter_base ( __first ), std :: __miter_base ( __last ),
        __result ) );
    }
# 686 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/bits/stl_algobase.h" 3
template < typename _ForwardIterator, typename _Tp >
    inline typename
    __gnu_cxx :: __enable_if < ! __is_scalar < _Tp > :: __value, void > :: __type
    __fill_a ( _ForwardIterator __first, _ForwardIterator __last,
       const _Tp & __value )
    {
      for (; __first != __last; ++ __first )
 * __first = __value;
    }

template < typename _ForwardIterator, typename _Tp >
    inline typename
    __gnu_cxx :: __enable_if < __is_scalar < _Tp > :: __value, void > :: __type
    __fill_a ( _ForwardIterator __first, _ForwardIterator __last,
      const _Tp & __value )
    {
      const _Tp __tmp = __value;
      for (; __first != __last; ++ __first )
 * __first = __tmp;
    }


template < typename _Tp >
    inline typename
    __gnu_cxx :: __enable_if < __is_byte < _Tp > :: __value, void > :: __type
    __fill_a ( _Tp * __first, _Tp * __last, const _Tp & __c )
    {
      const _Tp __tmp = __c;
      __builtin_memset ( __first, static_cast < unsigned char > ( __tmp ),
         __last - __first );
    }
# 730 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/bits/stl_algobase.h" 3
template < typename _ForwardIterator, typename _Tp >
    inline void
    fill ( _ForwardIterator __first, _ForwardIterator __last, const _Tp & __value )
    {



      ;

      std :: __fill_a ( std :: __niter_base ( __first ), std :: __niter_base ( __last ),
      __value );
    }

template < typename _OutputIterator, typename _Size, typename _Tp >
    inline typename
    __gnu_cxx :: __enable_if < ! __is_scalar < _Tp > :: __value, _OutputIterator > :: __type
    __fill_n_a ( _OutputIterator __first, _Size __n, const _Tp & __value )
    {
      for ( __decltype ( __n + 0 ) __niter = __n;
    __niter > 0; -- __niter, ++ __first )
 * __first = __value;
      return __first;
    }

template < typename _OutputIterator, typename _Size, typename _Tp >
    inline typename
    __gnu_cxx :: __enable_if < __is_scalar < _Tp > :: __value, _OutputIterator > :: __type
    __fill_n_a ( _OutputIterator __first, _Size __n, const _Tp & __value )
    {
      const _Tp __tmp = __value;
      for ( __decltype ( __n + 0 ) __niter = __n;
    __niter > 0; -- __niter, ++ __first )
 * __first = __tmp;
      return __first;
    }

template < typename _Size, typename _Tp >
    inline typename
    __gnu_cxx :: __enable_if < __is_byte < _Tp > :: __value, _Tp * > :: __type
    __fill_n_a ( _Tp * __first, _Size __n, const _Tp & __c )
    {
      std :: __fill_a ( __first, __first + __n, __c );
      return __first + __n;
    }
# 790 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/bits/stl_algobase.h" 3
template < typename _OI, typename _Size, typename _Tp >
    inline _OI
    fill_n ( _OI __first, _Size __n, const _Tp & __value )
    {



      return _OI ( std :: __fill_n_a ( std :: __niter_base ( __first ), __n, __value ) );
    }

template < bool _BoolType >
    struct __equal{ 

template < typename _II1, typename _II2 >
        static bool
        equal ( _II1 __first1, _II1 __last1, _II2 __first2 )
        {
   for (; __first1 != __last1; ++ __first1, ++ __first2 )
     if ( ! ( * __first1 == * __first2 ) )
       return false;
   return true;
 }
};


template<> struct __equal< true>  { 

template < typename _Tp >
        static bool
        equal ( const _Tp * __first1, const _Tp * __last1, const _Tp * __first2 )
        {
   return ! __builtin_memcmp ( __first1, __first2, sizeof ( _Tp )
       * ( __last1 - __first1 ) );
 }
}; 

template < typename _II1, typename _II2 >
    inline bool
    __equal_aux ( _II1 __first1, _II1 __last1, _II2 __first2 )
    {
      typedef typename iterator_traits < _II1 > :: value_type _ValueType1;
      typedef typename iterator_traits < _II2 > :: value_type _ValueType2;
      const bool __simple = ( ( __is_integer < _ValueType1 > :: __value
         || __is_pointer < _ValueType1 > :: __value )
                      && __is_pointer < _II1 > :: __value
                      && __is_pointer < _II2 > :: __value
        && __are_same < _ValueType1, _ValueType2 > :: __value );

      return std :: __equal < __simple > :: equal ( __first1, __last1, __first2 );
    }

template < typename, typename >
    struct __lc_rai{ 

template < typename _II1, typename _II2 >
        static _II1
        __newlast1 ( _II1, _II1 __last1, _II2, _II2 )
        { return __last1; }

template < typename _II >
        static bool
        __cnd2 ( _II __first, _II __last )
        { return __first != __last; }
};


template<> struct __lc_rai< random_access_iterator_tag, random_access_iterator_tag>  { 

template < typename _RAI1, typename _RAI2 >
        static _RAI1
        __newlast1 ( _RAI1 __first1, _RAI1 __last1,
     _RAI2 __first2, _RAI2 __last2 )
        {
   const typename iterator_traits < _RAI1 > :: difference_type
     __diff1 = __last1 - __first1;
   const typename iterator_traits < _RAI2 > :: difference_type
     __diff2 = __last2 - __first2;
   return __diff2 < __diff1 ? __first1 + __diff2 : __last1;
 }

template < typename _RAI >
        static bool
        __cnd2 ( _RAI, _RAI )
        { return true; }
}; 

template < typename _II1, typename _II2, typename _Compare >
    bool
    __lexicographical_compare_impl ( _II1 __first1, _II1 __last1,
       _II2 __first2, _II2 __last2,
       _Compare __comp )
    {
      typedef typename iterator_traits < _II1 > :: iterator_category _Category1;
      typedef typename iterator_traits < _II2 > :: iterator_category _Category2;
      typedef std :: __lc_rai < _Category1, _Category2 > __rai_type;

      __last1 = __rai_type :: __newlast1 ( __first1, __last1, __first2, __last2 );
      for (; __first1 != __last1 && __rai_type :: __cnd2 ( __first2, __last2 );
    ++ __first1, ++ __first2 )
 {
   if ( __comp ( __first1, __first2 ) )
     return true;
   if ( __comp ( __first2, __first1 ) )
     return false;
 }
      return __first1 == __last1 && __first2 != __last2;
    }

template < bool _BoolType >
    struct __lexicographical_compare{ 

template < typename _II1, typename _II2 >
        static bool __lc ( _II1, _II1, _II2, _II2 );
};

template < bool _BoolType >
    template < typename _II1, typename _II2 >
      bool
      __lexicographical_compare < _BoolType > ::
      __lc ( _II1 __first1, _II1 __last1, _II2 __first2, _II2 __last2 )
      {
 return std :: __lexicographical_compare_impl ( __first1, __last1,
         __first2, __last2,
     __gnu_cxx :: __ops :: __iter_less_iter ( ) );
      }


template<> struct __lexicographical_compare< true>  { 

template < typename _Tp, typename _Up >
        static bool
        __lc ( const _Tp * __first1, const _Tp * __last1,
      const _Up * __first2, const _Up * __last2 )
 {
   const size_t __len1 = __last1 - __first1;
   const size_t __len2 = __last2 - __first2;
   const int __result = __builtin_memcmp ( __first1, __first2,
      std :: min ( __len1, __len2 ) );
   return __result != 0 ? __result < 0 : __len1 < __len2;
 }
}; 

template < typename _II1, typename _II2 >
    inline bool
    __lexicographical_compare_aux ( _II1 __first1, _II1 __last1,
      _II2 __first2, _II2 __last2 )
    {
      typedef typename iterator_traits < _II1 > :: value_type _ValueType1;
      typedef typename iterator_traits < _II2 > :: value_type _ValueType2;
      const bool __simple =
 ( __is_byte < _ValueType1 > :: __value && __is_byte < _ValueType2 > :: __value
  && ! __gnu_cxx :: __numeric_traits < _ValueType1 > :: __is_signed
  && ! __gnu_cxx :: __numeric_traits < _ValueType2 > :: __is_signed
  && __is_pointer < _II1 > :: __value
  && __is_pointer < _II2 > :: __value );

      return std :: __lexicographical_compare < __simple > :: __lc ( __first1, __last1,
           __first2, __last2 );
    }

template < typename _ForwardIterator, typename _Tp, typename _Compare >
    _ForwardIterator
    __lower_bound ( _ForwardIterator __first, _ForwardIterator __last,
    const _Tp & __val, _Compare __comp )
    {
      typedef typename iterator_traits < _ForwardIterator > :: difference_type
 _DistanceType;

      _DistanceType __len = std :: distance ( __first, __last );

      while ( __len > 0 )
 {
   _DistanceType __half = __len >> 1;
   _ForwardIterator __middle = __first;
   std :: advance ( __middle, __half );
   if ( __comp ( __middle, __val ) )
     {
       __first = __middle;
       ++ __first;
       __len = __len - __half - 1;
     }
   else
     __len = __half;
 }
      return __first;
    }
# 988 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/bits/stl_algobase.h" 3
template < typename _ForwardIterator, typename _Tp >
    inline _ForwardIterator
    lower_bound ( _ForwardIterator __first, _ForwardIterator __last,
  const _Tp & __val )
    {




      ;

      return std :: __lower_bound ( __first, __last, __val,
    __gnu_cxx :: __ops :: __iter_less_val ( ) );
    }




inline int __lg(int __n) 
{ return (sizeof(int) * 8 - 1) - __builtin_clz(__n); } 


inline unsigned __lg(unsigned __n) 
{ return (sizeof(int) * 8 - 1) - __builtin_clz(__n); } 


inline long __lg(long __n) 
{ return (sizeof(long) * 8 - 1) - __builtin_clzl(__n); } 


inline unsigned long __lg(unsigned long __n) 
{ return (sizeof(long) * 8 - 1) - __builtin_clzl(__n); } 


inline long long __lg(long long __n) 
{ return (sizeof(long long) * 8 - 1) - __builtin_clzll(__n); } 


inline unsigned long long __lg(unsigned long long __n) 
{ return (sizeof(long long) * 8 - 1) - __builtin_clzll(__n); } 
# 1045 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/bits/stl_algobase.h" 3
template < typename _II1, typename _II2 >
    inline bool
    equal ( _II1 __first1, _II1 __last1, _II2 __first2 )
    {






      ;

      return std :: __equal_aux ( std :: __niter_base ( __first1 ),
         std :: __niter_base ( __last1 ),
         std :: __niter_base ( __first2 ) );
    }
# 1077 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/bits/stl_algobase.h" 3
template < typename _IIter1, typename _IIter2, typename _BinaryPredicate >
    inline bool
    equal ( _IIter1 __first1, _IIter1 __last1,
   _IIter2 __first2, _BinaryPredicate __binary_pred )
    {



      ;

      for (; __first1 != __last1; ++ __first1, ++ __first2 )
 if ( ! bool ( __binary_pred ( * __first1, * __first2 ) ) )
   return false;
      return true;
    }
# 1205 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/bits/stl_algobase.h" 3
template < typename _II1, typename _II2 >
    inline bool
    lexicographical_compare ( _II1 __first1, _II1 __last1,
       _II2 __first2, _II2 __last2 )
    {









      ;
      ;

      return std :: __lexicographical_compare_aux ( std :: __niter_base ( __first1 ),
      std :: __niter_base ( __last1 ),
      std :: __niter_base ( __first2 ),
      std :: __niter_base ( __last2 ) );
    }
# 1241 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/bits/stl_algobase.h" 3
template < typename _II1, typename _II2, typename _Compare >
    inline bool
    lexicographical_compare ( _II1 __first1, _II1 __last1,
       _II2 __first2, _II2 __last2, _Compare __comp )
    {



      ;
      ;

      return std :: __lexicographical_compare_impl
 ( __first1, __last1, __first2, __last2,
  __gnu_cxx :: __ops :: __iter_comp_iter ( __comp ) );
    }

template < typename _InputIterator1, typename _InputIterator2,
    typename _BinaryPredicate >
    pair < _InputIterator1, _InputIterator2 >
    __mismatch ( _InputIterator1 __first1, _InputIterator1 __last1,
        _InputIterator2 __first2, _BinaryPredicate __binary_pred )
    {
      while ( __first1 != __last1 && __binary_pred ( __first1, __first2 ) )
        {
   ++ __first1;
   ++ __first2;
        }
      return pair < _InputIterator1, _InputIterator2 > ( __first1, __first2 );
    }
# 1284 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/bits/stl_algobase.h" 3
template < typename _InputIterator1, typename _InputIterator2 >
    inline pair < _InputIterator1, _InputIterator2 >
    mismatch ( _InputIterator1 __first1, _InputIterator1 __last1,
      _InputIterator2 __first2 )
    {






      ;

      return std :: __mismatch ( __first1, __last1, __first2,
        __gnu_cxx :: __ops :: __iter_equal_to_iter ( ) );
    }
# 1317 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/bits/stl_algobase.h" 3
template < typename _InputIterator1, typename _InputIterator2,
    typename _BinaryPredicate >
    inline pair < _InputIterator1, _InputIterator2 >
    mismatch ( _InputIterator1 __first1, _InputIterator1 __last1,
      _InputIterator2 __first2, _BinaryPredicate __binary_pred )
    {



      ;

      return std :: __mismatch ( __first1, __last1, __first2,
 __gnu_cxx :: __ops :: __iter_comp_iter ( __binary_pred ) );
    }
# 1418 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/bits/stl_algobase.h" 3
}
# 49 "/usr/include/wchar.h" 3
extern "C" {



typedef __FILE FILE; 
# 59
struct tm; 



typedef _mbstate_t mbstate_t; 


__attribute((__cdecl__)) wint_t btowc(int); 
__attribute((__cdecl__)) int wctob(wint_t); 
__attribute((__cdecl__)) size_t mbrlen(const char *, size_t, mbstate_t *); 
__attribute((__cdecl__)) size_t mbrtowc(wchar_t *, const char *, size_t, mbstate_t *); 

__attribute((__cdecl__)) size_t _mbrtowc_r(_reent *, wchar_t *, const char *, size_t, mbstate_t *); 

__attribute((__cdecl__)) int mbsinit(const mbstate_t *); 
__attribute((__cdecl__)) size_t mbsnrtowcs(wchar_t *, const char **, size_t, size_t, mbstate_t *); 

__attribute((__cdecl__)) size_t _mbsnrtowcs_r(_reent *, wchar_t *, const char **, size_t, size_t, mbstate_t *); 

__attribute((__cdecl__)) size_t mbsrtowcs(wchar_t *, const char **, size_t, mbstate_t *); 

__attribute((__cdecl__)) size_t _mbsrtowcs_r(_reent *, wchar_t *, const char **, size_t, mbstate_t *); 
__attribute((__cdecl__)) size_t wcrtomb(char *, wchar_t, mbstate_t *); 
__attribute((__cdecl__)) size_t _wcrtomb_r(_reent *, char *, wchar_t, mbstate_t *); 
__attribute((__cdecl__)) size_t wcsnrtombs(char *, const wchar_t **, size_t, size_t, mbstate_t *); 

__attribute((__cdecl__)) size_t _wcsnrtombs_r(_reent *, char *, const wchar_t **, size_t, size_t, mbstate_t *); 

__attribute((__cdecl__)) size_t wcsrtombs(char *, const wchar_t **, size_t, mbstate_t *); 

__attribute((__cdecl__)) size_t _wcsrtombs_r(_reent *, char *, const wchar_t **, size_t, mbstate_t *); 

__attribute((__cdecl__)) int wcscasecmp(const wchar_t *, const wchar_t *); 
wchar_t *wcscat(wchar_t *, const wchar_t *) __attribute((__cdecl__)); 
wchar_t *wcschr(const wchar_t *, wchar_t) __attribute((__cdecl__)); 
__attribute((__cdecl__)) int wcscmp(const wchar_t *, const wchar_t *); 
__attribute((__cdecl__)) int wcscoll(const wchar_t *, const wchar_t *); 
wchar_t *wcscpy(wchar_t *, const wchar_t *) __attribute((__cdecl__)); 
wchar_t *wcpcpy(wchar_t *, const wchar_t *) __attribute((__cdecl__)); 

wchar_t *wcsdup(const wchar_t *) __attribute((__cdecl__)); 
wchar_t *_wcsdup_r(_reent *, const wchar_t *) __attribute((__cdecl__)); 
__attribute((__cdecl__)) size_t wcscspn(const wchar_t *, const wchar_t *); 
__attribute((__cdecl__)) size_t wcsftime(wchar_t *, size_t, const wchar_t *, const tm *); 

__attribute((__cdecl__)) size_t wcslcat(wchar_t *, const wchar_t *, size_t); 
__attribute((__cdecl__)) size_t wcslcpy(wchar_t *, const wchar_t *, size_t); 
__attribute((__cdecl__)) size_t wcslen(const wchar_t *); 
__attribute((__cdecl__)) int wcsncasecmp(const wchar_t *, const wchar_t *, size_t); 
wchar_t *wcsncat(wchar_t *, const wchar_t *, size_t) __attribute((__cdecl__)); 

__attribute((__cdecl__)) int wcsncmp(const wchar_t *, const wchar_t *, size_t); 
wchar_t *wcsncpy(wchar_t *, const wchar_t *, size_t) __attribute((__cdecl__)); 

wchar_t *wcpncpy(wchar_t *, const wchar_t *, size_t) __attribute((__cdecl__)); 

__attribute((__cdecl__)) size_t wcsnlen(const wchar_t *, size_t); 
wchar_t *wcspbrk(const wchar_t *, const wchar_t *) __attribute((__cdecl__)); 
wchar_t *wcsrchr(const wchar_t *, wchar_t) __attribute((__cdecl__)); 
__attribute((__cdecl__)) size_t wcsspn(const wchar_t *, const wchar_t *); 
wchar_t *wcsstr(const wchar_t *, const wchar_t *) __attribute((__cdecl__)); 

wchar_t *wcstok(wchar_t *, const wchar_t *, wchar_t **) __attribute((__cdecl__)); 

__attribute((__cdecl__)) double wcstod(const wchar_t *, wchar_t **); 
__attribute((__cdecl__)) double _wcstod_r(_reent *, const wchar_t *, wchar_t **); 
__attribute((__cdecl__)) float wcstof(const wchar_t *, wchar_t **); 
__attribute((__cdecl__)) float _wcstof_r(_reent *, const wchar_t *, wchar_t **); 
__attribute((__cdecl__)) int wcswidth(const wchar_t *, size_t); 
__attribute((__cdecl__)) size_t wcsxfrm(wchar_t *, const wchar_t *, size_t); 

__attribute((__cdecl__)) int wcwidth(const wchar_t); 
wchar_t *wmemchr(const wchar_t *, wchar_t, size_t) __attribute((__cdecl__)); 
__attribute((__cdecl__)) int wmemcmp(const wchar_t *, const wchar_t *, size_t); 
wchar_t *wmemcpy(wchar_t *, const wchar_t *, size_t) __attribute((__cdecl__)); 

wchar_t *wmemmove(wchar_t *, const wchar_t *, size_t) __attribute((__cdecl__)); 
wchar_t *wmemset(wchar_t *, wchar_t, size_t) __attribute((__cdecl__)); 

__attribute((__cdecl__)) long wcstol(const wchar_t *, wchar_t **, int); 
__attribute((__cdecl__)) long long wcstoll(const wchar_t *, wchar_t **, int); 

__attribute((__cdecl__)) unsigned long wcstoul(const wchar_t *, wchar_t **, int); 

__attribute((__cdecl__)) unsigned long long wcstoull(const wchar_t *, wchar_t **, int); 

__attribute((__cdecl__)) long _wcstol_r(_reent *, const wchar_t *, wchar_t **, int); 
__attribute((__cdecl__)) long long _wcstoll_r(_reent *, const wchar_t *, wchar_t **, int); 
__attribute((__cdecl__)) unsigned long _wcstoul_r(_reent *, const wchar_t *, wchar_t **, int); 
__attribute((__cdecl__)) unsigned long long _wcstoull_r(_reent *, const wchar_t *, wchar_t **, int); 
__attribute((__cdecl__)) long double wcstold(const wchar_t *, wchar_t **); 

__attribute((__cdecl__)) wint_t fgetwc(__FILE *); 
wchar_t *fgetws(wchar_t *, int, __FILE *) __attribute((__cdecl__)); 
__attribute((__cdecl__)) wint_t fputwc(wchar_t, __FILE *); 
__attribute((__cdecl__)) int fputws(const wchar_t *, __FILE *); 
__attribute((__cdecl__)) int fwide(__FILE *, int); 
__attribute((__cdecl__)) wint_t getwc(__FILE *); 
__attribute((__cdecl__)) wint_t getwchar(); 
__attribute((__cdecl__)) wint_t putwc(wchar_t, __FILE *); 
__attribute((__cdecl__)) wint_t putwchar(wchar_t); 
__attribute((__cdecl__)) wint_t ungetwc(wint_t wc, __FILE *); 

__attribute((__cdecl__)) wint_t _fgetwc_r(_reent *, __FILE *); 
__attribute((__cdecl__)) wint_t _fgetwc_unlocked_r(_reent *, __FILE *); 
wchar_t *_fgetws_r(_reent *, wchar_t *, int, __FILE *) __attribute((__cdecl__)); 
wchar_t *_fgetws_unlocked_r(_reent *, wchar_t *, int, __FILE *) __attribute((__cdecl__)); 
__attribute((__cdecl__)) wint_t _fputwc_r(_reent *, wchar_t, __FILE *); 
__attribute((__cdecl__)) wint_t _fputwc_unlocked_r(_reent *, wchar_t, __FILE *); 
__attribute((__cdecl__)) int _fputws_r(_reent *, const wchar_t *, __FILE *); 
__attribute((__cdecl__)) int _fputws_unlocked_r(_reent *, const wchar_t *, __FILE *); 
__attribute((__cdecl__)) int _fwide_r(_reent *, __FILE *, int); 
__attribute((__cdecl__)) wint_t _getwc_r(_reent *, __FILE *); 
__attribute((__cdecl__)) wint_t _getwc_unlocked_r(_reent *, __FILE *); 
__attribute((__cdecl__)) wint_t _getwchar_r(_reent * ptr); 
__attribute((__cdecl__)) wint_t _getwchar_unlocked_r(_reent * ptr); 
__attribute((__cdecl__)) wint_t _putwc_r(_reent *, wchar_t, __FILE *); 
__attribute((__cdecl__)) wint_t _putwc_unlocked_r(_reent *, wchar_t, __FILE *); 
__attribute((__cdecl__)) wint_t _putwchar_r(_reent *, wchar_t); 
__attribute((__cdecl__)) wint_t _putwchar_unlocked_r(_reent *, wchar_t); 
__attribute((__cdecl__)) wint_t _ungetwc_r(_reent *, wint_t wc, __FILE *); 
# 192 "/usr/include/wchar.h" 3
__FILE *open_wmemstream(wchar_t **, size_t *) __attribute((__cdecl__)); 
__FILE *_open_wmemstream_r(_reent *, wchar_t **, size_t *) __attribute((__cdecl__)); 
# 203 "/usr/include/wchar.h" 3
__attribute((__cdecl__)) int fwprintf(__FILE *, const wchar_t *, ...); 
__attribute((__cdecl__)) int swprintf(wchar_t *, size_t, const wchar_t *, ...); 

__attribute((__cdecl__)) int vfwprintf(__FILE *, const wchar_t *, __gnuc_va_list); 

__attribute((__cdecl__)) int vswprintf(wchar_t *, size_t, const wchar_t *, __gnuc_va_list); 

__attribute((__cdecl__)) int vwprintf(const wchar_t *, __gnuc_va_list); 
__attribute((__cdecl__)) int wprintf(const wchar_t *, ...); 

__attribute((__cdecl__)) int _fwprintf_r(_reent *, __FILE *, const wchar_t *, ...); 
__attribute((__cdecl__)) int _swprintf_r(_reent *, wchar_t *, size_t, const wchar_t *, ...); 
__attribute((__cdecl__)) int _vfwprintf_r(_reent *, __FILE *, const wchar_t *, __gnuc_va_list); 
__attribute((__cdecl__)) int _vswprintf_r(_reent *, wchar_t *, size_t, const wchar_t *, __gnuc_va_list); 
__attribute((__cdecl__)) int _vwprintf_r(_reent *, const wchar_t *, __gnuc_va_list); 
__attribute((__cdecl__)) int _wprintf_r(_reent *, const wchar_t *, ...); 

__attribute((__cdecl__)) int fwscanf(__FILE *, const wchar_t *, ...); 
__attribute((__cdecl__)) int swscanf(const wchar_t *, const wchar_t *, ...); 

__attribute((__cdecl__)) int vfwscanf(__FILE *, const wchar_t *, __gnuc_va_list); 

__attribute((__cdecl__)) int vswscanf(const wchar_t *, const wchar_t *, __gnuc_va_list); 

__attribute((__cdecl__)) int vwscanf(const wchar_t *, __gnuc_va_list); 
__attribute((__cdecl__)) int wscanf(const wchar_t *, ...); 

__attribute((__cdecl__)) int _fwscanf_r(_reent *, __FILE *, const wchar_t *, ...); 
__attribute((__cdecl__)) int _swscanf_r(_reent *, const wchar_t *, const wchar_t *, ...); 
__attribute((__cdecl__)) int _vfwscanf_r(_reent *, __FILE *, const wchar_t *, __gnuc_va_list); 
__attribute((__cdecl__)) int _vswscanf_r(_reent *, const wchar_t *, const wchar_t *, __gnuc_va_list); 
__attribute((__cdecl__)) int _vwscanf_r(_reent *, const wchar_t *, __gnuc_va_list); 
__attribute((__cdecl__)) int _wscanf_r(_reent *, const wchar_t *, ...); 
# 249 "/usr/include/wchar.h" 3
}
# 62 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/cwchar" 3
namespace std { 

using ::mbstate_t;
}
# 135 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/cwchar" 3
namespace std { 



using ::wint_t;

using ::btowc;
using ::fgetwc;
using ::fgetws;
using ::fputwc;
using ::fputws;
using ::fwide;
using ::fwprintf;
using ::fwscanf;
using ::getwc;
using ::getwchar;
using ::mbrlen;
using ::mbrtowc;
using ::mbsinit;
using ::mbsrtowcs;
using ::putwc;
using ::putwchar;

using ::swprintf;

using ::swscanf;
using ::ungetwc;
using ::vfwprintf;

using ::vfwscanf;


using ::vswprintf;


using ::vswscanf;

using ::vwprintf;

using ::vwscanf;

using ::wcrtomb;
using ::wcscat;
using ::wcscmp;
using ::wcscoll;
using ::wcscpy;
using ::wcscspn;
using ::wcsftime;
using ::wcslen;
using ::wcsncat;
using ::wcsncmp;
using ::wcsncpy;
using ::wcsrtombs;
using ::wcsspn;
using ::wcstod;

using ::wcstof;

using ::wcstok;
using ::wcstol;
using ::wcstoul;
using ::wcsxfrm;
using ::wctob;
using ::wmemcmp;
using ::wmemcpy;
using ::wmemmove;
using ::wmemset;
using ::wprintf;
using ::wscanf;
using ::wcschr;
using ::wcspbrk;
using ::wcsrchr;
using ::wcsstr;
using ::wmemchr;



inline wchar_t *wcschr(wchar_t *__p, wchar_t __c) 
{ return wcschr(const_cast< const wchar_t *>(__p), __c); } 


inline wchar_t *wcspbrk(wchar_t *__s1, const wchar_t *__s2) 
{ return wcspbrk(const_cast< const wchar_t *>(__s1), __s2); } 


inline wchar_t *wcsrchr(wchar_t *__p, wchar_t __c) 
{ return wcsrchr(const_cast< const wchar_t *>(__p), __c); } 


inline wchar_t *wcsstr(wchar_t *__s1, const wchar_t *__s2) 
{ return wcsstr(const_cast< const wchar_t *>(__s1), __s2); } 


inline wchar_t *wmemchr(wchar_t *__p, wchar_t __c, size_t __n) 
{ return wmemchr(const_cast< const wchar_t *>(__p), __c, __n); } 



}
# 68 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/bits/postypes.h" 3
namespace std { 
# 90 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/bits/postypes.h" 3
typedef long long streamoff; 
# 98
typedef ptrdiff_t streamsize; 
# 111 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/bits/postypes.h" 3
template < typename _StateT >
    class fpos{ 


streamoff _M_off; 
_StateT _M_state; 
# 123
public:  fpos ( )
      : _M_off ( 0 ), _M_state ( ) { }
# 133 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/bits/postypes.h" 3
 fpos ( streamoff __off )
      : _M_off ( __off ), _M_state ( ) { }


 operator streamoff ( ) const{ return _M_off; }



void state ( _StateT __st )
      { _M_state = __st; }



_StateT state ( ) const
      { return _M_state; }
# 154
fpos & operator += ( streamoff __off )
      {
 _M_off += __off;
 return * this;
      }
# 165
fpos & operator -= ( streamoff __off )
      {
 _M_off -= __off;
 return * this;
      }
# 178
fpos operator + ( streamoff __off ) const
      {
 fpos __pos ( * this );
 __pos += __off;
 return __pos;
      }
# 192
fpos operator - ( streamoff __off ) const
      {
 fpos __pos ( * this );
 __pos -= __off;
 return __pos;
      }
# 205
streamoff operator - ( const fpos & __other ) const
      { return _M_off - __other . _M_off; }
};
# 214
template < typename _StateT >
    inline bool
    operator == ( const fpos < _StateT > & __lhs, const fpos < _StateT > & __rhs )
    { return streamoff ( __lhs ) == streamoff ( __rhs ); }

template < typename _StateT >
    inline bool
    operator != ( const fpos < _StateT > & __lhs, const fpos < _StateT > & __rhs )
    { return streamoff ( __lhs ) != streamoff ( __rhs ); }
# 228
typedef fpos< _mbstate_t>  streampos; 

typedef fpos< _mbstate_t>  wstreampos; 
# 240 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/bits/postypes.h" 3
}
# 43 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/bits/char_traits.h" 3
namespace __gnu_cxx { 
# 57 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/bits/char_traits.h" 3
template < typename _CharT >
    struct _Char_types{ 

typedef unsigned long int_type; 
typedef std :: streampos pos_type; 
typedef std :: streamoff off_type; 
typedef std :: mbstate_t state_type; 
};
# 82 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/bits/char_traits.h" 3
template < typename _CharT >
    struct char_traits{ 

typedef _CharT char_type; 
typedef typename _Char_types < _CharT > :: int_type int_type; 
typedef typename _Char_types < _CharT > :: pos_type pos_type; 
typedef typename _Char_types < _CharT > :: off_type off_type; 
typedef typename _Char_types < _CharT > :: state_type state_type; 


static void assign ( char_type & __c1, const char_type & __c2 )
      { __c1 = __c2; }


static bool eq ( const char_type & __c1, const char_type & __c2 )
      { return __c1 == __c2; }


static bool lt ( const char_type & __c1, const char_type & __c2 )
      { return __c1 < __c2; }


static int compare ( const char_type * __s1, const char_type * __s2, std :: size_t __n );


static std :: size_t length ( const char_type * __s );


static const char_type * find ( const char_type * __s, std :: size_t __n, const char_type & __a );


static char_type * move ( char_type * __s1, const char_type * __s2, std :: size_t __n );


static char_type * copy ( char_type * __s1, const char_type * __s2, std :: size_t __n );


static char_type * assign ( char_type * __s, std :: size_t __n, char_type __a );


static char_type to_char_type ( const int_type & __c )
      { return static_cast < char_type > ( __c ); }


static int_type to_int_type ( const char_type & __c )
      { return static_cast < int_type > ( __c ); }


static bool eq_int_type ( const int_type & __c1, const int_type & __c2 )
      { return __c1 == __c2; }


static int_type eof ( )
      { return static_cast < int_type > ( - 1 ); }


static int_type not_eof ( const int_type & __c )
      { return ! eq_int_type ( __c, eof ( ) ) ? __c : to_int_type ( char_type ( ) ); }
};

template < typename _CharT >
    int
    char_traits < _CharT > ::
    compare ( const char_type * __s1, const char_type * __s2, std :: size_t __n )
    {
      for ( std :: size_t __i = 0; __i < __n; ++ __i )
 if ( lt ( __s1 [ __i ], __s2 [ __i ] ) )
   return - 1;
 else if ( lt ( __s2 [ __i ], __s1 [ __i ] ) )
   return 1;
      return 0;
    }

template < typename _CharT >
    std :: size_t
    char_traits < _CharT > ::
    length ( const char_type * __p )
    {
      std :: size_t __i = 0;
      while ( ! eq ( __p [ __i ], char_type ( ) ) )
        ++ __i;
      return __i;
    }

template < typename _CharT >
    const typename char_traits < _CharT > :: char_type *
    char_traits < _CharT > ::
    find ( const char_type * __s, std :: size_t __n, const char_type & __a )
    {
      for ( std :: size_t __i = 0; __i < __n; ++ __i )
        if ( eq ( __s [ __i ], __a ) )
          return __s + __i;
      return 0;
    }

template < typename _CharT >
    typename char_traits < _CharT > :: char_type *
    char_traits < _CharT > ::
    move ( char_type * __s1, const char_type * __s2, std :: size_t __n )
    {
      return static_cast < _CharT * > ( __builtin_memmove ( __s1, __s2,
          __n * sizeof ( char_type ) ) );
    }

template < typename _CharT >
    typename char_traits < _CharT > :: char_type *
    char_traits < _CharT > ::
    copy ( char_type * __s1, const char_type * __s2, std :: size_t __n )
    {

      std :: copy ( __s2, __s2 + __n, __s1 );
      return __s1;
    }

template < typename _CharT >
    typename char_traits < _CharT > :: char_type *
    char_traits < _CharT > ::
    assign ( char_type * __s, std :: size_t __n, char_type __a )
    {

      std :: fill_n ( __s, __n, __a );
      return __s;
    }


}

namespace std { 
# 226 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/bits/char_traits.h" 3
template < class _CharT >
    struct char_traits : public __gnu_cxx :: char_traits < _CharT >{ 
};




template<> struct char_traits< char>  { 

typedef char char_type; 
typedef int int_type; 
typedef streampos pos_type; 
typedef streamoff off_type; 
typedef mbstate_t state_type; 


static void assign(char_type &__c1, const char_type &__c2) 
{ __c1 = __c2; } 


static bool eq(const char_type &__c1, const char_type &__c2) 
{ return __c1 == __c2; } 


static bool lt(const char_type &__c1, const char_type &__c2) 
{ 

return (static_cast< unsigned char>(__c1) < static_cast< unsigned char>(__c2)); 

} 


static int compare(const char_type *__s1, const char_type *__s2, size_t __n) 
{ return __builtin_memcmp(__s1, __s2, __n); } 


static size_t length(const char_type *__s) 
{ CPPTEST_STACK_TRACE_FUNC_START_INFO() CPPTEST_STACK_TRACE_STMT_INFO(30) return __builtin_strlen(__s); CPPTEST_STACK_TRACE_EXIT_ROUTINE() } 


static const char_type *find(const char_type *__s, size_t __n, const char_type &__a) 
{ return static_cast< const char_type *>(__builtin_memchr(__s, __a, __n)); } 


static char_type *move(char_type *__s1, const char_type *__s2, size_t __n) 
{ return static_cast< char_type *>(__builtin_memmove(__s1, __s2, __n)); } 


static char_type *copy(char_type *__s1, const char_type *__s2, size_t __n) 
{ return static_cast< char_type *>(__builtin_memcpy(__s1, __s2, __n)); } 


static char_type *assign(char_type *__s, size_t __n, char_type __a) 
{ return static_cast< char_type *>(__builtin_memset(__s, __a, __n)); } 


static char_type to_char_type(const int_type &__c) 
{ return static_cast< char_type>(__c); } 




static int_type to_int_type(const char_type &__c) 
{ return static_cast< int_type>(static_cast< unsigned char>(__c)); } 


static bool eq_int_type(const int_type &__c1, const int_type &__c2) 
{ return __c1 == __c2; } 


static int_type eof() 
{ return static_cast< int_type>(-1); } 


static int_type not_eof(const int_type &__c) 
{ return (__c == eof()) ? 0 : __c; } 
}; 
# 308
template<> struct char_traits< wchar_t>  { 

typedef wchar_t char_type; 
typedef wint_t int_type; 
typedef streamoff off_type; 
typedef wstreampos pos_type; 
typedef mbstate_t state_type; 


static void assign(char_type &__c1, const char_type &__c2) 
{ __c1 = __c2; } 


static bool eq(const char_type &__c1, const char_type &__c2) 
{ return __c1 == __c2; } 


static bool lt(const char_type &__c1, const char_type &__c2) 
{ return __c1 < __c2; } 


static int compare(const char_type *__s1, const char_type *__s2, size_t __n) 
{ return wmemcmp(__s1, __s2, __n); } 


static size_t length(const char_type *__s) 
{ return wcslen(__s); } 


static const char_type *find(const char_type *__s, size_t __n, const char_type &__a) 
{ return wmemchr(__s, __a, __n); } 


static char_type *move(char_type *__s1, const char_type *__s2, size_t __n) 
{ return wmemmove(__s1, __s2, __n); } 


static char_type *copy(char_type *__s1, const char_type *__s2, size_t __n) 
{ return wmemcpy(__s1, __s2, __n); } 


static char_type *assign(char_type *__s, size_t __n, char_type __a) 
{ return wmemset(__s, __a, __n); } 


static char_type to_char_type(const int_type &__c) 
{ return (char_type)__c; } 


static int_type to_int_type(const char_type &__c) 
{ return (int_type)__c; } 


static bool eq_int_type(const int_type &__c1, const int_type &__c2) 
{ return __c1 == __c2; } 


static int_type eof() 
{ return static_cast< int_type>(((wint_t)(-1))); } 


static int_type not_eof(const int_type &__c) 
{ return eq_int_type(__c, eof()) ? 0 : (__c); } 
}; 



}
# 42 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/new" 3
#pragma GCC visibility push ( default )

extern "C++" {

namespace std { 
# 54
class bad_alloc : public exception { 


public: bad_alloc() throw() { } 



virtual ~bad_alloc() throw(); 


virtual const char *what() const throw(); 
}; 
# 85 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/new" 3
class bad_array_length : public bad_alloc { 


public: bad_array_length() throw() { } 



virtual ~bad_array_length() throw(); 


virtual const char *what() const throw(); 
}; 


struct nothrow_t { }; 

extern const nothrow_t nothrow; 



typedef void (*new_handler)(void); 



new_handler set_new_handler(new_handler) throw(); 
# 115
}
# 128 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/new" 3
void *operator new(std::size_t) throw(std::bad_alloc) __attribute((__externally_visible__)); 

void *operator new[](std::size_t) throw(std::bad_alloc) __attribute((__externally_visible__)); 

void operator delete(void *) throw() __attribute((__externally_visible__)); 

void operator delete[](void *) throw() __attribute((__externally_visible__)); 

void *operator new(std::size_t, const std::nothrow_t &) throw() __attribute((__externally_visible__)); 

void *operator new[](std::size_t, const std::nothrow_t &) throw() __attribute((__externally_visible__)); 

void operator delete(void *, const std::nothrow_t &) throw() __attribute((__externally_visible__)); 

void operator delete[](void *, const std::nothrow_t &) throw() __attribute((__externally_visible__)); 



inline void *operator new(std::size_t, void *__p) throw() 
{ return __p; } 
inline void *operator new[](std::size_t, void *__p) throw() 
{ return __p; } 


inline void operator delete(void *, void *) throw() { } 
inline void operator delete[](void *, void *) throw() { } 

}

#pragma GCC visibility pop
# 40 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/ext/new_allocator.h" 3
namespace __gnu_cxx { 



using std::size_t;
using std::ptrdiff_t;
# 57 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/ext/new_allocator.h" 3
template < typename _Tp >
    class new_allocator{ 


public: typedef size_t size_type; 
typedef ptrdiff_t difference_type; 
typedef _Tp * pointer; 
typedef const _Tp * const_pointer; 
typedef _Tp & reference; 
typedef const _Tp & const_reference; 
typedef _Tp value_type; 

template < typename _Tp1 >
        struct rebind{ 
typedef new_allocator < _Tp1 > other; };
# 79
 new_allocator ( ) throw ( ){ }

 new_allocator ( const new_allocator & ) throw ( ){ }

template < typename _Tp1 >
        new_allocator ( const new_allocator < _Tp1 > & ) throw ( ) { }

 ~ new_allocator ( ) throw ( ){ }


pointer address ( reference __x ) const
      { return std :: __addressof ( __x ); }


const_pointer address ( const_reference __x ) const
      { return std :: __addressof ( __x ); }




pointer allocate ( size_type __n, const void * = 0 )
      {
 if ( __n > this -> max_size ( ) )
   std :: __throw_bad_alloc ( );

 return static_cast < _Tp * > ( :: operator new ( __n * sizeof ( _Tp ) ) );
      }



void deallocate ( pointer __p, size_type )
      { :: operator delete ( __p ); }


size_type max_size ( ) const throw ( )
      { return size_t ( - 1 ) / sizeof ( _Tp ); }
# 129 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/ext/new_allocator.h" 3
void construct ( pointer __p, const _Tp & __val )
      { :: new ( ( void * ) __p ) _Tp ( __val ); }


void destroy ( pointer __p ){ __p -> ~ _Tp ( ); }

};

template < typename _Tp >
    inline bool
    operator == ( const new_allocator < _Tp > &, const new_allocator < _Tp > & )
    { return true; }

template < typename _Tp >
    inline bool
    operator != ( const new_allocator < _Tp > &, const new_allocator < _Tp > & )
    { return false; }


}
# 52 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/bits/allocator.h" 3
namespace std { 
# 63
template<> class allocator< void>  { 


public: typedef size_t size_type; 
typedef ptrdiff_t difference_type; 
typedef void *pointer; 
typedef const void *const_pointer; 
typedef void value_type; 

template < typename _Tp1 >
        struct rebind{ 
typedef allocator < _Tp1 > other; };
# 81
}; 
# 91 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/bits/allocator.h" 3
template < typename _Tp >
    class allocator : public __gnu_cxx :: new_allocator < _Tp >{ 


public: typedef size_t size_type; 
typedef ptrdiff_t difference_type; 
typedef _Tp * pointer; 
typedef const _Tp * const_pointer; 
typedef _Tp & reference; 
typedef const _Tp & const_reference; 
typedef _Tp value_type; 

template < typename _Tp1 >
        struct rebind{ 
typedef allocator < _Tp1 > other; };
# 113
 allocator ( ) throw ( ){ }

 allocator ( const allocator & __a ) throw ( )
      : __gnu_cxx :: new_allocator < _Tp > ( __a ) { }

template < typename _Tp1 >
        allocator ( const allocator < _Tp1 > & ) throw ( ) { }

 ~ allocator ( ) throw ( ){ }


};

template < typename _T1, typename _T2 >
    inline bool
    operator == ( const allocator < _T1 > &, const allocator < _T2 > & )
    { return true; }

template < typename _Tp >
    inline bool
    operator == ( const allocator < _Tp > &, const allocator < _Tp > & )
    { return true; }

template < typename _T1, typename _T2 >
    inline bool
    operator != ( const allocator < _T1 > &, const allocator < _T2 > & )
    { return false; }

template < typename _Tp >
    inline bool
    operator != ( const allocator < _Tp > &, const allocator < _Tp > & )
    { return false; }
# 151
extern template class allocator< char> ;
extern template class allocator< wchar_t> ;
# 159
template < typename _Alloc, bool = __is_empty ( _Alloc ) >
    struct __alloc_swap{ 
static void _S_do_it ( _Alloc &, _Alloc & ){ }};

template < typename _Alloc >
    struct __alloc_swap < _Alloc, false >{ 


static void _S_do_it ( _Alloc & __one, _Alloc & __two )
      {

 if ( __one != __two )
   swap ( __one, __two );
      }
};


template < typename _Alloc, bool = __is_empty ( _Alloc ) >
    struct __alloc_neq{ 


static bool _S_do_it ( const _Alloc &, const _Alloc & )
      { return false; }
};

template < typename _Alloc >
    struct __alloc_neq < _Alloc, false >{ 


static bool _S_do_it ( const _Alloc & __one, const _Alloc & __two )
      { return __one != __two; }
};
# 219 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/bits/allocator.h" 3
}
# 23 "/usr/include/locale.h" 3
extern "C" {

struct lconv { 

char *decimal_point; 
char *thousands_sep; 
char *grouping; 
char *int_curr_symbol; 
char *currency_symbol; 
char *mon_decimal_point; 
char *mon_thousands_sep; 
char *mon_grouping; 
char *positive_sign; 
char *negative_sign; 
char int_frac_digits; 
char frac_digits; 
char p_cs_precedes; 
char p_sep_by_space; 
char n_cs_precedes; 
char n_sep_by_space; 
char p_sign_posn; 
char n_sign_posn; 
char int_n_cs_precedes; 
char int_n_sep_by_space; 
char int_n_sign_posn; 
char int_p_cs_precedes; 
char int_p_sep_by_space; 
char int_p_sign_posn; 
}; 


char *setlocale(int category, const char * locale) __attribute((__cdecl__)); 
lconv *localeconv() __attribute((__cdecl__)); 


struct _reent; 
char *_setlocale_r(_reent *, int category, const char * locale) __attribute((__cdecl__)); 
lconv *_localeconv_r(_reent *) __attribute((__cdecl__)); 

}
# 51 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/clocale" 3
namespace std { 

using ::lconv;
using ::setlocale;
using ::localeconv;
}
# 45 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/i686-pc-cygwin/bits/c++locale.h" 3
namespace std { 



typedef int *__c_locale; 
# 56
inline int __convert_from_v(const __c_locale &, char *__out, const int 
__size __attribute((__unused__)), const char *
__fmt, ...) 
{ 
char *__old = std::setlocale(4, 0); 
char *__sav = (0); 
if (__builtin_strcmp(__old, "C")) 
{ 
const size_t __len = __builtin_strlen(__old) + 1; 
__sav = (new char [__len]); 
__builtin_memcpy(__sav, __old, __len); 
std::setlocale(4, "C"); 
}  

__builtin_va_list __args; 
__builtin_va_start(__args,__fmt); 




const int __ret = __builtin_vsprintf(__out, __fmt, __args); 


__builtin_va_end(__args); 

if (__sav) 
{ 
std::setlocale(4, __sav); 
delete [] __sav; 
}  
return __ret; 
} 


}
# 42 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/iosfwd" 3
namespace std { 
# 74 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/iosfwd" 3
class ios_base; 

template < typename _CharT, typename _Traits = char_traits < _CharT > >
    class basic_ios;

template < typename _CharT, typename _Traits = char_traits < _CharT > >
    class basic_streambuf;

template < typename _CharT, typename _Traits = char_traits < _CharT > >
    class basic_istream;

template < typename _CharT, typename _Traits = char_traits < _CharT > >
    class basic_ostream;

template < typename _CharT, typename _Traits = char_traits < _CharT > >
    class basic_iostream;

template < typename _CharT, typename _Traits = char_traits < _CharT >,
     typename _Alloc = allocator < _CharT > >
    class basic_stringbuf;

template < typename _CharT, typename _Traits = char_traits < _CharT >,
    typename _Alloc = allocator < _CharT > >
    class basic_istringstream;

template < typename _CharT, typename _Traits = char_traits < _CharT >,
    typename _Alloc = allocator < _CharT > >
    class basic_ostringstream;

template < typename _CharT, typename _Traits = char_traits < _CharT >,
    typename _Alloc = allocator < _CharT > >
    class basic_stringstream;

template < typename _CharT, typename _Traits = char_traits < _CharT > >
    class basic_filebuf;

template < typename _CharT, typename _Traits = char_traits < _CharT > >
    class basic_ifstream;

template < typename _CharT, typename _Traits = char_traits < _CharT > >
    class basic_ofstream;

template < typename _CharT, typename _Traits = char_traits < _CharT > >
    class basic_fstream;

template < typename _CharT, typename _Traits = char_traits < _CharT > >
    class istreambuf_iterator;

template < typename _CharT, typename _Traits = char_traits < _CharT > >
    class ostreambuf_iterator;



typedef basic_ios< char>  ios; 


typedef basic_streambuf< char>  streambuf; 


typedef basic_istream< char>  istream; 


typedef basic_ostream< char>  ostream; 


typedef basic_iostream< char>  iostream; 


typedef basic_stringbuf< char>  stringbuf; 


typedef basic_istringstream< char>  istringstream; 


typedef basic_ostringstream< char>  ostringstream; 


typedef basic_stringstream< char>  stringstream; 


typedef basic_filebuf< char>  filebuf; 


typedef basic_ifstream< char>  ifstream; 


typedef basic_ofstream< char>  ofstream; 


typedef basic_fstream< char>  fstream; 



typedef basic_ios< wchar_t>  wios; 


typedef basic_streambuf< wchar_t>  wstreambuf; 


typedef basic_istream< wchar_t>  wistream; 


typedef basic_ostream< wchar_t>  wostream; 


typedef basic_iostream< wchar_t>  wiostream; 


typedef basic_stringbuf< wchar_t>  wstringbuf; 


typedef basic_istringstream< wchar_t>  wistringstream; 


typedef basic_ostringstream< wchar_t>  wostringstream; 


typedef basic_stringstream< wchar_t>  wstringstream; 


typedef basic_filebuf< wchar_t>  wfilebuf; 


typedef basic_ifstream< wchar_t>  wifstream; 


typedef basic_ofstream< wchar_t>  wofstream; 


typedef basic_fstream< wchar_t>  wfstream; 




}
# 6 "/usr/include/ctype.h" 3
extern "C" {

__attribute((__cdecl__)) int isalnum(int __c); 
__attribute((__cdecl__)) int isalpha(int __c); 
__attribute((__cdecl__)) int iscntrl(int __c); 
__attribute((__cdecl__)) int isdigit(int __c); 
__attribute((__cdecl__)) int isgraph(int __c); 
__attribute((__cdecl__)) int islower(int __c); 
__attribute((__cdecl__)) int isprint(int __c); 
__attribute((__cdecl__)) int ispunct(int __c); 
__attribute((__cdecl__)) int isspace(int __c); 
__attribute((__cdecl__)) int isupper(int __c); 
__attribute((__cdecl__)) int isxdigit(int __c); 
__attribute((__cdecl__)) int tolower(int __c); 
__attribute((__cdecl__)) int toupper(int __c); 


__attribute((__cdecl__)) int isblank(int __c); 



__attribute((__cdecl__)) int isascii(int __c); 
__attribute((__cdecl__)) int toascii(int __c); 
# 45 "/usr/include/ctype.h" 3
__attribute((dllimport)) extern char *__ctype_ptr__; 
# 109 "/usr/include/ctype.h" 3
__attribute((dllimport)) extern const char _ctype_[]; 

}
# 62 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/cctype" 3
namespace std { 

using ::isalnum;
using ::isalpha;
using ::iscntrl;
using ::isdigit;
using ::isgraph;
using ::islower;
using ::isprint;
using ::ispunct;
using ::isspace;
using ::isupper;
using ::isxdigit;
using ::tolower;
using ::toupper;
}
# 44 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/bits/localefwd.h" 3
namespace std { 
# 55 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/bits/localefwd.h" 3
class locale; 

template < typename _Facet >
    bool
    has_facet ( const locale & ) throw ( );

template < typename _Facet >
    const _Facet &
    use_facet ( const locale & );


template < typename _CharT >
    bool
    isspace ( _CharT, const locale & );

template < typename _CharT >
    bool
    isprint ( _CharT, const locale & );

template < typename _CharT >
    bool
    iscntrl ( _CharT, const locale & );

template < typename _CharT >
    bool
    isupper ( _CharT, const locale & );

template < typename _CharT >
    bool
    islower ( _CharT, const locale & );

template < typename _CharT >
    bool
    isalpha ( _CharT, const locale & );

template < typename _CharT >
    bool
    isdigit ( _CharT, const locale & );

template < typename _CharT >
    bool
    ispunct ( _CharT, const locale & );

template < typename _CharT >
    bool
    isxdigit ( _CharT, const locale & );

template < typename _CharT >
    bool
    isalnum ( _CharT, const locale & );

template < typename _CharT >
    bool
    isgraph ( _CharT, const locale & );

template < typename _CharT >
    _CharT
    toupper ( _CharT, const locale & );

template < typename _CharT >
    _CharT
    tolower ( _CharT, const locale & );


class ctype_base; 
template < typename _CharT >
    class ctype;
template<> class ctype< char> ; 

template<> class ctype< wchar_t> ; 

template < typename _CharT >
    class ctype_byname;


class codecvt_base; 
template < typename _InternT, typename _ExternT, typename _StateT >
    class codecvt;
template<> class codecvt< char, char, _mbstate_t> ; 

template<> class codecvt< wchar_t, char, _mbstate_t> ; 

template < typename _InternT, typename _ExternT, typename _StateT >
    class codecvt_byname;



template < typename _CharT, typename _InIter = istreambuf_iterator < _CharT > >
    class num_get;
template < typename _CharT, typename _OutIter = ostreambuf_iterator < _CharT > >
    class num_put;

template < typename _CharT > class numpunct;
template < typename _CharT > class numpunct_byname;


template < typename _CharT >
    class collate;
template < typename _CharT > class
    collate_byname;


class time_base; 
template < typename _CharT, typename _InIter = istreambuf_iterator < _CharT > >
    class time_get;
template < typename _CharT, typename _InIter = istreambuf_iterator < _CharT > >
    class time_get_byname;
template < typename _CharT, typename _OutIter = ostreambuf_iterator < _CharT > >
    class time_put;
template < typename _CharT, typename _OutIter = ostreambuf_iterator < _CharT > >
    class time_put_byname;


class money_base; 

template < typename _CharT, typename _InIter = istreambuf_iterator < _CharT > >
    class money_get;
template < typename _CharT, typename _OutIter = ostreambuf_iterator < _CharT > >
    class money_put;

template < typename _CharT, bool _Intl = false >
    class moneypunct;
template < typename _CharT, bool _Intl = false >
    class moneypunct_byname;


class messages_base; 
template < typename _CharT >
    class messages;
template < typename _CharT >
    class messages_byname;


}
# 36 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/bits/cxxabi_forced.h" 3
#pragma GCC visibility push ( default )


namespace __cxxabiv1 { 
# 48
class __forced_unwind { 

virtual ~__forced_unwind() throw(); 


virtual void __pure_dummy() = 0; 
}; 
}


#pragma GCC visibility pop
# 38 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/bits/ostream_insert.h" 3
namespace std { 



template < typename _CharT, typename _Traits >
    inline void
    __ostream_write ( basic_ostream < _CharT, _Traits > & __out,
      const _CharT * __s, streamsize __n )
    {
      typedef basic_ostream < _CharT, _Traits > __ostream_type;
      typedef typename __ostream_type :: ios_base __ios_base;

      const streamsize __put = __out . rdbuf ( ) -> sputn ( __s, __n );
      if ( __put != __n )
 __out . setstate ( __ios_base :: badbit );
    }

template < typename _CharT, typename _Traits >
    inline void
    __ostream_fill ( basic_ostream < _CharT, _Traits > & __out, streamsize __n )
    {
      typedef basic_ostream < _CharT, _Traits > __ostream_type;
      typedef typename __ostream_type :: ios_base __ios_base;

      const _CharT __c = __out . fill ( );
      for (; __n > 0; -- __n )
 {
   const typename _Traits :: int_type __put = __out . rdbuf ( ) -> sputc ( __c );
   if ( _Traits :: eq_int_type ( __put, _Traits :: eof ( ) ) )
     {
       __out . setstate ( __ios_base :: badbit );
       break;
     }
 }
    }

template < typename _CharT, typename _Traits >
    basic_ostream < _CharT, _Traits > &
    __ostream_insert ( basic_ostream < _CharT, _Traits > & __out,
       const _CharT * __s, streamsize __n )
    {
      typedef basic_ostream < _CharT, _Traits > __ostream_type;
      typedef typename __ostream_type :: ios_base __ios_base;

      typename __ostream_type :: sentry __cerb ( __out );
      if ( __cerb )
 {
   try
     {
       const streamsize __w = __out . width ( );
       if ( __w > __n )
  {
    const bool __left = ( ( __out . flags ( )
     & __ios_base :: adjustfield )
           == __ios_base :: left );
    if ( ! __left )
      __ostream_fill ( __out, __w - __n );
    if ( __out . good ( ) )
      __ostream_write ( __out, __s, __n );
    if ( __left && __out . good ( ) )
      __ostream_fill ( __out, __w - __n );
  }
       else
  __ostream_write ( __out, __s, __n );
       __out . width ( 0 );
     }
   catch ( __cxxabiv1 :: __forced_unwind & )
     {
       __out . _M_setstate ( __ios_base :: badbit );
       throw;
     }
   catch ( ... )
     { __out . _M_setstate ( __ios_base :: badbit ); }
 }
      return __out;
    }




extern template basic_ostream< char>  &__ostream_insert(basic_ostream< char>  & __out, const char * __s, streamsize __n);


extern template basic_ostream< wchar_t>  &__ostream_insert(basic_ostream< wchar_t>  & __out, const wchar_t * __s, streamsize __n);
# 127
}
# 63 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/bits/stl_function.h" 3
namespace std { 
# 104 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/bits/stl_function.h" 3
template < typename _Arg, typename _Result >
    struct unary_function{ 


typedef _Arg argument_type; 


typedef _Result result_type; 
};




template < typename _Arg1, typename _Arg2, typename _Result >
    struct binary_function{ 


typedef _Arg1 first_argument_type; 


typedef _Arg2 second_argument_type; 


typedef _Result result_type; 
};
# 166 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/bits/stl_function.h" 3
template < typename _Tp >
    struct plus : public binary_function < _Tp, _Tp, _Tp >{ 


_Tp operator ( ) ( const _Tp & __x, const _Tp & __y ) const
      { return __x + __y; }
};


template < typename _Tp >
    struct minus : public binary_function < _Tp, _Tp, _Tp >{ 


_Tp operator ( ) ( const _Tp & __x, const _Tp & __y ) const
      { return __x - __y; }
};


template < typename _Tp >
    struct multiplies : public binary_function < _Tp, _Tp, _Tp >{ 


_Tp operator ( ) ( const _Tp & __x, const _Tp & __y ) const
      { return __x * __y; }
};


template < typename _Tp >
    struct divides : public binary_function < _Tp, _Tp, _Tp >{ 


_Tp operator ( ) ( const _Tp & __x, const _Tp & __y ) const
      { return __x / __y; }
};


template < typename _Tp >
    struct modulus : public binary_function < _Tp, _Tp, _Tp >{ 


_Tp operator ( ) ( const _Tp & __x, const _Tp & __y ) const
      { return __x % __y; }
};


template < typename _Tp >
    struct negate : public unary_function < _Tp, _Tp >{ 


_Tp operator ( ) ( const _Tp & __x ) const
      { return - __x; }
};
# 339 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/bits/stl_function.h" 3
template < typename _Tp >
    struct equal_to : public binary_function < _Tp, _Tp, bool >{ 


bool operator ( ) ( const _Tp & __x, const _Tp & __y ) const
      { return __x == __y; }
};


template < typename _Tp >
    struct not_equal_to : public binary_function < _Tp, _Tp, bool >{ 


bool operator ( ) ( const _Tp & __x, const _Tp & __y ) const
      { return __x != __y; }
};


template < typename _Tp >
    struct greater : public binary_function < _Tp, _Tp, bool >{ 


bool operator ( ) ( const _Tp & __x, const _Tp & __y ) const
      { return __x > __y; }
};


template < typename _Tp >
    struct less : public binary_function < _Tp, _Tp, bool >{ 


bool operator ( ) ( const _Tp & __x, const _Tp & __y ) const
      { return __x < __y; }
};


template < typename _Tp >
    struct greater_equal : public binary_function < _Tp, _Tp, bool >{ 


bool operator ( ) ( const _Tp & __x, const _Tp & __y ) const
      { return __x >= __y; }
};


template < typename _Tp >
    struct less_equal : public binary_function < _Tp, _Tp, bool >{ 


bool operator ( ) ( const _Tp & __x, const _Tp & __y ) const
      { return __x <= __y; }
};
# 500 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/bits/stl_function.h" 3
template < typename _Tp >
    struct logical_and : public binary_function < _Tp, _Tp, bool >{ 


bool operator ( ) ( const _Tp & __x, const _Tp & __y ) const
      { return __x && __y; }
};


template < typename _Tp >
    struct logical_or : public binary_function < _Tp, _Tp, bool >{ 


bool operator ( ) ( const _Tp & __x, const _Tp & __y ) const
      { return __x || __y; }
};


template < typename _Tp >
    struct logical_not : public unary_function < _Tp, bool >{ 


bool operator ( ) ( const _Tp & __x ) const
      { return ! __x; }
};
# 587 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/bits/stl_function.h" 3
template < typename _Tp >
    struct bit_and : public binary_function < _Tp, _Tp, _Tp >{ 


_Tp operator ( ) ( const _Tp & __x, const _Tp & __y ) const
      { return __x & __y; }
};

template < typename _Tp >
    struct bit_or : public binary_function < _Tp, _Tp, _Tp >{ 


_Tp operator ( ) ( const _Tp & __x, const _Tp & __y ) const
      { return __x | __y; }
};

template < typename _Tp >
    struct bit_xor : public binary_function < _Tp, _Tp, _Tp >{ 


_Tp operator ( ) ( const _Tp & __x, const _Tp & __y ) const
      { return __x ^ __y; }
};

template < typename _Tp >
    struct bit_not : public unary_function < _Tp, _Tp >{ 


_Tp operator ( ) ( const _Tp & __x ) const
      { return ~ __x; }
};
# 703 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/bits/stl_function.h" 3
template < typename _Predicate >
    class unary_negate
    : public unary_function < typename _Predicate :: argument_type, bool >{ 


protected: _Predicate _M_pred; 



public: explicit unary_negate ( const _Predicate & __x ): _M_pred ( __x ) { }


bool operator ( ) ( const typename _Predicate :: argument_type & __x ) const
      { return ! _M_pred ( __x ); }
};


template < typename _Predicate >
    inline unary_negate < _Predicate >
    not1 ( const _Predicate & __pred )
    { return unary_negate < _Predicate > ( __pred ); }


template < typename _Predicate >
    class binary_negate
    : public binary_function < typename _Predicate :: first_argument_type,
        typename _Predicate :: second_argument_type, bool >{ 


protected: _Predicate _M_pred; 



public: explicit binary_negate ( const _Predicate & __x ): _M_pred ( __x ) { }


bool operator ( ) ( const typename _Predicate :: first_argument_type & __x,
   const typename _Predicate :: second_argument_type & __y ) const

      { return ! _M_pred ( __x, __y ); }
};


template < typename _Predicate >
    inline binary_negate < _Predicate >
    not2 ( const _Predicate & __pred )
    { return binary_negate < _Predicate > ( __pred ); }
# 774 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/bits/stl_function.h" 3
template < typename _Arg, typename _Result >
    class pointer_to_unary_function : public unary_function < _Arg, _Result >{ 


protected: _Result ( * _M_ptr ) ( _Arg ); 


public:  pointer_to_unary_function ( ){ }


explicit pointer_to_unary_function ( _Result ( * __x ) ( _Arg ) )
      : _M_ptr ( __x ) { }


_Result operator ( ) ( _Arg __x ) const
      { return _M_ptr ( __x ); }
};


template < typename _Arg, typename _Result >
    inline pointer_to_unary_function < _Arg, _Result >
    ptr_fun ( _Result ( * __x ) ( _Arg ) )
    { return pointer_to_unary_function < _Arg, _Result > ( __x ); }


template < typename _Arg1, typename _Arg2, typename _Result >
    class pointer_to_binary_function
    : public binary_function < _Arg1, _Arg2, _Result >{ 


protected: _Result ( * _M_ptr ) ( _Arg1, _Arg2 ); 


public:  pointer_to_binary_function ( ){ }


explicit pointer_to_binary_function ( _Result ( * __x ) ( _Arg1, _Arg2 ) )
      : _M_ptr ( __x ) { }


_Result operator ( ) ( _Arg1 __x, _Arg2 __y ) const
      { return _M_ptr ( __x, __y ); }
};


template < typename _Arg1, typename _Arg2, typename _Result >
    inline pointer_to_binary_function < _Arg1, _Arg2, _Result >
    ptr_fun ( _Result ( * __x ) ( _Arg1, _Arg2 ) )
    { return pointer_to_binary_function < _Arg1, _Arg2, _Result > ( __x ); }


template < typename _Tp >
    struct _Identity
    : public unary_function < _Tp, _Tp >{ 


_Tp & operator ( ) ( _Tp & __x ) const
      { return __x; }


const _Tp & operator ( ) ( const _Tp & __x ) const
      { return __x; }
};

template < typename _Pair >
    struct _Select1st
    : public unary_function < _Pair, typename _Pair :: first_type >{ 


typename _Pair :: first_type & operator ( ) ( _Pair & __x ) const
      { return __x . first; }


const typename _Pair :: first_type & operator ( ) ( const _Pair & __x ) const
      { return __x . first; }
# 861 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/bits/stl_function.h" 3
};

template < typename _Pair >
    struct _Select2nd
    : public unary_function < _Pair, typename _Pair :: second_type >{ 


typename _Pair :: second_type & operator ( ) ( _Pair & __x ) const
      { return __x . second; }


const typename _Pair :: second_type & operator ( ) ( const _Pair & __x ) const
      { return __x . second; }
};
# 894 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/bits/stl_function.h" 3
template < typename _Ret, typename _Tp >
    class mem_fun_t : public unary_function < _Tp *, _Ret >{ 



public: explicit mem_fun_t ( _Ret ( _Tp :: * __pf ) ( ) )
      : _M_f ( __pf ) { }


_Ret operator ( ) ( _Tp * __p ) const
      { return ( __p ->* _M_f ) ( ); }


private: _Ret ( _Tp :: * _M_f ) ( ); 
};



template < typename _Ret, typename _Tp >
    class const_mem_fun_t : public unary_function < const _Tp *, _Ret >{ 



public: explicit const_mem_fun_t ( _Ret ( _Tp :: * __pf ) ( ) const )
      : _M_f ( __pf ) { }


_Ret operator ( ) ( const _Tp * __p ) const
      { return ( __p ->* _M_f ) ( ); }


private: _Ret ( _Tp :: * _M_f ) ( ) const; 
};



template < typename _Ret, typename _Tp >
    class mem_fun_ref_t : public unary_function < _Tp, _Ret >{ 



public: explicit mem_fun_ref_t ( _Ret ( _Tp :: * __pf ) ( ) )
      : _M_f ( __pf ) { }


_Ret operator ( ) ( _Tp & __r ) const
      { return ( __r .* _M_f ) ( ); }


private: _Ret ( _Tp :: * _M_f ) ( ); 
};



template < typename _Ret, typename _Tp >
    class const_mem_fun_ref_t : public unary_function < _Tp, _Ret >{ 



public: explicit const_mem_fun_ref_t ( _Ret ( _Tp :: * __pf ) ( ) const )
      : _M_f ( __pf ) { }


_Ret operator ( ) ( const _Tp & __r ) const
      { return ( __r .* _M_f ) ( ); }


private: _Ret ( _Tp :: * _M_f ) ( ) const; 
};



template < typename _Ret, typename _Tp, typename _Arg >
    class mem_fun1_t : public binary_function < _Tp *, _Arg, _Ret >{ 



public: explicit mem_fun1_t ( _Ret ( _Tp :: * __pf ) ( _Arg ) )
      : _M_f ( __pf ) { }


_Ret operator ( ) ( _Tp * __p, _Arg __x ) const
      { return ( __p ->* _M_f ) ( __x ); }


private: _Ret ( _Tp :: * _M_f ) ( _Arg ); 
};



template < typename _Ret, typename _Tp, typename _Arg >
    class const_mem_fun1_t : public binary_function < const _Tp *, _Arg, _Ret >{ 



public: explicit const_mem_fun1_t ( _Ret ( _Tp :: * __pf ) ( _Arg ) const )
      : _M_f ( __pf ) { }


_Ret operator ( ) ( const _Tp * __p, _Arg __x ) const
      { return ( __p ->* _M_f ) ( __x ); }


private: _Ret ( _Tp :: * _M_f ) ( _Arg ) const; 
};



template < typename _Ret, typename _Tp, typename _Arg >
    class mem_fun1_ref_t : public binary_function < _Tp, _Arg, _Ret >{ 



public: explicit mem_fun1_ref_t ( _Ret ( _Tp :: * __pf ) ( _Arg ) )
      : _M_f ( __pf ) { }


_Ret operator ( ) ( _Tp & __r, _Arg __x ) const
      { return ( __r .* _M_f ) ( __x ); }


private: _Ret ( _Tp :: * _M_f ) ( _Arg ); 
};



template < typename _Ret, typename _Tp, typename _Arg >
    class const_mem_fun1_ref_t : public binary_function < _Tp, _Arg, _Ret >{ 



public: explicit const_mem_fun1_ref_t ( _Ret ( _Tp :: * __pf ) ( _Arg ) const )
      : _M_f ( __pf ) { }


_Ret operator ( ) ( const _Tp & __r, _Arg __x ) const
      { return ( __r .* _M_f ) ( __x ); }


private: _Ret ( _Tp :: * _M_f ) ( _Arg ) const; 
};



template < typename _Ret, typename _Tp >
    inline mem_fun_t < _Ret, _Tp >
    mem_fun ( _Ret ( _Tp :: * __f ) ( ) )
    { return mem_fun_t < _Ret, _Tp > ( __f ); }

template < typename _Ret, typename _Tp >
    inline const_mem_fun_t < _Ret, _Tp >
    mem_fun ( _Ret ( _Tp :: * __f ) ( ) const )
    { return const_mem_fun_t < _Ret, _Tp > ( __f ); }

template < typename _Ret, typename _Tp >
    inline mem_fun_ref_t < _Ret, _Tp >
    mem_fun_ref ( _Ret ( _Tp :: * __f ) ( ) )
    { return mem_fun_ref_t < _Ret, _Tp > ( __f ); }

template < typename _Ret, typename _Tp >
    inline const_mem_fun_ref_t < _Ret, _Tp >
    mem_fun_ref ( _Ret ( _Tp :: * __f ) ( ) const )
    { return const_mem_fun_ref_t < _Ret, _Tp > ( __f ); }

template < typename _Ret, typename _Tp, typename _Arg >
    inline mem_fun1_t < _Ret, _Tp, _Arg >
    mem_fun ( _Ret ( _Tp :: * __f ) ( _Arg ) )
    { return mem_fun1_t < _Ret, _Tp, _Arg > ( __f ); }

template < typename _Ret, typename _Tp, typename _Arg >
    inline const_mem_fun1_t < _Ret, _Tp, _Arg >
    mem_fun ( _Ret ( _Tp :: * __f ) ( _Arg ) const )
    { return const_mem_fun1_t < _Ret, _Tp, _Arg > ( __f ); }

template < typename _Ret, typename _Tp, typename _Arg >
    inline mem_fun1_ref_t < _Ret, _Tp, _Arg >
    mem_fun_ref ( _Ret ( _Tp :: * __f ) ( _Arg ) )
    { return mem_fun1_ref_t < _Ret, _Tp, _Arg > ( __f ); }

template < typename _Ret, typename _Tp, typename _Arg >
    inline const_mem_fun1_ref_t < _Ret, _Tp, _Arg >
    mem_fun_ref ( _Ret ( _Tp :: * __f ) ( _Arg ) const )
    { return const_mem_fun1_ref_t < _Ret, _Tp, _Arg > ( __f ); }




}
# 59 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/backward/binders.h" 3
namespace std { 
# 103 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/backward/binders.h" 3
template < typename _Operation >
    class binder1st
    : public unary_function < typename _Operation :: second_argument_type,
       typename _Operation :: result_type >{ 


protected: _Operation op; 
typename _Operation :: first_argument_type value; 


public:  binder1st ( const _Operation & __x,
  const typename _Operation :: first_argument_type & __y )

      : op ( __x ), value ( __y ) { }


typename _Operation :: result_type operator ( ) ( const typename _Operation :: second_argument_type & __x ) const
      { return op ( value, __x ); }




typename _Operation :: result_type operator ( ) ( typename _Operation :: second_argument_type & __x ) const
      { return op ( value, __x ); }
};


template < typename _Operation, typename _Tp >
    inline binder1st < _Operation >
    bind1st ( const _Operation & __fn, const _Tp & __x )
    {
      typedef typename _Operation :: first_argument_type _Arg1_type;
      return binder1st < _Operation > ( __fn, _Arg1_type ( __x ) );
    }


template < typename _Operation >
    class binder2nd
    : public unary_function < typename _Operation :: first_argument_type,
       typename _Operation :: result_type >{ 


protected: _Operation op; 
typename _Operation :: second_argument_type value; 


public:  binder2nd ( const _Operation & __x,
  const typename _Operation :: second_argument_type & __y )

      : op ( __x ), value ( __y ) { }


typename _Operation :: result_type operator ( ) ( const typename _Operation :: first_argument_type & __x ) const
      { return op ( __x, value ); }




typename _Operation :: result_type operator ( ) ( typename _Operation :: first_argument_type & __x ) const
      { return op ( __x, value ); }
};


template < typename _Operation, typename _Tp >
    inline binder2nd < _Operation >
    bind2nd ( const _Operation & __fn, const _Tp & __x )
    {
      typedef typename _Operation :: second_argument_type _Arg2_type;
      return binder2nd < _Operation > ( __fn, _Arg2_type ( __x ) );
    }



}
# 30 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/i686-pc-cygwin/bits/gthr.h" 3
#pragma GCC visibility push ( default )
# 27 "/usr/include/sys/sched.h" 3
extern "C" {
# 48 "/usr/include/sys/sched.h" 3
struct sched_param { 
int sched_priority; 
# 61 "/usr/include/sys/sched.h" 3
}; 


}
# 27 "/usr/include/sched.h" 3
extern "C" {
# 34
int sched_setparam(pid_t __pid, const sched_param * __param); 
# 42
int sched_getparam(pid_t __pid, sched_param * __param); 
# 51
int sched_setscheduler(pid_t __pid, int __policy, const sched_param * __param); 
# 60
int sched_getscheduler(pid_t __pid); 
# 67
int sched_get_priority_max(int __policy); 



int sched_get_priority_min(int __policy); 
# 78
int sched_rr_get_interval(pid_t __pid, timespec * __interval); 
# 89
int sched_yield(); 




}
# 58 "/usr/include/sys/timespec.h" 3
struct itimerspec { 
timespec it_interval; 
timespec it_value; 
}; 
# 30 "/usr/include/time.h" 3
extern "C" {

struct tm { 

int tm_sec; 
int tm_min; 
int tm_hour; 
int tm_mday; 
int tm_mon; 
int tm_year; 
int tm_wday; 
int tm_yday; 
int tm_isdst; 

long tm_gmtoff; 


const char *tm_zone; 

}; 

__attribute((__cdecl__)) clock_t clock(); 
__attribute((__cdecl__)) double difftime(time_t _time2, time_t _time1); 
__attribute((__cdecl__)) time_t mktime(tm * _timeptr); 
__attribute((__cdecl__)) time_t time(time_t * _timer); 

char *asctime(const tm * _tblock) __attribute((__cdecl__)); 
char *ctime(const time_t * _time) __attribute((__cdecl__)); 
tm *gmtime(const time_t * _timer) __attribute((__cdecl__)); 
tm *localtime(const time_t * _timer) __attribute((__cdecl__)); 

__attribute((__cdecl__)) size_t strftime(char * _s, size_t _maxsize, const char * _fmt, const tm * _t); 



char *asctime_r(const tm *, char *) __attribute((__cdecl__)); 

char *ctime_r(const time_t *, char *) __attribute((__cdecl__)); 
tm *gmtime_r(const time_t *, tm *) __attribute((__cdecl__)); 

tm *localtime_r(const time_t *, tm *) __attribute((__cdecl__)); 


}


extern "C" {



char *strptime(const char *, const char *, tm *) __attribute((__cdecl__)); 


__attribute((__cdecl__)) void tzset(); 
__attribute((__cdecl__)) void _tzset_r(_reent *); 
# 95
typedef 
# 86
struct __tzrule_struct { 

char ch; 
int m; 
int n; 
int d; 
int s; 
time_t change; 
long offset; 
} __tzrule_type; 
# 102
typedef 
# 97
struct __tzinfo_struct { 

int __tznorth; 
int __tzyear; 
__tzrule_type __tzrule[2]; 
} __tzinfo_type; 

__tzinfo_type *__gettzinfo() __attribute((__cdecl__)); 
# 130 "/usr/include/time.h" 3
__attribute((dllimport)) extern long _timezone; 
__attribute((dllimport)) extern int _daylight; 
__attribute((dllimport)) extern char *_tzname[2]; 
# 141 "/usr/include/time.h" 3
}
# 14 "/usr/include/cygwin/time.h" 3
extern "C" {




__attribute((__cdecl__)) int clock_setres(clockid_t, timespec *); 


__attribute((__cdecl__)) time_t timelocal(tm *); 
__attribute((__cdecl__)) time_t timegm(tm *); 
# 29
extern int stime(const time_t *); 

extern int daylight __asm__("__daylight"); 


extern long timezone __asm__("__timezone"); 
# 40
}
# 155 "/usr/include/time.h" 3
extern "C" {




__attribute((__cdecl__)) int clock_settime(clockid_t clock_id, const timespec * tp); 
__attribute((__cdecl__)) int clock_gettime(clockid_t clock_id, timespec * tp); 
__attribute((__cdecl__)) int clock_getres(clockid_t clock_id, timespec * res); 



__attribute((__cdecl__)) int timer_create(clockid_t clock_id, sigevent * evp, timer_t * timerid); 
# 173
__attribute((__cdecl__)) int timer_delete(timer_t timerid); 



__attribute((__cdecl__)) int timer_settime(timer_t timerid, int flags, const itimerspec * value, itimerspec * ovalue); 



__attribute((__cdecl__)) int timer_gettime(timer_t timerid, itimerspec * value); 
__attribute((__cdecl__)) int timer_getoverrun(timer_t timerid); 



__attribute((__cdecl__)) int nanosleep(const timespec * rqtp, timespec * rmtp); 


}
# 196
extern "C" {


__attribute((__cdecl__)) int clock_nanosleep(clockid_t clock_id, int flags, const timespec * rqtp, timespec * rmtp); 




}
# 210
extern "C" {
# 274 "/usr/include/time.h" 3
__attribute((__cdecl__)) int clock_getcpuclockid(pid_t pid, clockid_t * clock_id); 
# 282
__attribute((__cdecl__)) int clock_setenable_attr(clockid_t clock_id, int attr); 
__attribute((__cdecl__)) int clock_getenable_attr(clockid_t clock_id, int * attr); 




}
# 23 "/usr/include/pthread.h" 3
extern "C" {
# 67 "/usr/include/pthread.h" 3
int pthread_atfork(void (*)(void), void (*)(void), void (*)(void)); 


int pthread_attr_destroy(pthread_attr_t *); 
int pthread_attr_getdetachstate(const pthread_attr_t *, int *); 
int pthread_attr_getguardsize(const pthread_attr_t *, size_t *); 
int pthread_attr_getinheritsched(const pthread_attr_t *, int *); 
int pthread_attr_getschedparam(const pthread_attr_t *, sched_param *); 
int pthread_attr_getschedpolicy(const pthread_attr_t *, int *); 
int pthread_attr_getscope(const pthread_attr_t *, int *); 
int pthread_attr_getstack(const pthread_attr_t *, void **, size_t *); 
int pthread_attr_getstackaddr(const pthread_attr_t *, void **) __attribute((__deprecated__)); 

int pthread_attr_init(pthread_attr_t *); 
int pthread_attr_setdetachstate(pthread_attr_t *, int); 
int pthread_attr_setguardsize(pthread_attr_t *, size_t); 
int pthread_attr_setinheritsched(pthread_attr_t *, int); 
int pthread_attr_setschedparam(pthread_attr_t *, const sched_param *); 
int pthread_attr_setschedpolicy(pthread_attr_t *, int); 
int pthread_attr_setscope(pthread_attr_t *, int); 


int pthread_attr_setstack(pthread_attr_t *, void *, size_t); 
int pthread_attr_setstackaddr(pthread_attr_t *, void *) __attribute((__deprecated__)); 




int pthread_attr_getstacksize(const pthread_attr_t *, size_t *); 
int pthread_attr_setstacksize(pthread_attr_t *, size_t); 


int pthread_cancel(pthread_t); 
# 105
typedef void (*__cleanup_routine_type)(void *); 
# 111
typedef 
# 106
struct _pthread_cleanup_handler { 

__cleanup_routine_type function; 
void *arg; 
_pthread_cleanup_handler *next; 
} __pthread_cleanup_handler; 

void _pthread_cleanup_push(__pthread_cleanup_handler * handler); 
void _pthread_cleanup_pop(int execute); 
# 122
int pthread_cond_broadcast(pthread_cond_t *); 
int pthread_cond_destroy(pthread_cond_t *); 
int pthread_cond_init(pthread_cond_t *, const pthread_condattr_t *); 
int pthread_cond_signal(pthread_cond_t *); 
int pthread_cond_timedwait(pthread_cond_t *, pthread_mutex_t *, const timespec *); 

int pthread_cond_wait(pthread_cond_t *, pthread_mutex_t *); 
int pthread_condattr_destroy(pthread_condattr_t *); 
int pthread_condattr_getclock(const pthread_condattr_t *, clockid_t *); 
int pthread_condattr_getpshared(const pthread_condattr_t *, int *); 
int pthread_condattr_init(pthread_condattr_t *); 
int pthread_condattr_setclock(pthread_condattr_t *, clockid_t); 
int pthread_condattr_setpshared(pthread_condattr_t *, int); 

int pthread_create(pthread_t *, const pthread_attr_t *, void *(*)(void *), void *); 

int pthread_detach(pthread_t); 
int pthread_equal(pthread_t, pthread_t); 
void pthread_exit(void *) __attribute((__noreturn__)); 
int pthread_getcpuclockid(pthread_t, clockid_t *); 
int pthread_getschedparam(pthread_t, int *, sched_param *); 
void *pthread_getspecific(pthread_key_t); 
int pthread_join(pthread_t, void **); 
int pthread_key_create(pthread_key_t *, void (*)(void *)); 
int pthread_key_delete(pthread_key_t); 


int pthread_mutex_destroy(pthread_mutex_t *); 
int pthread_mutex_getprioceiling(const pthread_mutex_t *, int *); 
int pthread_mutex_init(pthread_mutex_t *, const pthread_mutexattr_t *); 
int pthread_mutex_lock(pthread_mutex_t *); 
int pthread_mutex_setprioceiling(pthread_mutex_t *, int, int *); 
int pthread_mutex_trylock(pthread_mutex_t *); 
int pthread_mutex_unlock(pthread_mutex_t *); 
int pthread_mutexattr_destroy(pthread_mutexattr_t *); 
int pthread_mutexattr_getprioceiling(const pthread_mutexattr_t *, int *); 
int pthread_mutexattr_getprotocol(const pthread_mutexattr_t *, int *); 
int pthread_mutexattr_getpshared(const pthread_mutexattr_t *, int *); 
int pthread_mutexattr_gettype(const pthread_mutexattr_t *, int *); 
int pthread_mutexattr_init(pthread_mutexattr_t *); 
int pthread_mutexattr_setprioceiling(pthread_mutexattr_t *, int); 
int pthread_mutexattr_setprotocol(pthread_mutexattr_t *, int); 
int pthread_mutexattr_setpshared(pthread_mutexattr_t *, int); 
int pthread_mutexattr_settype(pthread_mutexattr_t *, int); 


int pthread_spin_destroy(pthread_spinlock_t *); 
int pthread_spin_init(pthread_spinlock_t *, int); 
int pthread_spin_lock(pthread_spinlock_t *); 
int pthread_spin_trylock(pthread_spinlock_t *); 
int pthread_spin_unlock(pthread_spinlock_t *); 


int pthread_rwlock_destroy(pthread_rwlock_t * rwlock); 
int pthread_rwlock_init(pthread_rwlock_t * rwlock, const pthread_rwlockattr_t * attr); 
int pthread_rwlock_rdlock(pthread_rwlock_t * rwlock); 
int pthread_rwlock_tryrdlock(pthread_rwlock_t * rwlock); 
int pthread_rwlock_wrlock(pthread_rwlock_t * rwlock); 
int pthread_rwlock_trywrlock(pthread_rwlock_t * rwlock); 
int pthread_rwlock_unlock(pthread_rwlock_t * rwlock); 
int pthread_rwlockattr_init(pthread_rwlockattr_t * rwlockattr); 
int pthread_rwlockattr_getpshared(const pthread_rwlockattr_t * attr, int * pshared); 

int pthread_rwlockattr_setpshared(pthread_rwlockattr_t * attr, int pshared); 
int pthread_rwlockattr_destroy(pthread_rwlockattr_t * rwlockattr); 

int pthread_once(pthread_once_t *, void (*)(void)); 


int pthread_getconcurrency(); 
int pthread_setconcurrency(int); 


pthread_t pthread_self(); 
int pthread_setcancelstate(int, int *); 
int pthread_setcanceltype(int, int *); 
int pthread_setschedparam(pthread_t, int, const sched_param *); 
int pthread_setschedprio(pthread_t, int); 
int pthread_setspecific(pthread_key_t, const void *); 
void pthread_testcancel(); 



int pthread_getattr_np(pthread_t, pthread_attr_t *); 
int pthread_sigqueue(pthread_t *, int, const sigval); 
int pthread_suspend(pthread_t); 
int pthread_continue(pthread_t); 
int pthread_yield(); 


}
# 47 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/i686-pc-cygwin/bits/gthr-default.h" 3
typedef pthread_t __gthread_t; 
typedef pthread_key_t __gthread_key_t; 
typedef pthread_once_t __gthread_once_t; 
typedef pthread_mutex_t __gthread_mutex_t; 
typedef pthread_mutex_t __gthread_recursive_mutex_t; 
typedef pthread_cond_t __gthread_cond_t; 
typedef timespec __gthread_time_t; 
# 299 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/i686-pc-cygwin/bits/gthr-default.h" 3
static inline int __gthread_active_p() 
{ CPPTEST_STACK_TRACE_FUNC_START_INFO() CPPTEST_STACK_TRACE_STMT_INFO(31) 
return 1; CPPTEST_STACK_TRACE_EXIT_ROUTINE() 
} 
# 659 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/i686-pc-cygwin/bits/gthr-default.h" 3
static inline int __gthread_create(__gthread_t *__threadid, void *(*__func)(void *), void *
__args) 
{ 
return pthread_create(__threadid, __null, __func, __args); 
} 


static inline int __gthread_join(__gthread_t __threadid, void **__value_ptr) 
{ 
return pthread_join(__threadid, __value_ptr); 
} 


static inline int __gthread_detach(__gthread_t __threadid) 
{ 
return pthread_detach(__threadid); 
} 


static inline int __gthread_equal(__gthread_t __t1, __gthread_t __t2) 
{ 
return pthread_equal(__t1, __t2); 
} 


static inline __gthread_t __gthread_self() 
{ 
return pthread_self(); 
} 


static inline int __gthread_yield() 
{ 
return sched_yield(); 
} 


static inline int __gthread_once(__gthread_once_t *__once, void (*__func)(void)) 
{ 
if (__gthread_active_p()) 
return pthread_once(__once, __func);  else 

return -1;   
} 


static inline int __gthread_key_create(__gthread_key_t *__key, void (*__dtor)(void *)) 
{ 
return pthread_key_create(__key, __dtor); 
} 


static inline int __gthread_key_delete(__gthread_key_t __key) 
{ 
return pthread_key_delete(__key); 
} 


static inline void *__gthread_getspecific(__gthread_key_t __key) 
{ 
return pthread_getspecific(__key); 
} 


static inline int __gthread_setspecific(__gthread_key_t __key, const void *__ptr) 
{ 
return pthread_setspecific(__key, __ptr); 
} 


static inline void __gthread_mutex_init_function(__gthread_mutex_t *__mutex) 
{ 
if (__gthread_active_p()) 
pthread_mutex_init(__mutex, __null);   
} 


static inline int __gthread_mutex_destroy(__gthread_mutex_t *__mutex) 
{ 
if (__gthread_active_p()) 
return pthread_mutex_destroy(__mutex);  else 

return 0;   
} 


static inline int __gthread_mutex_lock(__gthread_mutex_t *__mutex) 
{ 
if (__gthread_active_p()) 
return pthread_mutex_lock(__mutex);  else 

return 0;   
} 


static inline int __gthread_mutex_trylock(__gthread_mutex_t *__mutex) 
{ 
if (__gthread_active_p()) 
return pthread_mutex_trylock(__mutex);  else 

return 0;   
} 
# 775 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/i686-pc-cygwin/bits/gthr-default.h" 3
static inline int __gthread_mutex_unlock(__gthread_mutex_t *__mutex) 
{ 
if (__gthread_active_p()) 
return pthread_mutex_unlock(__mutex);  else 

return 0;   
} 
# 808 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/i686-pc-cygwin/bits/gthr-default.h" 3
static inline int __gthread_recursive_mutex_lock(__gthread_recursive_mutex_t *__mutex) 
{ 
return __gthread_mutex_lock(__mutex); 
} 


static inline int __gthread_recursive_mutex_trylock(__gthread_recursive_mutex_t *__mutex) 
{ 
return __gthread_mutex_trylock(__mutex); 
} 
# 829 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/i686-pc-cygwin/bits/gthr-default.h" 3
static inline int __gthread_recursive_mutex_unlock(__gthread_recursive_mutex_t *__mutex) 
{ 
return __gthread_mutex_unlock(__mutex); 
} 


static inline int __gthread_recursive_mutex_destroy(__gthread_recursive_mutex_t *__mutex) 
{ 
return __gthread_mutex_destroy(__mutex); 
} 
# 850 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/i686-pc-cygwin/bits/gthr-default.h" 3
static inline int __gthread_cond_broadcast(__gthread_cond_t *__cond) 
{ 
return pthread_cond_broadcast(__cond); 
} 


static inline int __gthread_cond_signal(__gthread_cond_t *__cond) 
{ 
return pthread_cond_signal(__cond); 
} 


static inline int __gthread_cond_wait(__gthread_cond_t *__cond, __gthread_mutex_t *__mutex) 
{ 
return pthread_cond_wait(__cond, __mutex); 
} 


static inline int __gthread_cond_timedwait(__gthread_cond_t *__cond, __gthread_mutex_t *__mutex, const __gthread_time_t *
__abs_timeout) 
{ 
return pthread_cond_timedwait(__cond, __mutex, __abs_timeout); 
} 


static inline int __gthread_cond_wait_recursive(__gthread_cond_t *__cond, __gthread_recursive_mutex_t *
__mutex) 
{ 
return __gthread_cond_wait(__cond, __mutex); 
} 


static inline int __gthread_cond_destroy(__gthread_cond_t *__cond) 
{ 
return pthread_cond_destroy(__cond); 
} 
# 151 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/i686-pc-cygwin/bits/gthr.h" 3
#pragma GCC visibility pop
# 32 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/i686-pc-cygwin/bits/atomic_word.h" 3
typedef int _Atomic_word; 
# 38 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/ext/atomicity.h" 3
namespace __gnu_cxx { 
# 48
static inline _Atomic_word __exchange_and_add(volatile _Atomic_word *__mem, int __val) 
{ CPPTEST_STACK_TRACE_FUNC_START_INFO() CPPTEST_STACK_TRACE_STMT_INFO(32) return __atomic_fetch_add(__mem, __val, 4); CPPTEST_STACK_TRACE_EXIT_ROUTINE() } 


static inline void __atomic_add(volatile _Atomic_word *__mem, int __val) 
{ __atomic_fetch_add(__mem, __val, 4); } 
# 65 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/ext/atomicity.h" 3
static inline _Atomic_word __exchange_and_add_single(_Atomic_word *__mem, int __val) 
{ CPPTEST_STACK_TRACE_FUNC_START_INFO() 
CPPTEST_STACK_TRACE_VARIABLE_INFO(anonymous__CPTR_1, 33) _Atomic_word __result = *__mem; CPPTEST_STACK_TRACE_STMT_INFO(34) 
*__mem += __val; CPPTEST_STACK_TRACE_STMT_INFO(35) 
return __result; CPPTEST_STACK_TRACE_EXIT_ROUTINE() 
} 


static inline void __atomic_add_single(_Atomic_word *__mem, int __val) 
{ *__mem += __val; } 



__attribute((__unused__)) static inline _Atomic_word __exchange_and_add_dispatch(_Atomic_word *__mem, int __val) 
{ CPPTEST_STACK_TRACE_FUNC_START_INFO() 

if (((void)CPPTEST_STACK_TRACE_IF_COND_INFO(36) , __gthread_active_p())) {CPPTEST_STACK_TRACE_STMT_INFO(37) 
return __exchange_and_add(__mem, __val); } else {CPPTEST_STACK_TRACE_STMT_INFO(38) 

return __exchange_and_add_single(__mem, __val); }  CPPTEST_STACK_TRACE_EXIT_ROUTINE() 



} 



__attribute((__unused__)) static inline void __atomic_add_dispatch(_Atomic_word *__mem, int __val) 
{ 

if (__gthread_active_p()) 
__atomic_add(__mem, __val);  else 

__atomic_add_single(__mem, __val);   



} 


}
# 45 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/bits/basic_string.h" 3
namespace std { 
# 111 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/bits/basic_string.h" 3
template < typename _CharT, typename _Traits, typename _Alloc >
    class basic_string{ 

typedef typename _Alloc :: template rebind < _CharT > :: other _CharT_alloc_type; 



public: typedef _Traits traits_type; 
typedef typename _Traits :: char_type value_type; 
typedef _Alloc allocator_type; 
typedef typename _CharT_alloc_type :: size_type size_type; 
typedef typename _CharT_alloc_type :: difference_type difference_type; 
typedef typename _CharT_alloc_type :: reference reference; 
typedef typename _CharT_alloc_type :: const_reference const_reference; 
typedef typename _CharT_alloc_type :: pointer pointer; 
typedef typename _CharT_alloc_type :: const_pointer const_pointer; 
typedef __gnu_cxx :: __normal_iterator < pointer, basic_string > iterator; 

typedef __gnu_cxx :: __normal_iterator < const_pointer, basic_string > const_iterator; 
typedef std :: reverse_iterator < const_iterator > const_reverse_iterator; 
typedef std :: reverse_iterator < iterator > reverse_iterator; 
# 148 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/bits/basic_string.h" 3
private: struct _Rep_base { 

size_type _M_length; 
size_type _M_capacity; 
_Atomic_word _M_refcount; 
}; 

struct _Rep : _Rep_base { 


typedef typename _Alloc :: template rebind < char > :: other _Raw_bytes_alloc; 
# 173 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/bits/basic_string.h" 3
static const typename ::std::basic_string< _CharT, _Traits, _Alloc> ::size_type _S_max_size; 
static const _CharT _S_terminal; 



static typename ::std::basic_string< _CharT, _Traits, _Alloc> ::size_type _S_empty_rep_storage [ ]; 


static _Rep & _S_empty_rep ( )
        {



   void * __p = reinterpret_cast < void * > ( & _S_empty_rep_storage );
   return * reinterpret_cast < _Rep * > ( __p );
 }


bool _M_is_leaked ( ) const
        { return this -> _M_refcount < 0; }


bool _M_is_shared ( ) const
        { return this -> _M_refcount > 0; }


void _M_set_leaked ( )
        { this -> _M_refcount = - 1; }


void _M_set_sharable ( )
        { this -> _M_refcount = 0; }


void _M_set_length_and_sharable ( size_type __n )
 {

   if ( __builtin_expect ( this != & _S_empty_rep ( ), false ) )

     {
       this -> _M_set_sharable ( );
       this -> _M_length = __n;
       traits_type :: assign ( this -> _M_refdata ( ) [ __n ], _S_terminal );


     }
 }


_CharT * _M_refdata ( ) throw ( )
 { return reinterpret_cast < _CharT * > ( this + 1 ); }


_CharT * _M_grab ( const _Alloc & __alloc1, const _Alloc & __alloc2 )
 {
   return ( ! _M_is_leaked ( ) && __alloc1 == __alloc2 )
           ? _M_refcopy ( ) : _M_clone ( __alloc1 );
 }



static _Rep * _S_create ( size_type, size_type, const _Alloc & );


void _M_dispose ( const _Alloc & __a )
 {

   if ( __builtin_expect ( this != & _S_empty_rep ( ), false ) )

     {

       ;
       if ( __gnu_cxx :: __exchange_and_add_dispatch ( & this -> _M_refcount,
        - 1 ) <= 0 )
  {
    ;
    _M_destroy ( __a );
  }
     }
 }


void _M_destroy ( const _Alloc & ) throw ( );


_CharT * _M_refcopy ( ) throw ( )
 {

   if ( __builtin_expect ( this != & _S_empty_rep ( ), false ) )

            __gnu_cxx :: __atomic_add_dispatch ( & this -> _M_refcount, 1 );
   return _M_refdata ( );
 }


_CharT * _M_clone ( const _Alloc &, size_type __res = 0 );
}; 


struct _Alloc_hider : _Alloc { 

 _Alloc_hider ( _CharT * __dat, const _Alloc & __a )
 : _Alloc ( __a ), _M_p ( __dat ) { }

_CharT * _M_p; 
}; 
# 285
public: static const size_type npos = static_cast < size_type > ( - 1 ); 



private: mutable _Alloc_hider _M_dataplus; 


_CharT * _M_data ( ) const
      { return _M_dataplus . _M_p; }


_CharT * _M_data ( _CharT * __p )
      { return ( _M_dataplus . _M_p = __p ); }


_Rep * _M_rep ( ) const
      { return & ( ( reinterpret_cast < _Rep * > ( _M_data ( ) ) ) [ - 1 ] ); }




iterator _M_ibegin ( ) const
      { return iterator ( _M_data ( ) ); }


iterator _M_iend ( ) const
      { return iterator ( _M_data ( ) + this -> size ( ) ); }


void _M_leak ( )
      {
 if ( ! _M_rep ( ) -> _M_is_leaked ( ) )
   _M_leak_hard ( );
      }


size_type _M_check ( size_type __pos, const char * __s ) const
      {
 if ( __pos > this -> size ( ) )
   __throw_out_of_range_fmt ( ( "%s: __pos (which is %zu) > this->size() (which is %zu)" )
                                         ,
       __s, __pos, this -> size ( ) );
 return __pos;
      }


void _M_check_length ( size_type __n1, size_type __n2, const char * __s ) const
      {
 if ( this -> max_size ( ) - ( this -> size ( ) - __n1 ) < __n2 )
   __throw_length_error ( ( __s ) );
      }



size_type _M_limit ( size_type __pos, size_type __off ) const
      {
 const bool __testoff = __off < this -> size ( ) - __pos;
 return __testoff ? __off : this -> size ( ) - __pos;
      }



bool _M_disjunct ( const _CharT * __s ) const
      {
 return ( less < const _CharT * > ( ) ( __s, _M_data ( ) )
  || less < const _CharT * > ( ) ( _M_data ( ) + this -> size ( ), __s ) );
      }




static void _M_copy ( _CharT * __d, const _CharT * __s, size_type __n )
      {
 if ( __n == 1 )
   traits_type :: assign ( * __d, * __s );
 else
   traits_type :: copy ( __d, __s, __n );
      }


static void _M_move ( _CharT * __d, const _CharT * __s, size_type __n )
      {
 if ( __n == 1 )
   traits_type :: assign ( * __d, * __s );
 else
   traits_type :: move ( __d, __s, __n );
      }


static void _M_assign ( _CharT * __d, size_type __n, _CharT __c )
      {
 if ( __n == 1 )
   traits_type :: assign ( * __d, __c );
 else
   traits_type :: assign ( __d, __n, __c );
      }



template < class _Iterator >
        static void
        _S_copy_chars ( _CharT * __p, _Iterator __k1, _Iterator __k2 )

        {
   for (; __k1 != __k2; ++ __k1, ++ __p )
     traits_type :: assign ( * __p, * __k1 );
 }


static void _S_copy_chars ( _CharT * __p, iterator __k1, iterator __k2 )
      { _S_copy_chars ( __p, __k1 . base ( ), __k2 . base ( ) ); }


static void _S_copy_chars ( _CharT * __p, const_iterator __k1, const_iterator __k2 )

      { _S_copy_chars ( __p, __k1 . base ( ), __k2 . base ( ) ); }


static void _S_copy_chars ( _CharT * __p, _CharT * __k1, _CharT * __k2 )
      { _M_copy ( __p, __k1, __k2 - __k1 ); }


static void _S_copy_chars ( _CharT * __p, const _CharT * __k1, const _CharT * __k2 )

      { _M_copy ( __p, __k1, __k2 - __k1 ); }


static int _S_compare ( size_type __n1, size_type __n2 )
      {
 const difference_type __d = difference_type ( __n1 - __n2 );

 if ( __d > __gnu_cxx :: __numeric_traits < int > :: __max )
   return __gnu_cxx :: __numeric_traits < int > :: __max;
 else if ( __d < __gnu_cxx :: __numeric_traits < int > :: __min )
   return __gnu_cxx :: __numeric_traits < int > :: __min;
 else
   return int ( __d );
      }


void _M_mutate ( size_type __pos, size_type __len1, size_type __len2 );


void _M_leak_hard ( );


static _Rep & _S_empty_rep ( )
      { return _Rep :: _S_empty_rep ( ); }
# 442
public:  basic_string ( )

      : _M_dataplus ( _S_empty_rep ( ) . _M_refdata ( ), _Alloc ( ) ) { }
# 453
explicit basic_string ( const _Alloc & __a );
# 460
 basic_string ( const basic_string & __str );
# 467
 basic_string ( const basic_string & __str, size_type __pos,
     size_type __n = npos );
# 476
 basic_string ( const basic_string & __str, size_type __pos,
     size_type __n, const _Alloc & __a );
# 488 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/bits/basic_string.h" 3
 basic_string ( const _CharT * __s, size_type __n,
     const _Alloc & __a = _Alloc ( ) );
# 495
 basic_string ( const _CharT * __s, const _Alloc & __a = _Alloc ( ) );
# 502
 basic_string ( size_type __n, _CharT __c, const _Alloc & __a = _Alloc ( ) );
# 539 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/bits/basic_string.h" 3
template < class _InputIterator >
        basic_string ( _InputIterator __beg, _InputIterator __end,
       const _Alloc & __a = _Alloc ( ) );




 ~ basic_string ( )
      { _M_rep ( ) -> _M_dispose ( this -> get_allocator ( ) ); }
# 554
basic_string & operator = ( const basic_string & __str )
      { return this -> assign ( __str ); }
# 562
basic_string & operator = ( const _CharT * __s )
      { return this -> assign ( __s ); }
# 573 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/bits/basic_string.h" 3
basic_string & operator = ( _CharT __c )
      {
 this -> assign ( 1, __c );
 return * this;
      }
# 614 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/bits/basic_string.h" 3
iterator begin ( )
      {
 _M_leak ( );
 return iterator ( _M_data ( ) );
      }
# 625
const_iterator begin ( ) const
      { return const_iterator ( _M_data ( ) ); }
# 633
iterator end ( )
      {
 _M_leak ( );
 return iterator ( _M_data ( ) + this -> size ( ) );
      }
# 644
const_iterator end ( ) const
      { return const_iterator ( _M_data ( ) + this -> size ( ) ); }
# 653
reverse_iterator rbegin ( )
      { return reverse_iterator ( this -> end ( ) ); }
# 662
const_reverse_iterator rbegin ( ) const
      { return const_reverse_iterator ( this -> end ( ) ); }
# 671
reverse_iterator rend ( )
      { return reverse_iterator ( this -> begin ( ) ); }
# 680
const_reverse_iterator rend ( ) const
      { return const_reverse_iterator ( this -> begin ( ) ); }
# 724 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/bits/basic_string.h" 3
size_type size ( ) const
      { return _M_rep ( ) -> _M_length; }




size_type length ( ) const
      { return _M_rep ( ) -> _M_length; }



size_type max_size ( ) const
      { return _Rep :: _S_max_size; }
# 749 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/bits/basic_string.h" 3
void resize ( size_type __n, _CharT __c );
# 762 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/bits/basic_string.h" 3
void resize ( size_type __n )
      { this -> resize ( __n, _CharT ( ) ); }
# 785 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/bits/basic_string.h" 3
size_type capacity ( ) const
      { return _M_rep ( ) -> _M_capacity; }
# 806 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/bits/basic_string.h" 3
void reserve ( size_type __res_arg = 0 );
# 813
void clear ( )
      { _M_mutate ( 0, this -> size ( ), 0 ); }
# 821
bool empty ( ) const
      { return this -> size ( ) == 0; }
# 836 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/bits/basic_string.h" 3
const_reference operator [ ] ( size_type __pos ) const
      {
 ;
 return _M_data ( ) [ __pos ];
      }
# 853 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/bits/basic_string.h" 3
reference operator [ ] ( size_type __pos )
      {


 ;

 ;
 _M_leak ( );
 return _M_data ( ) [ __pos ];
      }
# 875 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/bits/basic_string.h" 3
const_reference at ( size_type __n ) const
      {
 if ( __n >= this -> size ( ) )
   __throw_out_of_range_fmt ( ( "basic_string::at: __n (which is %zu) >= this->size() (which is %zu)" )

                            ,
       __n, this -> size ( ) );
 return _M_data ( ) [ __n ];
      }
# 897 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/bits/basic_string.h" 3
reference at ( size_type __n )
      {
 if ( __n >= size ( ) )
   __throw_out_of_range_fmt ( ( "basic_string::at: __n (which is %zu) >= this->size() (which is %zu)" )

                            ,
       __n, this -> size ( ) );
 _M_leak ( );
 return _M_data ( ) [ __n ];
      }
# 949 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/bits/basic_string.h" 3
basic_string & operator += ( const basic_string & __str )
      { return this -> append ( __str ); }
# 958
basic_string & operator += ( const _CharT * __s )
      { return this -> append ( __s ); }
# 967
basic_string & operator += ( _CharT __c )
      {
 this -> push_back ( __c );
 return * this;
      }
# 990 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/bits/basic_string.h" 3
basic_string & append ( const basic_string & __str );
# 1006 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/bits/basic_string.h" 3
basic_string & append ( const basic_string & __str, size_type __pos, size_type __n );
# 1015
basic_string & append ( const _CharT * __s, size_type __n );
# 1023
basic_string & append ( const _CharT * __s )
      {
 ;
 return this -> append ( __s, traits_type :: length ( __s ) );
      }
# 1038 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/bits/basic_string.h" 3
basic_string & append ( size_type __n, _CharT __c );
# 1059 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/bits/basic_string.h" 3
template < class _InputIterator >
        basic_string &
        append ( _InputIterator __first, _InputIterator __last )
        { return this -> replace ( _M_iend ( ), _M_iend ( ), __first, __last ); }
# 1069
void push_back ( _CharT __c )
      {
 const size_type __len = 1 + this -> size ( );
 if ( __len > this -> capacity ( ) || _M_rep ( ) -> _M_is_shared ( ) )
   this -> reserve ( __len );
 traits_type :: assign ( _M_data ( ) [ this -> size ( ) ], __c );
 _M_rep ( ) -> _M_set_length_and_sharable ( __len );
      }
# 1084
basic_string & assign ( const basic_string & __str );
# 1118 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/bits/basic_string.h" 3
basic_string & assign ( const basic_string & __str, size_type __pos, size_type __n )
      { return this -> assign ( __str . _M_data ( )
       + __str . _M_check ( __pos, "basic_string::assign" ),
       __str . _M_limit ( __pos, __n ) ); }
# 1134 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/bits/basic_string.h" 3
basic_string & assign ( const _CharT * __s, size_type __n );
# 1146 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/bits/basic_string.h" 3
basic_string & assign ( const _CharT * __s )
      {
 ;
 return this -> assign ( __s, traits_type :: length ( __s ) );
      }
# 1162 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/bits/basic_string.h" 3
basic_string & assign ( size_type __n, _CharT __c )
      { return _M_replace_aux ( size_type ( 0 ), this -> size ( ), __n, __c ); }
# 1173 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/bits/basic_string.h" 3
template < class _InputIterator >
        basic_string &
        assign ( _InputIterator __first, _InputIterator __last )
        { return this -> replace ( _M_ibegin ( ), _M_iend ( ), __first, __last ); }
# 1203 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/bits/basic_string.h" 3
void insert ( iterator __p, size_type __n, _CharT __c )
      { this -> replace ( __p, __p, __n, __c ); }
# 1218 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/bits/basic_string.h" 3
template < class _InputIterator >
        void
        insert ( iterator __p, _InputIterator __beg, _InputIterator __end )
        { this -> replace ( __p, __p, __beg, __end ); }
# 1251 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/bits/basic_string.h" 3
basic_string & insert ( size_type __pos1, const basic_string & __str )
      { return this -> insert ( __pos1, __str, size_type ( 0 ), __str . size ( ) ); }
# 1273 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/bits/basic_string.h" 3
basic_string & insert ( size_type __pos1, const basic_string & __str,
      size_type __pos2, size_type __n )

      { return this -> insert ( __pos1, __str . _M_data ( )
       + __str . _M_check ( __pos2, "basic_string::insert" ),
       __str . _M_limit ( __pos2, __n ) ); }
# 1296 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/bits/basic_string.h" 3
basic_string & insert ( size_type __pos, const _CharT * __s, size_type __n );
# 1314 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/bits/basic_string.h" 3
basic_string & insert ( size_type __pos, const _CharT * __s )
      {
 ;
 return this -> insert ( __pos, __s, traits_type :: length ( __s ) );
      }
# 1337 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/bits/basic_string.h" 3
basic_string & insert ( size_type __pos, size_type __n, _CharT __c )
      { return _M_replace_aux ( _M_check ( __pos, "basic_string::insert" ),
         size_type ( 0 ), __n, __c ); }
# 1355 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/bits/basic_string.h" 3
iterator insert ( iterator __p, _CharT __c )
      {
 ;
 const size_type __pos = __p - _M_ibegin ( );
 _M_replace_aux ( __pos, size_type ( 0 ), size_type ( 1 ), __c );
 _M_rep ( ) -> _M_set_leaked ( );
 return iterator ( _M_data ( ) + __pos );
      }
# 1380 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/bits/basic_string.h" 3
basic_string & erase ( size_type __pos = 0, size_type __n = npos )
      {
 _M_mutate ( _M_check ( __pos, "basic_string::erase" ),
    _M_limit ( __pos, __n ), size_type ( 0 ) );
 return * this;
      }
# 1396 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/bits/basic_string.h" 3
iterator erase ( iterator __position )
      {

                               ;
 const size_type __pos = __position - _M_ibegin ( );
 _M_mutate ( __pos, size_type ( 1 ), size_type ( 0 ) );
 _M_rep ( ) -> _M_set_leaked ( );
 return iterator ( _M_data ( ) + __pos );
      }
# 1416 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/bits/basic_string.h" 3
iterator erase ( iterator __first, iterator __last );
# 1447 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/bits/basic_string.h" 3
basic_string & replace ( size_type __pos, size_type __n, const basic_string & __str )
      { return this -> replace ( __pos, __n, __str . _M_data ( ), __str . size ( ) ); }
# 1469 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/bits/basic_string.h" 3
basic_string & replace ( size_type __pos1, size_type __n1, const basic_string & __str,
       size_type __pos2, size_type __n2 )

      { return this -> replace ( __pos1, __n1, __str . _M_data ( )
        + __str . _M_check ( __pos2, "basic_string::replace" ),
        __str . _M_limit ( __pos2, __n2 ) ); }
# 1494 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/bits/basic_string.h" 3
basic_string & replace ( size_type __pos, size_type __n1, const _CharT * __s,
       size_type __n2 );
# 1514 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/bits/basic_string.h" 3
basic_string & replace ( size_type __pos, size_type __n1, const _CharT * __s )
      {
 ;
 return this -> replace ( __pos, __n1, __s, traits_type :: length ( __s ) );
      }
# 1538 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/bits/basic_string.h" 3
basic_string & replace ( size_type __pos, size_type __n1, size_type __n2, _CharT __c )
      { return _M_replace_aux ( _M_check ( __pos, "basic_string::replace" ),
         _M_limit ( __pos, __n1 ), __n2, __c ); }
# 1556 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/bits/basic_string.h" 3
basic_string & replace ( iterator __i1, iterator __i2, const basic_string & __str )
      { return this -> replace ( __i1, __i2, __str . _M_data ( ), __str . size ( ) ); }
# 1575 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/bits/basic_string.h" 3
basic_string & replace ( iterator __i1, iterator __i2, const _CharT * __s, size_type __n )
      {

                          ;
 return this -> replace ( __i1 - _M_ibegin ( ), __i2 - __i1, __s, __n );
      }
# 1596 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/bits/basic_string.h" 3
basic_string & replace ( iterator __i1, iterator __i2, const _CharT * __s )
      {
 ;
 return this -> replace ( __i1, __i2, __s, traits_type :: length ( __s ) );
      }
# 1617 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/bits/basic_string.h" 3
basic_string & replace ( iterator __i1, iterator __i2, size_type __n, _CharT __c )
      {

                          ;
 return _M_replace_aux ( __i1 - _M_ibegin ( ), __i2 - __i1, __n, __c );
      }
# 1639 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/bits/basic_string.h" 3
template < class _InputIterator >
        basic_string &
        replace ( iterator __i1, iterator __i2,
  _InputIterator __k1, _InputIterator __k2 )
        {

                            ;
   ;
   typedef typename std :: __is_integer < _InputIterator > :: __type _Integral;
   return _M_replace_dispatch ( __i1, __i2, __k1, __k2, _Integral ( ) );
 }




basic_string & replace ( iterator __i1, iterator __i2, _CharT * __k1, _CharT * __k2 )
      {

                          ;
 ;
 return this -> replace ( __i1 - _M_ibegin ( ), __i2 - __i1,
        __k1, __k2 - __k1 );
      }


basic_string & replace ( iterator __i1, iterator __i2,
       const _CharT * __k1, const _CharT * __k2 )

      {

                          ;
 ;
 return this -> replace ( __i1 - _M_ibegin ( ), __i2 - __i1,
        __k1, __k2 - __k1 );
      }


basic_string & replace ( iterator __i1, iterator __i2, iterator __k1, iterator __k2 )
      {

                          ;
 ;
 return this -> replace ( __i1 - _M_ibegin ( ), __i2 - __i1,
        __k1 . base ( ), __k2 - __k1 );
      }


basic_string & replace ( iterator __i1, iterator __i2,
       const_iterator __k1, const_iterator __k2 )

      {

                          ;
 ;
 return this -> replace ( __i1 - _M_ibegin ( ), __i2 - __i1,
        __k1 . base ( ), __k2 - __k1 );
      }
# 1716 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/bits/basic_string.h" 3
private: template < class _Integer >
 basic_string &
 _M_replace_dispatch ( iterator __i1, iterator __i2, _Integer __n,
       _Integer __val, __true_type )
        { return _M_replace_aux ( __i1 - _M_ibegin ( ), __i2 - __i1, __n, __val ); }

template < class _InputIterator >
 basic_string &
 _M_replace_dispatch ( iterator __i1, iterator __i2, _InputIterator __k1,
       _InputIterator __k2, __false_type );


basic_string & _M_replace_aux ( size_type __pos1, size_type __n1, size_type __n2,
       _CharT __c );



basic_string & _M_replace_safe ( size_type __pos1, size_type __n1, const _CharT * __s,
        size_type __n2 );




template < class _InIterator >
        static _CharT *
        _S_construct_aux ( _InIterator __beg, _InIterator __end,
    const _Alloc & __a, __false_type )
 {
          typedef typename iterator_traits < _InIterator > :: iterator_category _Tag;
          return _S_construct ( __beg, __end, __a, _Tag ( ) );
 }



template < class _Integer >
        static _CharT *
        _S_construct_aux ( _Integer __beg, _Integer __end,
    const _Alloc & __a, __true_type )
        { return _S_construct_aux_2 ( static_cast < size_type > ( __beg ),
        __end, __a ); }


static _CharT * _S_construct_aux_2 ( size_type __req, _CharT __c, const _Alloc & __a )
      { return _S_construct ( __req, __c, __a ); }

template < class _InIterator >
        static _CharT *
        _S_construct ( _InIterator __beg, _InIterator __end, const _Alloc & __a )
 {
   typedef typename std :: __is_integer < _InIterator > :: __type _Integral;
   return _S_construct_aux ( __beg, __end, __a, _Integral ( ) );
        }


template < class _InIterator >
        static _CharT *
         _S_construct ( _InIterator __beg, _InIterator __end, const _Alloc & __a,
        input_iterator_tag );



template < class _FwdIterator >
        static _CharT *
        _S_construct ( _FwdIterator __beg, _FwdIterator __end, const _Alloc & __a,
       forward_iterator_tag );


static _CharT * _S_construct ( size_type __req, _CharT __c, const _Alloc & __a );
# 1798 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/bits/basic_string.h" 3
public: size_type copy ( _CharT * __s, size_type __n, size_type __pos = 0 ) const;
# 1809 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/bits/basic_string.h" 3
void swap ( basic_string & __s );
# 1819 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/bits/basic_string.h" 3
const _CharT * c_str ( ) const
      { return _M_data ( ); }
# 1829
const _CharT * data ( ) const
      { return _M_data ( ); }
# 1836
allocator_type get_allocator ( ) const
      { return _M_dataplus; }
# 1852 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/bits/basic_string.h" 3
size_type find ( const _CharT * __s, size_type __pos, size_type __n ) const;
# 1865 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/bits/basic_string.h" 3
size_type find ( const basic_string & __str, size_type __pos = 0 ) const

      { return this -> find ( __str . data ( ), __pos, __str . size ( ) ); }
# 1880 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/bits/basic_string.h" 3
size_type find ( const _CharT * __s, size_type __pos = 0 ) const
      {
 ;
 return this -> find ( __s, __pos, traits_type :: length ( __s ) );
      }
# 1897 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/bits/basic_string.h" 3
size_type find ( _CharT __c, size_type __pos = 0 ) const;
# 1910 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/bits/basic_string.h" 3
size_type rfind ( const basic_string & __str, size_type __pos = npos ) const

      { return this -> rfind ( __str . data ( ), __pos, __str . size ( ) ); }
# 1927 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/bits/basic_string.h" 3
size_type rfind ( const _CharT * __s, size_type __pos, size_type __n ) const;
# 1940 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/bits/basic_string.h" 3
size_type rfind ( const _CharT * __s, size_type __pos = npos ) const
      {
 ;
 return this -> rfind ( __s, __pos, traits_type :: length ( __s ) );
      }
# 1957 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/bits/basic_string.h" 3
size_type rfind ( _CharT __c, size_type __pos = npos ) const;
# 1971 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/bits/basic_string.h" 3
size_type find_first_of ( const basic_string & __str, size_type __pos = 0 ) const

      { return this -> find_first_of ( __str . data ( ), __pos, __str . size ( ) ); }
# 1988 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/bits/basic_string.h" 3
size_type find_first_of ( const _CharT * __s, size_type __pos, size_type __n ) const;
# 2001 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/bits/basic_string.h" 3
size_type find_first_of ( const _CharT * __s, size_type __pos = 0 ) const
      {
 ;
 return this -> find_first_of ( __s, __pos, traits_type :: length ( __s ) );
      }
# 2020 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/bits/basic_string.h" 3
size_type find_first_of ( _CharT __c, size_type __pos = 0 ) const
      { return this -> find ( __c, __pos ); }
# 2035 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/bits/basic_string.h" 3
size_type find_last_of ( const basic_string & __str, size_type __pos = npos ) const

      { return this -> find_last_of ( __str . data ( ), __pos, __str . size ( ) ); }
# 2052 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/bits/basic_string.h" 3
size_type find_last_of ( const _CharT * __s, size_type __pos, size_type __n ) const;
# 2065 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/bits/basic_string.h" 3
size_type find_last_of ( const _CharT * __s, size_type __pos = npos ) const
      {
 ;
 return this -> find_last_of ( __s, __pos, traits_type :: length ( __s ) );
      }
# 2084 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/bits/basic_string.h" 3
size_type find_last_of ( _CharT __c, size_type __pos = npos ) const
      { return this -> rfind ( __c, __pos ); }
# 2098 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/bits/basic_string.h" 3
size_type find_first_not_of ( const basic_string & __str, size_type __pos = 0 ) const

      { return this -> find_first_not_of ( __str . data ( ), __pos, __str . size ( ) ); }
# 2115 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/bits/basic_string.h" 3
size_type find_first_not_of ( const _CharT * __s, size_type __pos,
   size_type __n ) const;
# 2129 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/bits/basic_string.h" 3
size_type find_first_not_of ( const _CharT * __s, size_type __pos = 0 ) const
      {
 ;
 return this -> find_first_not_of ( __s, __pos, traits_type :: length ( __s ) );
      }
# 2146 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/bits/basic_string.h" 3
size_type find_first_not_of ( _CharT __c, size_type __pos = 0 ) const;
# 2161 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/bits/basic_string.h" 3
size_type find_last_not_of ( const basic_string & __str, size_type __pos = npos ) const

      { return this -> find_last_not_of ( __str . data ( ), __pos, __str . size ( ) ); }
# 2178 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/bits/basic_string.h" 3
size_type find_last_not_of ( const _CharT * __s, size_type __pos,
         size_type __n ) const;
# 2192 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/bits/basic_string.h" 3
size_type find_last_not_of ( const _CharT * __s, size_type __pos = npos ) const
      {
 ;
 return this -> find_last_not_of ( __s, __pos, traits_type :: length ( __s ) );
      }
# 2209 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/bits/basic_string.h" 3
size_type find_last_not_of ( _CharT __c, size_type __pos = npos ) const;
# 2225 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/bits/basic_string.h" 3
basic_string substr ( size_type __pos = 0, size_type __n = npos ) const
      { return basic_string ( * this,
       _M_check ( __pos, "basic_string::substr" ), __n ); }
# 2244 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/bits/basic_string.h" 3
int compare ( const basic_string & __str ) const
      {
 const size_type __size = this -> size ( );
 const size_type __osize = __str . size ( );
 const size_type __len = std :: min ( __size, __osize );

 int __r = traits_type :: compare ( _M_data ( ), __str . data ( ), __len );
 if ( ! __r )
   __r = _S_compare ( __size, __osize );
 return __r;
      }
# 2276 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/bits/basic_string.h" 3
int compare ( size_type __pos, size_type __n, const basic_string & __str ) const;
# 2302 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/bits/basic_string.h" 3
int compare ( size_type __pos1, size_type __n1, const basic_string & __str,
       size_type __pos2, size_type __n2 ) const;
# 2320 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/bits/basic_string.h" 3
int compare ( const _CharT * __s ) const;
# 2344 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/bits/basic_string.h" 3
int compare ( size_type __pos, size_type __n1, const _CharT * __s ) const;
# 2371 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/bits/basic_string.h" 3
int compare ( size_type __pos, size_type __n1, const _CharT * __s,
       size_type __n2 ) const;

};
# 2382 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/bits/basic_string.h" 3
template < typename _CharT, typename _Traits, typename _Alloc >
    basic_string < _CharT, _Traits, _Alloc >
    operator + ( const basic_string < _CharT, _Traits, _Alloc > & __lhs,
       const basic_string < _CharT, _Traits, _Alloc > & __rhs )
    {
      basic_string < _CharT, _Traits, _Alloc > __str ( __lhs );
      __str . append ( __rhs );
      return __str;
    }
# 2398
template < typename _CharT, typename _Traits, typename _Alloc >
    basic_string < _CharT, _Traits, _Alloc >
    operator + ( const _CharT * __lhs,
       const basic_string < _CharT, _Traits, _Alloc > & __rhs );
# 2409
template < typename _CharT, typename _Traits, typename _Alloc >
    basic_string < _CharT, _Traits, _Alloc >
    operator + ( _CharT __lhs, const basic_string < _CharT, _Traits, _Alloc > & __rhs );
# 2419
template < typename _CharT, typename _Traits, typename _Alloc >
    inline basic_string < _CharT, _Traits, _Alloc >
    operator + ( const basic_string < _CharT, _Traits, _Alloc > & __lhs,
      const _CharT * __rhs )
    {
      basic_string < _CharT, _Traits, _Alloc > __str ( __lhs );
      __str . append ( __rhs );
      return __str;
    }
# 2435
template < typename _CharT, typename _Traits, typename _Alloc >
    inline basic_string < _CharT, _Traits, _Alloc >
    operator + ( const basic_string < _CharT, _Traits, _Alloc > & __lhs, _CharT __rhs )
    {
      typedef basic_string < _CharT, _Traits, _Alloc > __string_type;
      typedef typename __string_type :: size_type __size_type;
      __string_type __str ( __lhs );
      __str . append ( __size_type ( 1 ), __rhs );
      return __str;
    }
# 2503 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/bits/basic_string.h" 3
template < typename _CharT, typename _Traits, typename _Alloc >
    inline bool
    operator == ( const basic_string < _CharT, _Traits, _Alloc > & __lhs,
        const basic_string < _CharT, _Traits, _Alloc > & __rhs )
    { return __lhs . compare ( __rhs ) == 0; }

template < typename _CharT >
    inline
    typename __gnu_cxx :: __enable_if < __is_char < _CharT > :: __value, bool > :: __type
    operator == ( const basic_string < _CharT > & __lhs,
        const basic_string < _CharT > & __rhs )
    { return ( __lhs . size ( ) == __rhs . size ( )
       && ! std :: char_traits < _CharT > :: compare ( __lhs . data ( ), __rhs . data ( ),
          __lhs . size ( ) ) ); }
# 2524
template < typename _CharT, typename _Traits, typename _Alloc >
    inline bool
    operator == ( const _CharT * __lhs,
        const basic_string < _CharT, _Traits, _Alloc > & __rhs )
    { return __rhs . compare ( __lhs ) == 0; }
# 2536
template < typename _CharT, typename _Traits, typename _Alloc >
    inline bool
    operator == ( const basic_string < _CharT, _Traits, _Alloc > & __lhs,
        const _CharT * __rhs )
    { return __lhs . compare ( __rhs ) == 0; }
# 2549 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/bits/basic_string.h" 3
template < typename _CharT, typename _Traits, typename _Alloc >
    inline bool
    operator != ( const basic_string < _CharT, _Traits, _Alloc > & __lhs,
        const basic_string < _CharT, _Traits, _Alloc > & __rhs )
    { return ! ( __lhs == __rhs ); }
# 2561
template < typename _CharT, typename _Traits, typename _Alloc >
    inline bool
    operator != ( const _CharT * __lhs,
        const basic_string < _CharT, _Traits, _Alloc > & __rhs )
    { return ! ( __lhs == __rhs ); }
# 2573
template < typename _CharT, typename _Traits, typename _Alloc >
    inline bool
    operator != ( const basic_string < _CharT, _Traits, _Alloc > & __lhs,
        const _CharT * __rhs )
    { return ! ( __lhs == __rhs ); }
# 2586 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/bits/basic_string.h" 3
template < typename _CharT, typename _Traits, typename _Alloc >
    inline bool
    operator < ( const basic_string < _CharT, _Traits, _Alloc > & __lhs,
       const basic_string < _CharT, _Traits, _Alloc > & __rhs )
    { return __lhs . compare ( __rhs ) < 0; }
# 2598
template < typename _CharT, typename _Traits, typename _Alloc >
    inline bool
    operator < ( const basic_string < _CharT, _Traits, _Alloc > & __lhs,
       const _CharT * __rhs )
    { return __lhs . compare ( __rhs ) < 0; }
# 2610
template < typename _CharT, typename _Traits, typename _Alloc >
    inline bool
    operator < ( const _CharT * __lhs,
       const basic_string < _CharT, _Traits, _Alloc > & __rhs )
    { return __rhs . compare ( __lhs ) > 0; }
# 2623 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/bits/basic_string.h" 3
template < typename _CharT, typename _Traits, typename _Alloc >
    inline bool
    operator > ( const basic_string < _CharT, _Traits, _Alloc > & __lhs,
       const basic_string < _CharT, _Traits, _Alloc > & __rhs )
    { return __lhs . compare ( __rhs ) > 0; }
# 2635
template < typename _CharT, typename _Traits, typename _Alloc >
    inline bool
    operator > ( const basic_string < _CharT, _Traits, _Alloc > & __lhs,
       const _CharT * __rhs )
    { return __lhs . compare ( __rhs ) > 0; }
# 2647
template < typename _CharT, typename _Traits, typename _Alloc >
    inline bool
    operator > ( const _CharT * __lhs,
       const basic_string < _CharT, _Traits, _Alloc > & __rhs )
    { return __rhs . compare ( __lhs ) < 0; }
# 2660 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/bits/basic_string.h" 3
template < typename _CharT, typename _Traits, typename _Alloc >
    inline bool
    operator <= ( const basic_string < _CharT, _Traits, _Alloc > & __lhs,
        const basic_string < _CharT, _Traits, _Alloc > & __rhs )
    { return __lhs . compare ( __rhs ) <= 0; }
# 2672
template < typename _CharT, typename _Traits, typename _Alloc >
    inline bool
    operator <= ( const basic_string < _CharT, _Traits, _Alloc > & __lhs,
        const _CharT * __rhs )
    { return __lhs . compare ( __rhs ) <= 0; }
# 2684
template < typename _CharT, typename _Traits, typename _Alloc >
    inline bool
    operator <= ( const _CharT * __lhs,
        const basic_string < _CharT, _Traits, _Alloc > & __rhs )
    { return __rhs . compare ( __lhs ) >= 0; }
# 2697 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/bits/basic_string.h" 3
template < typename _CharT, typename _Traits, typename _Alloc >
    inline bool
    operator >= ( const basic_string < _CharT, _Traits, _Alloc > & __lhs,
        const basic_string < _CharT, _Traits, _Alloc > & __rhs )
    { return __lhs . compare ( __rhs ) >= 0; }
# 2709
template < typename _CharT, typename _Traits, typename _Alloc >
    inline bool
    operator >= ( const basic_string < _CharT, _Traits, _Alloc > & __lhs,
        const _CharT * __rhs )
    { return __lhs . compare ( __rhs ) >= 0; }
# 2721
template < typename _CharT, typename _Traits, typename _Alloc >
    inline bool
    operator >= ( const _CharT * __lhs,
      const basic_string < _CharT, _Traits, _Alloc > & __rhs )
    { return __rhs . compare ( __lhs ) <= 0; }
# 2734 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/bits/basic_string.h" 3
template < typename _CharT, typename _Traits, typename _Alloc >
    inline void
    swap ( basic_string < _CharT, _Traits, _Alloc > & __lhs,
  basic_string < _CharT, _Traits, _Alloc > & __rhs )
    { __lhs . swap ( __rhs ); }
# 2752 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/bits/basic_string.h" 3
template < typename _CharT, typename _Traits, typename _Alloc >
    basic_istream < _CharT, _Traits > &
    operator >> ( basic_istream < _CharT, _Traits > & __is,
        basic_string < _CharT, _Traits, _Alloc > & __str );



template<> basic_istream< char>  &operator>>(basic_istream< char>  & __is, basic_string< char, char_traits< char> , allocator< char> >  & __str); 
# 2770 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/bits/basic_string.h" 3
template < typename _CharT, typename _Traits, typename _Alloc >
    inline basic_ostream < _CharT, _Traits > &
    operator << ( basic_ostream < _CharT, _Traits > & __os,
        const basic_string < _CharT, _Traits, _Alloc > & __str )
    {


      return __ostream_insert ( __os, __str . data ( ), __str . size ( ) );
    }
# 2793 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/bits/basic_string.h" 3
template < typename _CharT, typename _Traits, typename _Alloc >
    basic_istream < _CharT, _Traits > &
    getline ( basic_istream < _CharT, _Traits > & __is,
     basic_string < _CharT, _Traits, _Alloc > & __str, _CharT __delim );
# 2810 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/bits/basic_string.h" 3
template < typename _CharT, typename _Traits, typename _Alloc >
    inline basic_istream < _CharT, _Traits > &
    getline ( basic_istream < _CharT, _Traits > & __is,
     basic_string < _CharT, _Traits, _Alloc > & __str )
    { return std :: getline ( __is, __str, __is . widen ( '\n' ) ); }
# 2834 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/bits/basic_string.h" 3
template<> basic_istream< char>  &getline(basic_istream< char>  & __in, basic_string< char, char_traits< char> , allocator< char> >  & __str, char __delim); 
# 2840
template<> basic_istream< wchar_t>  &getline(basic_istream< wchar_t>  & __in, basic_string< wchar_t, char_traits< wchar_t> , allocator< wchar_t> >  & __str, wchar_t __delim); 




}
# 44 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/bits/basic_string.tcc" 3
namespace std { 



template < typename _CharT, typename _Traits, typename _Alloc >
    const typename basic_string < _CharT, _Traits, _Alloc > :: size_type
    basic_string < _CharT, _Traits, _Alloc > ::
    _Rep :: _S_max_size = ( ( ( npos - sizeof ( _Rep_base ) ) / sizeof ( _CharT ) ) - 1 ) / 4;

template < typename _CharT, typename _Traits, typename _Alloc >
    const _CharT
    basic_string < _CharT, _Traits, _Alloc > ::
    _Rep :: _S_terminal = _CharT ( );

template < typename _CharT, typename _Traits, typename _Alloc >
    const typename basic_string < _CharT, _Traits, _Alloc > :: size_type
    basic_string < _CharT, _Traits, _Alloc > :: npos;



template < typename _CharT, typename _Traits, typename _Alloc >
    typename basic_string < _CharT, _Traits, _Alloc > :: size_type
    basic_string < _CharT, _Traits, _Alloc > :: _Rep :: _S_empty_rep_storage [
    ( sizeof ( _Rep_base ) + sizeof ( _CharT ) + sizeof ( size_type ) - 1 ) /
      sizeof ( size_type ) ];
# 74
template < typename _CharT, typename _Traits, typename _Alloc >
    template < typename _InIterator >
      _CharT *
      basic_string < _CharT, _Traits, _Alloc > ::
      _S_construct ( _InIterator __beg, _InIterator __end, const _Alloc & __a,
     input_iterator_tag )
      {

 if ( __beg == __end && __a == _Alloc ( ) )
   return _S_empty_rep ( ) . _M_refdata ( );


 _CharT __buf [ 128 ];
 size_type __len = 0;
 while ( __beg != __end && __len < sizeof ( __buf ) / sizeof ( _CharT ) )
   {
     __buf [ __len ++ ] = * __beg;
     ++ __beg;
   }
 _Rep * __r = _Rep :: _S_create ( __len, size_type ( 0 ), __a );
 _M_copy ( __r -> _M_refdata ( ), __buf, __len );
 try
   {
     while ( __beg != __end )
       {
  if ( __len == __r -> _M_capacity )
    {

      _Rep * __another = _Rep :: _S_create ( __len + 1, __len, __a );
      _M_copy ( __another -> _M_refdata ( ), __r -> _M_refdata ( ), __len );
      __r -> _M_destroy ( __a );
      __r = __another;
    }
  __r -> _M_refdata ( ) [ __len ++ ] = * __beg;
  ++ __beg;
       }
   }
 catch ( ... )
   {
     __r -> _M_destroy ( __a );
     throw;
   }
 __r -> _M_set_length_and_sharable ( __len );
 return __r -> _M_refdata ( );
      }

template < typename _CharT, typename _Traits, typename _Alloc >
    template < typename _InIterator >
      _CharT *
      basic_string < _CharT, _Traits, _Alloc > ::
      _S_construct ( _InIterator __beg, _InIterator __end, const _Alloc & __a,
     forward_iterator_tag )
      {

 if ( __beg == __end && __a == _Alloc ( ) )
   return _S_empty_rep ( ) . _M_refdata ( );


 if ( __gnu_cxx :: __is_null_pointer ( __beg ) && __beg != __end )
   __throw_logic_error ( ( "basic_string::_S_construct null not valid" ) );

 const size_type __dnew = static_cast < size_type > ( std :: distance ( __beg,
              __end ) );

 _Rep * __r = _Rep :: _S_create ( __dnew, size_type ( 0 ), __a );
 try
   { _S_copy_chars ( __r -> _M_refdata ( ), __beg, __end ); }
 catch ( ... )
   {
     __r -> _M_destroy ( __a );
     throw;
   }
 __r -> _M_set_length_and_sharable ( __dnew );
 return __r -> _M_refdata ( );
      }

template < typename _CharT, typename _Traits, typename _Alloc >
    _CharT *
    basic_string < _CharT, _Traits, _Alloc > ::
    _S_construct ( size_type __n, _CharT __c, const _Alloc & __a )
    {

      if ( __n == 0 && __a == _Alloc ( ) )
 return _S_empty_rep ( ) . _M_refdata ( );


      _Rep * __r = _Rep :: _S_create ( __n, size_type ( 0 ), __a );
      if ( __n )
 _M_assign ( __r -> _M_refdata ( ), __n, __c );

      __r -> _M_set_length_and_sharable ( __n );
      return __r -> _M_refdata ( );
    }

template < typename _CharT, typename _Traits, typename _Alloc >
    basic_string < _CharT, _Traits, _Alloc > ::
    basic_string ( const basic_string & __str )
    : _M_dataplus ( __str . _M_rep ( ) -> _M_grab ( _Alloc ( __str . get_allocator ( ) ),
       __str . get_allocator ( ) ),
    __str . get_allocator ( ) )
    { }

template < typename _CharT, typename _Traits, typename _Alloc >
    basic_string < _CharT, _Traits, _Alloc > ::
    basic_string ( const _Alloc & __a )
    : _M_dataplus ( _S_construct ( size_type ( ), _CharT ( ), __a ), __a )
    { }

template < typename _CharT, typename _Traits, typename _Alloc >
    basic_string < _CharT, _Traits, _Alloc > ::
    basic_string ( const basic_string & __str, size_type __pos, size_type __n )
    : _M_dataplus ( _S_construct ( __str . _M_data ( )
          + __str . _M_check ( __pos,
      "basic_string::basic_string" ),
          __str . _M_data ( ) + __str . _M_limit ( __pos, __n )
          + __pos, _Alloc ( ) ), _Alloc ( ) )
    { }

template < typename _CharT, typename _Traits, typename _Alloc >
    basic_string < _CharT, _Traits, _Alloc > ::
    basic_string ( const basic_string & __str, size_type __pos,
   size_type __n, const _Alloc & __a )
    : _M_dataplus ( _S_construct ( __str . _M_data ( )
          + __str . _M_check ( __pos,
      "basic_string::basic_string" ),
          __str . _M_data ( ) + __str . _M_limit ( __pos, __n )
          + __pos, __a ), __a )
    { }


template < typename _CharT, typename _Traits, typename _Alloc >
    basic_string < _CharT, _Traits, _Alloc > ::
    basic_string ( const _CharT * __s, size_type __n, const _Alloc & __a )
    : _M_dataplus ( _S_construct ( __s, __s + __n, __a ), __a )
    { }


template < typename _CharT, typename _Traits, typename _Alloc >
    basic_string < _CharT, _Traits, _Alloc > ::
    basic_string ( const _CharT * __s, const _Alloc & __a )
    : _M_dataplus ( _S_construct ( __s, __s ? __s + traits_type :: length ( __s ) :
          __s + npos, __a ), __a )
    { }

template < typename _CharT, typename _Traits, typename _Alloc >
    basic_string < _CharT, _Traits, _Alloc > ::
    basic_string ( size_type __n, _CharT __c, const _Alloc & __a )
    : _M_dataplus ( _S_construct ( __n, __c, __a ), __a )
    { }


template < typename _CharT, typename _Traits, typename _Alloc >
    template < typename _InputIterator >
    basic_string < _CharT, _Traits, _Alloc > ::
    basic_string ( _InputIterator __beg, _InputIterator __end, const _Alloc & __a )
    : _M_dataplus ( _S_construct ( __beg, __end, __a ), __a )
    { }
# 240 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/bits/basic_string.tcc" 3
template < typename _CharT, typename _Traits, typename _Alloc >
    basic_string < _CharT, _Traits, _Alloc > &
    basic_string < _CharT, _Traits, _Alloc > ::
    assign ( const basic_string & __str )
    {
      if ( _M_rep ( ) != __str . _M_rep ( ) )
 {

   const allocator_type __a = this -> get_allocator ( );
   _CharT * __tmp = __str . _M_rep ( ) -> _M_grab ( __a, __str . get_allocator ( ) );
   _M_rep ( ) -> _M_dispose ( __a );
   _M_data ( __tmp );
 }
      return * this;
    }

template < typename _CharT, typename _Traits, typename _Alloc >
    basic_string < _CharT, _Traits, _Alloc > &
    basic_string < _CharT, _Traits, _Alloc > ::
    assign ( const _CharT * __s, size_type __n )
    {
      ;
      _M_check_length ( this -> size ( ), __n, "basic_string::assign" );
      if ( _M_disjunct ( __s ) || _M_rep ( ) -> _M_is_shared ( ) )
 return _M_replace_safe ( size_type ( 0 ), this -> size ( ), __s, __n );
      else
 {

   const size_type __pos = __s - _M_data ( );
   if ( __pos >= __n )
     _M_copy ( _M_data ( ), __s, __n );
   else if ( __pos )
     _M_move ( _M_data ( ), __s, __n );
   _M_rep ( ) -> _M_set_length_and_sharable ( __n );
   return * this;
 }
     }

template < typename _CharT, typename _Traits, typename _Alloc >
    basic_string < _CharT, _Traits, _Alloc > &
    basic_string < _CharT, _Traits, _Alloc > ::
    append ( size_type __n, _CharT __c )
    {
      if ( __n )
 {
   _M_check_length ( size_type ( 0 ), __n, "basic_string::append" );
   const size_type __len = __n + this -> size ( );
   if ( __len > this -> capacity ( ) || _M_rep ( ) -> _M_is_shared ( ) )
     this -> reserve ( __len );
   _M_assign ( _M_data ( ) + this -> size ( ), __n, __c );
   _M_rep ( ) -> _M_set_length_and_sharable ( __len );
 }
      return * this;
    }

template < typename _CharT, typename _Traits, typename _Alloc >
    basic_string < _CharT, _Traits, _Alloc > &
    basic_string < _CharT, _Traits, _Alloc > ::
    append ( const _CharT * __s, size_type __n )
    {
      ;
      if ( __n )
 {
   _M_check_length ( size_type ( 0 ), __n, "basic_string::append" );
   const size_type __len = __n + this -> size ( );
   if ( __len > this -> capacity ( ) || _M_rep ( ) -> _M_is_shared ( ) )
     {
       if ( _M_disjunct ( __s ) )
  this -> reserve ( __len );
       else
  {
    const size_type __off = __s - _M_data ( );
    this -> reserve ( __len );
    __s = _M_data ( ) + __off;
  }
     }
   _M_copy ( _M_data ( ) + this -> size ( ), __s, __n );
   _M_rep ( ) -> _M_set_length_and_sharable ( __len );
 }
      return * this;
    }

template < typename _CharT, typename _Traits, typename _Alloc >
    basic_string < _CharT, _Traits, _Alloc > &
    basic_string < _CharT, _Traits, _Alloc > ::
    append ( const basic_string & __str )
    {
      const size_type __size = __str . size ( );
      if ( __size )
 {
   const size_type __len = __size + this -> size ( );
   if ( __len > this -> capacity ( ) || _M_rep ( ) -> _M_is_shared ( ) )
     this -> reserve ( __len );
   _M_copy ( _M_data ( ) + this -> size ( ), __str . _M_data ( ), __size );
   _M_rep ( ) -> _M_set_length_and_sharable ( __len );
 }
      return * this;
    }

template < typename _CharT, typename _Traits, typename _Alloc >
    basic_string < _CharT, _Traits, _Alloc > &
    basic_string < _CharT, _Traits, _Alloc > ::
    append ( const basic_string & __str, size_type __pos, size_type __n )
    {
      __str . _M_check ( __pos, "basic_string::append" );
      __n = __str . _M_limit ( __pos, __n );
      if ( __n )
 {
   const size_type __len = __n + this -> size ( );
   if ( __len > this -> capacity ( ) || _M_rep ( ) -> _M_is_shared ( ) )
     this -> reserve ( __len );
   _M_copy ( _M_data ( ) + this -> size ( ), __str . _M_data ( ) + __pos, __n );
   _M_rep ( ) -> _M_set_length_and_sharable ( __len );
 }
      return * this;
    }

template < typename _CharT, typename _Traits, typename _Alloc >
     basic_string < _CharT, _Traits, _Alloc > &
     basic_string < _CharT, _Traits, _Alloc > ::
     insert ( size_type __pos, const _CharT * __s, size_type __n )
     {
       ;
       _M_check ( __pos, "basic_string::insert" );
       _M_check_length ( size_type ( 0 ), __n, "basic_string::insert" );
       if ( _M_disjunct ( __s ) || _M_rep ( ) -> _M_is_shared ( ) )
         return _M_replace_safe ( __pos, size_type ( 0 ), __s, __n );
       else
         {

           const size_type __off = __s - _M_data ( );
           _M_mutate ( __pos, 0, __n );
           __s = _M_data ( ) + __off;
           _CharT * __p = _M_data ( ) + __pos;
           if ( __s + __n <= __p )
             _M_copy ( __p, __s, __n );
           else if ( __s >= __p )
             _M_copy ( __p, __s + __n, __n );
           else
             {
        const size_type __nleft = __p - __s;
               _M_copy ( __p, __s, __nleft );
               _M_copy ( __p + __nleft, __p + __n, __n - __nleft );
             }
           return * this;
         }
     }

template < typename _CharT, typename _Traits, typename _Alloc >
     typename basic_string < _CharT, _Traits, _Alloc > :: iterator
     basic_string < _CharT, _Traits, _Alloc > ::
     erase ( iterator __first, iterator __last )
     {

                           ;




       const size_type __size = __last - __first;
       if ( __size )
  {
    const size_type __pos = __first - _M_ibegin ( );
    _M_mutate ( __pos, __size, size_type ( 0 ) );
    _M_rep ( ) -> _M_set_leaked ( );
    return iterator ( _M_data ( ) + __pos );
  }
       else
  return __first;
     }

template < typename _CharT, typename _Traits, typename _Alloc >
     basic_string < _CharT, _Traits, _Alloc > &
     basic_string < _CharT, _Traits, _Alloc > ::
     replace ( size_type __pos, size_type __n1, const _CharT * __s,
      size_type __n2 )
     {
       ;
       _M_check ( __pos, "basic_string::replace" );
       __n1 = _M_limit ( __pos, __n1 );
       _M_check_length ( __n1, __n2, "basic_string::replace" );
       bool __left;
       if ( _M_disjunct ( __s ) || _M_rep ( ) -> _M_is_shared ( ) )
         return _M_replace_safe ( __pos, __n1, __s, __n2 );
       else if ( ( __left = __s + __n2 <= _M_data ( ) + __pos )
  || _M_data ( ) + __pos + __n1 <= __s )
  {

    size_type __off = __s - _M_data ( );
    __left ? __off : ( __off += __n2 - __n1 );
    _M_mutate ( __pos, __n1, __n2 );
    _M_copy ( _M_data ( ) + __pos, _M_data ( ) + __off, __n2 );
    return * this;
  }
       else
  {

    const basic_string __tmp ( __s, __n2 );
    return _M_replace_safe ( __pos, __n1, __tmp . _M_data ( ), __n2 );
  }
     }

template < typename _CharT, typename _Traits, typename _Alloc >
    void
    basic_string < _CharT, _Traits, _Alloc > :: _Rep ::
    _M_destroy ( const _Alloc & __a ) throw ( )
    {
      const size_type __size = sizeof ( _Rep_base ) +
                        ( this -> _M_capacity + 1 ) * sizeof ( _CharT );
      _Raw_bytes_alloc ( __a ) . deallocate ( reinterpret_cast < char * > ( this ), __size );
    }

template < typename _CharT, typename _Traits, typename _Alloc >
    void
    basic_string < _CharT, _Traits, _Alloc > ::
    _M_leak_hard ( )
    {

      if ( _M_rep ( ) == & _S_empty_rep ( ) )
 return;

      if ( _M_rep ( ) -> _M_is_shared ( ) )
 _M_mutate ( 0, 0, 0 );
      _M_rep ( ) -> _M_set_leaked ( );
    }

template < typename _CharT, typename _Traits, typename _Alloc >
    void
    basic_string < _CharT, _Traits, _Alloc > ::
    _M_mutate ( size_type __pos, size_type __len1, size_type __len2 )
    {
      const size_type __old_size = this -> size ( );
      const size_type __new_size = __old_size + __len2 - __len1;
      const size_type __how_much = __old_size - __pos - __len1;

      if ( __new_size > this -> capacity ( ) || _M_rep ( ) -> _M_is_shared ( ) )
 {

   const allocator_type __a = get_allocator ( );
   _Rep * __r = _Rep :: _S_create ( __new_size, this -> capacity ( ), __a );

   if ( __pos )
     _M_copy ( __r -> _M_refdata ( ), _M_data ( ), __pos );
   if ( __how_much )
     _M_copy ( __r -> _M_refdata ( ) + __pos + __len2,
      _M_data ( ) + __pos + __len1, __how_much );

   _M_rep ( ) -> _M_dispose ( __a );
   _M_data ( __r -> _M_refdata ( ) );
 }
      else if ( __how_much && __len1 != __len2 )
 {

   _M_move ( _M_data ( ) + __pos + __len2,
    _M_data ( ) + __pos + __len1, __how_much );
 }
      _M_rep ( ) -> _M_set_length_and_sharable ( __new_size );
    }

template < typename _CharT, typename _Traits, typename _Alloc >
    void
    basic_string < _CharT, _Traits, _Alloc > ::
    reserve ( size_type __res )
    {
      if ( __res != this -> capacity ( ) || _M_rep ( ) -> _M_is_shared ( ) )
        {

   if ( __res < this -> size ( ) )
     __res = this -> size ( );
   const allocator_type __a = get_allocator ( );
   _CharT * __tmp = _M_rep ( ) -> _M_clone ( __a, __res - this -> size ( ) );
   _M_rep ( ) -> _M_dispose ( __a );
   _M_data ( __tmp );
        }
    }

template < typename _CharT, typename _Traits, typename _Alloc >
    void
    basic_string < _CharT, _Traits, _Alloc > ::
    swap ( basic_string & __s )
    {
      if ( _M_rep ( ) -> _M_is_leaked ( ) )
 _M_rep ( ) -> _M_set_sharable ( );
      if ( __s . _M_rep ( ) -> _M_is_leaked ( ) )
 __s . _M_rep ( ) -> _M_set_sharable ( );
      if ( this -> get_allocator ( ) == __s . get_allocator ( ) )
 {
   _CharT * __tmp = _M_data ( );
   _M_data ( __s . _M_data ( ) );
   __s . _M_data ( __tmp );
 }

      else
 {
   const basic_string __tmp1 ( _M_ibegin ( ), _M_iend ( ),
        __s . get_allocator ( ) );
   const basic_string __tmp2 ( __s . _M_ibegin ( ), __s . _M_iend ( ),
        this -> get_allocator ( ) );
   * this = __tmp2;
   __s = __tmp1;
 }
    }

template < typename _CharT, typename _Traits, typename _Alloc >
    typename basic_string < _CharT, _Traits, _Alloc > :: _Rep *
    basic_string < _CharT, _Traits, _Alloc > :: _Rep ::
    _S_create ( size_type __capacity, size_type __old_capacity,
       const _Alloc & __alloc )
    {


      if ( __capacity > _S_max_size )
 __throw_length_error ( ( "basic_string::_S_create" ) );

      const size_type __pagesize = 4096;
      const size_type __malloc_header_size = 4 * sizeof ( void * );







      if ( __capacity > __old_capacity && __capacity < 2 * __old_capacity )
 __capacity = 2 * __old_capacity;




      size_type __size = ( __capacity + 1 ) * sizeof ( _CharT ) + sizeof ( _Rep );

      const size_type __adj_size = __size + __malloc_header_size;
      if ( __adj_size > __pagesize && __capacity > __old_capacity )
 {
   const size_type __extra = __pagesize - __adj_size % __pagesize;
   __capacity += __extra / sizeof ( _CharT );

   if ( __capacity > _S_max_size )
     __capacity = _S_max_size;
   __size = ( __capacity + 1 ) * sizeof ( _CharT ) + sizeof ( _Rep );
 }



      void * __place = _Raw_bytes_alloc ( __alloc ) . allocate ( __size );
      _Rep * __p = new ( __place ) _Rep;
      __p -> _M_capacity = __capacity;







      __p -> _M_set_sharable ( );
      return __p;
    }
# 621 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/bits/basic_string.tcc" 3
template < typename _CharT, typename _Traits, typename _Alloc >
    _CharT *
    basic_string < _CharT, _Traits, _Alloc > :: _Rep ::
    _M_clone ( const _Alloc & __alloc, size_type __res )
    {

      const size_type __requested_cap = this -> _M_length + __res;
      _Rep * __r = _Rep :: _S_create ( __requested_cap, this -> _M_capacity,
      __alloc );
      if ( this -> _M_length )
 _M_copy ( __r -> _M_refdata ( ), _M_refdata ( ), this -> _M_length );

      __r -> _M_set_length_and_sharable ( this -> _M_length );
      return __r -> _M_refdata ( );
    }

template < typename _CharT, typename _Traits, typename _Alloc >
    void
    basic_string < _CharT, _Traits, _Alloc > ::
    resize ( size_type __n, _CharT __c )
    {
      const size_type __size = this -> size ( );
      _M_check_length ( __size, __n, "basic_string::resize" );
      if ( __size < __n )
 this -> append ( __n - __size, __c );
      else if ( __n < __size )
 this -> erase ( __n );

    }

template < typename _CharT, typename _Traits, typename _Alloc >
    template < typename _InputIterator >
      basic_string < _CharT, _Traits, _Alloc > &
      basic_string < _CharT, _Traits, _Alloc > ::
      _M_replace_dispatch ( iterator __i1, iterator __i2, _InputIterator __k1,
     _InputIterator __k2, __false_type )
      {
 const basic_string __s ( __k1, __k2 );
 const size_type __n1 = __i2 - __i1;
 _M_check_length ( __n1, __s . size ( ), "basic_string::_M_replace_dispatch" );
 return _M_replace_safe ( __i1 - _M_ibegin ( ), __n1, __s . _M_data ( ),
          __s . size ( ) );
      }

template < typename _CharT, typename _Traits, typename _Alloc >
    basic_string < _CharT, _Traits, _Alloc > &
    basic_string < _CharT, _Traits, _Alloc > ::
    _M_replace_aux ( size_type __pos1, size_type __n1, size_type __n2,
     _CharT __c )
    {
      _M_check_length ( __n1, __n2, "basic_string::_M_replace_aux" );
      _M_mutate ( __pos1, __n1, __n2 );
      if ( __n2 )
 _M_assign ( _M_data ( ) + __pos1, __n2, __c );
      return * this;
    }

template < typename _CharT, typename _Traits, typename _Alloc >
    basic_string < _CharT, _Traits, _Alloc > &
    basic_string < _CharT, _Traits, _Alloc > ::
    _M_replace_safe ( size_type __pos1, size_type __n1, const _CharT * __s,
      size_type __n2 )
    {
      _M_mutate ( __pos1, __n1, __n2 );
      if ( __n2 )
 _M_copy ( _M_data ( ) + __pos1, __s, __n2 );
      return * this;
    }

template < typename _CharT, typename _Traits, typename _Alloc >
    basic_string < _CharT, _Traits, _Alloc >
    operator + ( const _CharT * __lhs,
       const basic_string < _CharT, _Traits, _Alloc > & __rhs )
    {
      ;
      typedef basic_string < _CharT, _Traits, _Alloc > __string_type;
      typedef typename __string_type :: size_type __size_type;
      const __size_type __len = _Traits :: length ( __lhs );
      __string_type __str;
      __str . reserve ( __len + __rhs . size ( ) );
      __str . append ( __lhs, __len );
      __str . append ( __rhs );
      return __str;
    }

template < typename _CharT, typename _Traits, typename _Alloc >
    basic_string < _CharT, _Traits, _Alloc >
    operator + ( _CharT __lhs, const basic_string < _CharT, _Traits, _Alloc > & __rhs )
    {
      typedef basic_string < _CharT, _Traits, _Alloc > __string_type;
      typedef typename __string_type :: size_type __size_type;
      __string_type __str;
      const __size_type __len = __rhs . size ( );
      __str . reserve ( __len + 1 );
      __str . append ( __size_type ( 1 ), __lhs );
      __str . append ( __rhs );
      return __str;
    }

template < typename _CharT, typename _Traits, typename _Alloc >
    typename basic_string < _CharT, _Traits, _Alloc > :: size_type
    basic_string < _CharT, _Traits, _Alloc > ::
    copy ( _CharT * __s, size_type __n, size_type __pos ) const
    {
      _M_check ( __pos, "basic_string::copy" );
      __n = _M_limit ( __pos, __n );
      ;
      if ( __n )
 _M_copy ( __s, _M_data ( ) + __pos, __n );

      return __n;
    }

template < typename _CharT, typename _Traits, typename _Alloc >
    typename basic_string < _CharT, _Traits, _Alloc > :: size_type
    basic_string < _CharT, _Traits, _Alloc > ::
    find ( const _CharT * __s, size_type __pos, size_type __n ) const
    {
      ;
      const size_type __size = this -> size ( );
      const _CharT * __data = _M_data ( );

      if ( __n == 0 )
 return __pos <= __size ? __pos : npos;

      if ( __n <= __size )
 {
   for (; __pos <= __size - __n; ++ __pos )
     if ( traits_type :: eq ( __data [ __pos ], __s [ 0 ] )
  && traits_type :: compare ( __data + __pos + 1,
     __s + 1, __n - 1 ) == 0 )
       return __pos;
 }
      return npos;
    }

template < typename _CharT, typename _Traits, typename _Alloc >
    typename basic_string < _CharT, _Traits, _Alloc > :: size_type
    basic_string < _CharT, _Traits, _Alloc > ::
    find ( _CharT __c, size_type __pos ) const
    {
      size_type __ret = npos;
      const size_type __size = this -> size ( );
      if ( __pos < __size )
 {
   const _CharT * __data = _M_data ( );
   const size_type __n = __size - __pos;
   const _CharT * __p = traits_type :: find ( __data + __pos, __n, __c );
   if ( __p )
     __ret = __p - __data;
 }
      return __ret;
    }

template < typename _CharT, typename _Traits, typename _Alloc >
    typename basic_string < _CharT, _Traits, _Alloc > :: size_type
    basic_string < _CharT, _Traits, _Alloc > ::
    rfind ( const _CharT * __s, size_type __pos, size_type __n ) const
    {
      ;
      const size_type __size = this -> size ( );
      if ( __n <= __size )
 {
   __pos = std :: min ( size_type ( __size - __n ), __pos );
   const _CharT * __data = _M_data ( );
   do
     {
       if ( traits_type :: compare ( __data + __pos, __s, __n ) == 0 )
  return __pos;
     }
   while ( __pos -- > 0 );
 }
      return npos;
    }

template < typename _CharT, typename _Traits, typename _Alloc >
    typename basic_string < _CharT, _Traits, _Alloc > :: size_type
    basic_string < _CharT, _Traits, _Alloc > ::
    rfind ( _CharT __c, size_type __pos ) const
    {
      size_type __size = this -> size ( );
      if ( __size )
 {
   if ( -- __size > __pos )
     __size = __pos;
   for ( ++ __size; __size -- > 0; )
     if ( traits_type :: eq ( _M_data ( ) [ __size ], __c ) )
       return __size;
 }
      return npos;
    }

template < typename _CharT, typename _Traits, typename _Alloc >
    typename basic_string < _CharT, _Traits, _Alloc > :: size_type
    basic_string < _CharT, _Traits, _Alloc > ::
    find_first_of ( const _CharT * __s, size_type __pos, size_type __n ) const
    {
      ;
      for (; __n && __pos < this -> size ( ); ++ __pos )
 {
   const _CharT * __p = traits_type :: find ( __s, __n, _M_data ( ) [ __pos ] );
   if ( __p )
     return __pos;
 }
      return npos;
    }

template < typename _CharT, typename _Traits, typename _Alloc >
    typename basic_string < _CharT, _Traits, _Alloc > :: size_type
    basic_string < _CharT, _Traits, _Alloc > ::
    find_last_of ( const _CharT * __s, size_type __pos, size_type __n ) const
    {
      ;
      size_type __size = this -> size ( );
      if ( __size && __n )
 {
   if ( -- __size > __pos )
     __size = __pos;
   do
     {
       if ( traits_type :: find ( __s, __n, _M_data ( ) [ __size ] ) )
  return __size;
     }
   while ( __size -- != 0 );
 }
      return npos;
    }

template < typename _CharT, typename _Traits, typename _Alloc >
    typename basic_string < _CharT, _Traits, _Alloc > :: size_type
    basic_string < _CharT, _Traits, _Alloc > ::
    find_first_not_of ( const _CharT * __s, size_type __pos, size_type __n ) const
    {
      ;
      for (; __pos < this -> size ( ); ++ __pos )
 if ( ! traits_type :: find ( __s, __n, _M_data ( ) [ __pos ] ) )
   return __pos;
      return npos;
    }

template < typename _CharT, typename _Traits, typename _Alloc >
    typename basic_string < _CharT, _Traits, _Alloc > :: size_type
    basic_string < _CharT, _Traits, _Alloc > ::
    find_first_not_of ( _CharT __c, size_type __pos ) const
    {
      for (; __pos < this -> size ( ); ++ __pos )
 if ( ! traits_type :: eq ( _M_data ( ) [ __pos ], __c ) )
   return __pos;
      return npos;
    }

template < typename _CharT, typename _Traits, typename _Alloc >
    typename basic_string < _CharT, _Traits, _Alloc > :: size_type
    basic_string < _CharT, _Traits, _Alloc > ::
    find_last_not_of ( const _CharT * __s, size_type __pos, size_type __n ) const
    {
      ;
      size_type __size = this -> size ( );
      if ( __size )
 {
   if ( -- __size > __pos )
     __size = __pos;
   do
     {
       if ( ! traits_type :: find ( __s, __n, _M_data ( ) [ __size ] ) )
  return __size;
     }
   while ( __size -- );
 }
      return npos;
    }

template < typename _CharT, typename _Traits, typename _Alloc >
    typename basic_string < _CharT, _Traits, _Alloc > :: size_type
    basic_string < _CharT, _Traits, _Alloc > ::
    find_last_not_of ( _CharT __c, size_type __pos ) const
    {
      size_type __size = this -> size ( );
      if ( __size )
 {
   if ( -- __size > __pos )
     __size = __pos;
   do
     {
       if ( ! traits_type :: eq ( _M_data ( ) [ __size ], __c ) )
  return __size;
     }
   while ( __size -- );
 }
      return npos;
    }

template < typename _CharT, typename _Traits, typename _Alloc >
    int
    basic_string < _CharT, _Traits, _Alloc > ::
    compare ( size_type __pos, size_type __n, const basic_string & __str ) const
    {
      _M_check ( __pos, "basic_string::compare" );
      __n = _M_limit ( __pos, __n );
      const size_type __osize = __str . size ( );
      const size_type __len = std :: min ( __n, __osize );
      int __r = traits_type :: compare ( _M_data ( ) + __pos, __str . data ( ), __len );
      if ( ! __r )
 __r = _S_compare ( __n, __osize );
      return __r;
    }

template < typename _CharT, typename _Traits, typename _Alloc >
    int
    basic_string < _CharT, _Traits, _Alloc > ::
    compare ( size_type __pos1, size_type __n1, const basic_string & __str,
     size_type __pos2, size_type __n2 ) const
    {
      _M_check ( __pos1, "basic_string::compare" );
      __str . _M_check ( __pos2, "basic_string::compare" );
      __n1 = _M_limit ( __pos1, __n1 );
      __n2 = __str . _M_limit ( __pos2, __n2 );
      const size_type __len = std :: min ( __n1, __n2 );
      int __r = traits_type :: compare ( _M_data ( ) + __pos1,
         __str . data ( ) + __pos2, __len );
      if ( ! __r )
 __r = _S_compare ( __n1, __n2 );
      return __r;
    }

template < typename _CharT, typename _Traits, typename _Alloc >
    int
    basic_string < _CharT, _Traits, _Alloc > ::
    compare ( const _CharT * __s ) const
    {
      ;
      const size_type __size = this -> size ( );
      const size_type __osize = traits_type :: length ( __s );
      const size_type __len = std :: min ( __size, __osize );
      int __r = traits_type :: compare ( _M_data ( ), __s, __len );
      if ( ! __r )
 __r = _S_compare ( __size, __osize );
      return __r;
    }

template < typename _CharT, typename _Traits, typename _Alloc >
    int
    basic_string < _CharT, _Traits, _Alloc > ::
    compare ( size_type __pos, size_type __n1, const _CharT * __s ) const
    {
      ;
      _M_check ( __pos, "basic_string::compare" );
      __n1 = _M_limit ( __pos, __n1 );
      const size_type __osize = traits_type :: length ( __s );
      const size_type __len = std :: min ( __n1, __osize );
      int __r = traits_type :: compare ( _M_data ( ) + __pos, __s, __len );
      if ( ! __r )
 __r = _S_compare ( __n1, __osize );
      return __r;
    }

template < typename _CharT, typename _Traits, typename _Alloc >
    int
    basic_string < _CharT, _Traits, _Alloc > ::
    compare ( size_type __pos, size_type __n1, const _CharT * __s,
     size_type __n2 ) const
    {
      ;
      _M_check ( __pos, "basic_string::compare" );
      __n1 = _M_limit ( __pos, __n1 );
      const size_type __len = std :: min ( __n1, __n2 );
      int __r = traits_type :: compare ( _M_data ( ) + __pos, __s, __len );
      if ( ! __r )
 __r = _S_compare ( __n1, __n2 );
      return __r;
    }


template < typename _CharT, typename _Traits, typename _Alloc >
    basic_istream < _CharT, _Traits > &
    operator >> ( basic_istream < _CharT, _Traits > & __in,
        basic_string < _CharT, _Traits, _Alloc > & __str )
    {
      typedef basic_istream < _CharT, _Traits > __istream_type;
      typedef basic_string < _CharT, _Traits, _Alloc > __string_type;
      typedef typename __istream_type :: ios_base __ios_base;
      typedef typename __istream_type :: int_type __int_type;
      typedef typename __string_type :: size_type __size_type;
      typedef ctype < _CharT > __ctype_type;
      typedef typename __ctype_type :: ctype_base __ctype_base;

      __size_type __extracted = 0;
      typename __ios_base :: iostate __err = __ios_base :: goodbit;
      typename __istream_type :: sentry __cerb ( __in, false );
      if ( __cerb )
 {
   try
     {

       __str . erase ( );
       _CharT __buf [ 128 ];
       __size_type __len = 0;
       const streamsize __w = __in . width ( );
       const __size_type __n = __w > 0 ? static_cast < __size_type > ( __w )
                                : __str . max_size ( );
       const __ctype_type & __ct = use_facet < __ctype_type > ( __in . getloc ( ) );
       const __int_type __eof = _Traits :: eof ( );
       __int_type __c = __in . rdbuf ( ) -> sgetc ( );

       while ( __extracted < __n
       && ! _Traits :: eq_int_type ( __c, __eof )
       && ! __ct . is ( __ctype_base :: space,
     _Traits :: to_char_type ( __c ) ) )
  {
    if ( __len == sizeof ( __buf ) / sizeof ( _CharT ) )
      {
        __str . append ( __buf, sizeof ( __buf ) / sizeof ( _CharT ) );
        __len = 0;
      }
    __buf [ __len ++ ] = _Traits :: to_char_type ( __c );
    ++ __extracted;
    __c = __in . rdbuf ( ) -> snextc ( );
  }
       __str . append ( __buf, __len );

       if ( _Traits :: eq_int_type ( __c, __eof ) )
  __err |= __ios_base :: eofbit;
       __in . width ( 0 );
     }
   catch ( __cxxabiv1 :: __forced_unwind & )
     {
       __in . _M_setstate ( __ios_base :: badbit );
       throw;
     }
   catch ( ... )
     {



       __in . _M_setstate ( __ios_base :: badbit );
     }
 }

      if ( ! __extracted )
 __err |= __ios_base :: failbit;
      if ( __err )
 __in . setstate ( __err );
      return __in;
    }

template < typename _CharT, typename _Traits, typename _Alloc >
    basic_istream < _CharT, _Traits > &
    getline ( basic_istream < _CharT, _Traits > & __in,
     basic_string < _CharT, _Traits, _Alloc > & __str, _CharT __delim )
    {
      typedef basic_istream < _CharT, _Traits > __istream_type;
      typedef basic_string < _CharT, _Traits, _Alloc > __string_type;
      typedef typename __istream_type :: ios_base __ios_base;
      typedef typename __istream_type :: int_type __int_type;
      typedef typename __string_type :: size_type __size_type;

      __size_type __extracted = 0;
      const __size_type __n = __str . max_size ( );
      typename __ios_base :: iostate __err = __ios_base :: goodbit;
      typename __istream_type :: sentry __cerb ( __in, true );
      if ( __cerb )
 {
   try
     {
       __str . erase ( );
       const __int_type __idelim = _Traits :: to_int_type ( __delim );
       const __int_type __eof = _Traits :: eof ( );
       __int_type __c = __in . rdbuf ( ) -> sgetc ( );

       while ( __extracted < __n
       && ! _Traits :: eq_int_type ( __c, __eof )
       && ! _Traits :: eq_int_type ( __c, __idelim ) )
  {
    __str += _Traits :: to_char_type ( __c );
    ++ __extracted;
    __c = __in . rdbuf ( ) -> snextc ( );
  }

       if ( _Traits :: eq_int_type ( __c, __eof ) )
  __err |= __ios_base :: eofbit;
       else if ( _Traits :: eq_int_type ( __c, __idelim ) )
  {
    ++ __extracted;
    __in . rdbuf ( ) -> sbumpc ( );
  }
       else
  __err |= __ios_base :: failbit;
     }
   catch ( __cxxabiv1 :: __forced_unwind & )
     {
       __in . _M_setstate ( __ios_base :: badbit );
       throw;
     }
   catch ( ... )
     {



       __in . _M_setstate ( __ios_base :: badbit );
     }
 }
      if ( ! __extracted )
 __err |= __ios_base :: failbit;
      if ( __err )
 __in . setstate ( __err );
      return __in;
    }




extern template class basic_string< char, char_traits< char> , allocator< char> > ;
extern template basic_istream< char>  &operator>>(basic_istream< char>  & __is, basic_string< char, char_traits< char> , allocator< char> >  & __str);


extern template basic_ostream< char>  &operator<<(basic_ostream< char>  & __os, const basic_string< char, char_traits< char> , allocator< char> >  & __str);


extern template basic_istream< char>  &getline(basic_istream< char>  & __is, basic_string< char, char_traits< char> , allocator< char> >  & __str, char __delim);


extern template basic_istream< char>  &getline(basic_istream< char>  & __is, basic_string< char, char_traits< char> , allocator< char> >  & __str);




extern template class basic_string< wchar_t, char_traits< wchar_t> , allocator< wchar_t> > ;
extern template basic_istream< wchar_t>  &operator>>(basic_istream< wchar_t>  & __is, basic_string< wchar_t, char_traits< wchar_t> , allocator< wchar_t> >  & __str);


extern template basic_ostream< wchar_t>  &operator<<(basic_ostream< wchar_t>  & __os, const basic_string< wchar_t, char_traits< wchar_t> , allocator< wchar_t> >  & __str);


extern template basic_istream< wchar_t>  &getline(basic_istream< wchar_t>  & __is, basic_string< wchar_t, char_traits< wchar_t> , allocator< wchar_t> >  & __str, wchar_t __delim);


extern template basic_istream< wchar_t>  &getline(basic_istream< wchar_t>  & __is, basic_string< wchar_t, char_traits< wchar_t> , allocator< wchar_t> >  & __str);
# 1164
}
# 41 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/ext/alloc_traits.h" 3
namespace __gnu_cxx { 
# 94 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/ext/alloc_traits.h" 3
template < typename _Alloc >
  struct __alloc_traits{ 




typedef _Alloc allocator_type; 
# 172 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/ext/alloc_traits.h" 3
typedef typename _Alloc :: pointer pointer; 
typedef typename _Alloc :: const_pointer const_pointer; 
typedef typename _Alloc :: value_type value_type; 
typedef typename _Alloc :: reference reference; 
typedef typename _Alloc :: const_reference const_reference; 
typedef typename _Alloc :: size_type size_type; 
typedef typename _Alloc :: difference_type difference_type; 


static pointer allocate ( _Alloc & __a, size_type __n )
    { return __a . allocate ( __n ); }

static void deallocate ( _Alloc & __a, pointer __p, size_type __n )
    { __a . deallocate ( __p, __n ); }

template < typename _Tp >
      static void construct ( _Alloc & __a, pointer __p, const _Tp & __arg )
      { __a . construct ( __p, __arg ); }

static void destroy ( _Alloc & __a, pointer __p )
    { __a . destroy ( __p ); }

static size_type max_size ( const _Alloc & __a )
    { return __a . max_size ( ); }

static const _Alloc & _S_select_on_copy ( const _Alloc & __a ){ return __a; }

static void _S_on_swap ( _Alloc & __a, _Alloc & __b )
    {


      std :: __alloc_swap < _Alloc > :: _S_do_it ( __a, __b );
    }

template < typename _Tp >
      struct rebind{ 
typedef typename _Alloc :: template rebind < _Tp > :: other other; };

};


}
# 63 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/bits/stl_construct.h" 3
namespace std { 
# 77 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/bits/stl_construct.h" 3
template < typename _T1, typename _T2 >
    inline void
    _Construct ( _T1 * __p, const _T2 & __value )
    {


      :: new ( static_cast < void * > ( __p ) ) _T1 ( __value );
    }
# 90
template < typename _Tp >
    inline void
    _Destroy ( _Tp * __pointer )
    { __pointer -> ~ _Tp ( ); }

template < bool >
    struct _Destroy_aux{ 

template < typename _ForwardIterator >
        static void
        __destroy ( _ForwardIterator __first, _ForwardIterator __last )
 {
   for (; __first != __last; ++ __first )
     std :: _Destroy ( std :: __addressof ( * __first ) );
 }
};


template<> struct _Destroy_aux< true>  { 

template < typename _ForwardIterator >
        static void
        __destroy ( _ForwardIterator, _ForwardIterator ) { }
}; 
# 120
template < typename _ForwardIterator >
    inline void
    _Destroy ( _ForwardIterator __first, _ForwardIterator __last )
    {
      typedef typename iterator_traits < _ForwardIterator > :: value_type
                       _Value_type;
      std :: _Destroy_aux < __has_trivial_destructor ( _Value_type ) > ::
 __destroy ( __first, __last );
    }
# 136
template < typename _ForwardIterator, typename _Allocator >
    void
    _Destroy ( _ForwardIterator __first, _ForwardIterator __last,
      _Allocator & __alloc )
    {
      typedef __gnu_cxx :: __alloc_traits < _Allocator > __traits;
      for (; __first != __last; ++ __first )
 __traits :: destroy ( __alloc, std :: __addressof ( * __first ) );
    }

template < typename _ForwardIterator, typename _Tp >
    inline void
    _Destroy ( _ForwardIterator __first, _ForwardIterator __last,
      allocator < _Tp > & )
    {
      _Destroy ( __first, __last );
    }


}
# 59 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/bits/stl_uninitialized.h" 3
namespace std { 



template < bool _TrivialValueTypes >
    struct __uninitialized_copy{ 

template < typename _InputIterator, typename _ForwardIterator >
        static _ForwardIterator
        __uninit_copy ( _InputIterator __first, _InputIterator __last,
        _ForwardIterator __result )
        {
   _ForwardIterator __cur = __result;
   try
     {
       for (; __first != __last; ++ __first, ++ __cur )
  std :: _Construct ( std :: __addressof ( * __cur ), * __first );
       return __cur;
     }
   catch ( ... )
     {
       std :: _Destroy ( __result, __cur );
       throw;
     }
 }
};


template<> struct __uninitialized_copy< true>  { 

template < typename _InputIterator, typename _ForwardIterator >
        static _ForwardIterator
        __uninit_copy ( _InputIterator __first, _InputIterator __last,
        _ForwardIterator __result )
        { return std :: copy ( __first, __last, __result ); }
}; 
# 105 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/bits/stl_uninitialized.h" 3
template < typename _InputIterator, typename _ForwardIterator >
    inline _ForwardIterator
    uninitialized_copy ( _InputIterator __first, _InputIterator __last,
         _ForwardIterator __result )
    {
      typedef typename iterator_traits < _InputIterator > :: value_type
 _ValueType1;
      typedef typename iterator_traits < _ForwardIterator > :: value_type
 _ValueType2;

      const bool __assignable = true;






      return std :: __uninitialized_copy < __is_trivial ( _ValueType1 )
           && __is_trivial ( _ValueType2 )
           && __assignable > ::
 __uninit_copy ( __first, __last, __result );
    }


template < bool _TrivialValueType >
    struct __uninitialized_fill{ 

template < typename _ForwardIterator, typename _Tp >
        static void
        __uninit_fill ( _ForwardIterator __first, _ForwardIterator __last,
        const _Tp & __x )
        {
   _ForwardIterator __cur = __first;
   try
     {
       for (; __cur != __last; ++ __cur )
  std :: _Construct ( std :: __addressof ( * __cur ), __x );
     }
   catch ( ... )
     {
       std :: _Destroy ( __first, __cur );
       throw;
     }
 }
};


template<> struct __uninitialized_fill< true>  { 

template < typename _ForwardIterator, typename _Tp >
        static void
        __uninit_fill ( _ForwardIterator __first, _ForwardIterator __last,
        const _Tp & __x )
        { std :: fill ( __first, __last, __x ); }
}; 
# 170 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/bits/stl_uninitialized.h" 3
template < typename _ForwardIterator, typename _Tp >
    inline void
    uninitialized_fill ( _ForwardIterator __first, _ForwardIterator __last,
         const _Tp & __x )
    {
      typedef typename iterator_traits < _ForwardIterator > :: value_type
 _ValueType;

      const bool __assignable = true;





      std :: __uninitialized_fill < __is_trivial ( _ValueType ) && __assignable > ::
 __uninit_fill ( __first, __last, __x );
    }


template < bool _TrivialValueType >
    struct __uninitialized_fill_n{ 

template < typename _ForwardIterator, typename _Size, typename _Tp >
        static void
        __uninit_fill_n ( _ForwardIterator __first, _Size __n,
   const _Tp & __x )
        {
   _ForwardIterator __cur = __first;
   try
     {
       for (; __n > 0; -- __n, ++ __cur )
  std :: _Construct ( std :: __addressof ( * __cur ), __x );
     }
   catch ( ... )
     {
       std :: _Destroy ( __first, __cur );
       throw;
     }
 }
};


template<> struct __uninitialized_fill_n< true>  { 

template < typename _ForwardIterator, typename _Size, typename _Tp >
        static void
        __uninit_fill_n ( _ForwardIterator __first, _Size __n,
   const _Tp & __x )
        { std :: fill_n ( __first, __n, __x ); }
}; 
# 230 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/bits/stl_uninitialized.h" 3
template < typename _ForwardIterator, typename _Size, typename _Tp >
    inline void
    uninitialized_fill_n ( _ForwardIterator __first, _Size __n, const _Tp & __x )
    {
      typedef typename iterator_traits < _ForwardIterator > :: value_type
 _ValueType;

      const bool __assignable = true;





      std :: __uninitialized_fill_n < __is_trivial ( _ValueType ) && __assignable > ::
 __uninit_fill_n ( __first, __n, __x );
    }
# 253
template < typename _InputIterator, typename _ForwardIterator,
    typename _Allocator >
    _ForwardIterator
    __uninitialized_copy_a ( _InputIterator __first, _InputIterator __last,
      _ForwardIterator __result, _Allocator & __alloc )
    {
      _ForwardIterator __cur = __result;
      try
 {
   typedef __gnu_cxx :: __alloc_traits < _Allocator > __traits;
   for (; __first != __last; ++ __first, ++ __cur )
     __traits :: construct ( __alloc, std :: __addressof ( * __cur ), * __first );
   return __cur;
 }
      catch ( ... )
 {
   std :: _Destroy ( __result, __cur, __alloc );
   throw;
 }
    }

template < typename _InputIterator, typename _ForwardIterator, typename _Tp >
    inline _ForwardIterator
    __uninitialized_copy_a ( _InputIterator __first, _InputIterator __last,
      _ForwardIterator __result, allocator < _Tp > & )
    { return std :: uninitialized_copy ( __first, __last, __result ); }

template < typename _InputIterator, typename _ForwardIterator,
    typename _Allocator >
    inline _ForwardIterator
    __uninitialized_move_a ( _InputIterator __first, _InputIterator __last,
      _ForwardIterator __result, _Allocator & __alloc )
    {
      return std :: __uninitialized_copy_a ( ( __first ),
      ( __last ),
      __result, __alloc );
    }

template < typename _InputIterator, typename _ForwardIterator,
    typename _Allocator >
    inline _ForwardIterator
    __uninitialized_move_if_noexcept_a ( _InputIterator __first,
           _InputIterator __last,
           _ForwardIterator __result,
           _Allocator & __alloc )
    {
      return std :: __uninitialized_copy_a
 ( ( __first ),
  ( __last ), __result, __alloc );
    }

template < typename _ForwardIterator, typename _Tp, typename _Allocator >
    void
    __uninitialized_fill_a ( _ForwardIterator __first, _ForwardIterator __last,
      const _Tp & __x, _Allocator & __alloc )
    {
      _ForwardIterator __cur = __first;
      try
 {
   typedef __gnu_cxx :: __alloc_traits < _Allocator > __traits;
   for (; __cur != __last; ++ __cur )
     __traits :: construct ( __alloc, std :: __addressof ( * __cur ), __x );
 }
      catch ( ... )
 {
   std :: _Destroy ( __first, __cur, __alloc );
   throw;
 }
    }

template < typename _ForwardIterator, typename _Tp, typename _Tp2 >
    inline void
    __uninitialized_fill_a ( _ForwardIterator __first, _ForwardIterator __last,
      const _Tp & __x, allocator < _Tp2 > & )
    { std :: uninitialized_fill ( __first, __last, __x ); }

template < typename _ForwardIterator, typename _Size, typename _Tp,
    typename _Allocator >
    void
    __uninitialized_fill_n_a ( _ForwardIterator __first, _Size __n,
        const _Tp & __x, _Allocator & __alloc )
    {
      _ForwardIterator __cur = __first;
      try
 {
   typedef __gnu_cxx :: __alloc_traits < _Allocator > __traits;
   for (; __n > 0; -- __n, ++ __cur )
     __traits :: construct ( __alloc, std :: __addressof ( * __cur ), __x );
 }
      catch ( ... )
 {
   std :: _Destroy ( __first, __cur, __alloc );
   throw;
 }
    }

template < typename _ForwardIterator, typename _Size, typename _Tp,
    typename _Tp2 >
    inline void
    __uninitialized_fill_n_a ( _ForwardIterator __first, _Size __n,
        const _Tp & __x, allocator < _Tp2 > & )
    { std :: uninitialized_fill_n ( __first, __n, __x ); }
# 366 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/bits/stl_uninitialized.h" 3
template < typename _InputIterator1, typename _InputIterator2,
    typename _ForwardIterator, typename _Allocator >
    inline _ForwardIterator
    __uninitialized_copy_move ( _InputIterator1 __first1,
         _InputIterator1 __last1,
         _InputIterator2 __first2,
         _InputIterator2 __last2,
         _ForwardIterator __result,
         _Allocator & __alloc )
    {
      _ForwardIterator __mid = std :: __uninitialized_copy_a ( __first1, __last1,
          __result,
          __alloc );
      try
 {
   return std :: __uninitialized_move_a ( __first2, __last2, __mid, __alloc );
 }
      catch ( ... )
 {
   std :: _Destroy ( __result, __mid, __alloc );
   throw;
 }
    }
# 394
template < typename _InputIterator1, typename _InputIterator2,
    typename _ForwardIterator, typename _Allocator >
    inline _ForwardIterator
    __uninitialized_move_copy ( _InputIterator1 __first1,
         _InputIterator1 __last1,
         _InputIterator2 __first2,
         _InputIterator2 __last2,
         _ForwardIterator __result,
         _Allocator & __alloc )
    {
      _ForwardIterator __mid = std :: __uninitialized_move_a ( __first1, __last1,
          __result,
          __alloc );
      try
 {
   return std :: __uninitialized_copy_a ( __first2, __last2, __mid, __alloc );
 }
      catch ( ... )
 {
   std :: _Destroy ( __result, __mid, __alloc );
   throw;
 }
    }




template < typename _ForwardIterator, typename _Tp, typename _InputIterator,
    typename _Allocator >
    inline _ForwardIterator
    __uninitialized_fill_move ( _ForwardIterator __result, _ForwardIterator __mid,
         const _Tp & __x, _InputIterator __first,
         _InputIterator __last, _Allocator & __alloc )
    {
      std :: __uninitialized_fill_a ( __result, __mid, __x, __alloc );
      try
 {
   return std :: __uninitialized_move_a ( __first, __last, __mid, __alloc );
 }
      catch ( ... )
 {
   std :: _Destroy ( __result, __mid, __alloc );
   throw;
 }
    }




template < typename _InputIterator, typename _ForwardIterator, typename _Tp,
    typename _Allocator >
    inline void
    __uninitialized_move_fill ( _InputIterator __first1, _InputIterator __last1,
         _ForwardIterator __first2,
         _ForwardIterator __last2, const _Tp & __x,
         _Allocator & __alloc )
    {
      _ForwardIterator __mid2 = std :: __uninitialized_move_a ( __first1, __last1,
           __first2,
           __alloc );
      try
 {
   std :: __uninitialized_fill_a ( __mid2, __last2, __x, __alloc );
 }
      catch ( ... )
 {
   std :: _Destroy ( __first2, __mid2, __alloc );
   throw;
 }
    }
# 680 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/bits/stl_uninitialized.h" 3
}
# 66 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/bits/stl_vector.h" 3
namespace std { 




template < typename _Tp, typename _Alloc >
    struct _Vector_base{ 


typedef typename __gnu_cxx :: __alloc_traits < _Alloc > :: template rebind < _Tp > :: other _Tp_alloc_type; 

typedef typename __gnu_cxx :: __alloc_traits < _Tp_alloc_type > :: pointer pointer; 

struct _Vector_impl 
      : public _Tp_alloc_type { 

pointer _M_start; 
pointer _M_finish; 
pointer _M_end_of_storage; 

 _Vector_impl ( )
 : _Tp_alloc_type ( ), _M_start ( 0 ), _M_finish ( 0 ), _M_end_of_storage ( 0 )
 { }

 _Vector_impl ( _Tp_alloc_type const & __a )
 : _Tp_alloc_type ( __a ), _M_start ( 0 ), _M_finish ( 0 ), _M_end_of_storage ( 0 )
 { }
# 101 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/bits/stl_vector.h" 3
void _M_swap_data ( _Vector_impl & __x )
 {
   std :: swap ( _M_start, __x . _M_start );
   std :: swap ( _M_finish, __x . _M_finish );
   std :: swap ( _M_end_of_storage, __x . _M_end_of_storage );
 }
}; 


typedef _Alloc allocator_type; 


_Tp_alloc_type & _M_get_Tp_allocator ( )
      { return * static_cast < _Tp_alloc_type * > ( & this -> _M_impl ); }


const _Tp_alloc_type & _M_get_Tp_allocator ( ) const
      { return * static_cast < const _Tp_alloc_type * > ( & this -> _M_impl ); }


allocator_type get_allocator ( ) const
      { return allocator_type ( _M_get_Tp_allocator ( ) ); }

 _Vector_base ( )
      : _M_impl ( ) { }

 _Vector_base ( const allocator_type & __a )
      : _M_impl ( __a ) { }

 _Vector_base ( size_t __n )
      : _M_impl ( )
      { _M_create_storage ( __n ); }

 _Vector_base ( size_t __n, const allocator_type & __a )
      : _M_impl ( __a )
      { _M_create_storage ( __n ); }
# 159 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/bits/stl_vector.h" 3
 ~ _Vector_base ( )
      { _M_deallocate ( this -> _M_impl . _M_start, this -> _M_impl . _M_end_of_storage
        - this -> _M_impl . _M_start ); }


_Vector_impl _M_impl; 


pointer _M_allocate ( size_t __n )
      {
 typedef __gnu_cxx :: __alloc_traits < _Tp_alloc_type > _Tr;
 return __n != 0 ? _Tr :: allocate ( _M_impl, __n ) : 0;
      }


void _M_deallocate ( pointer __p, size_t __n )
      {
 typedef __gnu_cxx :: __alloc_traits < _Tp_alloc_type > _Tr;
 if ( __p )
   _Tr :: deallocate ( _M_impl, __p, __n );
      }



private: void _M_create_storage ( size_t __n )
      {
 this -> _M_impl . _M_start = this -> _M_allocate ( __n );
 this -> _M_impl . _M_finish = this -> _M_impl . _M_start;
 this -> _M_impl . _M_end_of_storage = this -> _M_impl . _M_start + __n;
      }
};
# 213 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/bits/stl_vector.h" 3
template < typename _Tp, typename _Alloc = std :: allocator < _Tp > >
    class vector : protected _Vector_base < _Tp, _Alloc >{ 


typedef typename _Alloc :: value_type _Alloc_value_type; 



typedef _Vector_base < _Tp, _Alloc > _Base; 
typedef typename _Base :: _Tp_alloc_type _Tp_alloc_type; 
typedef __gnu_cxx :: __alloc_traits < _Tp_alloc_type > _Alloc_traits; 


public: typedef _Tp value_type; 
typedef typename _Base :: pointer pointer; 
typedef typename _Alloc_traits :: const_pointer const_pointer; 
typedef typename _Alloc_traits :: reference reference; 
typedef typename _Alloc_traits :: const_reference const_reference; 
typedef __gnu_cxx :: __normal_iterator < pointer, vector > iterator; 

typedef __gnu_cxx :: __normal_iterator < const_pointer, vector > const_iterator; 
typedef std :: reverse_iterator < const_iterator > const_reverse_iterator; 
typedef std :: reverse_iterator < iterator > reverse_iterator; 
typedef size_t size_type; 
typedef ptrdiff_t difference_type; 
typedef _Alloc allocator_type; 


protected: using _Base :: _M_allocate;
using _Base :: _M_deallocate;
using _Base :: _M_impl;
using _Base :: _M_get_Tp_allocator;
# 253
public:  vector ( )



      : _Base ( ) { }
# 264
explicit vector ( const allocator_type & __a )
      : _Base ( __a ) { }
# 303 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/bits/stl_vector.h" 3
explicit vector ( size_type __n, const value_type & __value = value_type ( ),
      const allocator_type & __a = allocator_type ( ) )

      : _Base ( __n, __a )
      { _M_fill_initialize ( __n, __value ); }
# 318 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/bits/stl_vector.h" 3
 vector ( const vector & __x )
      : _Base ( __x . size ( ),
        _Alloc_traits :: _S_select_on_copy ( __x . _M_get_Tp_allocator ( ) ) )
      { this -> _M_impl . _M_finish =
   std :: __uninitialized_copy_a ( __x . begin ( ), __x . end ( ),
          this -> _M_impl . _M_start,
          _M_get_Tp_allocator ( ) );
      }
# 406 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/bits/stl_vector.h" 3
template < typename _InputIterator >
        vector ( _InputIterator __first, _InputIterator __last,
        const allocator_type & __a = allocator_type ( ) )
 : _Base ( __a )
        {

   typedef typename std :: __is_integer < _InputIterator > :: __type _Integral;
   _M_initialize_dispatch ( __first, __last, _Integral ( ) );
 }
# 423 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/bits/stl_vector.h" 3
 ~ vector ( )
      { std :: _Destroy ( this -> _M_impl . _M_start, this -> _M_impl . _M_finish,
        _M_get_Tp_allocator ( ) ); }
# 436 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/bits/stl_vector.h" 3
vector & operator = ( const vector & __x );
# 488 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/bits/stl_vector.h" 3
void assign ( size_type __n, const value_type & __val )
      { _M_fill_assign ( __n, __val ); }
# 510 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/bits/stl_vector.h" 3
template < typename _InputIterator >
        void
        assign ( _InputIterator __first, _InputIterator __last )
        {

   typedef typename std :: __is_integer < _InputIterator > :: __type _Integral;
   _M_assign_dispatch ( __first, __last, _Integral ( ) );
 }
# 538 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/bits/stl_vector.h" 3
using _Base :: get_allocator;
# 547
iterator begin ( )
      { return iterator ( this -> _M_impl . _M_start ); }
# 556
const_iterator begin ( ) const
      { return const_iterator ( this -> _M_impl . _M_start ); }
# 565
iterator end ( )
      { return iterator ( this -> _M_impl . _M_finish ); }
# 574
const_iterator end ( ) const
      { return const_iterator ( this -> _M_impl . _M_finish ); }
# 583
reverse_iterator rbegin ( )
      { return reverse_iterator ( end ( ) ); }
# 592
const_reverse_iterator rbegin ( ) const
      { return const_reverse_iterator ( end ( ) ); }
# 601
reverse_iterator rend ( )
      { return reverse_iterator ( begin ( ) ); }
# 610
const_reverse_iterator rend ( ) const
      { return const_reverse_iterator ( begin ( ) ); }
# 654 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/bits/stl_vector.h" 3
size_type size ( ) const
      { return size_type ( this -> _M_impl . _M_finish - this -> _M_impl . _M_start ); }



size_type max_size ( ) const
      { return _Alloc_traits :: max_size ( _M_get_Tp_allocator ( ) ); }
# 713 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/bits/stl_vector.h" 3
void resize ( size_type __new_size, value_type __x = value_type ( ) )
      {
 if ( __new_size > size ( ) )
   insert ( end ( ), __new_size - size ( ), __x );
 else if ( __new_size < size ( ) )
   _M_erase_at_end ( this -> _M_impl . _M_start + __new_size );
      }
# 734 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/bits/stl_vector.h" 3
size_type capacity ( ) const
      { return size_type ( this -> _M_impl . _M_end_of_storage
    - this -> _M_impl . _M_start ); }
# 743
bool empty ( ) const
      { return begin ( ) == end ( ); }
# 764 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/bits/stl_vector.h" 3
void reserve ( size_type __n );
# 779 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/bits/stl_vector.h" 3
reference operator [ ] ( size_type __n )
      { return * ( this -> _M_impl . _M_start + __n ); }
# 794 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/bits/stl_vector.h" 3
const_reference operator [ ] ( size_type __n ) const
      { return * ( this -> _M_impl . _M_start + __n ); }




protected: void _M_range_check ( size_type __n ) const
      {
 if ( __n >= this -> size ( ) )
   __throw_out_of_range_fmt ( ( "vector::_M_range_check: __n (which is %zu) >= this->size() (which is %zu)" )

                            ,
       __n, this -> size ( ) );
      }
# 822 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/bits/stl_vector.h" 3
public: reference at ( size_type __n )
      {
 _M_range_check ( __n );
 return ( * this ) [ __n ];
      }
# 840 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/bits/stl_vector.h" 3
const_reference at ( size_type __n ) const
      {
 _M_range_check ( __n );
 return ( * this ) [ __n ];
      }
# 851
reference front ( )
      { return * begin ( ); }
# 859
const_reference front ( ) const
      { return * begin ( ); }
# 867
reference back ( )
      { return * ( end ( ) - 1 ); }
# 875
const_reference back ( ) const
      { return * ( end ( ) - 1 ); }
# 890 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/bits/stl_vector.h" 3
pointer data ( )
      { return _M_data_ptr ( this -> _M_impl . _M_start ); }
# 898
const_pointer data ( ) const
      { return _M_data_ptr ( this -> _M_impl . _M_start ); }
# 913 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/bits/stl_vector.h" 3
void push_back ( const value_type & __x )
      {
 if ( this -> _M_impl . _M_finish != this -> _M_impl . _M_end_of_storage )
   {
     _Alloc_traits :: construct ( this -> _M_impl, this -> _M_impl . _M_finish,
                              __x );
     ++ this -> _M_impl . _M_finish;
   }
 else



   _M_insert_aux ( end ( ), __x );

      }
# 949 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/bits/stl_vector.h" 3
void pop_back ( )
      {
 -- this -> _M_impl . _M_finish;
 _Alloc_traits :: destroy ( this -> _M_impl, this -> _M_impl . _M_finish );
      }
# 998 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/bits/stl_vector.h" 3
iterator insert ( iterator __position, const value_type & __x );
# 1072 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/bits/stl_vector.h" 3
void insert ( iterator __position, size_type __n, const value_type & __x )
      { _M_fill_insert ( __position, __n, __x ); }
# 1118 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/bits/stl_vector.h" 3
template < typename _InputIterator >
        void
        insert ( iterator __position, _InputIterator __first,
        _InputIterator __last )
        {

   typedef typename std :: __is_integer < _InputIterator > :: __type _Integral;
   _M_insert_dispatch ( __position, __first, __last, _Integral ( ) );
 }
# 1149 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/bits/stl_vector.h" 3
iterator erase ( iterator __position )
      { return _M_erase ( __position ); }
# 1180 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/bits/stl_vector.h" 3
iterator erase ( iterator __first, iterator __last )
      { return _M_erase ( __first, __last ); }
# 1194 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/bits/stl_vector.h" 3
void swap ( vector & __x )



      {
 this -> _M_impl . _M_swap_data ( __x . _M_impl );
 _Alloc_traits :: _S_on_swap ( _M_get_Tp_allocator ( ),
                           __x . _M_get_Tp_allocator ( ) );
      }
# 1211
void clear ( )
      { _M_erase_at_end ( this -> _M_impl . _M_start ); }
# 1219
protected: template < typename _ForwardIterator >
        pointer
        _M_allocate_and_copy ( size_type __n,
        _ForwardIterator __first, _ForwardIterator __last )
        {
   pointer __result = this -> _M_allocate ( __n );
   try
     {
       std :: __uninitialized_copy_a ( __first, __last, __result,
       _M_get_Tp_allocator ( ) );
       return __result;
     }
   catch ( ... )
     {
       _M_deallocate ( __result, __n );
       throw;
     }
 }
# 1245 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/bits/stl_vector.h" 3
template < typename _Integer >
        void
        _M_initialize_dispatch ( _Integer __n, _Integer __value, __true_type )
        {
   this -> _M_impl . _M_start = _M_allocate ( static_cast < size_type > ( __n ) );
   this -> _M_impl . _M_end_of_storage =
     this -> _M_impl . _M_start + static_cast < size_type > ( __n );
   _M_fill_initialize ( static_cast < size_type > ( __n ), __value );
 }


template < typename _InputIterator >
        void
        _M_initialize_dispatch ( _InputIterator __first, _InputIterator __last,
          __false_type )
        {
   typedef typename std :: iterator_traits < _InputIterator > ::
     iterator_category _IterCategory;
   _M_range_initialize ( __first, __last, _IterCategory ( ) );
 }


template < typename _InputIterator >
        void
        _M_range_initialize ( _InputIterator __first,
       _InputIterator __last, std :: input_iterator_tag )
        {
   for (; __first != __last; ++ __first )



     push_back ( * __first );

 }


template < typename _ForwardIterator >
        void
        _M_range_initialize ( _ForwardIterator __first,
       _ForwardIterator __last, std :: forward_iterator_tag )
        {
   const size_type __n = std :: distance ( __first, __last );
   this -> _M_impl . _M_start = this -> _M_allocate ( __n );
   this -> _M_impl . _M_end_of_storage = this -> _M_impl . _M_start + __n;
   this -> _M_impl . _M_finish =
     std :: __uninitialized_copy_a ( __first, __last,
     this -> _M_impl . _M_start,
     _M_get_Tp_allocator ( ) );
 }




void _M_fill_initialize ( size_type __n, const value_type & __value )
      {
 std :: __uninitialized_fill_n_a ( this -> _M_impl . _M_start, __n, __value,
          _M_get_Tp_allocator ( ) );
 this -> _M_impl . _M_finish = this -> _M_impl . _M_end_of_storage;
      }
# 1323 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/bits/stl_vector.h" 3
template < typename _Integer >
        void
        _M_assign_dispatch ( _Integer __n, _Integer __val, __true_type )
        { _M_fill_assign ( __n, __val ); }


template < typename _InputIterator >
        void
        _M_assign_dispatch ( _InputIterator __first, _InputIterator __last,
      __false_type )
        {
   typedef typename std :: iterator_traits < _InputIterator > ::
     iterator_category _IterCategory;
   _M_assign_aux ( __first, __last, _IterCategory ( ) );
 }


template < typename _InputIterator >
        void
        _M_assign_aux ( _InputIterator __first, _InputIterator __last,
        std :: input_iterator_tag );


template < typename _ForwardIterator >
        void
        _M_assign_aux ( _ForwardIterator __first, _ForwardIterator __last,
        std :: forward_iterator_tag );




void _M_fill_assign ( size_type __n, const value_type & __val );
# 1363 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/bits/stl_vector.h" 3
template < typename _Integer >
        void
        _M_insert_dispatch ( iterator __pos, _Integer __n, _Integer __val,
      __true_type )
        { _M_fill_insert ( __pos, __n, __val ); }


template < typename _InputIterator >
        void
        _M_insert_dispatch ( iterator __pos, _InputIterator __first,
      _InputIterator __last, __false_type )
        {
   typedef typename std :: iterator_traits < _InputIterator > ::
     iterator_category _IterCategory;
   _M_range_insert ( __pos, __first, __last, _IterCategory ( ) );
 }


template < typename _InputIterator >
        void
        _M_range_insert ( iterator __pos, _InputIterator __first,
   _InputIterator __last, std :: input_iterator_tag );


template < typename _ForwardIterator >
        void
        _M_range_insert ( iterator __pos, _ForwardIterator __first,
   _ForwardIterator __last, std :: forward_iterator_tag );




void _M_fill_insert ( iterator __pos, size_type __n, const value_type & __x );
# 1409 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/bits/stl_vector.h" 3
void _M_insert_aux ( iterator __position, const value_type & __x );
# 1422 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/bits/stl_vector.h" 3
size_type _M_check_len ( size_type __n, const char * __s ) const
      {
 if ( max_size ( ) - size ( ) < __n )
   __throw_length_error ( ( __s ) );

 const size_type __len = size ( ) + std :: max ( size ( ), __n );
 return ( __len < size ( ) || __len > max_size ( ) ) ? max_size ( ) : __len;
      }
# 1436
void _M_erase_at_end ( pointer __pos )
      {
 std :: _Destroy ( __pos, this -> _M_impl . _M_finish, _M_get_Tp_allocator ( ) );
 this -> _M_impl . _M_finish = __pos;
      }


iterator _M_erase ( iterator __position );


iterator _M_erase ( iterator __first, iterator __last );
# 1491 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/bits/stl_vector.h" 3
template < typename _Ptr >
 _Ptr
 _M_data_ptr ( _Ptr __ptr ) const
 { return __ptr; }

};
# 1509 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/bits/stl_vector.h" 3
template < typename _Tp, typename _Alloc >
    inline bool
    operator == ( const vector < _Tp, _Alloc > & __x, const vector < _Tp, _Alloc > & __y )
    { return ( __x . size ( ) == __y . size ( )
       && std :: equal ( __x . begin ( ), __x . end ( ), __y . begin ( ) ) ); }
# 1526 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/bits/stl_vector.h" 3
template < typename _Tp, typename _Alloc >
    inline bool
    operator < ( const vector < _Tp, _Alloc > & __x, const vector < _Tp, _Alloc > & __y )
    { return std :: lexicographical_compare ( __x . begin ( ), __x . end ( ),
       __y . begin ( ), __y . end ( ) ); }


template < typename _Tp, typename _Alloc >
    inline bool
    operator != ( const vector < _Tp, _Alloc > & __x, const vector < _Tp, _Alloc > & __y )
    { return ! ( __x == __y ); }


template < typename _Tp, typename _Alloc >
    inline bool
    operator > ( const vector < _Tp, _Alloc > & __x, const vector < _Tp, _Alloc > & __y )
    { return __y < __x; }


template < typename _Tp, typename _Alloc >
    inline bool
    operator <= ( const vector < _Tp, _Alloc > & __x, const vector < _Tp, _Alloc > & __y )
    { return ! ( __y < __x ); }


template < typename _Tp, typename _Alloc >
    inline bool
    operator >= ( const vector < _Tp, _Alloc > & __x, const vector < _Tp, _Alloc > & __y )
    { return ! ( __x < __y ); }


template < typename _Tp, typename _Alloc >
    inline void
    swap ( vector < _Tp, _Alloc > & __x, vector < _Tp, _Alloc > & __y )
    { __x . swap ( __y ); }


}
# 63 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/bits/stl_bvector.h" 3
namespace std { 



typedef unsigned long _Bit_type; 
enum { _S_word_bit = 32}; 

struct _Bit_reference { 

_Bit_type *_M_p; 
_Bit_type _M_mask; 

_Bit_reference(_Bit_type *__x, _Bit_type __y) : _M_p(__x), _M_mask(__y) 
{ } 

_Bit_reference() : _M_p((0)), _M_mask((0)) { } 

operator bool() const 
{ return !(!(*(_M_p) & _M_mask)); } 


_Bit_reference &operator=(bool __x) 
{ 
if (__x) 
*(_M_p) |= _M_mask;  else 

*(_M_p) &= ~_M_mask;   
return *this; 
} 


_Bit_reference &operator=(const _Bit_reference &__x) 
{ return (*this = (bool)__x); } 


bool operator==(const _Bit_reference &__x) const 
{ return (bool)(*this) == (bool)__x; } 


bool operator<(const _Bit_reference &__x) const 
{ return !((bool)(*this)) && (bool)__x; } 


void flip() 
{ *(_M_p) ^= _M_mask; } 
}; 
# 136 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/bits/stl_bvector.h" 3
struct _Bit_iterator_base : public iterator< random_access_iterator_tag, bool>  { 


_Bit_type *_M_p; 
unsigned _M_offset; 

_Bit_iterator_base(_Bit_type *__x, unsigned __y) : _M_p(__x), _M_offset(__y) 
{ } 


void _M_bump_up() 
{ 
if ((_M_offset)++ == (int)_S_word_bit - 1) 
{ 
_M_offset = 0; 
++_M_p; 
}  
} 


void _M_bump_down() 
{ 
if ((_M_offset)-- == 0) 
{ 
_M_offset = (int)_S_word_bit - 1; 
--_M_p; 
}  
} 


void _M_incr(ptrdiff_t __i) 
{ 
difference_type __n = __i + _M_offset; 
_M_p += __n / (int)_S_word_bit; 
__n = __n % (int)_S_word_bit; 
if (__n < 0) 
{ 
__n += (int)_S_word_bit; 
--_M_p; 
}  
_M_offset = static_cast< unsigned>(__n); 
} 


bool operator==(const _Bit_iterator_base &__i) const 
{ return _M_p == __i._M_p && _M_offset == __i._M_offset; } 


bool operator<(const _Bit_iterator_base &__i) const 
{ 
return _M_p < __i._M_p || (_M_p == __i._M_p && _M_offset < __i._M_offset); 

} 


bool operator!=(const _Bit_iterator_base &__i) const 
{ return !((*this == __i)); } 


bool operator>(const _Bit_iterator_base &__i) const 
{ return (__i < *this); } 


bool operator<=(const _Bit_iterator_base &__i) const 
{ return !((__i < *this)); } 


bool operator>=(const _Bit_iterator_base &__i) const 
{ return !((*this < __i)); } 
}; 


inline ptrdiff_t operator-(const _Bit_iterator_base &__x, const _Bit_iterator_base &__y) 
{ 
return (((int)_S_word_bit * (__x._M_p - __y._M_p) + __x._M_offset) - __y._M_offset); 

} 

struct _Bit_iterator : public _Bit_iterator_base { 

typedef _Bit_reference reference; 
typedef _Bit_reference *pointer; 
typedef _Bit_iterator iterator; 

_Bit_iterator() : _Bit_iterator_base(0, 0) { } 

_Bit_iterator(_Bit_type *__x, unsigned __y) : _Bit_iterator_base(__x, __y) 
{ } 


iterator _M_const_cast() const 
{ return *this; } 


reference operator*() const 
{ return reference(_M_p, 1UL << _M_offset); } 


iterator &operator++() 
{ 
this->_M_bump_up(); 
return *this; 
} 


iterator operator++(int) 
{ 
iterator __tmp = *this; 
this->_M_bump_up(); 
return __tmp; 
} 


iterator &operator--() 
{ 
this->_M_bump_down(); 
return *this; 
} 


iterator operator--(int) 
{ 
iterator __tmp = *this; 
this->_M_bump_down(); 
return __tmp; 
} 


iterator &operator+=(difference_type __i) 
{ 
this->_M_incr(__i); 
return *this; 
} 


iterator &operator-=(difference_type __i) 
{ 
(*this += -__i); 
return *this; 
} 


iterator operator+(difference_type __i) const 
{ 
iterator __tmp = *this; 
return (__tmp += __i); 
} 


iterator operator-(difference_type __i) const 
{ 
iterator __tmp = *this; 
return (__tmp -= __i); 
} 


reference operator[](difference_type __i) const 
{ return (*((*this + __i))); } 
}; 


inline _Bit_iterator operator+(ptrdiff_t __n, const _Bit_iterator &__x) 
{ return (__x + __n); } 

struct _Bit_const_iterator : public _Bit_iterator_base { 

typedef bool reference; 
typedef bool const_reference; 
typedef const bool *pointer; 
typedef _Bit_const_iterator const_iterator; 

_Bit_const_iterator() : _Bit_iterator_base(0, 0) { } 

_Bit_const_iterator(_Bit_type *__x, unsigned __y) : _Bit_iterator_base(__x, __y) 
{ } 

_Bit_const_iterator(const _Bit_iterator &__x) : _Bit_iterator_base(__x._M_p, __x._M_offset) 
{ } 


_Bit_iterator _M_const_cast() const 
{ return _Bit_iterator(_M_p, _M_offset); } 


const_reference operator*() const 
{ return _Bit_reference(_M_p, 1UL << _M_offset); } 


const_iterator &operator++() 
{ 
this->_M_bump_up(); 
return *this; 
} 


const_iterator operator++(int) 
{ 
const_iterator __tmp = *this; 
this->_M_bump_up(); 
return __tmp; 
} 


const_iterator &operator--() 
{ 
this->_M_bump_down(); 
return *this; 
} 


const_iterator operator--(int) 
{ 
const_iterator __tmp = *this; 
this->_M_bump_down(); 
return __tmp; 
} 


const_iterator &operator+=(difference_type __i) 
{ 
this->_M_incr(__i); 
return *this; 
} 


const_iterator &operator-=(difference_type __i) 
{ 
(*this += -__i); 
return *this; 
} 


const_iterator operator+(difference_type __i) const 
{ 
const_iterator __tmp = *this; 
return (__tmp += __i); 
} 


const_iterator operator-(difference_type __i) const 
{ 
const_iterator __tmp = *this; 
return (__tmp -= __i); 
} 


const_reference operator[](difference_type __i) const 
{ return (*((*this + __i))); } 
}; 


inline _Bit_const_iterator operator+(ptrdiff_t __n, const _Bit_const_iterator &__x) 
{ return (__x + __n); } 


inline void __fill_bvector(_Bit_iterator __first, _Bit_iterator __last, bool __x) 
{ 
for (; (__first != __last); (++__first)) 
((*__first) = __x);   
} 


inline void fill(_Bit_iterator __first, _Bit_iterator __last, const bool &__x) 
{ 
if (__first._M_p != __last._M_p) 
{ 
std::fill(__first._M_p + 1, __last._M_p, __x ? ~0 : 0); 
__fill_bvector(__first, _Bit_iterator(__first._M_p + 1, 0), __x); 
__fill_bvector(_Bit_iterator(__last._M_p, 0), __last, __x); 
} else 

__fill_bvector(__first, __last, __x);   
} 

template < typename _Alloc >
    struct _Bvector_base{ 


typedef typename _Alloc :: template rebind < _Bit_type > :: other _Bit_alloc_type; 

struct _Bvector_impl 
      : public _Bit_alloc_type { 

_Bit_iterator _M_start; 
_Bit_iterator _M_finish; 
_Bit_type * _M_end_of_storage; 

 _Bvector_impl ( )
 : _Bit_alloc_type ( ), _M_start ( ), _M_finish ( ), _M_end_of_storage ( 0 )
 { }

 _Bvector_impl ( const _Bit_alloc_type & __a )
 : _Bit_alloc_type ( __a ), _M_start ( ), _M_finish ( ), _M_end_of_storage ( 0 )
 { }
# 437
}; 


typedef _Alloc allocator_type; 


_Bit_alloc_type & _M_get_Bit_allocator ( )
      { return * static_cast < _Bit_alloc_type * > ( & this -> _M_impl ); }


const _Bit_alloc_type & _M_get_Bit_allocator ( ) const
      { return * static_cast < const _Bit_alloc_type * > ( & this -> _M_impl ); }


allocator_type get_allocator ( ) const
      { return allocator_type ( _M_get_Bit_allocator ( ) ); }

 _Bvector_base ( )
      : _M_impl ( ) { }

 _Bvector_base ( const allocator_type & __a )
      : _M_impl ( __a ) { }
# 473 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/bits/stl_bvector.h" 3
 ~ _Bvector_base ( )
      { this -> _M_deallocate ( ); }


protected: _Bvector_impl _M_impl; 


_Bit_type * _M_allocate ( size_t __n )
      { return _M_impl . allocate ( _S_nword ( __n ) ); }


void _M_deallocate ( )
      {
 if ( _M_impl . _M_start . _M_p )
   _M_impl . deallocate ( _M_impl . _M_start . _M_p,
        _M_impl . _M_end_of_storage - _M_impl . _M_start . _M_p );
      }


static size_t _S_nword ( size_t __n )
      { return ( __n + int ( _S_word_bit ) - 1 ) / int ( _S_word_bit ); }
};


}




namespace std { 
# 525 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/bits/stl_bvector.h" 3
template < typename _Alloc >
  class vector < bool, _Alloc > : protected _Bvector_base < _Alloc >{ 

typedef _Bvector_base < _Alloc > _Base; 
# 535
public: typedef bool value_type; 
typedef size_t size_type; 
typedef ptrdiff_t difference_type; 
typedef _Bit_reference reference; 
typedef bool const_reference; 
typedef _Bit_reference * pointer; 
typedef const bool * const_pointer; 
typedef _Bit_iterator iterator; 
typedef _Bit_const_iterator const_iterator; 
typedef std :: reverse_iterator < const_iterator > const_reverse_iterator; 
typedef std :: reverse_iterator < iterator > reverse_iterator; 
typedef _Alloc allocator_type; 

allocator_type get_allocator ( ) const
    { return _Base :: get_allocator ( ); }


protected: using _Base :: _M_allocate;
using _Base :: _M_deallocate;
using _Base :: _S_nword;
using _Base :: _M_get_Bit_allocator;


public:  vector ( )
    : _Base ( ) { }


explicit vector ( const allocator_type & __a )
    : _Base ( __a ) { }
# 581 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/bits/stl_bvector.h" 3
explicit vector ( size_type __n, const bool & __value = bool ( ),
    const allocator_type & __a = allocator_type ( ) )

    : _Base ( __a )
    {
      _M_initialize ( __n );
      std :: fill ( this -> _M_impl . _M_start . _M_p, this -> _M_impl . _M_end_of_storage,
  __value ? ~ 0 : 0 );
    }


 vector ( const vector & __x )
    : _Base ( __x . _M_get_Bit_allocator ( ) )
    {
      _M_initialize ( __x . size ( ) );
      _M_copy_aligned ( __x . begin ( ), __x . end ( ), this -> _M_impl . _M_start );
    }
# 619 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/bits/stl_bvector.h" 3
template < typename _InputIterator >
      vector ( _InputIterator __first, _InputIterator __last,
      const allocator_type & __a = allocator_type ( ) )
      : _Base ( __a )
      {
 typedef typename std :: __is_integer < _InputIterator > :: __type _Integral;
 _M_initialize_dispatch ( __first, __last, _Integral ( ) );
      }


 ~ vector ( ){ }


vector & operator = ( const vector & __x )
    {
      if ( & __x == this )
 return * this;
      if ( __x . size ( ) > capacity ( ) )
 {
   this -> _M_deallocate ( );
   _M_initialize ( __x . size ( ) );
 }
      this -> _M_impl . _M_finish = _M_copy_aligned ( __x . begin ( ), __x . end ( ),
      begin ( ) );
      return * this;
    }
# 670 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/bits/stl_bvector.h" 3
void assign ( size_type __n, const bool & __x )
    { _M_fill_assign ( __n, __x ); }
# 680 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/bits/stl_bvector.h" 3
template < typename _InputIterator >
      void
      assign ( _InputIterator __first, _InputIterator __last )
      {
 typedef typename std :: __is_integer < _InputIterator > :: __type _Integral;
 _M_assign_dispatch ( __first, __last, _Integral ( ) );
      }
# 696 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/bits/stl_bvector.h" 3
iterator begin ( )
    { return this -> _M_impl . _M_start; }


const_iterator begin ( ) const
    { return this -> _M_impl . _M_start; }


iterator end ( )
    { return this -> _M_impl . _M_finish; }


const_iterator end ( ) const
    { return this -> _M_impl . _M_finish; }


reverse_iterator rbegin ( )
    { return reverse_iterator ( end ( ) ); }


const_reverse_iterator rbegin ( ) const
    { return const_reverse_iterator ( end ( ) ); }


reverse_iterator rend ( )
    { return reverse_iterator ( begin ( ) ); }


const_reverse_iterator rend ( ) const
    { return const_reverse_iterator ( begin ( ) ); }
# 746 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/bits/stl_bvector.h" 3
size_type size ( ) const
    { return size_type ( end ( ) - begin ( ) ); }


size_type max_size ( ) const
    {
      const size_type __isize =
 __gnu_cxx :: __numeric_traits < difference_type > :: __max
 - int ( _S_word_bit ) + 1;
      const size_type __asize = _M_get_Bit_allocator ( ) . max_size ( );
      return ( __asize <= __isize / int ( _S_word_bit )
       ? __asize * int ( _S_word_bit ) : __isize );
    }


size_type capacity ( ) const
    { return size_type ( const_iterator ( this -> _M_impl . _M_end_of_storage, 0 )
         - begin ( ) ); }


bool empty ( ) const
    { return begin ( ) == end ( ); }


reference operator [ ] ( size_type __n )
    {
      return * iterator ( this -> _M_impl . _M_start . _M_p
         + __n / int ( _S_word_bit ), __n % int ( _S_word_bit ) );
    }


const_reference operator [ ] ( size_type __n ) const
    {
      return * const_iterator ( this -> _M_impl . _M_start . _M_p
        + __n / int ( _S_word_bit ), __n % int ( _S_word_bit ) );
    }



protected: void _M_range_check ( size_type __n ) const
    {
      if ( __n >= this -> size ( ) )
 __throw_out_of_range_fmt ( ( "vector<bool>::_M_range_check: __n (which is %zu) >= this->size() (which is %zu)" )

                          ,
     __n, this -> size ( ) );
    }



public: reference at ( size_type __n )
    { _M_range_check ( __n ); return ( * this ) [ __n ]; }


const_reference at ( size_type __n ) const
    { _M_range_check ( __n ); return ( * this ) [ __n ]; }


void reserve ( size_type __n )
    {
      if ( __n > max_size ( ) )
 __throw_length_error ( ( "vector::reserve" ) );
      if ( capacity ( ) < __n )
 _M_reallocate ( __n );
    }


reference front ( )
    { return * begin ( ); }


const_reference front ( ) const
    { return * begin ( ); }


reference back ( )
    { return * ( end ( ) - 1 ); }


const_reference back ( ) const
    { return * ( end ( ) - 1 ); }
# 834
void data ( ){ }


void push_back ( bool __x )
    {
      if ( this -> _M_impl . _M_finish . _M_p != this -> _M_impl . _M_end_of_storage )
        * this -> _M_impl . _M_finish ++ = __x;
      else
        _M_insert_aux ( end ( ), __x );
    }


void swap ( vector & __x )
    {
      std :: swap ( this -> _M_impl . _M_start, __x . _M_impl . _M_start );
      std :: swap ( this -> _M_impl . _M_finish, __x . _M_impl . _M_finish );
      std :: swap ( this -> _M_impl . _M_end_of_storage,
  __x . _M_impl . _M_end_of_storage );



      std :: __alloc_swap < typename _Base :: _Bit_alloc_type > ::
 _S_do_it ( _M_get_Bit_allocator ( ), __x . _M_get_Bit_allocator ( ) );
    }



static void swap ( reference __x, reference __y )
    {
      bool __tmp = __x;
      __x = __y;
      __y = __tmp;
    }
# 872
iterator insert ( iterator __position, const bool & __x = bool ( ) )

    {
      const difference_type __n = __position - begin ( );
      if ( this -> _M_impl . _M_finish . _M_p != this -> _M_impl . _M_end_of_storage
   && __position == end ( ) )
        * this -> _M_impl . _M_finish ++ = __x;
      else
        _M_insert_aux ( __position . _M_const_cast ( ), __x );
      return begin ( ) + __n;
    }
# 897 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/bits/stl_bvector.h" 3
template < typename _InputIterator >
      void
      insert ( iterator __position,
      _InputIterator __first, _InputIterator __last )
      {
 typedef typename std :: __is_integer < _InputIterator > :: __type _Integral;
 _M_insert_dispatch ( __position, __first, __last, _Integral ( ) );
      }
# 917 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/bits/stl_bvector.h" 3
void insert ( iterator __position, size_type __n, const bool & __x )
    { _M_fill_insert ( __position, __n, __x ); }
# 928 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/bits/stl_bvector.h" 3
void pop_back ( )
    { -- this -> _M_impl . _M_finish; }
# 935
iterator erase ( iterator __position )

    { return _M_erase ( __position . _M_const_cast ( ) ); }
# 943
iterator erase ( iterator __first, iterator __last )

    { return _M_erase ( __first . _M_const_cast ( ), __last . _M_const_cast ( ) ); }


void resize ( size_type __new_size, bool __x = bool ( ) )
    {
      if ( __new_size < size ( ) )
        _M_erase_at_end ( begin ( ) + difference_type ( __new_size ) );
      else
        insert ( end ( ), __new_size - size ( ), __x );
    }
# 963
void flip ( )
    {
      for ( _Bit_type * __p = this -> _M_impl . _M_start . _M_p;
    __p != this -> _M_impl . _M_end_of_storage; ++ __p )
        * __p = ~ * __p;
    }


void clear ( )
    { _M_erase_at_end ( begin ( ) ); }
# 989 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/bits/stl_bvector.h" 3
protected: iterator _M_copy_aligned ( const_iterator __first, const_iterator __last,
      iterator __result )

    {
      _Bit_type * __q = std :: copy ( __first . _M_p, __last . _M_p, __result . _M_p );
      return std :: copy ( const_iterator ( __last . _M_p, 0 ), __last,
         iterator ( __q, 0 ) );
    }


void _M_initialize ( size_type __n )
    {
      _Bit_type * __q = this -> _M_allocate ( __n );
      this -> _M_impl . _M_end_of_storage = __q + _S_nword ( __n );
      this -> _M_impl . _M_start = iterator ( __q, 0 );
      this -> _M_impl . _M_finish = this -> _M_impl . _M_start + difference_type ( __n );
    }


void _M_reallocate ( size_type __n );
# 1018 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/bits/stl_bvector.h" 3
template < typename _Integer >
      void
      _M_initialize_dispatch ( _Integer __n, _Integer __x, __true_type )
      {
 _M_initialize ( static_cast < size_type > ( __n ) );
 std :: fill ( this -> _M_impl . _M_start . _M_p,
    this -> _M_impl . _M_end_of_storage, __x ? ~ 0 : 0 );
      }

template < typename _InputIterator >
      void
      _M_initialize_dispatch ( _InputIterator __first, _InputIterator __last,
        __false_type )
      { _M_initialize_range ( __first, __last,
       std :: __iterator_category ( __first ) ); }

template < typename _InputIterator >
      void
      _M_initialize_range ( _InputIterator __first, _InputIterator __last,
     std :: input_iterator_tag )
      {
 for (; __first != __last; ++ __first )
   push_back ( * __first );
      }

template < typename _ForwardIterator >
      void
      _M_initialize_range ( _ForwardIterator __first, _ForwardIterator __last,
     std :: forward_iterator_tag )
      {
 const size_type __n = std :: distance ( __first, __last );
 _M_initialize ( __n );
 std :: copy ( __first, __last, this -> _M_impl . _M_start );
      }



template < typename _Integer >
      void
      _M_assign_dispatch ( _Integer __n, _Integer __val, __true_type )
      { _M_fill_assign ( __n, __val ); }

template < class _InputIterator >
      void
      _M_assign_dispatch ( _InputIterator __first, _InputIterator __last,
    __false_type )
      { _M_assign_aux ( __first, __last, std :: __iterator_category ( __first ) ); }


void _M_fill_assign ( size_t __n, bool __x )
    {
      if ( __n > size ( ) )
 {
   std :: fill ( this -> _M_impl . _M_start . _M_p,
      this -> _M_impl . _M_end_of_storage, __x ? ~ 0 : 0 );
   insert ( end ( ), __n - size ( ), __x );
 }
      else
 {
   _M_erase_at_end ( begin ( ) + __n );
   std :: fill ( this -> _M_impl . _M_start . _M_p,
      this -> _M_impl . _M_end_of_storage, __x ? ~ 0 : 0 );
 }
    }

template < typename _InputIterator >
      void
      _M_assign_aux ( _InputIterator __first, _InputIterator __last,
      std :: input_iterator_tag )
      {
 iterator __cur = begin ( );
 for (; __first != __last && __cur != end ( ); ++ __cur, ++ __first )
   * __cur = * __first;
 if ( __first == __last )
   _M_erase_at_end ( __cur );
 else
   insert ( end ( ), __first, __last );
      }

template < typename _ForwardIterator >
      void
      _M_assign_aux ( _ForwardIterator __first, _ForwardIterator __last,
      std :: forward_iterator_tag )
      {
 const size_type __len = std :: distance ( __first, __last );
 if ( __len < size ( ) )
   _M_erase_at_end ( std :: copy ( __first, __last, begin ( ) ) );
 else
   {
     _ForwardIterator __mid = __first;
     std :: advance ( __mid, size ( ) );
     std :: copy ( __first, __mid, begin ( ) );
     insert ( end ( ), __mid, __last );
   }
      }
# 1118
template < typename _Integer >
      void
      _M_insert_dispatch ( iterator __pos, _Integer __n, _Integer __x,
    __true_type )
      { _M_fill_insert ( __pos, __n, __x ); }

template < typename _InputIterator >
      void
      _M_insert_dispatch ( iterator __pos,
    _InputIterator __first, _InputIterator __last,
    __false_type )
      { _M_insert_range ( __pos, __first, __last,
   std :: __iterator_category ( __first ) ); }


void _M_fill_insert ( iterator __position, size_type __n, bool __x );

template < typename _InputIterator >
      void
      _M_insert_range ( iterator __pos, _InputIterator __first,
        _InputIterator __last, std :: input_iterator_tag )
      {
 for (; __first != __last; ++ __first )
   {
     __pos = insert ( __pos, * __first );
     ++ __pos;
   }
      }

template < typename _ForwardIterator >
      void
      _M_insert_range ( iterator __position, _ForwardIterator __first,
        _ForwardIterator __last, std :: forward_iterator_tag );


void _M_insert_aux ( iterator __position, bool __x );


size_type _M_check_len ( size_type __n, const char * __s ) const
    {
      if ( max_size ( ) - size ( ) < __n )
 __throw_length_error ( ( __s ) );

      const size_type __len = size ( ) + std :: max ( size ( ), __n );
      return ( __len < size ( ) || __len > max_size ( ) ) ? max_size ( ) : __len;
    }


void _M_erase_at_end ( iterator __pos )
    { this -> _M_impl . _M_finish = __pos; }


iterator _M_erase ( iterator __pos );


iterator _M_erase ( iterator __first, iterator __last );
};


}
# 59 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/bits/vector.tcc" 3
namespace std { 



template < typename _Tp, typename _Alloc >
    void
    vector < _Tp, _Alloc > ::
    reserve ( size_type __n )
    {
      if ( __n > this -> max_size ( ) )
 __throw_length_error ( ( "vector::reserve" ) );
      if ( this -> capacity ( ) < __n )
 {
   const size_type __old_size = size ( );
   pointer __tmp = _M_allocate_and_copy ( __n,
     ( this -> _M_impl . _M_start ),
     ( this -> _M_impl . _M_finish ) );
   std :: _Destroy ( this -> _M_impl . _M_start, this -> _M_impl . _M_finish,
   _M_get_Tp_allocator ( ) );
   _M_deallocate ( this -> _M_impl . _M_start,
   this -> _M_impl . _M_end_of_storage
   - this -> _M_impl . _M_start );
   this -> _M_impl . _M_start = __tmp;
   this -> _M_impl . _M_finish = __tmp + __old_size;
   this -> _M_impl . _M_end_of_storage = this -> _M_impl . _M_start + __n;
 }
    }
# 105 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/bits/vector.tcc" 3
template < typename _Tp, typename _Alloc >
    typename vector < _Tp, _Alloc > :: iterator
    vector < _Tp, _Alloc > ::



    insert ( iterator __position, const value_type & __x )

    {
      const size_type __n = __position - begin ( );
      if ( this -> _M_impl . _M_finish != this -> _M_impl . _M_end_of_storage
   && __position == end ( ) )
 {
   _Alloc_traits :: construct ( this -> _M_impl, this -> _M_impl . _M_finish, __x );
   ++ this -> _M_impl . _M_finish;
 }
      else
 {

     _M_insert_aux ( __position, __x );

 }
      return iterator ( this -> _M_impl . _M_start + __n );
    }
# 139 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/bits/vector.tcc" 3
template < typename _Tp, typename _Alloc >
    typename vector < _Tp, _Alloc > :: iterator
    vector < _Tp, _Alloc > ::
    _M_erase ( iterator __position )
    {
      if ( __position + 1 != end ( ) )
 std :: copy ( __position + 1, end ( ), __position );
      -- this -> _M_impl . _M_finish;
      _Alloc_traits :: destroy ( this -> _M_impl, this -> _M_impl . _M_finish );
      return __position;
    }

template < typename _Tp, typename _Alloc >
    typename vector < _Tp, _Alloc > :: iterator
    vector < _Tp, _Alloc > ::
    _M_erase ( iterator __first, iterator __last )
    {
      if ( __first != __last )
 {
   if ( __last != end ( ) )
     std :: copy ( __last, end ( ), __first );
   _M_erase_at_end ( __first . base ( ) + ( end ( ) - __last ) );
 }
      return __first;
    }

template < typename _Tp, typename _Alloc >
    vector < _Tp, _Alloc > &
    vector < _Tp, _Alloc > ::
    operator = ( const vector < _Tp, _Alloc > & __x )
    {
      if ( & __x != this )
 {

   const size_type __xlen = __x . size ( );
   if ( __xlen > capacity ( ) )
     {
       pointer __tmp = _M_allocate_and_copy ( __xlen, __x . begin ( ),
         __x . end ( ) );
       std :: _Destroy ( this -> _M_impl . _M_start, this -> _M_impl . _M_finish,
       _M_get_Tp_allocator ( ) );
       _M_deallocate ( this -> _M_impl . _M_start,
       this -> _M_impl . _M_end_of_storage
       - this -> _M_impl . _M_start );
       this -> _M_impl . _M_start = __tmp;
       this -> _M_impl . _M_end_of_storage = this -> _M_impl . _M_start + __xlen;
     }
   else if ( size ( ) >= __xlen )
     {
       std :: _Destroy ( std :: copy ( __x . begin ( ), __x . end ( ), begin ( ) ),
       end ( ), _M_get_Tp_allocator ( ) );
     }
   else
     {
       std :: copy ( __x . _M_impl . _M_start, __x . _M_impl . _M_start + size ( ),
   this -> _M_impl . _M_start );
       std :: __uninitialized_copy_a ( __x . _M_impl . _M_start + size ( ),
       __x . _M_impl . _M_finish,
       this -> _M_impl . _M_finish,
       _M_get_Tp_allocator ( ) );
     }
   this -> _M_impl . _M_finish = this -> _M_impl . _M_start + __xlen;
 }
      return * this;
    }
# 223 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/bits/vector.tcc" 3
template < typename _Tp, typename _Alloc >
    void
    vector < _Tp, _Alloc > ::
    _M_fill_assign ( size_t __n, const value_type & __val )
    {
      if ( __n > capacity ( ) )
 {
   vector __tmp ( __n, __val, _M_get_Tp_allocator ( ) );
   __tmp . _M_impl . _M_swap_data ( this -> _M_impl );
 }
      else if ( __n > size ( ) )
 {
   std :: fill ( begin ( ), end ( ), __val );
   std :: __uninitialized_fill_n_a ( this -> _M_impl . _M_finish,
     __n - size ( ), __val,
     _M_get_Tp_allocator ( ) );
   this -> _M_impl . _M_finish += __n - size ( );
 }
      else
        _M_erase_at_end ( std :: fill_n ( this -> _M_impl . _M_start, __n, __val ) );
    }

template < typename _Tp, typename _Alloc >
    template < typename _InputIterator >
      void
      vector < _Tp, _Alloc > ::
      _M_assign_aux ( _InputIterator __first, _InputIterator __last,
      std :: input_iterator_tag )
      {
 pointer __cur ( this -> _M_impl . _M_start );
 for (; __first != __last && __cur != this -> _M_impl . _M_finish;
      ++ __cur, ++ __first )
   * __cur = * __first;
 if ( __first == __last )
   _M_erase_at_end ( __cur );
 else
   insert ( end ( ), __first, __last );
      }

template < typename _Tp, typename _Alloc >
    template < typename _ForwardIterator >
      void
      vector < _Tp, _Alloc > ::
      _M_assign_aux ( _ForwardIterator __first, _ForwardIterator __last,
      std :: forward_iterator_tag )
      {
 const size_type __len = std :: distance ( __first, __last );

 if ( __len > capacity ( ) )
   {
     pointer __tmp ( _M_allocate_and_copy ( __len, __first, __last ) );
     std :: _Destroy ( this -> _M_impl . _M_start, this -> _M_impl . _M_finish,
     _M_get_Tp_allocator ( ) );
     _M_deallocate ( this -> _M_impl . _M_start,
     this -> _M_impl . _M_end_of_storage
     - this -> _M_impl . _M_start );
     this -> _M_impl . _M_start = __tmp;
     this -> _M_impl . _M_finish = this -> _M_impl . _M_start + __len;
     this -> _M_impl . _M_end_of_storage = this -> _M_impl . _M_finish;
   }
 else if ( size ( ) >= __len )
   _M_erase_at_end ( std :: copy ( __first, __last, this -> _M_impl . _M_start ) );
 else
   {
     _ForwardIterator __mid = __first;
     std :: advance ( __mid, size ( ) );
     std :: copy ( __first, __mid, this -> _M_impl . _M_start );
     this -> _M_impl . _M_finish =
       std :: __uninitialized_copy_a ( __mid, __last,
       this -> _M_impl . _M_finish,
       _M_get_Tp_allocator ( ) );
   }
      }
# 324 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/bits/vector.tcc" 3
template < typename _Tp, typename _Alloc >
    void
    vector < _Tp, _Alloc > ::
    _M_insert_aux ( iterator __position, const _Tp & __x )

    {
      if ( this -> _M_impl . _M_finish != this -> _M_impl . _M_end_of_storage )
 {
   _Alloc_traits :: construct ( this -> _M_impl, this -> _M_impl . _M_finish,
              ( * ( this -> _M_impl . _M_finish - 1 ) )
                            );
   ++ this -> _M_impl . _M_finish;

   _Tp __x_copy = __x;

   std :: copy_backward ( __position . base ( ), this -> _M_impl . _M_finish - 2, this -> _M_impl . _M_finish - 1 )

                                  ;

   * __position = __x_copy;



 }
      else
 {
   const size_type __len =
     _M_check_len ( size_type ( 1 ), "vector::_M_insert_aux" );
   const size_type __elems_before = __position - begin ( );
   pointer __new_start ( this -> _M_allocate ( __len ) );
   pointer __new_finish ( __new_start );
   try
     {




       _Alloc_traits :: construct ( this -> _M_impl,
                         __new_start + __elems_before,



                                __x );

       __new_finish = 0;

       __new_finish
  = std :: __uninitialized_move_if_noexcept_a
  ( this -> _M_impl . _M_start, __position . base ( ),
   __new_start, _M_get_Tp_allocator ( ) );

       ++ __new_finish;

       __new_finish
  = std :: __uninitialized_move_if_noexcept_a
  ( __position . base ( ), this -> _M_impl . _M_finish,
   __new_finish, _M_get_Tp_allocator ( ) );
     }
          catch ( ... )
     {
       if ( ! __new_finish )
  _Alloc_traits :: destroy ( this -> _M_impl,
                         __new_start + __elems_before );
       else
  std :: _Destroy ( __new_start, __new_finish, _M_get_Tp_allocator ( ) );
       _M_deallocate ( __new_start, __len );
       throw;
     }
   std :: _Destroy ( this -> _M_impl . _M_start, this -> _M_impl . _M_finish,
   _M_get_Tp_allocator ( ) );
   _M_deallocate ( this -> _M_impl . _M_start,
   this -> _M_impl . _M_end_of_storage
   - this -> _M_impl . _M_start );
   this -> _M_impl . _M_start = __new_start;
   this -> _M_impl . _M_finish = __new_finish;
   this -> _M_impl . _M_end_of_storage = __new_start + __len;
 }
    }
# 447 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/bits/vector.tcc" 3
template < typename _Tp, typename _Alloc >
    void
    vector < _Tp, _Alloc > ::
    _M_fill_insert ( iterator __position, size_type __n, const value_type & __x )
    {
      if ( __n != 0 )
 {
   if ( size_type ( this -> _M_impl . _M_end_of_storage
   - this -> _M_impl . _M_finish ) >= __n )
     {
       value_type __x_copy = __x;
       const size_type __elems_after = end ( ) - __position;
       pointer __old_finish ( this -> _M_impl . _M_finish );
       if ( __elems_after > __n )
  {
    std :: __uninitialized_move_a ( this -> _M_impl . _M_finish - __n,
           this -> _M_impl . _M_finish,
           this -> _M_impl . _M_finish,
           _M_get_Tp_allocator ( ) );
    this -> _M_impl . _M_finish += __n;
    std :: copy_backward ( __position . base ( ), __old_finish - __n, __old_finish )
                                        ;
    std :: fill ( __position . base ( ), __position . base ( ) + __n,
       __x_copy );
  }
       else
  {
    std :: __uninitialized_fill_n_a ( this -> _M_impl . _M_finish,
      __n - __elems_after,
      __x_copy,
      _M_get_Tp_allocator ( ) );
    this -> _M_impl . _M_finish += __n - __elems_after;
    std :: __uninitialized_move_a ( __position . base ( ), __old_finish,
           this -> _M_impl . _M_finish,
           _M_get_Tp_allocator ( ) );
    this -> _M_impl . _M_finish += __elems_after;
    std :: fill ( __position . base ( ), __old_finish, __x_copy );
  }
     }
   else
     {
       const size_type __len =
  _M_check_len ( __n, "vector::_M_fill_insert" );
       const size_type __elems_before = __position - begin ( );
       pointer __new_start ( this -> _M_allocate ( __len ) );
       pointer __new_finish ( __new_start );
       try
  {

    std :: __uninitialized_fill_n_a ( __new_start + __elems_before,
      __n, __x,
      _M_get_Tp_allocator ( ) );
    __new_finish = 0;

    __new_finish
      = std :: __uninitialized_move_if_noexcept_a
      ( this -> _M_impl . _M_start, __position . base ( ),
       __new_start, _M_get_Tp_allocator ( ) );

    __new_finish += __n;

    __new_finish
      = std :: __uninitialized_move_if_noexcept_a
      ( __position . base ( ), this -> _M_impl . _M_finish,
       __new_finish, _M_get_Tp_allocator ( ) );
  }
       catch ( ... )
  {
    if ( ! __new_finish )
      std :: _Destroy ( __new_start + __elems_before,
      __new_start + __elems_before + __n,
      _M_get_Tp_allocator ( ) );
    else
      std :: _Destroy ( __new_start, __new_finish,
      _M_get_Tp_allocator ( ) );
    _M_deallocate ( __new_start, __len );
    throw;
  }
       std :: _Destroy ( this -> _M_impl . _M_start, this -> _M_impl . _M_finish,
       _M_get_Tp_allocator ( ) );
       _M_deallocate ( this -> _M_impl . _M_start,
       this -> _M_impl . _M_end_of_storage
       - this -> _M_impl . _M_start );
       this -> _M_impl . _M_start = __new_start;
       this -> _M_impl . _M_finish = __new_finish;
       this -> _M_impl . _M_end_of_storage = __new_start + __len;
     }
 }
    }
# 599 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/bits/vector.tcc" 3
template < typename _Tp, typename _Alloc >
    template < typename _InputIterator >
      void
      vector < _Tp, _Alloc > ::
      _M_range_insert ( iterator __pos, _InputIterator __first,
        _InputIterator __last, std :: input_iterator_tag )
      {
 for (; __first != __last; ++ __first )
   {
     __pos = insert ( __pos, * __first );
     ++ __pos;
   }
      }

template < typename _Tp, typename _Alloc >
    template < typename _ForwardIterator >
      void
      vector < _Tp, _Alloc > ::
      _M_range_insert ( iterator __position, _ForwardIterator __first,
        _ForwardIterator __last, std :: forward_iterator_tag )
      {
 if ( __first != __last )
   {
     const size_type __n = std :: distance ( __first, __last );
     if ( size_type ( this -> _M_impl . _M_end_of_storage
     - this -> _M_impl . _M_finish ) >= __n )
       {
  const size_type __elems_after = end ( ) - __position;
  pointer __old_finish ( this -> _M_impl . _M_finish );
  if ( __elems_after > __n )
    {
      std :: __uninitialized_move_a ( this -> _M_impl . _M_finish - __n,
      this -> _M_impl . _M_finish,
      this -> _M_impl . _M_finish,
      _M_get_Tp_allocator ( ) );
      this -> _M_impl . _M_finish += __n;
      std :: copy_backward ( __position . base ( ), __old_finish - __n, __old_finish )
                                          ;
      std :: copy ( __first, __last, __position );
    }
  else
    {
      _ForwardIterator __mid = __first;
      std :: advance ( __mid, __elems_after );
      std :: __uninitialized_copy_a ( __mid, __last,
      this -> _M_impl . _M_finish,
      _M_get_Tp_allocator ( ) );
      this -> _M_impl . _M_finish += __n - __elems_after;
      std :: __uninitialized_move_a ( __position . base ( ),
      __old_finish,
      this -> _M_impl . _M_finish,
      _M_get_Tp_allocator ( ) );
      this -> _M_impl . _M_finish += __elems_after;
      std :: copy ( __first, __mid, __position );
    }
       }
     else
       {
  const size_type __len =
    _M_check_len ( __n, "vector::_M_range_insert" );
  pointer __new_start ( this -> _M_allocate ( __len ) );
  pointer __new_finish ( __new_start );
  try
    {
      __new_finish
        = std :: __uninitialized_move_if_noexcept_a
        ( this -> _M_impl . _M_start, __position . base ( ),
         __new_start, _M_get_Tp_allocator ( ) );
      __new_finish
        = std :: __uninitialized_copy_a ( __first, __last,
          __new_finish,
          _M_get_Tp_allocator ( ) );
      __new_finish
        = std :: __uninitialized_move_if_noexcept_a
        ( __position . base ( ), this -> _M_impl . _M_finish,
         __new_finish, _M_get_Tp_allocator ( ) );
    }
  catch ( ... )
    {
      std :: _Destroy ( __new_start, __new_finish,
      _M_get_Tp_allocator ( ) );
      _M_deallocate ( __new_start, __len );
      throw;
    }
  std :: _Destroy ( this -> _M_impl . _M_start, this -> _M_impl . _M_finish,
         _M_get_Tp_allocator ( ) );
  _M_deallocate ( this -> _M_impl . _M_start,
         this -> _M_impl . _M_end_of_storage
         - this -> _M_impl . _M_start );
  this -> _M_impl . _M_start = __new_start;
  this -> _M_impl . _M_finish = __new_finish;
  this -> _M_impl . _M_end_of_storage = __new_start + __len;
       }
   }
      }



template < typename _Alloc >
    void
    vector < bool, _Alloc > ::
    _M_reallocate ( size_type __n )
    {
      _Bit_type * __q = this -> _M_allocate ( __n );
      this -> _M_impl . _M_finish = _M_copy_aligned ( begin ( ), end ( ),
      iterator ( __q, 0 ) );
      this -> _M_deallocate ( );
      this -> _M_impl . _M_start = iterator ( __q, 0 );
      this -> _M_impl . _M_end_of_storage = __q + _S_nword ( __n );
    }

template < typename _Alloc >
    void
    vector < bool, _Alloc > ::
    _M_fill_insert ( iterator __position, size_type __n, bool __x )
    {
      if ( __n == 0 )
 return;
      if ( capacity ( ) - size ( ) >= __n )
 {
   std :: copy_backward ( __position, end ( ),
        this -> _M_impl . _M_finish + difference_type ( __n ) );
   std :: fill ( __position, __position + difference_type ( __n ), __x );
   this -> _M_impl . _M_finish += difference_type ( __n );
 }
      else
 {
   const size_type __len =
     _M_check_len ( __n, "vector<bool>::_M_fill_insert" );
   _Bit_type * __q = this -> _M_allocate ( __len );
   iterator __i = _M_copy_aligned ( begin ( ), __position,
      iterator ( __q, 0 ) );
   std :: fill ( __i, __i + difference_type ( __n ), __x );
   this -> _M_impl . _M_finish = std :: copy ( __position, end ( ),
           __i + difference_type ( __n ) );
   this -> _M_deallocate ( );
   this -> _M_impl . _M_end_of_storage = __q + _S_nword ( __len );
   this -> _M_impl . _M_start = iterator ( __q, 0 );
 }
    }

template < typename _Alloc >
    template < typename _ForwardIterator >
      void
      vector < bool, _Alloc > ::
      _M_insert_range ( iterator __position, _ForwardIterator __first,
        _ForwardIterator __last, std :: forward_iterator_tag )
      {
 if ( __first != __last )
   {
     size_type __n = std :: distance ( __first, __last );
     if ( capacity ( ) - size ( ) >= __n )
       {
  std :: copy_backward ( __position, end ( ),
       this -> _M_impl . _M_finish
       + difference_type ( __n ) );
  std :: copy ( __first, __last, __position );
  this -> _M_impl . _M_finish += difference_type ( __n );
       }
     else
       {
  const size_type __len =
    _M_check_len ( __n, "vector<bool>::_M_insert_range" );
  _Bit_type * __q = this -> _M_allocate ( __len );
  iterator __i = _M_copy_aligned ( begin ( ), __position,
            iterator ( __q, 0 ) );
  __i = std :: copy ( __first, __last, __i );
  this -> _M_impl . _M_finish = std :: copy ( __position, end ( ), __i );
  this -> _M_deallocate ( );
  this -> _M_impl . _M_end_of_storage = __q + _S_nword ( __len );
  this -> _M_impl . _M_start = iterator ( __q, 0 );
       }
   }
      }

template < typename _Alloc >
    void
    vector < bool, _Alloc > ::
    _M_insert_aux ( iterator __position, bool __x )
    {
      if ( this -> _M_impl . _M_finish . _M_p != this -> _M_impl . _M_end_of_storage )
 {
   std :: copy_backward ( __position, this -> _M_impl . _M_finish,
        this -> _M_impl . _M_finish + 1 );
   * __position = __x;
   ++ this -> _M_impl . _M_finish;
 }
      else
 {
   const size_type __len =
     _M_check_len ( size_type ( 1 ), "vector<bool>::_M_insert_aux" );
   _Bit_type * __q = this -> _M_allocate ( __len );
   iterator __i = _M_copy_aligned ( begin ( ), __position,
      iterator ( __q, 0 ) );
   * __i ++ = __x;
   this -> _M_impl . _M_finish = std :: copy ( __position, end ( ), __i );
   this -> _M_deallocate ( );
   this -> _M_impl . _M_end_of_storage = __q + _S_nword ( __len );
   this -> _M_impl . _M_start = iterator ( __q, 0 );
 }
    }

template < typename _Alloc >
    typename vector < bool, _Alloc > :: iterator
    vector < bool, _Alloc > ::
    _M_erase ( iterator __position )
    {
      if ( __position + 1 != end ( ) )
        std :: copy ( __position + 1, end ( ), __position );
      -- this -> _M_impl . _M_finish;
      return __position;
    }

template < typename _Alloc >
    typename vector < bool, _Alloc > :: iterator
    vector < bool, _Alloc > ::
    _M_erase ( iterator __first, iterator __last )
    {
      if ( __first != __last )
 _M_erase_at_end ( std :: copy ( __last, end ( ), __first ) );
      return __first;
    }
# 841 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/c++/bits/vector.tcc" 3
}
# 6 "include/Bank.hxx"
using namespace std;

class Account; 
class Bank { 



public: Bank(); 
~Bank(); 

Account *getAccount(int num, std::string password); 
Account *addAccount(); 



private: std::vector< Account *>  myAccounts; 
int myCurrentAccountNumber; 
}; 
# 5 "include/Account.hxx"
using namespace std;

class Account { 



public: Account() 
{ const unsigned int _CppTest_funcId = cpptestCoverageFunction(__CPTR_cui, _cpptest_strdata[2], 1);cpptestCoverageStmt(1U, -1, __CPTR_cui, _CppTest_funcId, 1);
myAccountNumber = 0; cpptestCoverageStmt(2U, -1, __CPTR_cui, _CppTest_funcId, 1);
myBalance = (0.0); 
} 
Account(double initial) 
{ const unsigned int _CppTest_funcId = cpptestCoverageFunction(__CPTR_cui, _cpptest_strdata[3], 2);cpptestCoverageStmt(1U, -1, __CPTR_cui, _CppTest_funcId, 2);
myAccountNumber = 0; cpptestCoverageStmt(2U, -1, __CPTR_cui, _CppTest_funcId, 2);
myBalance = initial; 
} 

double getBalance() 
{ const unsigned int _CppTest_funcId = cpptestCoverageFunction(__CPTR_cui, _cpptest_strdata[4], 3);cpptestCoverageStmt(1U, -1, __CPTR_cui, _CppTest_funcId, 3);
return (myBalance); 
} 
int getAccountNumber() const 
{ const unsigned int _CppTest_funcId = cpptestCoverageFunction(__CPTR_cui, _cpptest_strdata[5], 4);cpptestCoverageStmt(1U, -1, __CPTR_cui, _CppTest_funcId, 4);
return (myAccountNumber); 
} 

void setAccountNumber(int num) 
{ const unsigned int _CppTest_funcId = cpptestCoverageFunction(__CPTR_cui, _cpptest_strdata[6], 5);cpptestCoverageStmt(1U, -1, __CPTR_cui, _CppTest_funcId, 5);
myAccountNumber = num; 
} 
void setPassword(const char *password) 
{ CPPTEST_STACK_TRACE_FUNC_START_INFO() const unsigned int _CppTest_funcId = cpptestCoverageFunction(__CPTR_cui, _cpptest_strdata[7], 6);cpptestCoverageStmt(1U, -1, __CPTR_cui, _CppTest_funcId, 6);CPPTEST_STACK_TRACE_STMT_INFO(39) 
(myPassword = password); CPPTEST_STACK_TRACE_EXIT_ROUTINE() 
} 
const char *getPassword() 
{ const unsigned int _CppTest_funcId = cpptestCoverageFunction(__CPTR_cui, _cpptest_strdata[8], 7);cpptestCoverageStmt(1U, -1, __CPTR_cui, _CppTest_funcId, 7);
return (((void)cpptestCoverageCall(1U, 1 + 0, __CPTR_cui, _CppTest_funcId, 7), (myPassword).data())); 
} 

double deposit(double amount); 

double debit(double amount); 



private: int myAccountNumber; 
double myBalance; 
std::string myPassword; 
}; 
# 5 "C:\\Parasoft_Tutorial\\workspace_tutorial_tantai\\ATM\\CppUnit\\BankTestCase_1.cpp"
void (BankTestCase::*BankTestCase::call_slave_ptr)(void); extern "C" void BankTestCase_testSuiteBegin() { CPPTEST_STACK_TRACE_FUNC_START_INFO() CPPTEST_STACK_TRACE_STMT_INFO(40) BankTestCase::testSuiteBegin(); CPPTEST_STACK_TRACE_EXIT_ROUTINE() } extern "C" int BankTestCase_callTest(const char *name) { CPPTEST_STACK_TRACE_FUNC_START_INFO() CPPTEST_STACK_TRACE_STMT_INFO(41) cpptestIgnoreCurrStackElement(); CPPTEST_STACK_TRACE_STMT_INFO(42) return BankTestCase::call(name); CPPTEST_STACK_TRACE_EXIT_ROUTINE() } 

BankTestCase::BankTestCase() 
{ CPPTEST_STACK_TRACE_FUNC_START_INFO() CPPTEST_STACK_TRACE_EXIT_ROUTINE() 
} 


BankTestCase::~BankTestCase() 
{ CPPTEST_STACK_TRACE_FUNC_START_INFO() CPPTEST_STACK_TRACE_EXIT_ROUTINE() 
} 



void BankTestCase::setUp() 
{ CPPTEST_STACK_TRACE_FUNC_START_INFO() CPPTEST_STACK_TRACE_EXIT_ROUTINE() 
} 



void BankTestCase::tearDown() 
{ CPPTEST_STACK_TRACE_FUNC_START_INFO() CPPTEST_STACK_TRACE_EXIT_ROUTINE() 
} 



void BankTestCase::testGetAccount() 
{ CPPTEST_STACK_TRACE_FUNC_START_INFO() 
CPPTEST_STACK_TRACE_VARIABLE_INFO(anonymous__CPTR_2, 43) Bank *bankWithTwoAccounts = new Bank; 
CPPTEST_STACK_TRACE_VARIABLE_INFO(anonymous__CPTR_3, 44) Account *account1 = bankWithTwoAccounts->addAccount(); CPPTEST_STACK_TRACE_STMT_INFO(45) 
account1->setPassword("password1"); 
CPPTEST_STACK_TRACE_VARIABLE_INFO(anonymous__CPTR_4, 46) Account *account2 = bankWithTwoAccounts->addAccount(); CPPTEST_STACK_TRACE_STMT_INFO(47) 
account2->setPassword("password2"); 

CPPTEST_STACK_TRACE_VARIABLE_INFO(anonymous__CPTR_5, 48) int _num = 0; 


CPPTEST_STACK_TRACE_VARIABLE_INFO(anonymous__CPTR_6, 49) std::string _password = "password1"; 


CPPTEST_STACK_TRACE_VARIABLE_INFO(anonymous__CPTR_7, 50) Account *_return = bankWithTwoAccounts->getAccount(_num, _password); CPPTEST_STACK_TRACE_STMT_INFO(51) 

cpptestAssertion((_return != 0), 0, _cpptest_strdata_var(12, "_return != 0"), _cpptest_strdata_var(13, "C:\\Parasoft_Tutorial\\workspace_tutorial_tantai\\ATM\\CppUnit\\BankTestCase_1.cpp"), 46); CPPTEST_STACK_TRACE_EXIT_ROUTINE() 
} 
#line 1 "__TEST_HARNESS__"
;


