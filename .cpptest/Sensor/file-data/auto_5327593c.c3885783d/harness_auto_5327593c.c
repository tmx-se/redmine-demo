# 1 "C:\\Users\\shito\\AppData\\Local\\Temp\\ParaSoft.11540.1946\\ParaSoft.11540.24208.c"

#define CPPTEST_INSTRUMENTATION


#include "cpptest_i.h"
#include "C:\Parasoft_Tutorial\workspace_tutorial_tantai\.cpptest\Sensor\unit-data\current_tubf179707\cpptest_stubconfig.h"


struct __CPTR_Dummy_Type {
    char nonEmpty;
};




#include "cpptest_runtime_i.h"

#ifdef __cplusplus
extern "C" void __CPTR_Initialize(void);
extern "C" void __CPTR_Finalize(void);

struct __CPTR_Initializer_2074520447_11540_127419333 {
    __CPTR_Initializer_2074520447_11540_127419333()
    {
        CPPTEST_INITIALIZE_RUNTIME();
    }
    ~__CPTR_Initializer_2074520447_11540_127419333()
    {
        CPPTEST_FINALIZE_RUNTIME();
    }
};

#if CPPTEST_USE_GLOBAL_OBJECTS_TO_INIT_RUNTIME
static struct __CPTR_Initializer_2074520447_11540_127419333 __CPTR_initializer_2074520447_11540_127419333;
#endif

#define CPPTEST_ENTER_MAIN_ROUTINE() __CPTR_Initializer_2074520447_11540_127419333 __CPTR_main_initializer

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

#if defined(CPPTEST_STUB_sub_func1) || CPPTEST_ENABLE_ALL_STUBS
# if defined(CPPTEST_SAFE_STUB_sub_func1)
#  define CppTest_Stub__Call_sub_func1_sub_func1 CppTest_Safe_Stub_sub_func1_sub_func1
#  if defined(CPPTEST_UNDEFINED_sub_func1) 
#   define CppTest_Safe_Stub_sub_func1_sub_func1 sub_func1
#  endif
# elif defined(CPPTEST_AUTO_STUB_sub_func1)
#  define CppTest_Stub__Call_sub_func1_sub_func1 CppTest_Auto_Stub_sub_func1_sub_func1
#  if defined(CPPTEST_UNDEFINED_sub_func1) 
#   define CppTest_Auto_Stub_sub_func1_sub_func1 sub_func1
#  endif
# else
#  define CppTest_Stub__Call_sub_func1_sub_func1 CppTest_Stub_sub_func1_sub_func1
#  if defined(CPPTEST_UNDEFINED_sub_func1) 
#   define CppTest_Stub_sub_func1_sub_func1 sub_func1
#  endif
#  define CPPTEST_USER_STUB_sub_func1
# endif
#else
# define CppTest_Stub__Call_sub_func1_sub_func1 sub_func1
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
# 212 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/stddef.h" 3
typedef unsigned size_t; 
# 324 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/stddef.h" 3
typedef unsigned short wchar_t; 
# 147 "/usr/lib/gcc/i686-pc-cygwin/4.9.2/include/stddef.h" 3
typedef int ptrdiff_t; 
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
# 771
struct _reent *__getreent(void) __attribute((__cdecl__)); 
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
__attribute((__cdecl__)) void free(void *); 
char *getenv(const char * __string) __attribute((__cdecl__)); 
char *_getenv_r(struct _reent *, const char * __string) __attribute((__cdecl__)); 
char *_findenv(const char *, int *) __attribute((__cdecl__)); 
char *_findenv_r(struct _reent *, const char *, int *) __attribute((__cdecl__)); 

extern char *suboptarg; 
__attribute((__cdecl__)) int getsubopt(char **, char *const *, char **); 

__attribute((__cdecl__)) long labs(long); 
__attribute((__cdecl__)) ldiv_t ldiv(long __numer, long __denom); 
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

struct CppTestListElement_s *next; 

struct CppTestListElement_s *prev; 
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



__attribute((__cdecl__)) extern void cpptestExpandableStringInit(CppTestExpandableString * es, size_t initSize); 



__attribute((__cdecl__)) extern void cpptestExpandableStringClear(CppTestExpandableString * es); 



__attribute((__cdecl__)) extern void cpptestExpandableStringExpand(CppTestExpandableString * es); 



__attribute((__cdecl__)) extern void cpptestExpandableStringAppend(CppTestExpandableString * es, const char * str, size_t len); 



__attribute((__cdecl__)) extern void cpptestExpandableStringAppendChar(CppTestExpandableString * es, char c); 



__attribute((__cdecl__)) extern void cpptestExpandableStringDispose(CppTestExpandableString * es); 



__attribute((__cdecl__)) extern void cpptestListInit(CppTestList * l); 


typedef void ( __attribute((__cdecl__))*ListElementDestructor)(char * data, void * additionalParameter) ; 



__attribute((__cdecl__)) extern void cpptestListClear(CppTestList * l, ListElementDestructor destructor, void * additionalParameter); 


__attribute((__cdecl__)) extern CppTestListIterator cpptestListRemove(CppTestList * l, CppTestListIterator it); 


__attribute((__cdecl__)) extern void cpptestListPushFront(CppTestList * l, char * data); 


extern char *cpptestListFrontElement(const CppTestList * l) __attribute((__cdecl__)); 


__attribute((__cdecl__)) extern void cpptestListPushBack(CppTestList * l, char * data); 


__attribute((__cdecl__)) extern CppTestListIterator cpptestListGetIterator(const CppTestList * l); 


extern char *cpptestListIteratorElement(CppTestListConstIterator it) __attribute((__cdecl__)); 


__attribute((__cdecl__)) extern CppTestListIterator cpptestListIteratorNext(CppTestListConstIterator it); 


__attribute((__cdecl__)) extern int cpptestListIteratorEnd(CppTestListConstIterator it); 


extern char *cpptestStrDup(const char * str) __attribute((__cdecl__)); 


__attribute((__cdecl__)) extern unsigned cpptestStrLen(const char * str); 


__attribute((__cdecl__)) extern int cpptestStrCmp(const char * str1, const char * str2); 


__attribute((__cdecl__)) extern int cpptestStrNCmp(const char * str1, const char * str2, unsigned n); 


__attribute((__cdecl__)) extern int cpptestStrCaseCmp(const char * str1, const char * str2); 


__attribute((__cdecl__)) extern int cpptestStrNCaseCmp(const char * str1, const char * str2, unsigned n); 


__attribute((__cdecl__)) extern unsigned cpptestCharToDigit(char c); 


extern const char *cpptestStrToInteger(const char * str, long long * integer) __attribute((__cdecl__)); 


extern const char *cpptestStrToUInteger(const char * str, unsigned long long * uinteger) __attribute((__cdecl__)); 


extern const char *cpptestStrToBool(const char * str, int * result) __attribute((__cdecl__)); 


extern char *cpptestAllocateString(size_t size, unsigned char content) __attribute((__cdecl__)); 


__attribute((__cdecl__)) extern void cpptestIntToBitStrMask(char * bitString, unsigned value, unsigned mask); 



extern CppTest_wchar_t *cpptestWStrDup(const CppTest_wchar_t * str) __attribute((__cdecl__)); 


__attribute((__cdecl__)) extern unsigned cpptestWStrLen(const CppTest_wchar_t * str); 


__attribute((__cdecl__)) extern int cpptestWStrCmp(const CppTest_wchar_t * str1, const CppTest_wchar_t * str2); 


__attribute((__cdecl__)) extern int cpptestWStrNCmp(const CppTest_wchar_t * str1, const CppTest_wchar_t * str2, unsigned n); 


__attribute((__cdecl__)) extern unsigned cpptestWCharToDigit(CppTest_wchar_t c); 


extern const CppTest_wchar_t *cpptestWStrToInteger(const CppTest_wchar_t * str, long long * integer) __attribute((__cdecl__)); 


extern const CppTest_wchar_t *cpptestWStrToUInteger(const CppTest_wchar_t * str, unsigned long long * uinteger) __attribute((__cdecl__)); 
# 221
extern void *cpptestMalloc(size_t size) __attribute((__cdecl__)); 


extern void *cpptestAlloc(size_t size) __attribute((__cdecl__)); 


__attribute((__cdecl__)) extern void cpptestFree(void * str); 


extern void *cpptestMemset(void * ptr, int c, size_t size) __attribute((__cdecl__)); 
# 248 "C:\\Program Files\\Parasoft\\C++test\\10.3.2\\engine\\runtime\\include/cpptest_common.h"
typedef struct CppTestTreeNode *CppTestTree; 
# 254
__attribute((__cdecl__)) extern void cpptestTreeInit(CppTestTree * tree); 
# 260
__attribute((__cdecl__)) extern void cpptestTreeClear(CppTestTree * tree); 
# 267
__attribute((__cdecl__)) extern int cpptestTreeFind(CppTestTree * tree, const char * key, void ** ret); 
# 273
__attribute((__cdecl__)) extern void cpptestTreeAdd(CppTestTree * tree, const char * key, void * value); 

__attribute((__cdecl__)) typedef void CppTestTreeCallBackRoutine(const char * key, void * value); 
typedef CppTestTreeCallBackRoutine *CppTestTreeCallBack; 
# 282
__attribute((__cdecl__)) extern void cpptestTreeTraverseInorder(const CppTestTree * tree, const CppTestTreeCallBack callback); 
# 290
__attribute((__cdecl__)) extern void cpptestAddProperty(const char * name, const char * value); 
# 298
__attribute((__cdecl__)) extern void cpptestAddWeakProperty(const char * name, const char * value); 
# 311 "C:\\Program Files\\Parasoft\\C++test\\10.3.2\\engine\\runtime\\include/cpptest_common.h"
__attribute((__cdecl__)) extern void cpptestParseAndAddProperties(char * properties); 
# 317
__attribute((__cdecl__)) extern int cpptestHasProperty(const char * name); 
# 324
extern const char *cpptestGetProperty(const char * name) __attribute((__cdecl__)); 
# 331
extern const char *cpptestGetPropertyEx(const char * name, const char * defaultValue) __attribute((__cdecl__)); 
# 338
__attribute((__cdecl__)) extern long long cpptestGetIntProperty(const char * name); 
# 345
__attribute((__cdecl__)) extern long long cpptestGetIntPropertyEx(const char * name, long long defaultValue); 
# 352
__attribute((__cdecl__)) extern unsigned long long cpptestGetUIntProperty(const char * name); 
# 359
__attribute((__cdecl__)) extern unsigned long long cpptestGetUIntPropertyEx(const char * name, unsigned long long defaultValue); 
# 366
__attribute((__cdecl__)) extern int cpptestGetBoolProperty(const char * name); 
# 373
__attribute((__cdecl__)) extern int cpptestGetBoolPropertyEx(const char * name, int defaultValue); 
# 379
extern const char *cpptestPathRelativeToAbsolute(const char * relPath, const char * relToFileName) __attribute((__cdecl__)); 
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
# 350 "/usr/include/machine/setjmp.h" 3
typedef int jmp_buf[(13 * 4)]; 
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
struct _uc_fpreg _st[8]; 
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
struct _fpstate fpstate; 
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
struct _sigcommune _si_commune; 

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


enum __T47507464 { 
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


enum __T47593560 { 
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

int sigqueue(pid_t, int, const union sigval); 
int siginterrupt(int, int); 




__attribute((dllimport)) extern const char *sys_sigabbrev[]; 
__attribute((dllimport)) extern const char *sys_siglist[]; 
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
__attribute((__cdecl__)) int sigtimedwait(const sigset_t * set, siginfo_t * info, const struct timespec * timeout); 


__attribute((__cdecl__)) int sigwait(const sigset_t * set, int * sig); 


__attribute((__cdecl__)) int sigqueue(pid_t pid, int signo, const union sigval value); 
# 9 "/usr/include/signal.h" 3
typedef int sig_atomic_t; 

typedef _sig_func_ptr sig_t; 
typedef _sig_func_ptr sighandler_t; 
# 19
struct _reent; 

__attribute((__cdecl__)) _sig_func_ptr _signal_r(struct _reent *, int, _sig_func_ptr); 
__attribute((__cdecl__)) int _raise_r(struct _reent *, int); 


__attribute((__cdecl__)) _sig_func_ptr signal(int, _sig_func_ptr); 
__attribute((__cdecl__)) int raise(int); 
__attribute((__cdecl__)) void psignal(int, const char *); 
# 368 "/usr/include/machine/setjmp.h" 3
typedef int sigjmp_buf[((13 * 4) + 1) + (sizeof(sigset_t) / sizeof(int))]; 
# 421 "/usr/include/machine/setjmp.h" 3
extern void _longjmp(jmp_buf, int); 
extern int _setjmp(jmp_buf); 
# 15 "/usr/include/setjmp.h" 3
__attribute((__cdecl__)) void longjmp(jmp_buf __jmpb, int __retval) __attribute((__noreturn__)); 




__attribute((__cdecl__)) int setjmp(jmp_buf __jmpb); 
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
extern const char *cpptestGetCurrentTestCaseName(void) __attribute((__cdecl__)); 
# 238
extern const char *cpptestGetCurrentTestSuiteName(void) __attribute((__cdecl__)); 
# 244
__attribute((__cdecl__)) extern unsigned cpptestGetCurrentTestCaseIteration(void); 
# 258 "C:\\Program Files\\Parasoft\\C++test\\10.3.2\\engine\\runtime\\include/cpptest_runtime_u.h"
extern const char *cpptestGetCurrentTestCaseFile(void) __attribute((__cdecl__)); 
# 264
__attribute((__cdecl__)) extern unsigned cpptestGetCurrentTestCaseLine(void); 
# 271
__attribute((__cdecl__)) extern void cpptestCommunicationBegin(void); 


__attribute((__cdecl__)) extern void cpptestCommunicationEnd(void); 


__attribute((__cdecl__)) extern void cpptestTestRunnerBegin(void); 


__attribute((__cdecl__)) extern void cpptestTestRunnerEnd(void); 


__attribute((__cdecl__)) extern void cpptestTestSuiteBegin(const char * name, const char * file, unsigned line); 



__attribute((__cdecl__)) extern void cpptestTestSuiteEnd(void); 


__attribute((__cdecl__)) extern void cpptestTestCaseBegin(const char * name, CppTest_ErrorCode expectedErrorCode, unsigned expectedErrorCodeMask, int isCpp, const char * file, unsigned line); 




__attribute((__cdecl__)) extern void cpptestTestCaseEnd(void); 


__attribute((__cdecl__)) extern void cpptestDsForCurrentTestCaseInitialized(struct CppTest_DataSource * dataSource); 


__attribute((__cdecl__)) extern void cpptestDsTestCaseBegin(const char * name, CppTest_ErrorCode expectedErrorCode, unsigned expectedErrorCodeMask, int isCpp, const char * file, unsigned line); 


__attribute((__cdecl__)) extern void cpptestDsTestCaseEnd(void); 


__attribute((__cdecl__)) extern void cpptestDsTestCaseIterationBegin(unsigned iteration, const char * signature); 


__attribute((__cdecl__)) extern void cpptestDsTestCaseIterationEnd(void); 




extern void CppTest_DsFinalize(struct CppTest_DataSource * ds); 


extern void CppTest_DsDumpInt(CppTestExpandableString * es, int i); 


extern const char *CppTest_DsGetMemBuffer(struct CppTest_DataSource * ds, const char * name, unsigned * size); 


extern long long CppTest_DsGetInteger(struct CppTest_DataSource * ds, const char * name); 


extern unsigned long long CppTest_DsGetUInteger(struct CppTest_DataSource * ds, const char * name); 


extern double CppTest_DsGetFloat(struct CppTest_DataSource * ds, const char * name); 


extern int CppTest_DsGetBool(struct CppTest_DataSource * ds, const char * name); 


extern char CppTest_DsGetChar(struct CppTest_DataSource * ds, const char * name); 


extern int CppTest_DsErrorHasMoreData(struct CppTest_DataSource * ds); 


extern const char *CppTest_DsErrorGetDataSignature(struct CppTest_DataSource * ds); 


extern unsigned CppTest_DsErrorGetIteration(struct CppTest_DataSource * ds); 


extern int CppTest_DsRepeatLoadNextData(struct CppTest_DataSource * ds); 


extern unsigned CppTest_DsRepeatGetIteration(struct CppTest_DataSource * ds); 


extern int CppTest_DsRepeatHasMoreData(struct CppTest_DataSource * ds); 
# 364 "C:\\Program Files\\Parasoft\\C++test\\10.3.2\\engine\\runtime\\include/cpptest_runtime_u.h"
extern void CppTest_DsRepeatFinalize(struct CppTest_DataSource * ds); 


extern struct CppTest_DataSource *CppTest_DsRepeat(int count) __attribute((__cdecl__)); 


extern int CppTest_DsArrayLoadNextData(struct CppTest_DataSource * ds); 


extern unsigned CppTest_DsArrayGetIteration(struct CppTest_DataSource * ds); 


extern int CppTest_DsArrayHasMoreData(struct CppTest_DataSource * ds); 


extern int CppTest_DsArrayGetColumn(struct CppTest_DataSource * ds, const char * name); 


extern int CppTest_DsArrayHasColumn(struct CppTest_DataSource * ds, const char * name); 


extern const char *CppTest_DsArrayGetCStr(struct CppTest_DataSource * ds, const char * name); 



extern const CppTest_wchar_t *CppTest_DsArrayGetWCStr(struct CppTest_DataSource * ds, const char * name); 
# 398
extern void CppTest_DsArrayFinalize(struct CppTest_DataSource * ds); 


extern struct CppTest_DataSource *CppTest_DsArray(const char ** data, int rows, int columns) __attribute((__cdecl__)); 




extern int CppTest_DsCsvPeekChar(struct CppTest_DsCsvData * dsCsv); 


extern int CppTest_DsCsvReadChar(struct CppTest_DsCsvData * dsCsv); 


extern void CppTest_DsCsvGetSkipWS(struct CppTest_DsCsvData * dsCsv); 


extern int CppTest_DsCsvIsEndOfField(struct CppTest_DsCsvData * dsCsv, int * pC); 


extern int CppTest_DsCsvLoadQuotedField(struct CppTest_DsCsvData * dsCsv, CppTestExpandableString * pEs, int * pC); 


extern int CppTest_DsCsvLoadField(struct CppTest_DsCsvData * dsCsv, CppTestExpandableString * pEs, int * pC); 
# 429
extern int CppTest_DsCsvLoadNextData(struct CppTest_DataSource * ds); 


extern unsigned CppTest_DsCsvGetIteration(struct CppTest_DataSource * ds); 


extern int CppTest_DsCsvHasMoreData(struct CppTest_DataSource * ds); 


extern CppTestListIterator CppTest_DsCsvGetColumn(struct CppTest_DataSource * ds, const char * name); 


extern int CppTest_DsCsvHasColumn(struct CppTest_DataSource * ds, const char * name); 


extern const char *CppTest_DsCsvGetCStr(struct CppTest_DataSource * ds, const char * name); 



extern const CppTest_wchar_t *CppTest_DsCsvGetWCStr(struct CppTest_DataSource * ds, const char * name); 



extern const char *CppTest_DsCsvGetMemBuffer(struct CppTest_DataSource * ds, const char * name, unsigned * size); 
# 460
extern void CppTest_DsCsvFinalize(struct CppTest_DataSource * ds); 


extern struct CppTest_DataSource *CppTest_DsCsv(const char * fileName, char separator, int useCollumns, int trimValues) __attribute((__cdecl__)); 
# 469
extern struct CppTest_DataSource *CppTest_Ds(const char * dataSourceName) __attribute((__cdecl__)); 
# 486 "C:\\Program Files\\Parasoft\\C++test\\10.3.2\\engine\\runtime\\include/cpptest_runtime_u.h"
extern const char *cpptestFormatBuffer(char * buffer, const char * format, ...) __attribute((__cdecl__)); 
# 495
__attribute((__cdecl__)) extern int cpptestCharPtrsEqual(const char * expected, const char * actual); 
# 506 "C:\\Program Files\\Parasoft\\C++test\\10.3.2\\engine\\runtime\\include/cpptest_runtime_u.h"
extern int cpptestWCharPtrsEqual(const void * expected, const void * actual); 



extern int cpptestWCharPtrsNEqual(const void * expected, const void * actual, unsigned maxSize); 




__attribute((__cdecl__)) extern void cpptestUnhandledStructuredExceptionInThread(unsigned code); 

__attribute((__cdecl__)) extern int cpptestUnhandledStructuredExceptionInTestCase(unsigned code); 

__attribute((__cdecl__)) extern void cpptestUnhandledCppExceptionInThread(void); 

__attribute((__cdecl__)) extern void cpptestNoExpectedCppExceptionInTestCase(const char * e); 

__attribute((__cdecl__)) extern void cpptestUnhandledStdExceptionInTestCase(const char * what); 

__attribute((__cdecl__)) extern void cpptestUnhandledCppExceptionInTestCase(void); 
# 533
__attribute((__cdecl__)) extern void cpptestSignalFound(int sigNo); 


__attribute((__cdecl__)) extern __CPTR_TestCaseBreakFuncPtr cpptestGetTestCaseBreakFuncPtr(void); 


__attribute((__cdecl__)) extern __CPTR_TestCaseBreakFuncPtr cpptestSetTestCaseBreakFuncPtr(__CPTR_TestCaseBreakFuncPtr funcpPtr); 
# 556 "C:\\Program Files\\Parasoft\\C++test\\10.3.2\\engine\\runtime\\include/cpptest_runtime_u.h"
__attribute((__cdecl__)) extern char cpptestLimitsGetMaxChar(void); 
# 562
__attribute((__cdecl__)) extern char cpptestLimitsGetMinChar(void); 
# 568
__attribute((__cdecl__)) extern signed char cpptestLimitsGetMaxSignedChar(void); 
# 574
__attribute((__cdecl__)) extern signed char cpptestLimitsGetMinSignedChar(void); 
# 580
__attribute((__cdecl__)) extern unsigned char cpptestLimitsGetMaxUnsignedChar(void); 
# 587
__attribute((__cdecl__)) extern short cpptestLimitsGetMaxShort(void); 
# 593
__attribute((__cdecl__)) extern short cpptestLimitsGetMinShort(void); 
# 599
__attribute((__cdecl__)) extern unsigned short cpptestLimitsGetMaxUnsignedShort(void); 
# 606
__attribute((__cdecl__)) extern int cpptestLimitsGetMaxInt(void); 
# 612
__attribute((__cdecl__)) extern int cpptestLimitsGetMinInt(void); 
# 618
__attribute((__cdecl__)) extern unsigned cpptestLimitsGetMaxUnsignedInt(void); 
# 625
__attribute((__cdecl__)) extern long cpptestLimitsGetMaxLong(void); 
# 631
__attribute((__cdecl__)) extern long cpptestLimitsGetMinLong(void); 
# 637
__attribute((__cdecl__)) extern unsigned long cpptestLimitsGetMaxUnsignedLong(void); 
# 644
__attribute((__cdecl__)) extern float cpptestLimitsGetMaxPosFloat(void); 
# 650
__attribute((__cdecl__)) extern float cpptestLimitsGetMinNegFloat(void); 
# 656
__attribute((__cdecl__)) extern float cpptestLimitsGetMaxNegFloat(void); 
# 662
__attribute((__cdecl__)) extern float cpptestLimitsGetMinPosFloat(void); 
# 669
__attribute((__cdecl__)) extern double cpptestLimitsGetMaxPosDouble(void); 
# 675
__attribute((__cdecl__)) extern double cpptestLimitsGetMinNegDouble(void); 
# 681
__attribute((__cdecl__)) extern double cpptestLimitsGetMaxNegDouble(void); 
# 687
__attribute((__cdecl__)) extern double cpptestLimitsGetMinPosDouble(void); 
# 694
__attribute((__cdecl__)) extern long double cpptestLimitsGetMaxPosLongDouble(void); 
# 700
__attribute((__cdecl__)) extern long double cpptestLimitsGetMinNegLongDouble(void); 
# 706
__attribute((__cdecl__)) extern long double cpptestLimitsGetMaxNegLongDouble(void); 
# 712
__attribute((__cdecl__)) extern long double cpptestLimitsGetMinPosLongDouble(void); 
# 729 "C:\\Program Files\\Parasoft\\C++test\\10.3.2\\engine\\runtime\\include/cpptest_runtime_u.h"
__attribute((__cdecl__)) extern int CppTest_IsCurrentTestCase(const char * id); 
# 735
extern const char *CppTest_GetCurrentTestCaseName(void) __attribute((__cdecl__)); 
# 741
extern const char *CppTest_GetCurrentTestSuiteName(void) __attribute((__cdecl__)); 
# 749
extern const char *CppTest_Format(const char * format, ...) __attribute((__cdecl__)); 
# 755
typedef struct CppTest_StreamRedirectStruct CppTest_StreamRedirect; 
typedef void (*CppTest_ClearFlush)(void); 
typedef int (*CppTest_StreamDup)(long, int); 
# 764
void CppTest_flushStdOutput(void); 
# 772
void CppTest_flushStdError(void); 
# 779
void CppTest_clearStdInput(void); 

int CppTest_streamDup(long, int); 
# 848 "C:\\Program Files\\Parasoft\\C++test\\10.3.2\\engine\\runtime\\include/cpptest_runtime_u.h"
extern CppTest_StreamRedirect *CppTest_StreamRedirectInput(int fd, const char * value, CppTest_ClearFlush ptr, CppTest_StreamDup ptr1) __attribute((__cdecl__)); 
# 863 "C:\\Program Files\\Parasoft\\C++test\\10.3.2\\engine\\runtime\\include/cpptest_runtime_u.h"
extern CppTest_StreamRedirect *CppTest_StreamRedirectNInput(int fd, const char * value, unsigned size, CppTest_ClearFlush ptr, CppTest_StreamDup ptr1) __attribute((__cdecl__)); 
# 875 "C:\\Program Files\\Parasoft\\C++test\\10.3.2\\engine\\runtime\\include/cpptest_runtime_u.h"
extern CppTest_StreamRedirect *CppTest_StreamRedirectOutput(int fd, CppTest_ClearFlush ptr) __attribute((__cdecl__)); 
# 890 "C:\\Program Files\\Parasoft\\C++test\\10.3.2\\engine\\runtime\\include/cpptest_runtime_u.h"
__attribute((__cdecl__)) extern int CppTest_StreamCompare(CppTest_StreamRedirect * redirect, const char * value); 
# 908 "C:\\Program Files\\Parasoft\\C++test\\10.3.2\\engine\\runtime\\include/cpptest_runtime_u.h"
__attribute((__cdecl__)) extern int CppTest_StreamNCompare(CppTest_StreamRedirect * redirect, const char * value, unsigned size); 
# 921 "C:\\Program Files\\Parasoft\\C++test\\10.3.2\\engine\\runtime\\include/cpptest_runtime_u.h"
__attribute((__cdecl__)) extern int CppTest_StreamSearch(CppTest_StreamRedirect * redirect, const char * pattern); 
# 934 "C:\\Program Files\\Parasoft\\C++test\\10.3.2\\engine\\runtime\\include/cpptest_runtime_u.h"
__attribute((__cdecl__)) extern int CppTest_StreamNSearch(CppTest_StreamRedirect * redirect, const char * pattern, unsigned size); 
# 948 "C:\\Program Files\\Parasoft\\C++test\\10.3.2\\engine\\runtime\\include/cpptest_runtime_u.h"
extern char *CppTest_StreamReadData(CppTest_StreamRedirect * redirect, unsigned * len) __attribute((__cdecl__)); 
# 958
__attribute((__cdecl__)) extern void CppTest_StreamReset(CppTest_StreamRedirect * redirect); 
# 966
__attribute((__cdecl__)) extern void CppTest_ClearRedirects(void); 
# 975 "C:\\Program Files\\Parasoft\\C++test\\10.3.2\\engine\\runtime\\include/cpptest_runtime_u.h"
extern struct CppTest_DataSource *cpptestGetCurrentDataSource(void) __attribute((__cdecl__)); 
# 981
__attribute((__cdecl__)) extern void cpptestIgnoreCurrStackElement(void); 


typedef void (*CppTestThreadInitCallback)(void); 




__attribute((__cdecl__)) extern void cpptestSetThreadInitCallback(CppTestThreadInitCallback callback); 


typedef void (*CppTestPropertiesInitCallback)(void); 




__attribute((__cdecl__)) extern void cpptestSetPropertiesInitCallback(CppTestPropertiesInitCallback callback); 
# 1003
__attribute((__cdecl__)) extern void cpptestInitializeRuntime(CppTestPropertiesInitCallback propInitCallback, CppTestThreadInitCallback threadInitCallback, CppTest_System * system); 
# 1012
__attribute((__cdecl__)) extern void cpptestFinalizeRuntime(void); 
# 1018
__attribute((__cdecl__)) extern void cpptestCheckMemoryLeaks(const char * file, unsigned line, int isAssert); 




typedef 
# 1020
struct { 
long long seconds; 
long long nanoseconds; 
} CppTest_Time; 
# 1030
extern void cpptestCheckTimeout(void); 
# 1036
__attribute((__cdecl__)) extern CppTest_Time CppTest_TimeInit(long long seconds, long long nanoseconds); 
# 1043
__attribute((__cdecl__)) extern CppTest_Time CppTest_TimeCurrent(void); 




__attribute((__cdecl__)) extern CppTest_Time CppTest_TimeDiff(CppTest_Time t1, CppTest_Time t2); 
# 1057 "C:\\Program Files\\Parasoft\\C++test\\10.3.2\\engine\\runtime\\include/cpptest_runtime_u.h"
__attribute((__cdecl__)) extern int CppTest_TimeCompare(CppTest_Time t1, CppTest_Time t2); 
# 1063
const char *CppTestCallProgramWrapper(const char * program, int * pResult, const char * param1, const char * param2, const char * param3) __attribute((__cdecl__)); 
# 1070
__attribute((__cdecl__)) extern void cpptestUnhandledExceptionTerminate(void); 
# 1077
__attribute((__cdecl__)) extern void cpptestAssertException(const char * file, unsigned line, const char * message, const char * arg1, const char * arg2, const char * arg3, const char * arg4, int kind); 


void CppTest_InitializeRuntime(void); 

void CppTest_FinalizeRuntime(void); 

extern char **CppTest_CmdLineToArgv(const char * cmdLine, int * argc) __attribute((__cdecl__)); 

__attribute((__cdecl__)) extern void CppTest_FreeArgv(int argc, char * argv[]); 



extern CppTest_wchar_t **CppTest_CmdLineToArgvW(const CppTest_wchar_t * cmdLine, int * argc) __attribute((__cdecl__)); 

__attribute((__cdecl__)) extern void CppTest_FreeArgvW(int argc, CppTest_wchar_t * argv[]); 



int CppTest_Main(int argc, char * argv[]); 



int CppTest_MainW(int argc, CppTest_wchar_t * argv[]); 



extern const char *cpptestStringPool(int id, const char * str) __attribute((__cdecl__)); 

__attribute((__cdecl__)) int CppTest_IsCurrentContext(const char * context); 




__attribute((__cdecl__)) int cpptestUnhandledStructuredExceptionInTestCaseHandler(struct _EXCEPTION_RECORD * exception, void * b, struct _CONTEXT * c, void * d); 
# 1118
extern void *cpptestDsMalloc(size_t size) __attribute((__cdecl__)); 


__attribute((__cdecl__)) extern void cpptestDsFree(void * str); 


__attribute((__cdecl__)) extern void cpptestDsCsvError(CppTest_ErrorCode errorCode, const char * err, const char * file, unsigned line, unsigned column); 



__attribute((__cdecl__)) extern void cpptestDsCsvErrorOpeningFile(const char * err, const char * file); 


__attribute((__cdecl__)) extern void cpptestNoDsError(const char * dataSourceName); 


__attribute((__cdecl__)) extern void cpptestDsErrorInValue(const char * value); 


__attribute((__cdecl__)) extern void cpptestDsUnknownValue(const char * name); 


__attribute((__cdecl__)) extern int cpptestDsNotInitialized(void); 


__attribute((__cdecl__)) extern int cpptestDsMethodNotInitialized(const char * method); 


__attribute((__cdecl__)) extern void cpptestAssertCall(const char * message, const char * file, unsigned line); 


__attribute((__cdecl__)) extern void cpptestExitCall(int exitCode); 


__attribute((__cdecl__)) extern void cpptestAbortCall(void); 


__attribute((__cdecl__)) extern void cpptestRiseCall(int exitCode); 
# 1164
__attribute((__cdecl__)) extern void cpptestTooLargeStackTrace(unsigned maxAllowedStackTraceDepth); 



__attribute((__cdecl__)) extern void cpptestTestCaseNotValidated(const char * file, unsigned line); 


__attribute((__cdecl__)) extern void cpptestTriggerError(const char * triggerName, unsigned errorCode, const void * details, const char * file, unsigned line); 


__attribute((__cdecl__)) extern void cpptestReport(const char * txt, const char * file, unsigned line, int reportStackTrace); 


__attribute((__cdecl__)) extern void cpptestReportBool(const char * txt, int value, const char * file, unsigned line); 


__attribute((__cdecl__)) extern void cpptestReportInteger(const char * txt, long long value, const char * file, unsigned line); 


__attribute((__cdecl__)) extern void cpptestReportUInteger(const char * txt, unsigned long long value, const char * file, unsigned line); 


__attribute((__cdecl__)) extern void cpptestReportFloat(const char * txt, double value, const char * file, unsigned line); 


__attribute((__cdecl__)) extern void cpptestReportCStr(const char * txt, const char * value, const char * file, unsigned line); 


__attribute((__cdecl__)) extern void cpptestReportCStrN(const char * txt, const char * value, unsigned maxSize, const char * file, unsigned line); 


__attribute((__cdecl__)) extern void cpptestReportMemBuffer(const char * txt, const void * value, unsigned size, const char * file, unsigned line); 


__attribute((__cdecl__)) extern void cpptestReportPtr(const char * txt, int isNull, const char * file, unsigned line); 


__attribute((__cdecl__)) extern void cpptestTriggerReport(const char * triggerName, const char * txt, const char * file, unsigned line); 


__attribute((__cdecl__)) extern void cpptestPostConditionBool(const char * valueString, int value, const char * file, unsigned line); 


__attribute((__cdecl__)) extern void cpptestPostConditionInteger(const char * valueString, long long value, const char * file, unsigned line); 


__attribute((__cdecl__)) extern void cpptestPostConditionUInteger(const char * valueString, unsigned long long value, const char * file, unsigned line); 


__attribute((__cdecl__)) extern void cpptestPostConditionFloat(const char * valueString, double value, const char * file, unsigned line); 


__attribute((__cdecl__)) extern void cpptestPostConditionCStr(const char * valueString, const char * value, const char * file, unsigned line); 


__attribute((__cdecl__)) extern void cpptestPostConditionCStrN(const char * valueString, const char * value, unsigned maxSize, const char * file, unsigned line); 


__attribute((__cdecl__)) extern void cpptestPostConditionMemBuffer(const char * valueString, const void * value, unsigned size, const char * file, unsigned line); 


__attribute((__cdecl__)) extern void cpptestPostConditionPtr(const char * valueString, int isNull, const char * file, unsigned line); 


__attribute((__cdecl__)) extern void cpptestPostConditionExternal(const char * userMessage, const char * ret, const char * file, unsigned line); 


__attribute((__cdecl__)) extern void cpptestExternalProcessError(CppTest_ErrorCode errorCode, const char * err); 


__attribute((__cdecl__)) extern void cpptestExternalProcessErrorFull(CppTest_ErrorCode errorCode, const char * err, const char * program, const char * param1, const char * param2, const char * param3); 
# 1240
__attribute((__cdecl__)) extern int cpptestAssertion(int value, const char * userMessage, const char * conditionStr, const char * file, unsigned line); 


__attribute((__cdecl__)) extern int cpptestBitAssertion(int value, unsigned mask, unsigned expected, unsigned actual, const char * userMessage, const char * actualStr, const char * file, unsigned line); 



__attribute((__cdecl__)) extern int cpptestEqualAssertion(int value, const char * userMessage, const char * expectedStr, const char * actualStr, const char * file, unsigned line); 



__attribute((__cdecl__)) extern int cpptestBoolEqualAssertion(int value, int expected, int actual, const char * userMessage, const char * expectedStr, const char * actualStr, const char * file, unsigned line); 



__attribute((__cdecl__)) extern int cpptestIntegerEqualAssertion(int value, long long expected, long long actual, int hasDelta, long long delta, unsigned * arrayIndex, const char * userMessage, const char * expectedStr, const char * actualStr, const char * file, unsigned line); 




__attribute((__cdecl__)) extern int cpptestUIntegerEqualAssertion(int value, unsigned long long expected, unsigned long long actual, int hasDelta, unsigned long long delta, unsigned * arrayIndex, const char * userMessage, const char * expectedStr, const char * actualStr, const char * file, unsigned line); 




__attribute((__cdecl__)) extern int cpptestFloatEqualAssertion(int value, double expected, double actual, int hasDelta, double delta, unsigned * arrayIndex, const char * userMessage, const char * expectedStr, const char * actualStr, const char * file, unsigned line); 




__attribute((__cdecl__)) extern int cpptestFloatFmtEqualAssertion(int value, double actual, const char * userMessage, const char * expectedStr, const char * actualStr, const char * file, unsigned line); 



__attribute((__cdecl__)) extern int cpptestCstrEqualAssertion(int value, const char * expected, const char * actual, unsigned * arrayIndex, const char * userMessage, const char * expectedStr, const char * actualStr, const char * file, unsigned line); 



__attribute((__cdecl__)) extern int cpptestCstrNEqualAssertion(int value, const char * expected, const char * actual, unsigned maxSize, const char * userMessage, const char * expectedStr, const char * actualStr, const char * file, unsigned line); 



__attribute((__cdecl__)) extern int cpptestMemBufferEqualAssertion(int value, const void * expected, const void * actual, unsigned size, const char * userMessage, const char * expectedStr, const char * actualStr, const char * file, unsigned line); 




__attribute((__cdecl__)) extern int cpptestPtrEqualAssertion(int value, const void * expected, const void * actual, unsigned * arrayIndex, const char * userMessage, const char * expectedStr, const char * actualStr, const char * file, unsigned line); 
# 1293
__attribute((__cdecl__)) extern int cpptestWCstrEqualAssertion(int value, const CppTest_wchar_t * expected, const CppTest_wchar_t * actual, unsigned * arrayIndex, const char * userMessage, const char * expectedStr, const char * actualStr, const char * file, unsigned line); 
# 1299
__attribute((__cdecl__)) extern void cpptestThrowAssertion(int value, const char * userMessage, const char * exceptionTypeStr, const char * file, unsigned line); 


__attribute((__cdecl__)) extern void cpptestNoThrowAssertion(int value, const char * userMessage, const char * file, unsigned line); 


__attribute((__cdecl__)) extern void cpptestTriggerAssertion(const char * triggerName, const char * userMessage, const char * file, unsigned line); 


__attribute((__cdecl__)) extern void cpptestNoExpectedExceptionInTestCase(const char * e); 


__attribute((__cdecl__)) extern void cpptestStdExceptionInTestCase(const char * what); 


__attribute((__cdecl__)) extern void cpptestExceptionInTestCase(void); 


__attribute((__cdecl__)) extern void cpptestTestCaseDisabled(const char * name, const char * file, unsigned line); 



__attribute((__cdecl__)) extern int cpptestCharPtrsNEqual(const char * expected, const char * actual, unsigned maxSize); 


__attribute((__cdecl__)) extern int cpptestMemBuffersEqual(const void * expected, const void * actual, unsigned size); 


__attribute((__cdecl__)) extern int cpptestFloatsFmtEqual(const char * expected, double actual); 


__attribute((__cdecl__)) extern void cpptestTimeout(unsigned long long timeout); 


__attribute((__cdecl__)) extern void cpptestUserBreak(const char * file, unsigned line); 




extern sigjmp_buf *cpptestGetJmpBuf(void) __attribute((__cdecl__)); 


__attribute((__cdecl__)) extern void cpptestSetJmpCalled(int jmpCalled); 


__attribute((__cdecl__)) extern int cpptestGetJmpCalled(void); 


__attribute((__cdecl__)) extern int cpptestSetJmpReturn(int jmpReturn); 


__attribute((__cdecl__)) extern int cpptestGetJmpReturn(void); 



typedef struct CppTestRuntimeCommandHandlerNodeStruct CppTestRuntimeCommandHandlerNode; 

struct CppTestRuntimeCommandHandlerNodeStruct { 

CppTestRuntimeCommandHandlerNode *prev; 

void (*handler)(unsigned commandId); 
}; 


__attribute((__cdecl__)) extern void cpptestAddRuntimeCommandHandler(CppTestRuntimeCommandHandlerNode * handler); 


__attribute((__cdecl__)) extern void cpptestExecuteRuntimeCommand(unsigned commandId); 


__attribute((__cdecl__)) void cpptestTestCaseSlave(__CPTR_TestCasePtr tc); 


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


void cpptestCreateCallExpectation(const char * funcId, int min, int max, const char * file, unsigned line); 


typedef struct CppTestCallSequenceExpectationStruct CppTestCallSequenceExpectation; 
struct CppTestCallSequenceExpectationStruct { 

CppTestCallSequenceExpectation *(*Add)(const char * funcId); 
CppTestCallSequenceExpectation *(*AddNTimes)(const char * funcId, int times); 
CppTestCallSequenceExpectation *(*AddAnyTimes)(const char * funcId); 
}; 

CppTestCallSequenceExpectation *cpptestCreateCallSequenceExpectation(int isLoop, const char * file, unsigned line); 


__attribute((__cdecl__)) extern void cpptestCallExpectationAssertion(CppTestExpectation * expectation); 


__attribute((__cdecl__)) extern void cpptestNullCallSequenceExpectationAssertion(CppTestExpectation * expectation, const char * funcId); 


__attribute((__cdecl__)) extern void cpptestWrongCallSequenceExpectationAssertion(CppTestExpectation * expectation, const char * funcId, const char * expectedFuncId); 


__attribute((__cdecl__)) extern void cpptestIncompleteCallSequenceExpectationAssertion(CppTestExpectation * expectation); 


__attribute((__cdecl__)) extern void cpptestCallSequenceExpectationPassed(CppTestExpectation * expectation); 
# 41 "C:\\Program Files\\Parasoft\\C++test\\10.3.2\\engine\\runtime\\include/cpptest_data_source.h"
typedef 
# 16
struct CppTest_DataSource { 

const char *(*getMemBuffer)(struct CppTest_DataSource *, const char * name, unsigned * size); 
const char *(*getCStr)(struct CppTest_DataSource *, const char * name); 

const CppTest_wchar_t *(*getWCStr)(struct CppTest_DataSource *, const char * name); 

long long (*getInteger)(struct CppTest_DataSource *, const char * name); 
unsigned long long (*getUInteger)(struct CppTest_DataSource *, const char * name); 
double (*getFloat)(struct CppTest_DataSource *, const char * name); 
int (*getBool)(struct CppTest_DataSource *, const char * name); 
char (*getChar)(struct CppTest_DataSource *, const char * name); 

int (*hasColumn)(struct CppTest_DataSource *, const char * name); 

int (*loadNextData)(struct CppTest_DataSource *); 
int (*hasMoreData)(struct CppTest_DataSource *); 
unsigned (*getIteration)(struct CppTest_DataSource *); 




void (*finalize)(struct CppTest_DataSource *); 

void *data; 
} CppTest_DataSource; 

typedef CppTest_DataSource *(*CppTest_GetDataSourceFPtr)(const char * dataSource, const char * testSuite); 
# 52
extern CppTest_DataSource *CppTest_DsArray(const char ** data, int rows, int columns) __attribute((__cdecl__)); 
extern CppTest_DataSource *CppTest_DsRepeat(int count) __attribute((__cdecl__)); 
extern CppTest_DataSource *CppTest_Ds(const char * dataSourceName) __attribute((__cdecl__)); 


extern CppTest_DataSource *CppTest_DsCsv(const char * fileName, char separator, int useCollumns, int trimValues) __attribute((__cdecl__)); 
# 22 "C:\\Program Files\\Parasoft\\C++test\\10.3.2\\engine\\runtime\\include/trigger/c/common.h"
typedef void (*tgr_func_ptr)(); 

typedef struct tgr_value_s tgr_value; 

typedef struct tgr_type_vtbl *tgr_type_vtbl_ptr; 
typedef struct tgr_type *tgr_type_ptr; 
typedef struct tgr_value_s *tgr_value_ptr; 
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


tgr_time tgr_get_curr_time(void); 
# 15 "C:\\Program Files\\Parasoft\\C++test\\10.3.2\\engine\\runtime\\include/trigger/c/type.h"
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
# 15 "C:\\Program Files\\Parasoft\\C++test\\10.3.2\\engine\\runtime\\include/trigger/c/value.h"
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
struct tgr_error_wrapper err; 
struct tgr_position_wrapper pos; 
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
# 40 "C:\\Program Files\\Parasoft\\C++test\\10.3.2\\engine\\runtime\\include/trigger/c/error_type.h"
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


tgr_type_ptr tgr_error_type(void); 


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
# 16 "C:\\Program Files\\Parasoft\\C++test\\10.3.2\\engine\\runtime\\include/trigger/c/void_type.h"
int tgr_void_type_is_void(tgr_value_ptr value); 


const char *tgr_void_type_get_string(tgr_value_ptr value); 


tgr_type_ptr tgr_void_type(void); 


tgr_value tgr_void(void); 
# 52 "C:\\Program Files\\Parasoft\\C++test\\10.3.2\\engine\\runtime\\include/trigger/c/instruction.h"
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
# 16 "C:\\Program Files\\Parasoft\\C++test\\10.3.2\\engine\\runtime\\include/trigger/c/pos_type.h"
const char *tgr_pos_type_get_string(tgr_value_ptr value); 


tgr_type_ptr tgr_pos_type(void); 


tgr_value tgr_pos(const char * file, unsigned line); 
# 17 "C:\\Program Files\\Parasoft\\C++test\\10.3.2\\engine\\runtime\\include/trigger/c/boolean_type.h"
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


tgr_type_ptr tgr_boolean_type(void); 


tgr_value tgr_boolean(int v); 
# 17 "C:\\Program Files\\Parasoft\\C++test\\10.3.2\\engine\\runtime\\include/trigger/c/integer_type.h"
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


tgr_type_ptr tgr_char_type(void); 


tgr_value tgr_char(char c); 


long long tgr_schar_type_get_integer(tgr_value_ptr value); 


tgr_value tgr_schar_type_do_multiply(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_schar_type_do_divide(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_schar_type_do_plus(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_schar_type_do_minus(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_schar_type_do_ref_assign(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_schar_type_to_rvalue(tgr_value_ptr ref); 


tgr_type_ptr tgr_schar_type(void); 


tgr_value tgr_schar(signed char sc); 


long long tgr_uchar_type_get_integer(tgr_value_ptr value); 


tgr_value tgr_uchar_type_do_multiply(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_uchar_type_do_divide(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_uchar_type_do_plus(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_uchar_type_do_minus(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_uchar_type_do_ref_assign(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_uchar_type_to_rvalue(tgr_value_ptr ref); 


tgr_type_ptr tgr_uchar_type(void); 


tgr_value tgr_uchar(unsigned char uc); 



long long tgr_wchar_t_type_get_integer(tgr_value_ptr value); 


tgr_value tgr_wchar_t_type_do_multiply(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_wchar_t_type_do_divide(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_wchar_t_type_do_plus(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_wchar_t_type_do_minus(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_wchar_t_type_do_ref_assign(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_wchar_t_type_to_rvalue(tgr_value_ptr ref); 


tgr_type_ptr tgr_wchar_t_type(void); 


tgr_value tgr_wchar_t(wchar_t c); 


long long tgr_short_type_get_integer(tgr_value_ptr value); 


tgr_value tgr_short_type_do_multiply(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_short_type_do_divide(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_short_type_do_plus(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_short_type_do_minus(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_short_type_do_ref_assign(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_short_type_to_rvalue(tgr_value_ptr ref); 


tgr_type_ptr tgr_short_type(void); 


tgr_value tgr_short(short s); 


long long tgr_ushort_type_get_integer(tgr_value_ptr value); 


tgr_value tgr_ushort_type_do_multiply(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_ushort_type_do_divide(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_ushort_type_do_plus(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_ushort_type_do_minus(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_ushort_type_do_ref_assign(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_ushort_type_to_rvalue(tgr_value_ptr ref); 


tgr_type_ptr tgr_ushort_type(void); 


tgr_value tgr_ushort(unsigned short us); 


long long tgr_int_type_get_integer(tgr_value_ptr value); 


tgr_value tgr_int_type_do_multiply(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_int_type_do_divide(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_int_type_do_plus(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_int_type_do_minus(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_int_type_do_ref_assign(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_int_type_to_rvalue(tgr_value_ptr ref); 


tgr_type_ptr tgr_int_type(void); 


tgr_value tgr_int(int i); 


long long tgr_uint_type_get_integer(tgr_value_ptr value); 


tgr_value tgr_uint_type_do_multiply(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_uint_type_do_divide(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_uint_type_do_plus(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_uint_type_do_minus(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_uint_type_do_ref_assign(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_uint_type_to_rvalue(tgr_value_ptr ref); 


tgr_type_ptr tgr_uint_type(void); 


tgr_value tgr_uint(unsigned ui); 


long long tgr_long_type_get_integer(tgr_value_ptr value); 


tgr_value tgr_long_type_do_multiply(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_long_type_do_divide(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_long_type_do_plus(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_long_type_do_minus(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_long_type_do_ref_assign(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_long_type_to_rvalue(tgr_value_ptr ref); 


tgr_type_ptr tgr_long_type(void); 


tgr_value tgr_long(long l); 


long long tgr_ulong_type_get_integer(tgr_value_ptr value); 


tgr_value tgr_ulong_type_do_multiply(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_ulong_type_do_divide(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_ulong_type_do_plus(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_ulong_type_do_minus(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_ulong_type_do_ref_assign(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_ulong_type_to_rvalue(tgr_value_ptr ref); 


tgr_type_ptr tgr_ulong_type(void); 


tgr_value tgr_ulong(unsigned long ul); 


long long tgr_llong_type_get_integer(tgr_value_ptr value); 


tgr_value tgr_llong_type_do_multiply(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_llong_type_do_divide(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_llong_type_do_plus(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_llong_type_do_minus(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_llong_type_do_ref_assign(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_llong_type_to_rvalue(tgr_value_ptr ref); 


tgr_type_ptr tgr_llong_type(void); 


tgr_value tgr_llong(long long ll); 


long long tgr_ullong_type_get_integer(tgr_value_ptr value); 


tgr_value tgr_ullong_type_do_multiply(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_ullong_type_do_divide(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_ullong_type_do_plus(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_ullong_type_do_minus(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_ullong_type_do_ref_assign(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_ullong_type_to_rvalue(tgr_value_ptr ref); 


tgr_type_ptr tgr_ullong_type(void); 


tgr_value tgr_ullong(unsigned long long ull); 


tgr_type_ptr tgr_integer_type(unsigned size, int sign); 
# 19 "C:\\Program Files\\Parasoft\\C++test\\10.3.2\\engine\\runtime\\include/trigger/c/ref_type.h"
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
# 17 "C:\\Program Files\\Parasoft\\C++test\\10.3.2\\engine\\runtime\\include/trigger/c/floating_type.h"
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


tgr_type_ptr tgr_float_type(void); 


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


tgr_type_ptr tgr_double_type(void); 


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


tgr_type_ptr tgr_ldouble_type(void); 


tgr_value tgr_ldouble(long double ld); 
# 19 "C:\\Program Files\\Parasoft\\C++test\\10.3.2\\engine\\runtime\\include/trigger/c/func_ptr_type.h"
int tgr_func_ptr_type_is_func_pointer(tgr_value_ptr value); 


int tgr_func_ptr_type_get_bool(tgr_value_ptr value); 


tgr_func_ptr tgr_func_ptr_type_get_func_pointer(tgr_value_ptr value); 


const char *tgr_func_ptr_type_get_string(tgr_value_ptr value); 


tgr_value tgr_func_ptr_type_get_bool_value(tgr_value_ptr value); 


tgr_value tgr_func_ptr_type_is_equal(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_func_ptr_type_do_ref_assign(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_func_ptr_type_do_not(tgr_value_ptr operand); 


tgr_value tgr_func_ptr_type_to_rvalue(tgr_value_ptr ref); 


tgr_type_ptr tgr_func_ptr_type(void); 


tgr_value tgr_func(tgr_func_ptr func); 
# 17 "C:\\Program Files\\Parasoft\\C++test\\10.3.2\\engine\\runtime\\include/trigger/c/class_type.h"
int tgr_class_type_is_object(tgr_value_ptr value); 


const char *tgr_class_type_get_string(tgr_value_ptr value); 


tgr_value tgr_class_type_to_rvalue(tgr_value_ptr ref); 


tgr_type_vtbl_ptr tgr_class_type_default_vtbl(void); 


tgr_value tgr_object(const volatile void * obj_ptr, tgr_type_ptr class_type); 

struct tgr_class_definition { 

int initialized; 
struct tgr_type_vtbl vtbl; 
struct tgr_type type; 
}; 



void tgr_initialize_class_definition(tgr_class_definition_ptr class_definition, unsigned class_size); 
# 23 "C:\\Program Files\\Parasoft\\C++test\\10.3.2\\engine\\runtime\\include/trigger/c/ptr_type.h"
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
# 23 "C:\\Program Files\\Parasoft\\C++test\\10.3.2\\engine\\runtime\\include/trigger/c/array_type.h"
const char *tgr_array_type_get_string(tgr_value_ptr value); 


tgr_value tgr_array_type_do_at(tgr_value_ptr arr, tgr_value_ptr idx); 


tgr_value tgr_array_type_to_rvalue(tgr_value_ptr ref); 


tgr_type_ptr tgr_array_type(tgr_type_ptr sub_type, unsigned size); 
# 17 "C:\\Program Files\\Parasoft\\C++test\\10.3.2\\engine\\runtime\\include/trigger/c/code.h"
typedef tgr_value (*tgr_external_func_ptr)(tgr_running_data_ptr running_data, tgr_args_ptr args); 


struct tgr_code { 

struct tgr_instruction_list instructions; 
}; 


void tgr_code_initialize(tgr_code_ptr code); 


void tgr_code_clear(tgr_code_ptr code); 


void tgr_code_add_instruction(tgr_code_ptr code, tgr_instruction_kind kind); 


void tgr_code_add_instruction_with_arg(tgr_code_ptr code, tgr_instruction_kind kind, tgr_value arg); 
# 21 "C:\\Program Files\\Parasoft\\C++test\\10.3.2\\engine\\runtime\\include/trigger/c/trigger.h"
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
struct tgr_code code; 
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
# 17 "C:\\Program Files\\Parasoft\\C++test\\10.3.2\\engine\\runtime\\include/trigger/c/manager.h"
tgr_trigger_list_ptr tgr_get_triggers(void); 


tgr_trigger_ptr tgr_add(const char * name, tgr_run_mode run_mode); 


void tgr_remove(const char * name); 


void tgr_remove_all_with_creation_time(tgr_time start, tgr_time stop); 


void tgr_remove_all(void); 
# 16 "C:\\Program Files\\Parasoft\\C++test\\10.3.2\\engine\\runtime\\include/trigger/c/code_helper.h"
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


tgr_code_ptr *tgr_get_curr_code(void); 


tgr_code_helper_ptr tgr_code_helper_assert(const char * message); 


tgr_code_helper_ptr tgr_code_helper_fail(const char * message); 


tgr_code_helper_ptr tgr_code_helper_report(const char * message); 


tgr_code_helper_ptr tgr_code_helper_arg(const char * argName); 


tgr_code_helper_ptr tgr_code_helper_arg_by_expr(void); 


tgr_code_helper_ptr tgr_code_helper_field(const char * field_name); 


tgr_code_helper_ptr tgr_code_helper_field_by_expr(void); 


tgr_code_helper_ptr tgr_code_helper_if(void); 


tgr_code_helper_ptr tgr_code_helper_else(void); 


tgr_code_helper_ptr tgr_code_helper_assign(void); 


tgr_code_helper_ptr tgr_code_helper_or(void); 


tgr_code_helper_ptr tgr_code_helper_and(void); 


tgr_code_helper_ptr tgr_code_helper_equal(void); 


tgr_code_helper_ptr tgr_code_helper_not_equal(void); 


tgr_code_helper_ptr tgr_code_helper_greater(void); 


tgr_code_helper_ptr tgr_code_helper_greater_or_equal(void); 


tgr_code_helper_ptr tgr_code_helper_less(void); 


tgr_code_helper_ptr tgr_code_helper_less_or_equal(void); 


tgr_code_helper_ptr tgr_code_helper_multiply(void); 


tgr_code_helper_ptr tgr_code_helper_divide(void); 


tgr_code_helper_ptr tgr_code_helper_plus(void); 


tgr_code_helper_ptr tgr_code_helper_minus(void); 


tgr_code_helper_ptr tgr_code_helper_not(void); 


tgr_code_helper_ptr tgr_code_helper_at(void); 


tgr_code_helper_ptr tgr_code_helper_inc(void); 


tgr_code_helper_ptr tgr_code_helper_dec(void); 


tgr_code_helper_ptr tgr_code_helper_lp(void); 


tgr_code_helper_ptr tgr_code_helper_rp(void); 


tgr_code_helper_ptr tgr_code_helper_run_id(void); 


tgr_code_helper_ptr tgr_code_helper_execute(tgr_external_func_ptr function); 


tgr_code_helper_ptr tgr_code_helper_with_arg(const char * name); 


tgr_code_helper_ptr tgr_code_helper_return(void); 


tgr_code_helper_ptr tgr_code_helper_lb(void); 


tgr_code_helper_ptr tgr_code_helper_rb(void); 


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



tgr_code_helper_ptr tgr_code_helper_instance(void); 


tgr_code_helper_ptr tgr_create_full(const char * name, tgr_run_mode run_mode, const char * file, unsigned line); 
# 476
tgr_code_helper_ptr tgr_create(const char * name, tgr_run_mode run_mode); 
# 39 "C:\\Program Files\\Parasoft\\C++test\\10.3.2\\engine\\runtime\\include/trigger/c/handlers.h"
typedef void (*tgr_error_handler_func_ptr)(const char * trigger_name, unsigned error_kind, const void * details, const char * def_file, unsigned def_line); 
# 45
typedef void (*tgr_fail_handler_func_ptr)(const char * trigger_name, const char * message, const char * def_file, unsigned def_line); 




typedef void (*tgr_report_handler_func_ptr)(const char * trigger_name, const char * message, const char * def_file, unsigned def_line); 
# 86 "C:\\Program Files\\Parasoft\\C++test\\10.3.2\\engine\\runtime\\include/trigger/c/handlers.h"
tgr_error_handler_func_ptr *tgr_get_error_handler(void); 


tgr_fail_handler_func_ptr *tgr_get_fail_handler(void); 


tgr_report_handler_func_ptr *tgr_get_report_handler(void); 


void tgr_handle_error(const char * trigger_name, unsigned error_kind, const void * details, const char * def_file, unsigned def_line); 
# 102
void tgr_handle_fail(const char * trigger_name, const char * message, const char * def_file, unsigned def_line); 
# 108
void tgr_handle_report(const char * trigger_name, const char * message, const char * def_file, unsigned def_line); 
# 17 "C:\\Program Files\\Parasoft\\C++test\\10.3.2\\engine\\runtime\\include/trigger/c/runner.h"
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
struct tgr_args args; 
}; 


struct tgr_runner { 

struct tgr_running_data running_data; 
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
# 16 "C:\\Program Files\\Parasoft\\C++test\\10.3.2\\engine\\runtime\\include/trigger/c/runner_helper.h"
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



tgr_value (*End)(); 
}; 


tgr_runner_ptr *tgr_get_curr_runner(void); 


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




tgr_value tgr_runner_helper_end(void); 


tgr_runner_helper_ptr tgr_runner_helper_instance(void); 


tgr_runner_helper_ptr tgr_run(const char * name, tgr_run_mode run_mode); 
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
static unsigned CPPTEST_DS_GET_ITERATION(void) 
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
# 897 "C:\\Program Files\\Parasoft\\C++test\\10.3.2\\engine\\runtime\\include/cpptest.h"
typedef int CPPTEST_CALL_ROUTINE(const char *); 
# 20 "C:\\Parasoft_Tutorial\\workspace_tutorial_tantai\\Sensor\\stubs\\autogenerated\\auto_5327593c.c"
int sub_func1(int _MT_var4); 
#if defined(CPPTEST_AUTO_STUB_sub_func1)
# 21
int CppTest_Auto_Stub_sub_func1_sub_func1(int _MT_var2) 
{ 

int __return = 0; 
int __callOrig = 0; 

((((tgr_run("sub_func1", c_tgr_run_before)->WithRefArg)("_MT_var2", &_MT_var2, tgr_int_type())->WithRefArg)("__return", &__return, tgr_int_type())->WithRefArg)("__callOrig", &__callOrig, tgr_int_type())->End)(); 
if (__callOrig) { 
int __return = sub_func1(_MT_var2); 
(((tgr_run("sub_func1", c_tgr_run_after)->WithRefArg)("_MT_var2", &_MT_var2, tgr_int_type())->WithRefArg)("__return", &__return, tgr_int_type())->End)(); 
return __return; 
}  
return __return; 



} 
#endif

#line 1 "__TEST_HARNESS__"
;

