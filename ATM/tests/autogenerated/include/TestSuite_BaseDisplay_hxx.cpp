#include "cpptest.h"

CPPTEST_CONTEXT("/ATM/include/BaseDisplay.hxx");
CPPTEST_TEST_SUITE_INCLUDED_TO("/ATM/ATM.cxx");

class TestSuite_BaseDisplay_hxx_311d9a0 : public CppTest_TestSuite
{
    public:
        CPPTEST_TEST_SUITE(TestSuite_BaseDisplay_hxx_311d9a0);
        CPPTEST_TEST(test_BaseDisplay_1);
        CPPTEST_TEST(test_x7eBaseDisplay_1);
        CPPTEST_TEST_SUITE_END();
        
        void setUp();
        void tearDown();

        void test_BaseDisplay_1();
        void test_x7eBaseDisplay_1();
};

CPPTEST_TEST_SUITE_REGISTRATION(TestSuite_BaseDisplay_hxx_311d9a0);

void TestSuite_BaseDisplay_hxx_311d9a0::setUp()
{
}

void TestSuite_BaseDisplay_hxx_311d9a0::tearDown()
{
}

/* CPPTEST_TEST_CASE_BEGIN test_BaseDisplay_1 */
/* CPPTEST_TEST_CASE_CONTEXT BaseDisplay::BaseDisplay(void) */
void TestSuite_BaseDisplay_hxx_311d9a0::test_BaseDisplay_1()
{
    /* Pre-condition initialization */
    /* Testing constructor. */
    ::BaseDisplay _return;
    /* Post-condition check */
}
/* CPPTEST_TEST_CASE_END test_BaseDisplay_1 */

/* CPPTEST_TEST_CASE_BEGIN test_x7eBaseDisplay_1 */
/* CPPTEST_TEST_CASE_CONTEXT BaseDisplay::~BaseDisplay(void) */
void TestSuite_BaseDisplay_hxx_311d9a0::test_x7eBaseDisplay_1()
{
    /* Testing destructor - begin new scope. */
    {
    /* Pre-condition initialization */
    /* Initializing argument 0 (this) */ 
    ::BaseDisplay _cpptest_TestObject ;
    /* Object destruction at the end of scope */
    }
    /* Post-condition check */
}
/* CPPTEST_TEST_CASE_END test_x7eBaseDisplay_1 */
