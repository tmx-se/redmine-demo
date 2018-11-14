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
#include "Account.hxx"
#include "Bank.hxx"

/** Auto-generated stub definition for function: Bank::Bank(void) */
 ::Bank::Bank (::CppTest_Auto_Dummy __CPTR_stub_ctor_param) 
    : myCurrentAccountNumber(0)
{
#if CPPTEST_TRIGGER_ENABLED

    CPPTEST_ACTUAL_CALL("Bank::Bank")->WithPtrArg("this", this, tgr_void_type())->End();
#endif
}

/** Auto-generated stub definition for function: double Account::deposit(double) */
double (::Account::CppTest_Auto_Stub_deposit) (double amount) 
{
#if CPPTEST_TRIGGER_ENABLED
    double __return = 0.0;
    int __callOrig = 0;

    CPPTEST_ACTUAL_CALL("Account::deposit")->WithPtrArg("this", this, tgr_void_type())->WithRefArg("amount", &amount, tgr_double_type())->WithRefArg("__return", &__return, tgr_double_type())->WithRefArg("__callOrig", &__callOrig, tgr_int_type())->End();
    if (__callOrig) {
        double __return = deposit(amount);
        CPPTEST_ACTUAL_AFTER_CALL("Account::deposit")->WithPtrArg("this", this, tgr_void_type())->WithRefArg("amount", &amount, tgr_double_type())->WithRefArg("__return", &__return, tgr_double_type())->End();
        return __return;
    }
    return __return;
#else
    return 0.0;
#endif
}

/** Auto-generated stub definition for function: Account * Bank::getAccount(int, std::string) */
::Account * (::Bank::CppTest_Auto_Stub_getAccount) (int num, ::std::string password) 
{
#if CPPTEST_TRIGGER_ENABLED
    ::Account * __return = 0;
    int __callOrig = 0;

    CPPTEST_ACTUAL_CALL("Bank::getAccount")->WithPtrArg("this", this, tgr_void_type())->WithRefArg("num", &num, tgr_int_type())->WithPtrArg("password", &password, tgr_void_type())->WithRefArg("__return", &__return, tgr_ptr_type(tgr_void_type()))->WithRefArg("__callOrig", &__callOrig, tgr_int_type())->End();
    if (__callOrig) {
        ::Account * __return = getAccount(num, password);
        CPPTEST_ACTUAL_AFTER_CALL("Bank::getAccount")->WithPtrArg("this", this, tgr_void_type())->WithRefArg("num", &num, tgr_int_type())->WithPtrArg("password", &password, tgr_void_type())->WithRefArg("__return", &__return, tgr_ptr_type(tgr_void_type()))->End();
        return __return;
    }
    return __return;
#else
    return 0;
#endif
}

/** Auto-generated stub definition for function: Bank::~Bank(void) */
void (::Bank::CppTest_Auto_Stub_destructor) (void) 
{
#if CPPTEST_TRIGGER_ENABLED
    int __callOrig = 0;

    CPPTEST_ACTUAL_CALL("Bank::~Bank")->WithPtrArg("this", this, tgr_void_type())->WithRefArg("__callOrig", &__callOrig, tgr_int_type())->End();
    if (__callOrig) {
        Bank::~Bank();
        CPPTEST_ACTUAL_AFTER_CALL("Bank::~Bank")->WithPtrArg("this", this, tgr_void_type())->End();
    }
#endif
}
