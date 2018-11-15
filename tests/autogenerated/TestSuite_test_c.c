#include "cpptest.h"

CPPTEST_CONTEXT("../../test.c");
CPPTEST_TEST_SUITE_INCLUDED_TO("../../test.c");

EXTERN_C_LINKAGE void TestSuite_test_c_6be8bd7b_testSuiteBegin(void);
EXTERN_C_LINKAGE int TestSuite_test_c_6be8bd7b_callTest(const char*);

CPPTEST_TEST_SUITE(TestSuite_test_c_6be8bd7b);
CPPTEST_TEST_DS(TestSuite_test_c_6be8bd7b_test_case, CPPTEST_DS("__ds_step_autogen_b9a0fabd_15e079577b4"));
CPPTEST_TEST(TestSuite_test_c_6be8bd7b_test_case_0);
CPPTEST_TEST_SUITE_END();
        

void TestSuite_test_c_6be8bd7b_test_case(void);

/* CPPTEST_TEST_SUITE_DATA_BEGIN */
#if 0

<?xml version="1.0" encoding="UTF-8" standalone="no"?>
<testsuite>
    <metadata/>
    <steps>
        <step id="MultiVariableStep" version="1">
            <step id="VariableStep" version="1">
                <name>test</name>
                <type>int</type>
                <value>3</value>
            </step>
        </step>
    </steps>
</testsuite>

#endif
int test = 3;
/* CPPTEST_TEST_SUITE_DATA_END */

void TestSuite_test_c_6be8bd7b_test_case_0(void);
CPPTEST_TEST_SUITE_REGISTRATION(TestSuite_test_c_6be8bd7b);

void TestSuite_test_c_6be8bd7b_setUp(void);
void TestSuite_test_c_6be8bd7b_setUp(void)
{
}

void TestSuite_test_c_6be8bd7b_tearDown(void);
void TestSuite_test_c_6be8bd7b_tearDown(void)
{
}


/* CPPTEST_TEST_CASE_BEGIN test_case */
/* CPPTEST_TEST_CASE_CONTEXT int func1(int) */
void TestSuite_test_c_6be8bd7b_test_case()
{
/* CPPTEST_TEST_CASE_DATA_BEGIN */
#if 0

<?xml version="1.0" encoding="UTF-8" standalone="no"?>
<testcase>
    <metadata/>
    <steps>
        <step id="DataSourceStep" version="2">
            <row>
                <val>par</val>
                <val>return</val>
            </row>
            <row>
                <val>1</val>
                <val>0</val>
            </row>
            <row>
                <val>2</val>
                <val>0</val>
            </row>
            <row>
                <val>3</val>
                <val>1</val>
            </row>
            <ext>false</ext>
            <extname/>
        </step>
        <step id="MultiVariableStep" version="1">
            <step id="VariableStep" version="1">
                <name>_param1</name>
                <type>int</type>
                <value>CPPTEST_DS_GET_INTEGER("par")</value>
            </step>
            <step id="VariableStep" version="1">
                <name>_return</name>
                <type>int</type>
                <value/>
            </step>
        </step>
        <step id="AdvancedStubsStep" version="1">
            <step id="AdvancedStubStep" version="1">
                <action>USE CUSTOM ACTION</action>
                <function>sub_func1</function>
                <parameters>1</parameters>
                <condition>If()-&gt;Arg("_MT_var2")-&gt;Equal()-&gt;Int(1)</condition>
            </step>
        </step>
        <step id="CallStep" version="1">
            <comment>Tested function call</comment>
            <return>_return</return>
            <name>func1</name>
            <params>_param1</params>
        </step>
        <step id="AssertionsStep" version="1">
            <step id="AssertionStep" version="1">
                <type>CPPTEST_ASSERT_INTEGER_EQUAL</type>
                <P1>CPPTEST_DS_GET_INTEGER("return")</P1>
                <P2>_return</P2>
                <P3/>
                <P4/>
            </step>
            <step id="AssertionStep" version="1">
                <type>CPPTEST_ASSERT_INTEGER_EQUAL</type>
                <P1>test</P1>
                <P2>3</P2>
                <P3/>
                <P4/>
            </step>
        </step>
    </steps>
</testcase>

#endif
/* CPPTEST_TEST_CASE_DATA_END */
int _param1 = CPPTEST_DS_GET_INTEGER("par");
int _return;
#if CPPTEST_TRIGGER_ENABLED == 0
#error "Test case uses Stubs API which is currently disabled (-DCPPTEST_TRIGGER_ENABLED=0). Please review your configuration."
#endif
CPPTEST_ON_CALL("sub_func1")->If()->Arg("_MT_var2")->Equal()->Int(1);
_return = func1(_param1);
CPPTEST_ASSERT_INTEGER_EQUAL(CPPTEST_DS_GET_INTEGER("return"), _return);
CPPTEST_ASSERT_INTEGER_EQUAL(test, 3);
}
/* CPPTEST_TEST_CASE_END test_case */

/* CPPTEST_TEST_CASE_BEGIN test_case_0 */
/* CPPTEST_TEST_CASE_CONTEXT int func1(int) */
void TestSuite_test_c_6be8bd7b_test_case_0()
{
/* CPPTEST_TEST_CASE_DATA_BEGIN */
#if 0

<?xml version="1.0" encoding="UTF-8" standalone="no"?>
<testcase>
    <metadata/>
    <steps/>
</testcase>

#endif
/* CPPTEST_TEST_CASE_DATA_END */
}
/* CPPTEST_TEST_CASE_END test_case_0 */
