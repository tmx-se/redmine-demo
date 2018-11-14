#include "cpptest.h"

CPPTEST_CONTEXT("/ATM/Bank.cxx");
CPPTEST_TEST_SUITE_INCLUDED_TO("/ATM/Bank.cxx");

class TestSuite_Bank_cxx_8cde4201 : public CppTest_TestSuite
{
    public:
        CPPTEST_TEST_SUITE(TestSuite_Bank_cxx_8cde4201);
        CPPTEST_TEST(test_Bank_1);
        CPPTEST_TEST(test_addAccount_1);
        CPPTEST_TEST(test_getAccount_1);
        CPPTEST_TEST(test_getAccount_2);
        CPPTEST_TEST(test_x7eBank_1);
        CPPTEST_TEST_SUITE_END();
        
        void setUp();
        void tearDown();

        void test_Bank_1();
        void test_addAccount_1();
        void test_getAccount_1();
        void test_getAccount_2();
        void test_x7eBank_1();
};

CPPTEST_TEST_SUITE_REGISTRATION(TestSuite_Bank_cxx_8cde4201);

void TestSuite_Bank_cxx_8cde4201::setUp()
{
}

void TestSuite_Bank_cxx_8cde4201::tearDown()
{
}

/* CPPTEST_TEST_CASE_BEGIN test_Bank_1 */
/* CPPTEST_TEST_CASE_CONTEXT Bank::Bank(void) */
void TestSuite_Bank_cxx_8cde4201::test_Bank_1()
{
    /* Pre-condition initialization */
    /* Testing constructor. */
    ::Bank _return;
    /* Post-condition check */
    CPPTEST_POST_CONDITION_INTEGER("int _return.myCurrentAccountNumber", ( _return.myCurrentAccountNumber ));
}
/* CPPTEST_TEST_CASE_END test_Bank_1 */

/* CPPTEST_TEST_CASE_BEGIN test_addAccount_1 */
/* CPPTEST_TEST_CASE_CONTEXT Account * Bank::addAccount(void) */
void TestSuite_Bank_cxx_8cde4201::test_addAccount_1()
{
    /* Pre-condition initialization */
    /* Initializing argument 0 (this) */ 
    ::Bank _cpptest_TestObject ;
    /* Tested function call */
    ::Account * _return  = _cpptest_TestObject.addAccount();
    /* Post-condition check */
    CPPTEST_POST_CONDITION_PTR("Account * _return ", ( _return ));
    CPPTEST_POST_CONDITION_INTEGER("int _cpptest_TestObject.myCurrentAccountNumber", ( _cpptest_TestObject.myCurrentAccountNumber ));
}
/* CPPTEST_TEST_CASE_END test_addAccount_1 */

/* CPPTEST_TEST_CASE_BEGIN test_getAccount_1 */
/* CPPTEST_TEST_CASE_CONTEXT Account * Bank::getAccount(int, std::string) */
void TestSuite_Bank_cxx_8cde4201::test_getAccount_1()
{
    /* Pre-condition initialization */
    /* Initializing argument 0 (this) */ 
    ::Bank _cpptest_TestObject ;
    /* Initializing argument 1 (num) */ 
    int _num  = 0;
    /* Initializing argument 2 (password) */ 
    ::std::string _password  = "";
    /* Tested function call */
    ::Account * _return  = _cpptest_TestObject.getAccount(_num, _password);
    /* Post-condition check */
    CPPTEST_POST_CONDITION_PTR("Account * _return ", ( _return ));
    CPPTEST_POST_CONDITION_INTEGER("int _cpptest_TestObject.myCurrentAccountNumber", ( _cpptest_TestObject.myCurrentAccountNumber ));
}
/* CPPTEST_TEST_CASE_END test_getAccount_1 */

/* CPPTEST_TEST_CASE_BEGIN test_getAccount_2 */
/* CPPTEST_TEST_CASE_CONTEXT Account * Bank::getAccount(int, std::string) */
void TestSuite_Bank_cxx_8cde4201::test_getAccount_2()
{
    /* Pre-condition initialization */
    /* Initializing argument 0 (this) */ 
    ::Bank _cpptest_TestObject ;
    /* Initializing argument 1 (num) */ 
    int _num  = cpptestLimitsGetMaxInt();
    /* Initializing argument 2 (password) */ 
    ::std::string _password  = "";
    /* Tested function call */
    ::Account * _return  = _cpptest_TestObject.getAccount(_num, _password);
    /* Post-condition check */
    CPPTEST_POST_CONDITION_PTR("Account * _return ", ( _return ));
    CPPTEST_POST_CONDITION_INTEGER("int _cpptest_TestObject.myCurrentAccountNumber", ( _cpptest_TestObject.myCurrentAccountNumber ));
}
/* CPPTEST_TEST_CASE_END test_getAccount_2 */

/* CPPTEST_TEST_CASE_BEGIN test_x7eBank_1 */
/* CPPTEST_TEST_CASE_CONTEXT Bank::~Bank(void) */
void TestSuite_Bank_cxx_8cde4201::test_x7eBank_1()
{
    /* Testing destructor - begin new scope. */
    {
    /* Pre-condition initialization */
    /* Initializing argument 0 (this) */ 
    ::Bank _cpptest_TestObject ;
    /* Object destruction at the end of scope */
    }
    /* Post-condition check */
}
/* CPPTEST_TEST_CASE_END test_x7eBank_1 */
