
#include "cpptest_driver.c.h"

#include "cpptest_transport.h"
#include "cpptest_memory_analysis.h"








static void __CPTR_Initialize_Properties(void)
{

    cpptestAddProperty("testlog.enabled", "true");
    cpptestAddProperty("testlog.file", "C:\\Parasoft_Tutorial\\workspace_tutorial_tantai\\.cpptest\\ATM\\unit-data\\current_tubf179707/cpptest_results.tlog");
    cpptestAddProperty("testlog.encoding", "windows-31j");
    cpptestAddProperty("testlog.append", "true");
    cpptestAddProperty("covlog.enabled", "true");
    cpptestAddProperty("covlog.file", "C:\\Parasoft_Tutorial\\workspace_tutorial_tantai\\.cpptest\\ATM\\unit-data\\current_tubf179707/cpptest_results.clog");
    cpptestAddProperty("covlog.append", "true");
    cpptestAddProperty("coverage.use_func_def_records", "true");
    cpptestAddProperty("testcases.timeout", "5000");
    cpptestAddProperty("testcases.max_messages", "100");
    cpptestAddProperty("send.post.conditions", "1");
    cpptestAddProperty("send.reports", "1");
    cpptestAddProperty("send.passed.asserts", "0");
    cpptestAddProperty("test.app_mode", "0");

#ifdef CPPTEST_MAX_MESSAGES_NUMBER
    cpptestAddProperty("testcases.max_messages", CPPTEST_QUOTE(CPPTEST_MAX_MESSAGES_NUMBER));
#endif
#ifdef CPPTEST_TIMEOUT_PER_TEST_CASE
    cpptestAddProperty("testcases.timeout", CPPTEST_QUOTE(CPPTEST_TIMEOUT_PER_TEST_CASE));
#endif
#ifdef CPPTEST_MAX_ALLOWED_STACK_TRACE_DEPTH
    cpptestAddProperty("test.max_st_depth", CPPTEST_QUOTE(CPPTEST_MAX_ALLOWED_STACK_TRACE_DEPTH));
#endif
#if defined(CPPTEST_THREADS)
    cpptestAddProperty("threads.enabled", CPPTEST_QUOTE(CPPTEST_THREADS));
#endif

}

#if CPPTEST_DATA_SOURCES_ENABLED


extern CppTest_GetDataSourceFPtr CppTest_getDSFPtr;

EXTERN_C_LINKAGE_START
static CppTest_DataSource* __CPTR_Get_Data_Source(const char* dataSource, const char* testSuite)
{
    

    return 0;
}
EXTERN_C_LINKAGE_END
#endif /* CPPTEST_DATA_SOURCES_ENABLED */

static int __CPTR_runtimeInitialized = 0;

EXTERN_C_LINKAGE void CppTest_InitializeRuntime(void)
{
    if (!__CPTR_runtimeInitialized) {
        __CPTR_runtimeInitialized = 1;
        
        
#if CPPTEST_TRIGGER_ENABLED
        cpptestAddRuntimeCommandHandler(&runtimeCommandTriggerHandlerNode);
        cpptestAddRuntimeCommandHandler(&runtimeCommandExpectationHandlerNode);
#endif /* CPPTEST_TRIGGER_ENABLED */
        cpptestInitializeRuntime(
                (CppTestPropertiesInitCallback)&__CPTR_Initialize_Properties,
                (CppTestThreadInitCallback)&threadInitializer,
                CPPTEST_TARGET_SYSTEM_PTR);
    }
}


EXTERN_C_LINKAGE void CppTest_FinalizeRuntime(void)
{
    if (__CPTR_runtimeInitialized) {
        __CPTR_runtimeInitialized = 0;
        cpptestFinalizeRuntime();
        
        
    }
}


static int __CPTR_initializations = 0;

EXTERN_C_LINKAGE void __CPTR_Initialize(void);
EXTERN_C_LINKAGE void __CPTR_Finalize(void);

/* Routine called very early. In c++ mode this is called from constructor
   of global object. In c mode this is called at beginning of CppTest_Main
   method. */
EXTERN_C_LINKAGE void __CPTR_Initialize(void)
{
    if (__CPTR_initializations == 0) {
        CppTest_InitializeRuntime();
    }
    ++__CPTR_initializations;
}

EXTERN_C_LINKAGE void __CPTR_Finalize(void)
{
    --__CPTR_initializations;
    if (__CPTR_initializations == 0) {
        CppTest_FinalizeRuntime();
    }
}

#ifdef __cplusplus
struct __CPTR_Initializer_TestRunner {
    __CPTR_Initializer_TestRunner()
    {
        CPPTEST_INITIALIZE_RUNTIME();
    }
    ~__CPTR_Initializer_TestRunner()
    {
        CPPTEST_FINALIZE_RUNTIME();
    }
};

#if CPPTEST_USE_GLOBAL_OBJECTS_TO_INIT_RUNTIME
static struct __CPTR_Initializer_TestRunner __CPTR_initializer;
#endif

#define CPPTEST_ENTER_MAIN_ROUTINE() \
    __CPTR_Initializer_TestRunner __CPTR_main_initializer

#define CPPTEST_EXIT_MAIN_ROUTINE()

#else

#define CPPTEST_ENTER_MAIN_ROUTINE() \
    CPPTEST_INITIALIZE_RUNTIME()

#define CPPTEST_EXIT_MAIN_ROUTINE() \
    CPPTEST_FINALIZE_RUNTIME()

#endif




static CPPTEST_INTEGER __CPTR_Test_Manager_Count = 0;
static CPPTEST_INTEGER __CPTR_Test_Manager_Start_Id = 0;
static const char* __CPTR_Test_Manager_TestSuite = 0;
static const char* __CPTR_Test_Manager_TestCase = 0;

static int __CPTR_Test_Manager_Test(const char* testSuite, const char* testCase)
{
    __CPTR_Test_Manager_Count++;
    if (__CPTR_Test_Manager_TestSuite && cpptestStrCmp(__CPTR_Test_Manager_TestSuite, testSuite) != 0) {
        return 0;
    }
    if (__CPTR_Test_Manager_TestCase && cpptestStrCmp(__CPTR_Test_Manager_TestCase, testCase) != 0) {
        return 0;
    }
    return __CPTR_Test_Manager_Count > __CPTR_Test_Manager_Start_Id;
}

EXTERN_C_LINKAGE void BankTestCase_testSuiteBegin(void);
EXTERN_C_LINKAGE int BankTestCase_callTest(const char*);

static void __CPTR_Do_Tests_BankTestCase(void)
{
    CPPTEST_RUN_TEST_SUITE_BEGIN(BankTestCase, "", 1)
        CPPTEST_RUN_TEST_SUITE_SETUP(BankTestCase)
        CPPTEST_RUN_TEST_CASE(BankTestCase, testGetAccount)
        CPPTEST_RUN_TEST_SUITE_TEARDOWN(BankTestCase)
    CPPTEST_RUN_TEST_SUITE_END(BankTestCase, 1)
}

static void __CPTR_Do_Tests(void)
{
    /* If the runtime is not yet initialized do this now. */
    CppTest_InitializeRuntime();

    __CPTR_Test_Manager_Start_Id = cpptestGetIntPropertyEx("execution.start_after", __CPTR_Test_Manager_Start_Id);
    __CPTR_Test_Manager_TestSuite = cpptestGetProperty("execution.testsuite");
    __CPTR_Test_Manager_TestCase = cpptestGetProperty("execution.testcase");
#if CPPTEST_DATA_SOURCES_ENABLED
    CppTest_getDSFPtr = __CPTR_Get_Data_Source;
#endif
    cpptestTestRunnerBegin();
    __CPTR_Do_Tests_BankTestCase();
    cpptestTestRunnerEnd();
}

static int __CPTR_Parse_Int_Option(const char* arg, const char* param, CPPTEST_INTEGER* value)
{
    unsigned int argLen = cpptestStrLen(arg);
    if (cpptestStrNCmp(arg, param, argLen) == 0) {
        CPPTEST_INTEGER tmpValue = 0;
        const char* end = cpptestStrToInteger(param + argLen, &tmpValue);
        if (*end == '\0') {
            *value = tmpValue;
            return 1;
        }
    }
    return 0;
}

static void __CPTR_Test_Manager_Init(int argc, char* argv[])
{
    int i;
    for (i = 0; i < argc; ++i) {
        if (__CPTR_Parse_Int_Option("--start-after=", argv[i], &__CPTR_Test_Manager_Start_Id)) {
            continue;
        }
    }
}

#if CPPTEST_WCHAR_ENABLED
static int __CPTR_Parse_Int_OptionW(const CppTest_wchar_t* arg, const CppTest_wchar_t* param, CPPTEST_INTEGER* value)
{
    unsigned int argLen = cpptestWStrLen(arg);
    if (cpptestWStrNCmp(arg, param, argLen) == 0) {
        CPPTEST_INTEGER tmpValue = 0;
        const CppTest_wchar_t* end = cpptestWStrToInteger(param + argLen, &tmpValue);
        if (*end == L'\0') {
            *value = tmpValue;
            return 1;
        }
    }
    return 0;
}

static void __CPTR_Test_Manager_InitW(int argc, CppTest_wchar_t* argv[])
{
    int i;
    for (i = 0; i < argc; ++i) {
        if (__CPTR_Parse_Int_OptionW(CPPTEST_const_wchar_t_ptr_CAST L"--start-after=", argv[i], &__CPTR_Test_Manager_Start_Id)) {
            continue;
        }
    }
}
#endif /* CPPTEST_WCHAR_ENABLED */


EXTERN_C_LINKAGE int CppTest_Main(int argc, char* argv[])
{
    CPPTEST_ENTER_MAIN_ROUTINE();

    __CPTR_Test_Manager_Init(argc, argv);

    __CPTR_Do_Tests();

    CPPTEST_EXIT_MAIN_ROUTINE();


    return 0;
}

#if CPPTEST_WCHAR_ENABLED
EXTERN_C_LINKAGE int CppTest_MainW(int argc, CppTest_wchar_t* argv[])
{
    CPPTEST_ENTER_MAIN_ROUTINE();

    __CPTR_Test_Manager_InitW(argc, argv);

    __CPTR_Do_Tests();

    CPPTEST_EXIT_MAIN_ROUTINE();


    return 0;
}
#endif /* CPPTEST_WCHAR_ENABLED */

