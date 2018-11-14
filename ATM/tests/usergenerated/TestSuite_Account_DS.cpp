#include "cpptest.h"
#include "Account.hxx"

class TestSuite_Account_DS : public CppTest_TestSuite
{
    public:
        CPPTEST_TEST_SUITE(TestSuite_Account_DS);
        CPPTEST_TEST_DS(test_setPassword, CPPTEST_DS("TestPasswordDS"));
        CPPTEST_TEST_SUITE_END();
        
        void setUp();
        void tearDown();

        void test_setPassword();
};

CPPTEST_TEST_SUITE_REGISTRATION(TestSuite_Account_DS);

void TestSuite_Account_DS::setUp()
{
}

void TestSuite_Account_DS::tearDown()
{
}

/* CPPTEST_TEST_CASE_BEGIN test_setPassword */
/* CPPTEST_TEST_CASE_CONTEXT void Account::setPassword(const char *) */
void TestSuite_Account_DS::test_setPassword()
{
    /* Pre-condition initialization */
    /* Initializing argument 0 (this) */ 

	::Account _cpptest_TestObject ;
    /* Initializing argument 1 (password) */ 
    const char * _password  = CPPTEST_DS_GET_CSTR("password");
    /* Tested function call */
    _cpptest_TestObject.setPassword(_password);
    /* Post-condition check */
    CPPTEST_ASSERT_CSTR_EQUAL(CPPTEST_DS_GET_CSTR("result"),_cpptest_TestObject.getPassword());
//    CPPTEST_POST_CONDITION_INTEGER(" _cpptest_TestObject.myAccountNumber", ( _cpptest_TestObject.myAccountNumber ));
//    CPPTEST_POST_CONDITION_FLOAT("double _cpptest_TestObject.myBalance", ( _cpptest_TestObject.myBalance ));
//    CPPTEST_POST_CONDITION_CSTR_N("::std::string _cpptest_TestObject.myPassword", ( _cpptest_TestObject.myPassword.c_str() ), 256);
}
/* CPPTEST_TEST_CASE_END test_setPassword */
