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
#include "BaseDisplay.hxx"

/** Auto-generated stub definition for function: virtual void BaseDisplay::showBalance(double) */
void (::BaseDisplay::CppTest_Auto_Stub_showBalance) (double balance) 
{
#if CPPTEST_TRIGGER_ENABLED
    int __callOrig = 0;

    CPPTEST_ACTUAL_CALL("BaseDisplay::showBalance")->WithPtrArg("this", this, tgr_void_type())->WithRefArg("balance", &balance, tgr_double_type())->WithRefArg("__callOrig", &__callOrig, tgr_int_type())->End();
    if (__callOrig) {
        BaseDisplay::showBalance(balance);
        CPPTEST_ACTUAL_AFTER_CALL("BaseDisplay::showBalance")->WithPtrArg("this", this, tgr_void_type())->WithRefArg("balance", &balance, tgr_double_type())->End();
    }
#endif
}

/** Auto-generated stub definition for function: virtual void BaseDisplay::showInfoToUser(const char *) */
void (::BaseDisplay::CppTest_Auto_Stub_showInfoToUser) (const char * message) 
{
#if CPPTEST_TRIGGER_ENABLED
    int __callOrig = 0;

    CPPTEST_ACTUAL_CALL("BaseDisplay::showInfoToUser")->WithPtrArg("this", this, tgr_void_type())->WithRefArg("message", &message, tgr_ptr_type(tgr_char_type()))->WithRefArg("__callOrig", &__callOrig, tgr_int_type())->End();
    if (__callOrig) {
        BaseDisplay::showInfoToUser(message);
        CPPTEST_ACTUAL_AFTER_CALL("BaseDisplay::showInfoToUser")->WithPtrArg("this", this, tgr_void_type())->WithRefArg("message", &message, tgr_ptr_type(tgr_char_type()))->End();
    }
#endif
}
