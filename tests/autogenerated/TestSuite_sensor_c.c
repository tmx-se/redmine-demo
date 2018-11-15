#include "cpptest.h"

CPPTEST_CONTEXT("/Sensor/sensor.c");
CPPTEST_TEST_SUITE_INCLUDED_TO("/Sensor/sensor.c");

EXTERN_C_LINKAGE void TestSuite_sensor_c_aae5c158_testSuiteBegin(void);
EXTERN_C_LINKAGE int TestSuite_sensor_c_aae5c158_callTest(const char*);

CPPTEST_TEST_SUITE(TestSuite_sensor_c_aae5c158);
        CPPTEST_TEST(TestSuite_sensor_c_aae5c158_test_finalize_1);
        CPPTEST_TEST(TestSuite_sensor_c_aae5c158_test_handleSensorValue_1);
        CPPTEST_TEST(TestSuite_sensor_c_aae5c158_test_handleSensorValue_2);
        CPPTEST_TEST(TestSuite_sensor_c_aae5c158_test_initialize_1);
        CPPTEST_TEST(TestSuite_sensor_c_aae5c158_test_mainLoop_1);
        CPPTEST_TEST(TestSuite_sensor_c_aae5c158_test_main_1);
        CPPTEST_TEST(TestSuite_sensor_c_aae5c158_test_printMessage_1);
        CPPTEST_TEST(TestSuite_sensor_c_aae5c158_test_printMessage_2);
        CPPTEST_TEST(TestSuite_sensor_c_aae5c158_test_readSensor_1);
        CPPTEST_TEST(TestSuite_sensor_c_aae5c158_test_readSensor_2);
        CPPTEST_TEST(TestSuite_sensor_c_aae5c158_test_reportSensorFailure_1);
CPPTEST_TEST_DS(TestSuite_sensor_c_aae5c158_test_case_0, CPPTEST_DS("__ds_step_autogen_d54d4b2e_15e0400412b"));
CPPTEST_TEST_SUITE_END();
        
void TestSuite_sensor_c_aae5c158_test_finalize_1(void);
void TestSuite_sensor_c_aae5c158_test_handleSensorValue_1(void);
void TestSuite_sensor_c_aae5c158_test_handleSensorValue_2(void);
void TestSuite_sensor_c_aae5c158_test_initialize_1(void);
void TestSuite_sensor_c_aae5c158_test_mainLoop_1(void);
void TestSuite_sensor_c_aae5c158_test_main_1(void);
void TestSuite_sensor_c_aae5c158_test_printMessage_1(void);
void TestSuite_sensor_c_aae5c158_test_printMessage_2(void);
void TestSuite_sensor_c_aae5c158_test_readSensor_1(void);
void TestSuite_sensor_c_aae5c158_test_readSensor_2(void);
void TestSuite_sensor_c_aae5c158_test_reportSensorFailure_1(void);

void TestSuite_sensor_c_aae5c158_test_case_0(void);
CPPTEST_TEST_SUITE_REGISTRATION(TestSuite_sensor_c_aae5c158);

void TestSuite_sensor_c_aae5c158_setUp(void);
void TestSuite_sensor_c_aae5c158_setUp(void)
{
}

void TestSuite_sensor_c_aae5c158_tearDown(void);
void TestSuite_sensor_c_aae5c158_tearDown(void)
{
}


/* CPPTEST_TEST_CASE_BEGIN test_finalize_1 */
/* CPPTEST_TEST_CASE_CONTEXT void finalize(void) */
void TestSuite_sensor_c_aae5c158_test_finalize_1()
{
    /* Pre-condition initialization */
    /* Initializing global variable messages */ 
    {
         messages  = 0 ;
    }
    {
        /* Tested function call */
        finalize();
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("char ** messages ", ( messages ));
    }
}
/* CPPTEST_TEST_CASE_END test_finalize_1 */

/* CPPTEST_TEST_CASE_BEGIN test_handleSensorValue_1 */
/* CPPTEST_TEST_CASE_CONTEXT void handleSensorValue(int) */
void TestSuite_sensor_c_aae5c158_test_handleSensorValue_1()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (value) */ 
    int _value  = 1;
    /* Initializing global variable messages */ 
    {
         messages  = 0 ;
    }
    {
        /* Tested function call */
        handleSensorValue(_value);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("char ** messages ", ( messages ));
    }
}
/* CPPTEST_TEST_CASE_END test_handleSensorValue_1 */

/* CPPTEST_TEST_CASE_BEGIN test_handleSensorValue_2 */
/* CPPTEST_TEST_CASE_CONTEXT void handleSensorValue(int) */
void TestSuite_sensor_c_aae5c158_test_handleSensorValue_2()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (value) */ 
    int _value  = 0;
    /* Initializing global variable messages */ 
    {
         messages  = 0 ;
    }
    {
        /* Tested function call */
        handleSensorValue(_value);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("char ** messages ", ( messages ));
    }
}
/* CPPTEST_TEST_CASE_END test_handleSensorValue_2 */

/* CPPTEST_TEST_CASE_BEGIN test_initialize_1 */
/* CPPTEST_TEST_CASE_CONTEXT void initialize(void) */
void TestSuite_sensor_c_aae5c158_test_initialize_1()
{
    /* Pre-condition initialization */
    /* Initializing global variable messages */ 
    {
         messages  = 0 ;
    }
    {
        /* Tested function call */
        initialize();
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("char ** messages ", ( messages ));
    }
}
/* CPPTEST_TEST_CASE_END test_initialize_1 */

/* CPPTEST_TEST_CASE_BEGIN test_mainLoop_1 */
/* CPPTEST_TEST_CASE_CONTEXT void mainLoop(void) */
void TestSuite_sensor_c_aae5c158_test_mainLoop_1()
{
    /* Pre-condition initialization */
    /* Initializing global variable messages */ 
    {
         messages  = 0 ;
    }
    {
        /* Tested function call */
        mainLoop();
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("char ** messages ", ( messages ));
    }
}
/* CPPTEST_TEST_CASE_END test_mainLoop_1 */

/* CPPTEST_TEST_CASE_BEGIN test_main_1 */
/* CPPTEST_TEST_CASE_CONTEXT int main(void) */
void TestSuite_sensor_c_aae5c158_test_main_1()
{
    /* Pre-condition initialization */
    /* Initializing global variable messages */ 
    {
         messages  = 0 ;
    }
    {
        /* Tested function call */
        int _return  = main();
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("char ** messages ", ( messages ));
    }
}
/* CPPTEST_TEST_CASE_END test_main_1 */

/* CPPTEST_TEST_CASE_BEGIN test_printMessage_1 */
/* CPPTEST_TEST_CASE_CONTEXT void printMessage(int, int) */
void TestSuite_sensor_c_aae5c158_test_printMessage_1()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (msgIndex) */ 
    int _msgIndex  = cpptestLimitsGetMaxInt();
    /* Initializing argument 2 (value) */ 
    int _value  = cpptestLimitsGetMaxInt();
    /* Initializing global variable messages */ 
    {
         messages  = 0 ;
    }
    {
        /* Tested function call */
        printMessage(_msgIndex, _value);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("char ** messages ", ( messages ));
    }
}
/* CPPTEST_TEST_CASE_END test_printMessage_1 */

/* CPPTEST_TEST_CASE_BEGIN test_printMessage_2 */
/* CPPTEST_TEST_CASE_CONTEXT void printMessage(int, int) */
void TestSuite_sensor_c_aae5c158_test_printMessage_2()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (msgIndex) */ 
    int _msgIndex  = cpptestLimitsGetMinInt();
    /* Initializing argument 2 (value) */ 
    int _value  = cpptestLimitsGetMaxInt();
    /* Initializing global variable messages */ 
    {
         messages  = 0 ;
    }
    {
        /* Tested function call */
        printMessage(_msgIndex, _value);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("char ** messages ", ( messages ));
    }
}
/* CPPTEST_TEST_CASE_END test_printMessage_2 */

/* CPPTEST_TEST_CASE_BEGIN test_readSensor_1 */
/* CPPTEST_TEST_CASE_CONTEXT int readSensor(int *) */
void TestSuite_sensor_c_aae5c158_test_readSensor_1()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (value) */ 
    int _value_0 [1];
    int * _value  = (int * )cpptestMemset((void*)&_value_0, 0, (1 * sizeof(int)));
    {
        /* Tested function call */
        int _return  = readSensor(_value);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_MEM_BUFFER("int * _value", ( _value ), sizeof(int));
    }
}
/* CPPTEST_TEST_CASE_END test_readSensor_1 */

/* CPPTEST_TEST_CASE_BEGIN test_readSensor_2 */
/* CPPTEST_TEST_CASE_CONTEXT int readSensor(int *) */
void TestSuite_sensor_c_aae5c158_test_readSensor_2()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (value) */ 
    int _value_0 [16];
    int * _value  = (int * )cpptestMemset((void*)&_value_0, 0, (16 * sizeof(int)));
    {
        /* Tested function call */
        int _return  = readSensor(_value);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_MEM_BUFFER("int * _value", ( _value ), sizeof(int));
    }
}
/* CPPTEST_TEST_CASE_END test_readSensor_2 */

/* CPPTEST_TEST_CASE_BEGIN test_reportSensorFailure_1 */
/* CPPTEST_TEST_CASE_CONTEXT void reportSensorFailure(void) */
void TestSuite_sensor_c_aae5c158_test_reportSensorFailure_1()
{
    /* Pre-condition initialization */
    /* Initializing global variable messages */ 
    {
         messages  = 0 ;
    }
    {
        /* Tested function call */
        reportSensorFailure();
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("char ** messages ", ( messages ));
    }
}
/* CPPTEST_TEST_CASE_END test_reportSensorFailure_1 */


/* CPPTEST_TEST_CASE_BEGIN test_case_0 */
/* CPPTEST_TEST_CASE_DESCRIPTION –­“WŽ¦\\‚†‚„ */
/* CPPTEST_TEST_CASE_CONTEXT void handleSensorValue(int) */
void TestSuite_sensor_c_aae5c158_test_case_0()
{
/* CPPTEST_TEST_CASE_DATA_BEGIN */
#if 0

<?xml version="1.0" encoding="UTF-8" standalone="no"?>
<testcase>
    <metadata/>
    <steps>
        <step id="DataSourceStep" version="2">
            <row>
                <val>val</val>
                <val>mes</val>
            </row>
            <row>
                <val>2</val>
                <val>3</val>
            </row>
            <row>
                <val>3</val>
                <val>4</val>
            </row>
            <ext>false</ext>
            <extname/>
        </step>
        <step id="MultiVariableStep" version="1">
            <step id="VariableStep" version="1">
                <name>_value</name>
                <type>int</type>
                <value>CPPTEST_DS_GET_INTEGER("val")</value>
            </step>
            <step id="VariableStep" version="1">
                <name>messages</name>
                <type/>
                <value>0</value>
            </step>
        </step>
        <step id="CallStep" version="1">
            <comment>Tested function call</comment>
            <return/>
            <name>handleSensorValue</name>
            <params>_value</params>
        </step>
        <step id="AssertionsStep" version="1">
            <step id="AssertionStep" version="1">
                <type>CPPTEST_ASSERT_PTR_EQUAL</type>
                <P1>CPPTEST_DS_GET_INTEGER("mes")</P1>
                <P2>messages</P2>
                <P3/>
                <P4/>
            </step>
        </step>
    </steps>
</testcase>

#endif
/* CPPTEST_TEST_CASE_DATA_END */
int _value = CPPTEST_DS_GET_INTEGER("val");
messages = 0;
handleSensorValue(_value);
CPPTEST_ASSERT_PTR_EQUAL(CPPTEST_DS_GET_INTEGER("mes"), messages);
}
/* CPPTEST_TEST_CASE_END test_case_0 */
