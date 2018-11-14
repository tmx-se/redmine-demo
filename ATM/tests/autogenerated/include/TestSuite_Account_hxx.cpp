#include "cpptest.h"

CPPTEST_CONTEXT("/ATM/include/Account.hxx");
CPPTEST_TEST_SUITE_INCLUDED_TO("/ATM/ATM.cxx");

class TestSuite_Account_hxx_77fe0d42 : public CppTest_TestSuite
{
    public:
        CPPTEST_TEST_SUITE(TestSuite_Account_hxx_77fe0d42);
        CPPTEST_TEST(test_Account_1);
        CPPTEST_TEST(test_Account_2);
        CPPTEST_TEST(test_Account_4);
        CPPTEST_TEST(test_getAccountNumber_1);
        CPPTEST_TEST(test_getAccountNumber_2);
        CPPTEST_TEST(test_getBalance_1);
        CPPTEST_TEST(test_getBalance_2);
        CPPTEST_TEST(test_getPassword_1);
        CPPTEST_TEST(test_getPassword_2);
        CPPTEST_TEST(test_setAccountNumber_1);
        CPPTEST_TEST(test_setAccountNumber_2);
        CPPTEST_TEST(test_setPassword_1);
        CPPTEST_TEST(test_setPassword_2);
        CPPTEST_TEST_SUITE_END();
        
        void setUp();
        void tearDown();

        void test_Account_1();
        void test_Account_2();
        void test_Account_4();
        void test_getAccountNumber_1();
        void test_getAccountNumber_2();
        void test_getBalance_1();
        void test_getBalance_2();
        void test_getPassword_1();
        void test_getPassword_2();
        void test_setAccountNumber_1();
        void test_setAccountNumber_2();
        void test_setPassword_1();
        void test_setPassword_2();
};

CPPTEST_TEST_SUITE_REGISTRATION(TestSuite_Account_hxx_77fe0d42);

void TestSuite_Account_hxx_77fe0d42::setUp()
{
}

void TestSuite_Account_hxx_77fe0d42::tearDown()
{
}

/* CPPTEST_TEST_CASE_BEGIN test_Account_1 */
/* CPPTEST_TEST_CASE_CONTEXT Account::Account(double) */
void TestSuite_Account_hxx_77fe0d42::test_Account_1()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (initial) */ 
    double _initial  = cpptestLimitsGetMaxPosDouble();
    /* Testing constructor. */
    ::Account _return(_initial);
    /* Post-condition check */
    CPPTEST_POST_CONDITION_INTEGER("int _return.myAccountNumber", ( _return.myAccountNumber ));
    CPPTEST_POST_CONDITION_FLOAT("double _return.myBalance", ( _return.myBalance ));
    CPPTEST_POST_CONDITION_CSTR_N("::std::string _return.myPassword", ( _return.myPassword.c_str() ), 256);
}
/* CPPTEST_TEST_CASE_END test_Account_1 */

/* CPPTEST_TEST_CASE_BEGIN test_Account_2 */
/* CPPTEST_TEST_CASE_CONTEXT Account::Account(double) */
void TestSuite_Account_hxx_77fe0d42::test_Account_2()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (initial) */ 
    double _initial  = cpptestLimitsGetMaxNegDouble();
    /* Testing constructor. */
    ::Account _return(_initial);
    /* Post-condition check */
    CPPTEST_POST_CONDITION_INTEGER("int _return.myAccountNumber", ( _return.myAccountNumber ));
    CPPTEST_POST_CONDITION_FLOAT("double _return.myBalance", ( _return.myBalance ));
    CPPTEST_POST_CONDITION_CSTR_N("::std::string _return.myPassword", ( _return.myPassword.c_str() ), 256);
}
/* CPPTEST_TEST_CASE_END test_Account_2 */

/* CPPTEST_TEST_CASE_BEGIN test_Account_4 */
/* CPPTEST_TEST_CASE_CONTEXT Account::Account(void) */
void TestSuite_Account_hxx_77fe0d42::test_Account_4()
{
    /* Pre-condition initialization */
    /* Testing constructor. */
    ::Account _return;
    /* Post-condition check */
    CPPTEST_POST_CONDITION_INTEGER("int _return.myAccountNumber", ( _return.myAccountNumber ));
    CPPTEST_POST_CONDITION_FLOAT("double _return.myBalance", ( _return.myBalance ));
    CPPTEST_POST_CONDITION_CSTR_N("::std::string _return.myPassword", ( _return.myPassword.c_str() ), 256);
}
/* CPPTEST_TEST_CASE_END test_Account_4 */

/* CPPTEST_TEST_CASE_BEGIN test_getAccountNumber_1 */
/* CPPTEST_TEST_CASE_CONTEXT int Account::getAccountNumber(void) const */
void TestSuite_Account_hxx_77fe0d42::test_getAccountNumber_1()
{
    /* Pre-condition initialization */
    /* Initializing argument 0 (this) */ 
        /* Initializing constructor argument 1 (initial) */ 
        double _initial_0  = cpptestLimitsGetMaxPosDouble();
    ::Account _cpptest_TestObject (_initial_0);

    /* Tested function call */
    int _return  = _cpptest_TestObject.getAccountNumber();
    /* Post-condition check */
    CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
    CPPTEST_POST_CONDITION_INTEGER("int _cpptest_TestObject.myAccountNumber", ( _cpptest_TestObject.myAccountNumber ));
    CPPTEST_POST_CONDITION_FLOAT("double _cpptest_TestObject.myBalance", ( _cpptest_TestObject.myBalance ));
    CPPTEST_POST_CONDITION_CSTR_N("::std::string _cpptest_TestObject.myPassword", ( _cpptest_TestObject.myPassword.c_str() ), 256);
}
/* CPPTEST_TEST_CASE_END test_getAccountNumber_1 */

/* CPPTEST_TEST_CASE_BEGIN test_getAccountNumber_2 */
/* CPPTEST_TEST_CASE_CONTEXT int Account::getAccountNumber(void) const */
void TestSuite_Account_hxx_77fe0d42::test_getAccountNumber_2()
{
    /* Pre-condition initialization */
    /* Initializing argument 0 (this) */ 
        /* Initializing constructor argument 1 (initial) */ 
        double _initial_0  = cpptestLimitsGetMaxNegDouble();
    ::Account _cpptest_TestObject (_initial_0);

    /* Tested function call */
    int _return  = _cpptest_TestObject.getAccountNumber();
    /* Post-condition check */
    CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
    CPPTEST_POST_CONDITION_INTEGER("int _cpptest_TestObject.myAccountNumber", ( _cpptest_TestObject.myAccountNumber ));
    CPPTEST_POST_CONDITION_FLOAT("double _cpptest_TestObject.myBalance", ( _cpptest_TestObject.myBalance ));
    CPPTEST_POST_CONDITION_CSTR_N("::std::string _cpptest_TestObject.myPassword", ( _cpptest_TestObject.myPassword.c_str() ), 256);
}
/* CPPTEST_TEST_CASE_END test_getAccountNumber_2 */

/* CPPTEST_TEST_CASE_BEGIN test_getBalance_1 */
/* CPPTEST_TEST_CASE_CONTEXT double Account::getBalance(void) */
void TestSuite_Account_hxx_77fe0d42::test_getBalance_1()
{
    /* Pre-condition initialization */
    /* Initializing argument 0 (this) */ 
        /* Initializing constructor argument 1 (initial) */ 
        double _initial_0  = cpptestLimitsGetMaxPosDouble();
    ::Account _cpptest_TestObject (_initial_0);

    /* Tested function call */
    double _return  = _cpptest_TestObject.getBalance();
    /* Post-condition check */
    CPPTEST_POST_CONDITION_FLOAT("double _return", ( _return ));
    CPPTEST_POST_CONDITION_INTEGER("int _cpptest_TestObject.myAccountNumber", ( _cpptest_TestObject.myAccountNumber ));
    CPPTEST_POST_CONDITION_FLOAT("double _cpptest_TestObject.myBalance", ( _cpptest_TestObject.myBalance ));
    CPPTEST_POST_CONDITION_CSTR_N("::std::string _cpptest_TestObject.myPassword", ( _cpptest_TestObject.myPassword.c_str() ), 256);
}
/* CPPTEST_TEST_CASE_END test_getBalance_1 */

/* CPPTEST_TEST_CASE_BEGIN test_getBalance_2 */
/* CPPTEST_TEST_CASE_CONTEXT double Account::getBalance(void) */
void TestSuite_Account_hxx_77fe0d42::test_getBalance_2()
{
    /* Pre-condition initialization */
    /* Initializing argument 0 (this) */ 
        /* Initializing constructor argument 1 (initial) */ 
        double _initial_0  = cpptestLimitsGetMaxNegDouble();
    ::Account _cpptest_TestObject (_initial_0);

    /* Tested function call */
    double _return  = _cpptest_TestObject.getBalance();
    /* Post-condition check */
    CPPTEST_POST_CONDITION_FLOAT("double _return", ( _return ));
    CPPTEST_POST_CONDITION_INTEGER("int _cpptest_TestObject.myAccountNumber", ( _cpptest_TestObject.myAccountNumber ));
    CPPTEST_POST_CONDITION_FLOAT("double _cpptest_TestObject.myBalance", ( _cpptest_TestObject.myBalance ));
    CPPTEST_POST_CONDITION_CSTR_N("::std::string _cpptest_TestObject.myPassword", ( _cpptest_TestObject.myPassword.c_str() ), 256);
}
/* CPPTEST_TEST_CASE_END test_getBalance_2 */

/* CPPTEST_TEST_CASE_BEGIN test_getPassword_1 */
/* CPPTEST_TEST_CASE_CONTEXT const char * Account::getPassword(void) */
void TestSuite_Account_hxx_77fe0d42::test_getPassword_1()
{
    /* Pre-condition initialization */
    /* Initializing argument 0 (this) */ 
        /* Initializing constructor argument 1 (initial) */ 
        double _initial_0  = cpptestLimitsGetMaxPosDouble();
    ::Account _cpptest_TestObject (_initial_0);

    /* Tested function call */
    const char * _return  = _cpptest_TestObject.getPassword();
    /* Post-condition check */
    CPPTEST_POST_CONDITION_CSTR_N("const char * _return", ( _return ), 256);
    CPPTEST_POST_CONDITION_INTEGER("int _cpptest_TestObject.myAccountNumber", ( _cpptest_TestObject.myAccountNumber ));
    CPPTEST_POST_CONDITION_FLOAT("double _cpptest_TestObject.myBalance", ( _cpptest_TestObject.myBalance ));
    CPPTEST_POST_CONDITION_CSTR_N("::std::string _cpptest_TestObject.myPassword", ( _cpptest_TestObject.myPassword.c_str() ), 256);
}
/* CPPTEST_TEST_CASE_END test_getPassword_1 */

/* CPPTEST_TEST_CASE_BEGIN test_getPassword_2 */
/* CPPTEST_TEST_CASE_CONTEXT const char * Account::getPassword(void) */
void TestSuite_Account_hxx_77fe0d42::test_getPassword_2()
{
    /* Pre-condition initialization */
    /* Initializing argument 0 (this) */ 
        /* Initializing constructor argument 1 (initial) */ 
        double _initial_0  = cpptestLimitsGetMaxNegDouble();
    ::Account _cpptest_TestObject (_initial_0);

    /* Tested function call */
    const char * _return  = _cpptest_TestObject.getPassword();
    /* Post-condition check */
    CPPTEST_POST_CONDITION_CSTR_N("const char * _return", ( _return ), 256);
    CPPTEST_POST_CONDITION_INTEGER("int _cpptest_TestObject.myAccountNumber", ( _cpptest_TestObject.myAccountNumber ));
    CPPTEST_POST_CONDITION_FLOAT("double _cpptest_TestObject.myBalance", ( _cpptest_TestObject.myBalance ));
    CPPTEST_POST_CONDITION_CSTR_N("::std::string _cpptest_TestObject.myPassword", ( _cpptest_TestObject.myPassword.c_str() ), 256);
}
/* CPPTEST_TEST_CASE_END test_getPassword_2 */

/* CPPTEST_TEST_CASE_BEGIN test_setAccountNumber_1 */
/* CPPTEST_TEST_CASE_CONTEXT void Account::setAccountNumber(int) */
void TestSuite_Account_hxx_77fe0d42::test_setAccountNumber_1()
{
    /* Pre-condition initialization */
    /* Initializing argument 0 (this) */ 
        /* Initializing constructor argument 1 (initial) */ 
        double _initial_0  = cpptestLimitsGetMaxPosDouble();
    ::Account _cpptest_TestObject (_initial_0);

    /* Initializing argument 1 (num) */ 
    int _num  = cpptestLimitsGetMaxInt();
    /* Tested function call */
    _cpptest_TestObject.setAccountNumber(_num);
    /* Post-condition check */
    CPPTEST_POST_CONDITION_INTEGER("int _cpptest_TestObject.myAccountNumber", ( _cpptest_TestObject.myAccountNumber ));
    CPPTEST_POST_CONDITION_FLOAT("double _cpptest_TestObject.myBalance", ( _cpptest_TestObject.myBalance ));
    CPPTEST_POST_CONDITION_CSTR_N("::std::string _cpptest_TestObject.myPassword", ( _cpptest_TestObject.myPassword.c_str() ), 256);
}
/* CPPTEST_TEST_CASE_END test_setAccountNumber_1 */

/* CPPTEST_TEST_CASE_BEGIN test_setAccountNumber_2 */
/* CPPTEST_TEST_CASE_CONTEXT void Account::setAccountNumber(int) */
void TestSuite_Account_hxx_77fe0d42::test_setAccountNumber_2()
{
    /* Pre-condition initialization */
    /* Initializing argument 0 (this) */ 
        /* Initializing constructor argument 1 (initial) */ 
        double _initial_0  = cpptestLimitsGetMaxNegDouble();
    ::Account _cpptest_TestObject (_initial_0);

    /* Initializing argument 1 (num) */ 
    int _num  = cpptestLimitsGetMaxInt();
    /* Tested function call */
    _cpptest_TestObject.setAccountNumber(_num);
    /* Post-condition check */
    CPPTEST_POST_CONDITION_INTEGER("int _cpptest_TestObject.myAccountNumber", ( _cpptest_TestObject.myAccountNumber ));
    CPPTEST_POST_CONDITION_FLOAT("double _cpptest_TestObject.myBalance", ( _cpptest_TestObject.myBalance ));
    CPPTEST_POST_CONDITION_CSTR_N("::std::string _cpptest_TestObject.myPassword", ( _cpptest_TestObject.myPassword.c_str() ), 256);
}
/* CPPTEST_TEST_CASE_END test_setAccountNumber_2 */

/* CPPTEST_TEST_CASE_BEGIN test_setPassword_1 */
/* CPPTEST_TEST_CASE_CONTEXT void Account::setPassword(const char *) */
void TestSuite_Account_hxx_77fe0d42::test_setPassword_1()
{
    /* Pre-condition initialization */
    /* Initializing argument 0 (this) */ 
        /* Initializing constructor argument 1 (initial) */ 
        double _initial_0  = cpptestLimitsGetMaxPosDouble();
    ::Account _cpptest_TestObject (_initial_0);

    /* Initializing argument 1 (password) */ 
    const char * _password  = "";
    /* Tested function call */
    _cpptest_TestObject.setPassword(_password);
    /* Post-condition check */
    CPPTEST_POST_CONDITION_INTEGER("int _cpptest_TestObject.myAccountNumber", ( _cpptest_TestObject.myAccountNumber ));
    CPPTEST_POST_CONDITION_FLOAT("double _cpptest_TestObject.myBalance", ( _cpptest_TestObject.myBalance ));
    CPPTEST_POST_CONDITION_CSTR_N("::std::string _cpptest_TestObject.myPassword", ( _cpptest_TestObject.myPassword.c_str() ), 256);
}
/* CPPTEST_TEST_CASE_END test_setPassword_1 */

/* CPPTEST_TEST_CASE_BEGIN test_setPassword_2 */
/* CPPTEST_TEST_CASE_CONTEXT void Account::setPassword(const char *) */
void TestSuite_Account_hxx_77fe0d42::test_setPassword_2()
{
    /* Pre-condition initialization */
    /* Initializing argument 0 (this) */ 
        /* Initializing constructor argument 1 (initial) */ 
        double _initial_0  = cpptestLimitsGetMaxNegDouble();
    ::Account _cpptest_TestObject (_initial_0);

    /* Initializing argument 1 (password) */ 
    const char * _password  = "";
    /* Tested function call */
    _cpptest_TestObject.setPassword(_password);
    /* Post-condition check */
    CPPTEST_POST_CONDITION_INTEGER("int _cpptest_TestObject.myAccountNumber", ( _cpptest_TestObject.myAccountNumber ));
    CPPTEST_POST_CONDITION_FLOAT("double _cpptest_TestObject.myBalance", ( _cpptest_TestObject.myBalance ));
    CPPTEST_POST_CONDITION_CSTR_N("::std::string _cpptest_TestObject.myPassword", ( _cpptest_TestObject.myPassword.c_str() ), 256);
}
/* CPPTEST_TEST_CASE_END test_setPassword_2 */
