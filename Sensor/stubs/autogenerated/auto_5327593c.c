#include "cpptest.h"

/** 
 * This file contains auto-generated stub definitions.
 *
 * Available C++test API functions (see C++test Users Guide for details):
 *     void CppTest_Assert(bool test, const char * message)
 *     void CppTest_Break()
 *     const char* CppTest_GetCurrentTestCaseName()
 *     const char* CppTest_GetCurrentTestSuiteName()
 *     bool CppTest_IsCurrentTestCase(const char* testCaseName)
 */

/** 
 * Header files where the stubbed functions are originally declared.
 * Verify #include directives and add any additional header files as necessary.
 */

/** Auto-generated stub definition for function: int sub_func1(int) */
EXTERN_C_LINKAGE int sub_func1 (int _MT_var4) ;
EXTERN_C_LINKAGE int CppTest_Auto_Stub_sub_func1 (int _MT_var2) 
{
#if CPPTEST_TRIGGER_ENABLED
    int __return = 0;
    int __callOrig = 0;

    CPPTEST_ACTUAL_CALL_C("sub_func1")->WithRefArg("_MT_var2", &_MT_var2, tgr_int_type())->WithRefArg("__return", &__return, tgr_int_type())->WithRefArg("__callOrig", &__callOrig, tgr_int_type())->End();
    if (__callOrig) {
        int __return = sub_func1(_MT_var2);
        CPPTEST_ACTUAL_AFTER_CALL_C("sub_func1")->WithRefArg("_MT_var2", &_MT_var2, tgr_int_type())->WithRefArg("__return", &__return, tgr_int_type())->End();
        return __return;
    }
    return __return;
#else
    return 0;
#endif
}
