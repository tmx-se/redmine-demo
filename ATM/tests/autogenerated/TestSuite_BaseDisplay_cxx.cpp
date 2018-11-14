#include "cpptest.h"

CPPTEST_CONTEXT("/ATM/BaseDisplay.cxx");
CPPTEST_TEST_SUITE_INCLUDED_TO("/ATM/BaseDisplay.cxx");

class TestSuite_BaseDisplay_cxx_42f85501 : public CppTest_TestSuite
{
    public:
        CPPTEST_TEST_SUITE(TestSuite_BaseDisplay_cxx_42f85501);
        CPPTEST_TEST(test_showBalance_1);
        CPPTEST_TEST(test_showBalance_2);
        CPPTEST_TEST(test_showInfoToUser_1);
        CPPTEST_TEST(test_showInfoToUser_2);
        CPPTEST_TEST_SUITE_END();
        
        void setUp();
        void tearDown();

        void test_showBalance_1();
        void test_showBalance_2();
        void test_showInfoToUser_1();
        void test_showInfoToUser_2();
};

CPPTEST_TEST_SUITE_REGISTRATION(TestSuite_BaseDisplay_cxx_42f85501);

void TestSuite_BaseDisplay_cxx_42f85501::setUp()
{
}

void TestSuite_BaseDisplay_cxx_42f85501::tearDown()
{
}

/* CPPTEST_TEST_CASE_BEGIN test_showBalance_1 */
/* CPPTEST_TEST_CASE_CONTEXT virtual void BaseDisplay::showBalance(double) */
void TestSuite_BaseDisplay_cxx_42f85501::test_showBalance_1()
{
    /* Pre-condition initialization */
    /* Initializing argument 0 (this) */ 
    ::BaseDisplay _cpptest_TestObject ;
    /* Initializing argument 1 (balance) */ 
    double _balance  = cpptestLimitsGetMaxPosDouble();
    /* Tested function call */
    _cpptest_TestObject.showBalance(_balance);
    /* Post-condition check */
}
/* CPPTEST_TEST_CASE_END test_showBalance_1 */

/* CPPTEST_TEST_CASE_BEGIN test_showBalance_2 */
/* CPPTEST_TEST_CASE_CONTEXT virtual void BaseDisplay::showBalance(double) */
void TestSuite_BaseDisplay_cxx_42f85501::test_showBalance_2()
{
    /* Pre-condition initialization */
    /* Initializing argument 0 (this) */ 
    ::BaseDisplay _cpptest_TestObject ;
    /* Initializing argument 1 (balance) */ 
    double _balance  = cpptestLimitsGetMaxNegDouble();
    /* Tested function call */
    _cpptest_TestObject.showBalance(_balance);
    /* Post-condition check */
}
/* CPPTEST_TEST_CASE_END test_showBalance_2 */

/* CPPTEST_TEST_CASE_BEGIN test_showInfoToUser_1 */
/* CPPTEST_TEST_CASE_CONTEXT virtual void BaseDisplay::showInfoToUser(const char *) */
void TestSuite_BaseDisplay_cxx_42f85501::test_showInfoToUser_1()
{
    /* Pre-condition initialization */
    /* Initializing argument 0 (this) */ 
    ::BaseDisplay _cpptest_TestObject ;
    /* Initializing argument 1 (message) */ 
    const char * _message  = "";
    /* Tested function call */
    _cpptest_TestObject.showInfoToUser(_message);
    /* Post-condition check */
}
/* CPPTEST_TEST_CASE_END test_showInfoToUser_1 */

/* CPPTEST_TEST_CASE_BEGIN test_showInfoToUser_2 */
/* CPPTEST_TEST_CASE_CONTEXT virtual void BaseDisplay::showInfoToUser(const char *) */
void TestSuite_BaseDisplay_cxx_42f85501::test_showInfoToUser_2()
{
    /* Pre-condition initialization */
    /* Initializing argument 0 (this) */ 
    ::BaseDisplay _cpptest_TestObject ;
    /* Initializing argument 1 (message) */ 
    const char * _message  = "Hello world";
    /* Tested function call */
    _cpptest_TestObject.showInfoToUser(_message);
    /* Post-condition check */
}
/* CPPTEST_TEST_CASE_END test_showInfoToUser_2 */
