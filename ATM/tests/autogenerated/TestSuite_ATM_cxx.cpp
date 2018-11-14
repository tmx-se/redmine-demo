#include "cpptest.h"

CPPTEST_CONTEXT("/ATM/ATM.cxx");
CPPTEST_TEST_SUITE_INCLUDED_TO("/ATM/ATM.cxx");

class TestSuite_ATM_cxx_d25c3ea8 : public CppTest_TestSuite
{
    public:
        CPPTEST_TEST_SUITE(TestSuite_ATM_cxx_d25c3ea8);
        CPPTEST_TEST(test_ATM_1);
        CPPTEST_TEST(test_ATM_2);
        CPPTEST_TEST(test_fillUserRequest_1);
        CPPTEST_TEST(test_fillUserRequest_2);
        CPPTEST_TEST(test_viewAccount_1);
        CPPTEST_TEST(test_viewAccount_2);
        CPPTEST_TEST(test_makeDeposit_1);
        CPPTEST_TEST(test_makeDeposit_10);
        CPPTEST_TEST(test_makeDeposit_2);
        CPPTEST_TEST(test_makeDeposit_3);
        CPPTEST_TEST(test_makeDeposit_4);
        CPPTEST_TEST(test_makeDeposit_5);
        CPPTEST_TEST(test_makeDeposit_6);
        CPPTEST_TEST(test_makeDeposit_7);
        CPPTEST_TEST(test_makeDeposit_8);
        CPPTEST_TEST(test_makeDeposit_9);
        CPPTEST_TEST(test_showBalance_1);
        CPPTEST_TEST(test_showBalance_2);
        CPPTEST_TEST(test_withdraw_1);
        CPPTEST_TEST(test_withdraw_10);
        CPPTEST_TEST(test_withdraw_2);
        CPPTEST_TEST(test_withdraw_3);
        CPPTEST_TEST(test_withdraw_4);
        CPPTEST_TEST(test_withdraw_5);
        CPPTEST_TEST(test_withdraw_6);
        CPPTEST_TEST(test_withdraw_7);
        CPPTEST_TEST(test_withdraw_8);
        CPPTEST_TEST(test_withdraw_9);
        CPPTEST_TEST(test_case_0);
        CPPTEST_TEST_SUITE_END();
        
        void setUp();
        void tearDown();

        void test_ATM_1();
        void test_ATM_2();
        void test_fillUserRequest_1();
        void test_fillUserRequest_2();
        void test_viewAccount_1();
        void test_viewAccount_2();
        void test_makeDeposit_1();
        void test_makeDeposit_10();
        void test_makeDeposit_2();
        void test_makeDeposit_3();
        void test_makeDeposit_4();
        void test_makeDeposit_5();
        void test_makeDeposit_6();
        void test_makeDeposit_7();
        void test_makeDeposit_8();
        void test_makeDeposit_9();
        void test_showBalance_1();
        void test_showBalance_2();
        void test_withdraw_1();
        void test_withdraw_10();
        void test_withdraw_2();
        void test_withdraw_3();
        void test_withdraw_4();
        void test_withdraw_5();
        void test_withdraw_6();
        void test_withdraw_7();
        void test_withdraw_8();
        void test_withdraw_9();
        void test_case_0();
};

CPPTEST_TEST_SUITE_REGISTRATION(TestSuite_ATM_cxx_d25c3ea8);

void TestSuite_ATM_cxx_d25c3ea8::setUp()
{
}

void TestSuite_ATM_cxx_d25c3ea8::tearDown()
{
}

/* CPPTEST_TEST_CASE_BEGIN test_ATM_1 */
/* CPPTEST_TEST_CASE_CONTEXT ATM::ATM(Bank *, BaseDisplay *) */
void TestSuite_ATM_cxx_d25c3ea8::test_ATM_1()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (bank) */ 
    ::Bank * _bank  = 0 ;
    /* Initializing argument 2 (display) */ 
    ::BaseDisplay * _display  = 0 ;
    /* Testing constructor. */
    ::ATM _return(_bank, _display);
    /* Post-condition check */
    CPPTEST_ASSERT(0 != ( _return.myCurrentAccount ));
    CPPTEST_POST_CONDITION_PTR("Bank * _return.myBank ", ( _return.myBank ));
    CPPTEST_POST_CONDITION_PTR("BaseDisplay * _return.myDisplay ", ( _return.myDisplay ));
    CPPTEST_POST_CONDITION_PTR("Bank * _bank ", ( _bank ));
    CPPTEST_POST_CONDITION_PTR("BaseDisplay * _display ", ( _display ));
}
/* CPPTEST_TEST_CASE_END test_ATM_1 */

/* CPPTEST_TEST_CASE_BEGIN test_ATM_2 */
/* CPPTEST_TEST_CASE_CONTEXT ATM::ATM(Bank *, BaseDisplay *) */
void TestSuite_ATM_cxx_d25c3ea8::test_ATM_2()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (bank) */ 
    ::Bank _bank_0 ;
    ::Bank * _bank  = & _bank_0;
    /* Initializing argument 2 (display) */ 
    ::BaseDisplay * _display  = 0 ;
    /* Testing constructor. */
    ::ATM _return(_bank, _display);
    /* Post-condition check */
    CPPTEST_POST_CONDITION_PTR("Account * _return.myCurrentAccount ", ( _return.myCurrentAccount ));
    CPPTEST_POST_CONDITION_PTR("Bank * _return.myBank ", ( _return.myBank ));
    CPPTEST_POST_CONDITION_PTR("BaseDisplay * _return.myDisplay ", ( _return.myDisplay ));
    CPPTEST_POST_CONDITION_PTR("Bank * _bank ", ( _bank ));
    CPPTEST_POST_CONDITION_PTR("BaseDisplay * _display ", ( _display ));
}
/* CPPTEST_TEST_CASE_END test_ATM_2 */

/* CPPTEST_TEST_CASE_BEGIN test_fillUserRequest_1 */
/* CPPTEST_TEST_CASE_CONTEXT void ATM::fillUserRequest(ATM::UserRequest, double) */
void TestSuite_ATM_cxx_d25c3ea8::test_fillUserRequest_1()
{
    /* Pre-condition initialization */
    /* Initializing argument 0 (this) */ 
        /* Initializing constructor argument 1 (bank) */ 
        ::Bank * _bank_0  = 0 ;
        /* Initializing constructor argument 2 (display) */ 
        ::BaseDisplay * _display_0  = 0 ;
    ::ATM _cpptest_TestObject (_bank_0, _display_0);

    /* Initializing argument 1 (request) */ 
    ::ATM::UserRequest _request  = ::ATM::REQUEST_INVALID;
    /* Initializing argument 2 (amount) */ 
    double _amount  = cpptestLimitsGetMaxPosDouble();
    /* Tested function call */
    _cpptest_TestObject.fillUserRequest(_request, _amount);
    /* Post-condition check */
    CPPTEST_POST_CONDITION_PTR("Account * _cpptest_TestObject.myCurrentAccount ", ( _cpptest_TestObject.myCurrentAccount ));
    CPPTEST_POST_CONDITION_PTR("Bank * _cpptest_TestObject.myBank ", ( _cpptest_TestObject.myBank ));
    CPPTEST_POST_CONDITION_PTR("BaseDisplay * _cpptest_TestObject.myDisplay ", ( _cpptest_TestObject.myDisplay ));
}
/* CPPTEST_TEST_CASE_END test_fillUserRequest_1 */

/* CPPTEST_TEST_CASE_BEGIN test_fillUserRequest_2 */
/* CPPTEST_TEST_CASE_CONTEXT void ATM::fillUserRequest(ATM::UserRequest, double) */
void TestSuite_ATM_cxx_d25c3ea8::test_fillUserRequest_2()
{
    /* Pre-condition initialization */
    /* Initializing argument 0 (this) */ 
        /* Initializing constructor argument 1 (bank) */ 
        ::Bank _bank_0_1 ;
        ::Bank * _bank_0  = & _bank_0_1;
        /* Initializing constructor argument 2 (display) */ 
        ::BaseDisplay * _display_0  = 0 ;
    ::ATM _cpptest_TestObject (_bank_0, _display_0);

    /* Initializing argument 1 (request) */ 
    ::ATM::UserRequest _request  = ::ATM::REQUEST_INVALID;
    /* Initializing argument 2 (amount) */ 
    double _amount  = cpptestLimitsGetMaxPosDouble();
    /* Tested function call */
    _cpptest_TestObject.fillUserRequest(_request, _amount);
    /* Post-condition check */
    CPPTEST_POST_CONDITION_PTR("Account * _cpptest_TestObject.myCurrentAccount ", ( _cpptest_TestObject.myCurrentAccount ));
    CPPTEST_POST_CONDITION_PTR("Bank * _cpptest_TestObject.myBank ", ( _cpptest_TestObject.myBank ));
    CPPTEST_POST_CONDITION_PTR("BaseDisplay * _cpptest_TestObject.myDisplay ", ( _cpptest_TestObject.myDisplay ));
}
/* CPPTEST_TEST_CASE_END test_fillUserRequest_2 */

/* CPPTEST_TEST_CASE_BEGIN test_viewAccount_1 */
/* CPPTEST_TEST_CASE_CONTEXT void ATM::viewAccount(int, std::string) */
void TestSuite_ATM_cxx_d25c3ea8::test_viewAccount_1()
{
    /* Pre-condition initialization */
    /* Initializing argument 0 (this) */ 
        /* Initializing constructor argument 1 (bank) */ 
        ::Bank * _bank_0  = 0 ;
        /* Initializing constructor argument 2 (display) */ 
        ::BaseDisplay * _display_0  = new BaseDisplay() ;
    ::ATM _cpptest_TestObject (_bank_0, _display_0);

    /* Initializing argument 1 (accountNumber) */ 
    int _accountNumber  = cpptestLimitsGetMaxInt();
    /* Initializing argument 2 (password) */ 
    ::std::string _password  = "";
    /* Tested function call */
    _cpptest_TestObject.viewAccount(_accountNumber, _password);
    /* Post-condition check */
    CPPTEST_POST_CONDITION_PTR("Account * _cpptest_TestObject.myCurrentAccount ", ( _cpptest_TestObject.myCurrentAccount ));
    CPPTEST_POST_CONDITION_PTR("Bank * _cpptest_TestObject.myBank ", ( _cpptest_TestObject.myBank ));
    CPPTEST_POST_CONDITION_PTR("BaseDisplay * _cpptest_TestObject.myDisplay ", ( _cpptest_TestObject.myDisplay ));
}
/* CPPTEST_TEST_CASE_END test_viewAccount_1 */

/* CPPTEST_TEST_CASE_BEGIN test_viewAccount_2 */
/* CPPTEST_TEST_CASE_CONTEXT void ATM::viewAccount(int, std::string) */
void TestSuite_ATM_cxx_d25c3ea8::test_viewAccount_2()
{
    /* Pre-condition initialization */
    /* Initializing argument 0 (this) */ 
        /* Initializing constructor argument 1 (bank) */ 
        ::Bank _bank_0_1 ;
        ::Bank * _bank_0  = & _bank_0_1;
        /* Initializing constructor argument 2 (display) */ 
        ::BaseDisplay * _display_0  =new BaseDisplay() ;
    ::ATM _cpptest_TestObject (_bank_0, _display_0);

    /* Initializing argument 1 (accountNumber) */ 
    int _accountNumber  = cpptestLimitsGetMaxInt();
    /* Initializing argument 2 (password) */ 
    ::std::string _password  = "";
    /* Tested function call */
    _cpptest_TestObject.viewAccount(_accountNumber, _password);
    /* Post-condition check */
    CPPTEST_POST_CONDITION_PTR("Account * _cpptest_TestObject.myCurrentAccount ", ( _cpptest_TestObject.myCurrentAccount ));
    CPPTEST_POST_CONDITION_PTR("Bank * _cpptest_TestObject.myBank ", ( _cpptest_TestObject.myBank ));
    CPPTEST_POST_CONDITION_PTR("BaseDisplay * _cpptest_TestObject.myDisplay ", ( _cpptest_TestObject.myDisplay ));
}
/* CPPTEST_TEST_CASE_END test_viewAccount_2 */

/* CPPTEST_TEST_CASE_BEGIN test_makeDeposit_1 */
/* CPPTEST_TEST_CASE_CONTEXT void ATM::makeDeposit(double) */
void TestSuite_ATM_cxx_d25c3ea8::test_makeDeposit_1()
{
    /* Pre-condition initialization */
    /* Initializing argument 0 (this) */ 
        /* Initializing constructor argument 1 (bank) */ 
            /* Initializing factory argument 1 (withAccount) */ 
            bool _withAccount_1  = false;
        ::Bank * _bank_0  = ::CppTest_Factory_Bank(_withAccount_1);
        /* Initializing constructor argument 2 (display) */ 
        ::BaseDisplay * _display_0  = ::CppTest_Factory_BaseDisplay();
    ::ATM _cpptest_TestObject (_bank_0, _display_0);

    /* Initializing argument 1 (amount) */ 
    double _amount  = cpptestLimitsGetMaxPosDouble();
    /* Tested function call */
    _cpptest_TestObject.makeDeposit(_amount);
    /* Post-condition check */
    CPPTEST_POST_CONDITION_PTR("Account * _cpptest_TestObject.myCurrentAccount ", ( _cpptest_TestObject.myCurrentAccount ));
    CPPTEST_POST_CONDITION_PTR("Bank * _cpptest_TestObject.myBank ", ( _cpptest_TestObject.myBank ));
    CPPTEST_POST_CONDITION_PTR("BaseDisplay * _cpptest_TestObject.myDisplay ", ( _cpptest_TestObject.myDisplay ));
}
/* CPPTEST_TEST_CASE_END test_makeDeposit_1 */

/* CPPTEST_TEST_CASE_BEGIN test_makeDeposit_10 */
/* CPPTEST_TEST_CASE_CONTEXT void ATM::makeDeposit(double) */
void TestSuite_ATM_cxx_d25c3ea8::test_makeDeposit_10()
{
    /* Pre-condition initialization */
    /* Initializing argument 0 (this) */ 
        /* Initializing constructor argument 1 (bank) */ 
            /* Initializing factory argument 1 (withAccount) */ 
            bool _withAccount_1  = false;
        ::Bank * _bank_0  = ::CppTest_Factory_Bank(_withAccount_1);
        /* Initializing constructor argument 2 (display) */ 
        ::BaseDisplay * _display_0  = ::CppTest_Factory_BaseDisplay();
    ::ATM _cpptest_TestObject (_bank_0, _display_0);

    /* Initializing argument 1 (amount) */ 
    double _amount  = 0.0;
    /* Tested function call */
    _cpptest_TestObject.makeDeposit(_amount);
    /* Post-condition check */
    CPPTEST_POST_CONDITION_PTR("Account * _cpptest_TestObject.myCurrentAccount ", ( _cpptest_TestObject.myCurrentAccount ));
    CPPTEST_POST_CONDITION_PTR("Bank * _cpptest_TestObject.myBank ", ( _cpptest_TestObject.myBank ));
    CPPTEST_POST_CONDITION_PTR("BaseDisplay * _cpptest_TestObject.myDisplay ", ( _cpptest_TestObject.myDisplay ));
}
/* CPPTEST_TEST_CASE_END test_makeDeposit_10 */

/* CPPTEST_TEST_CASE_BEGIN test_makeDeposit_2 */
/* CPPTEST_TEST_CASE_CONTEXT void ATM::makeDeposit(double) */
void TestSuite_ATM_cxx_d25c3ea8::test_makeDeposit_2()
{
    /* Pre-condition initialization */
    /* Initializing argument 0 (this) */ 
        /* Initializing constructor argument 1 (bank) */ 
            /* Initializing factory argument 1 (withAccount) */ 
            bool _withAccount_1  = true;
        ::Bank * _bank_0  = ::CppTest_Factory_Bank(_withAccount_1);
        /* Initializing constructor argument 2 (display) */ 
        ::BaseDisplay * _display_0  = ::CppTest_Factory_BaseDisplay();
    ::ATM _cpptest_TestObject (_bank_0, _display_0);

    /* Initializing argument 1 (amount) */ 
    double _amount  = cpptestLimitsGetMaxPosDouble();
    /* Tested function call */
    _cpptest_TestObject.makeDeposit(_amount);
    /* Post-condition check */
    CPPTEST_POST_CONDITION_PTR("Account * _cpptest_TestObject.myCurrentAccount ", ( _cpptest_TestObject.myCurrentAccount ));
    CPPTEST_POST_CONDITION_PTR("Bank * _cpptest_TestObject.myBank ", ( _cpptest_TestObject.myBank ));
    CPPTEST_POST_CONDITION_PTR("BaseDisplay * _cpptest_TestObject.myDisplay ", ( _cpptest_TestObject.myDisplay ));
}
/* CPPTEST_TEST_CASE_END test_makeDeposit_2 */

/* CPPTEST_TEST_CASE_BEGIN test_makeDeposit_3 */
/* CPPTEST_TEST_CASE_CONTEXT void ATM::makeDeposit(double) */
void TestSuite_ATM_cxx_d25c3ea8::test_makeDeposit_3()
{
    /* Pre-condition initialization */
    /* Initializing argument 0 (this) */ 
        /* Initializing constructor argument 1 (bank) */ 
            /* Initializing factory argument 1 (withAccount) */ 
            bool _withAccount_1  = false;
        ::Bank * _bank_0  = ::CppTest_Factory_Bank(_withAccount_1);
        /* Initializing constructor argument 2 (display) */ 
        ::BaseDisplay * _display_0  = ::CppTest_Factory_BaseDisplay();
    ::ATM _cpptest_TestObject (_bank_0, _display_0);

    /* Initializing argument 1 (amount) */ 
    double _amount  = cpptestLimitsGetMaxNegDouble();
    /* Tested function call */
    _cpptest_TestObject.makeDeposit(_amount);
    /* Post-condition check */
    CPPTEST_POST_CONDITION_PTR("Account * _cpptest_TestObject.myCurrentAccount ", ( _cpptest_TestObject.myCurrentAccount ));
    CPPTEST_POST_CONDITION_PTR("Bank * _cpptest_TestObject.myBank ", ( _cpptest_TestObject.myBank ));
    CPPTEST_POST_CONDITION_PTR("BaseDisplay * _cpptest_TestObject.myDisplay ", ( _cpptest_TestObject.myDisplay ));
}
/* CPPTEST_TEST_CASE_END test_makeDeposit_3 */

/* CPPTEST_TEST_CASE_BEGIN test_makeDeposit_4 */
/* CPPTEST_TEST_CASE_CONTEXT void ATM::makeDeposit(double) */
void TestSuite_ATM_cxx_d25c3ea8::test_makeDeposit_4()
{
    /* Pre-condition initialization */
    /* Initializing argument 0 (this) */ 
        /* Initializing constructor argument 1 (bank) */ 
            /* Initializing factory argument 1 (withAccount) */ 
            bool _withAccount_1  = true;
        ::Bank * _bank_0  = ::CppTest_Factory_Bank(_withAccount_1);
        /* Initializing constructor argument 2 (display) */ 
        ::BaseDisplay * _display_0  = ::CppTest_Factory_BaseDisplay();
    ::ATM _cpptest_TestObject (_bank_0, _display_0);

    /* Initializing argument 1 (amount) */ 
    double _amount  = cpptestLimitsGetMaxNegDouble();
    /* Tested function call */
    _cpptest_TestObject.makeDeposit(_amount);
    /* Post-condition check */
    CPPTEST_POST_CONDITION_PTR("Account * _cpptest_TestObject.myCurrentAccount ", ( _cpptest_TestObject.myCurrentAccount ));
    CPPTEST_POST_CONDITION_PTR("Bank * _cpptest_TestObject.myBank ", ( _cpptest_TestObject.myBank ));
    CPPTEST_POST_CONDITION_PTR("BaseDisplay * _cpptest_TestObject.myDisplay ", ( _cpptest_TestObject.myDisplay ));
}
/* CPPTEST_TEST_CASE_END test_makeDeposit_4 */

/* CPPTEST_TEST_CASE_BEGIN test_makeDeposit_5 */
/* CPPTEST_TEST_CASE_CONTEXT void ATM::makeDeposit(double) */
void TestSuite_ATM_cxx_d25c3ea8::test_makeDeposit_5()
{
    /* Pre-condition initialization */
    /* Initializing argument 0 (this) */ 
        /* Initializing constructor argument 1 (bank) */ 
            /* Initializing factory argument 1 (withAccount) */ 
            bool _withAccount_1  = false;
        ::Bank * _bank_0  = ::CppTest_Factory_Bank(_withAccount_1);
        /* Initializing constructor argument 2 (display) */ 
        ::BaseDisplay * _display_0  = ::CppTest_Factory_BaseDisplay();
    ::ATM _cpptest_TestObject (_bank_0, _display_0);

    /* Initializing argument 1 (amount) */ 
    double _amount  = cpptestLimitsGetMinNegDouble();
    /* Tested function call */
    _cpptest_TestObject.makeDeposit(_amount);
    /* Post-condition check */
    CPPTEST_POST_CONDITION_PTR("Account * _cpptest_TestObject.myCurrentAccount ", ( _cpptest_TestObject.myCurrentAccount ));
    CPPTEST_POST_CONDITION_PTR("Bank * _cpptest_TestObject.myBank ", ( _cpptest_TestObject.myBank ));
    CPPTEST_POST_CONDITION_PTR("BaseDisplay * _cpptest_TestObject.myDisplay ", ( _cpptest_TestObject.myDisplay ));
}
/* CPPTEST_TEST_CASE_END test_makeDeposit_5 */

/* CPPTEST_TEST_CASE_BEGIN test_makeDeposit_6 */
/* CPPTEST_TEST_CASE_CONTEXT void ATM::makeDeposit(double) */
void TestSuite_ATM_cxx_d25c3ea8::test_makeDeposit_6()
{
    /* Pre-condition initialization */
    /* Initializing argument 0 (this) */ 
        /* Initializing constructor argument 1 (bank) */ 
            /* Initializing factory argument 1 (withAccount) */ 
            bool _withAccount_1  = true;
        ::Bank * _bank_0  = ::CppTest_Factory_Bank(_withAccount_1);
        /* Initializing constructor argument 2 (display) */ 
        ::BaseDisplay * _display_0  = ::CppTest_Factory_BaseDisplay();
    ::ATM _cpptest_TestObject (_bank_0, _display_0);

    /* Initializing argument 1 (amount) */ 
    double _amount  = cpptestLimitsGetMinNegDouble();
    /* Tested function call */
    _cpptest_TestObject.makeDeposit(_amount);
    /* Post-condition check */
    CPPTEST_POST_CONDITION_PTR("Account * _cpptest_TestObject.myCurrentAccount ", ( _cpptest_TestObject.myCurrentAccount ));
    CPPTEST_POST_CONDITION_PTR("Bank * _cpptest_TestObject.myBank ", ( _cpptest_TestObject.myBank ));
    CPPTEST_POST_CONDITION_PTR("BaseDisplay * _cpptest_TestObject.myDisplay ", ( _cpptest_TestObject.myDisplay ));
}
/* CPPTEST_TEST_CASE_END test_makeDeposit_6 */

/* CPPTEST_TEST_CASE_BEGIN test_makeDeposit_7 */
/* CPPTEST_TEST_CASE_CONTEXT void ATM::makeDeposit(double) */
void TestSuite_ATM_cxx_d25c3ea8::test_makeDeposit_7()
{
    /* Pre-condition initialization */
    /* Initializing argument 0 (this) */ 
        /* Initializing constructor argument 1 (bank) */ 
            /* Initializing factory argument 1 (withAccount) */ 
            bool _withAccount_1  = false;
        ::Bank * _bank_0  = ::CppTest_Factory_Bank(_withAccount_1);
        /* Initializing constructor argument 2 (display) */ 
        ::BaseDisplay * _display_0  = ::CppTest_Factory_BaseDisplay();
    ::ATM _cpptest_TestObject (_bank_0, _display_0);

    /* Initializing argument 1 (amount) */ 
    double _amount  = -1.0;
    /* Tested function call */
    _cpptest_TestObject.makeDeposit(_amount);
    /* Post-condition check */
    CPPTEST_POST_CONDITION_PTR("Account * _cpptest_TestObject.myCurrentAccount ", ( _cpptest_TestObject.myCurrentAccount ));
    CPPTEST_POST_CONDITION_PTR("Bank * _cpptest_TestObject.myBank ", ( _cpptest_TestObject.myBank ));
    CPPTEST_POST_CONDITION_PTR("BaseDisplay * _cpptest_TestObject.myDisplay ", ( _cpptest_TestObject.myDisplay ));
}
/* CPPTEST_TEST_CASE_END test_makeDeposit_7 */

/* CPPTEST_TEST_CASE_BEGIN test_makeDeposit_8 */
/* CPPTEST_TEST_CASE_CONTEXT void ATM::makeDeposit(double) */
void TestSuite_ATM_cxx_d25c3ea8::test_makeDeposit_8()
{
    /* Pre-condition initialization */
    /* Initializing argument 0 (this) */ 
        /* Initializing constructor argument 1 (bank) */ 
            /* Initializing factory argument 1 (withAccount) */ 
            bool _withAccount_1  = false;
        ::Bank * _bank_0  = ::CppTest_Factory_Bank(_withAccount_1);
        /* Initializing constructor argument 2 (display) */ 
        ::BaseDisplay * _display_0  = ::CppTest_Factory_BaseDisplay();
    ::ATM _cpptest_TestObject (_bank_0, _display_0);

    /* Initializing argument 1 (amount) */ 
    double _amount  = cpptestLimitsGetMinPosDouble();
    /* Tested function call */
    _cpptest_TestObject.makeDeposit(_amount);
    /* Post-condition check */
    CPPTEST_POST_CONDITION_PTR("Account * _cpptest_TestObject.myCurrentAccount ", ( _cpptest_TestObject.myCurrentAccount ));
    CPPTEST_POST_CONDITION_PTR("Bank * _cpptest_TestObject.myBank ", ( _cpptest_TestObject.myBank ));
    CPPTEST_POST_CONDITION_PTR("BaseDisplay * _cpptest_TestObject.myDisplay ", ( _cpptest_TestObject.myDisplay ));
}
/* CPPTEST_TEST_CASE_END test_makeDeposit_8 */

/* CPPTEST_TEST_CASE_BEGIN test_makeDeposit_9 */
/* CPPTEST_TEST_CASE_CONTEXT void ATM::makeDeposit(double) */
void TestSuite_ATM_cxx_d25c3ea8::test_makeDeposit_9()
{
    /* Pre-condition initialization */
    /* Initializing argument 0 (this) */ 
        /* Initializing constructor argument 1 (bank) */ 
            /* Initializing factory argument 1 (withAccount) */ 
            bool _withAccount_1  = false;
        ::Bank * _bank_0  = ::CppTest_Factory_Bank(_withAccount_1);
        /* Initializing constructor argument 2 (display) */ 
        ::BaseDisplay * _display_0  = ::CppTest_Factory_BaseDisplay();
    ::ATM _cpptest_TestObject (_bank_0, _display_0);

    /* Initializing argument 1 (amount) */ 
    double _amount  = 1.0;
    /* Tested function call */
    _cpptest_TestObject.makeDeposit(_amount);
    /* Post-condition check */
    CPPTEST_POST_CONDITION_PTR("Account * _cpptest_TestObject.myCurrentAccount ", ( _cpptest_TestObject.myCurrentAccount ));
    CPPTEST_POST_CONDITION_PTR("Bank * _cpptest_TestObject.myBank ", ( _cpptest_TestObject.myBank ));
    CPPTEST_POST_CONDITION_PTR("BaseDisplay * _cpptest_TestObject.myDisplay ", ( _cpptest_TestObject.myDisplay ));
}
/* CPPTEST_TEST_CASE_END test_makeDeposit_9 */

/* CPPTEST_TEST_CASE_BEGIN test_showBalance_1 */
/* CPPTEST_TEST_CASE_CONTEXT void ATM::showBalance(void) */
void TestSuite_ATM_cxx_d25c3ea8::test_showBalance_1()
{
    /* Pre-condition initialization */
    /* Initializing argument 0 (this) */ 
        /* Initializing constructor argument 1 (bank) */ 
            /* Initializing factory argument 1 (withAccount) */ 
            bool _withAccount_1  = false;
        ::Bank * _bank_0  = ::CppTest_Factory_Bank(_withAccount_1);
        /* Initializing constructor argument 2 (display) */ 
        ::BaseDisplay * _display_0  = ::CppTest_Factory_BaseDisplay();
    ::ATM _cpptest_TestObject (_bank_0, _display_0);

    /* Tested function call */
    _cpptest_TestObject.showBalance();
    /* Post-condition check */
    CPPTEST_POST_CONDITION_PTR("Account * _cpptest_TestObject.myCurrentAccount ", ( _cpptest_TestObject.myCurrentAccount ));
    CPPTEST_POST_CONDITION_PTR("Bank * _cpptest_TestObject.myBank ", ( _cpptest_TestObject.myBank ));
    CPPTEST_POST_CONDITION_PTR("BaseDisplay * _cpptest_TestObject.myDisplay ", ( _cpptest_TestObject.myDisplay ));
}
/* CPPTEST_TEST_CASE_END test_showBalance_1 */

/* CPPTEST_TEST_CASE_BEGIN test_showBalance_2 */
/* CPPTEST_TEST_CASE_CONTEXT void ATM::showBalance(void) */
void TestSuite_ATM_cxx_d25c3ea8::test_showBalance_2()
{
    /* Pre-condition initialization */
    /* Initializing argument 0 (this) */ 
        /* Initializing constructor argument 1 (bank) */ 
            /* Initializing factory argument 1 (withAccount) */ 
            bool _withAccount_1  = true;
        ::Bank * _bank_0  = ::CppTest_Factory_Bank(_withAccount_1);
        /* Initializing constructor argument 2 (display) */ 
        ::BaseDisplay * _display_0  = ::CppTest_Factory_BaseDisplay();
    ::ATM _cpptest_TestObject (_bank_0, _display_0);

    /* Tested function call */
    _cpptest_TestObject.showBalance();
    /* Post-condition check */
    CPPTEST_POST_CONDITION_PTR("Account * _cpptest_TestObject.myCurrentAccount ", ( _cpptest_TestObject.myCurrentAccount ));
    CPPTEST_POST_CONDITION_PTR("Bank * _cpptest_TestObject.myBank ", ( _cpptest_TestObject.myBank ));
    CPPTEST_POST_CONDITION_PTR("BaseDisplay * _cpptest_TestObject.myDisplay ", ( _cpptest_TestObject.myDisplay ));
}
/* CPPTEST_TEST_CASE_END test_showBalance_2 */

/* CPPTEST_TEST_CASE_BEGIN test_withdraw_1 */
/* CPPTEST_TEST_CASE_CONTEXT void ATM::withdraw(double) */
void TestSuite_ATM_cxx_d25c3ea8::test_withdraw_1()
{
    /* Pre-condition initialization */
    /* Initializing argument 0 (this) */ 
        /* Initializing constructor argument 1 (bank) */ 
            /* Initializing factory argument 1 (withAccount) */ 
            bool _withAccount_1  = false;
        ::Bank * _bank_0  = ::CppTest_Factory_Bank(_withAccount_1);
        /* Initializing constructor argument 2 (display) */ 
        ::BaseDisplay * _display_0  = ::CppTest_Factory_BaseDisplay();
    ::ATM _cpptest_TestObject (_bank_0, _display_0);

    /* Initializing argument 1 (amount) */ 
    double _amount  = -1;
    /* Tested function call */
    _cpptest_TestObject.withdraw(_amount);
    /* Post-condition check */
    CPPTEST_POST_CONDITION_PTR("Account * _cpptest_TestObject.myCurrentAccount ", ( _cpptest_TestObject.myCurrentAccount ));
    CPPTEST_POST_CONDITION_PTR("Bank * _cpptest_TestObject.myBank ", ( _cpptest_TestObject.myBank ));
    CPPTEST_POST_CONDITION_PTR("BaseDisplay * _cpptest_TestObject.myDisplay ", ( _cpptest_TestObject.myDisplay ));
}
/* CPPTEST_TEST_CASE_END test_withdraw_1 */

/* CPPTEST_TEST_CASE_BEGIN test_withdraw_10 */
/* CPPTEST_TEST_CASE_CONTEXT void ATM::withdraw(double) */
void TestSuite_ATM_cxx_d25c3ea8::test_withdraw_10()
{
    /* Pre-condition initialization */
    /* Initializing argument 0 (this) */ 
        /* Initializing constructor argument 1 (bank) */ 
            /* Initializing factory argument 1 (withAccount) */ 
            bool _withAccount_1  = false;
        ::Bank * _bank_0  = ::CppTest_Factory_Bank(_withAccount_1);
        /* Initializing constructor argument 2 (display) */ 
        ::BaseDisplay * _display_0  = ::CppTest_Factory_BaseDisplay();
    ::ATM _cpptest_TestObject (_bank_0, _display_0);

    /* Initializing argument 1 (amount) */ 
    double _amount  = 0.0;
    /* Tested function call */
    _cpptest_TestObject.withdraw(_amount);
    /* Post-condition check */
    CPPTEST_POST_CONDITION_PTR("Account * _cpptest_TestObject.myCurrentAccount ", ( _cpptest_TestObject.myCurrentAccount ));
    CPPTEST_POST_CONDITION_PTR("Bank * _cpptest_TestObject.myBank ", ( _cpptest_TestObject.myBank ));
    CPPTEST_POST_CONDITION_PTR("BaseDisplay * _cpptest_TestObject.myDisplay ", ( _cpptest_TestObject.myDisplay ));
}
/* CPPTEST_TEST_CASE_END test_withdraw_10 */

/* CPPTEST_TEST_CASE_BEGIN test_withdraw_2 */
/* CPPTEST_TEST_CASE_CONTEXT void ATM::withdraw(double) */
void TestSuite_ATM_cxx_d25c3ea8::test_withdraw_2()
{
    /* Pre-condition initialization */
    /* Initializing argument 0 (this) */ 
        /* Initializing constructor argument 1 (bank) */ 
            /* Initializing factory argument 1 (withAccount) */ 
            bool _withAccount_1  = true;
        ::Bank * _bank_0  = ::CppTest_Factory_Bank(_withAccount_1);
        /* Initializing constructor argument 2 (display) */ 
        ::BaseDisplay * _display_0  = ::CppTest_Factory_BaseDisplay();
    ::ATM _cpptest_TestObject (_bank_0, _display_0);

    /* Initializing argument 1 (amount) */ 
    double _amount  = -1;
    /* Tested function call */
    _cpptest_TestObject.withdraw(_amount);
    /* Post-condition check */
    CPPTEST_POST_CONDITION_PTR("Account * _cpptest_TestObject.myCurrentAccount ", ( _cpptest_TestObject.myCurrentAccount ));
    CPPTEST_POST_CONDITION_PTR("Bank * _cpptest_TestObject.myBank ", ( _cpptest_TestObject.myBank ));
    CPPTEST_POST_CONDITION_PTR("BaseDisplay * _cpptest_TestObject.myDisplay ", ( _cpptest_TestObject.myDisplay ));
}
/* CPPTEST_TEST_CASE_END test_withdraw_2 */

/* CPPTEST_TEST_CASE_BEGIN test_withdraw_3 */
/* CPPTEST_TEST_CASE_CONTEXT void ATM::withdraw(double) */
void TestSuite_ATM_cxx_d25c3ea8::test_withdraw_3()
{
    /* Pre-condition initialization */
    /* Initializing argument 0 (this) */ 
        /* Initializing constructor argument 1 (bank) */ 
            /* Initializing factory argument 1 (withAccount) */ 
            bool _withAccount_1  = false;
        ::Bank * _bank_0  = ::CppTest_Factory_Bank(_withAccount_1);
        /* Initializing constructor argument 2 (display) */ 
        ::BaseDisplay * _display_0  = ::CppTest_Factory_BaseDisplay();
    ::ATM _cpptest_TestObject (_bank_0, _display_0);

    /* Initializing argument 1 (amount) */ 
    double _amount  = cpptestLimitsGetMaxPosDouble();
    /* Tested function call */
    _cpptest_TestObject.withdraw(_amount);
    /* Post-condition check */
    CPPTEST_POST_CONDITION_PTR("Account * _cpptest_TestObject.myCurrentAccount ", ( _cpptest_TestObject.myCurrentAccount ));
    CPPTEST_POST_CONDITION_PTR("Bank * _cpptest_TestObject.myBank ", ( _cpptest_TestObject.myBank ));
    CPPTEST_POST_CONDITION_PTR("BaseDisplay * _cpptest_TestObject.myDisplay ", ( _cpptest_TestObject.myDisplay ));
}
/* CPPTEST_TEST_CASE_END test_withdraw_3 */

/* CPPTEST_TEST_CASE_BEGIN test_withdraw_4 */
/* CPPTEST_TEST_CASE_CONTEXT void ATM::withdraw(double) */
void TestSuite_ATM_cxx_d25c3ea8::test_withdraw_4()
{
    /* Pre-condition initialization */
    /* Initializing argument 0 (this) */ 
        /* Initializing constructor argument 1 (bank) */ 
            /* Initializing factory argument 1 (withAccount) */ 
            bool _withAccount_1  = true;
        ::Bank * _bank_0  = ::CppTest_Factory_Bank(_withAccount_1);
        /* Initializing constructor argument 2 (display) */ 
        ::BaseDisplay * _display_0  = ::CppTest_Factory_BaseDisplay();
    ::ATM _cpptest_TestObject (_bank_0, _display_0);

    /* Initializing argument 1 (amount) */ 
    double _amount  = cpptestLimitsGetMaxPosDouble();
    /* Tested function call */
    _cpptest_TestObject.withdraw(_amount);
    /* Post-condition check */
    CPPTEST_POST_CONDITION_PTR("Account * _cpptest_TestObject.myCurrentAccount ", ( _cpptest_TestObject.myCurrentAccount ));
    CPPTEST_POST_CONDITION_PTR("Bank * _cpptest_TestObject.myBank ", ( _cpptest_TestObject.myBank ));
    CPPTEST_POST_CONDITION_PTR("BaseDisplay * _cpptest_TestObject.myDisplay ", ( _cpptest_TestObject.myDisplay ));
}
/* CPPTEST_TEST_CASE_END test_withdraw_4 */

/* CPPTEST_TEST_CASE_BEGIN test_withdraw_5 */
/* CPPTEST_TEST_CASE_CONTEXT void ATM::withdraw(double) */
void TestSuite_ATM_cxx_d25c3ea8::test_withdraw_5()
{
    /* Pre-condition initialization */
    /* Initializing argument 0 (this) */ 
        /* Initializing constructor argument 1 (bank) */ 
            /* Initializing factory argument 1 (withAccount) */ 
            bool _withAccount_1  = false;
        ::Bank * _bank_0  = ::CppTest_Factory_Bank(_withAccount_1);
        /* Initializing constructor argument 2 (display) */ 
        ::BaseDisplay * _display_0  = ::CppTest_Factory_BaseDisplay();
    ::ATM _cpptest_TestObject (_bank_0, _display_0);

    /* Initializing argument 1 (amount) */ 
    double _amount  = cpptestLimitsGetMaxNegDouble();
    /* Tested function call */
    _cpptest_TestObject.withdraw(_amount);
    /* Post-condition check */
    CPPTEST_POST_CONDITION_PTR("Account * _cpptest_TestObject.myCurrentAccount ", ( _cpptest_TestObject.myCurrentAccount ));
    CPPTEST_POST_CONDITION_PTR("Bank * _cpptest_TestObject.myBank ", ( _cpptest_TestObject.myBank ));
    CPPTEST_POST_CONDITION_PTR("BaseDisplay * _cpptest_TestObject.myDisplay ", ( _cpptest_TestObject.myDisplay ));
}
/* CPPTEST_TEST_CASE_END test_withdraw_5 */

/* CPPTEST_TEST_CASE_BEGIN test_withdraw_6 */
/* CPPTEST_TEST_CASE_CONTEXT void ATM::withdraw(double) */
void TestSuite_ATM_cxx_d25c3ea8::test_withdraw_6()
{
    /* Pre-condition initialization */
    /* Initializing argument 0 (this) */ 
        /* Initializing constructor argument 1 (bank) */ 
            /* Initializing factory argument 1 (withAccount) */ 
            bool _withAccount_1  = false;
        ::Bank * _bank_0  = ::CppTest_Factory_Bank(_withAccount_1);
        /* Initializing constructor argument 2 (display) */ 
        ::BaseDisplay * _display_0  = ::CppTest_Factory_BaseDisplay();
    ::ATM _cpptest_TestObject (_bank_0, _display_0);

    /* Initializing argument 1 (amount) */ 
    double _amount  = cpptestLimitsGetMinNegDouble();
    /* Tested function call */
    _cpptest_TestObject.withdraw(_amount);
    /* Post-condition check */
    CPPTEST_POST_CONDITION_PTR("Account * _cpptest_TestObject.myCurrentAccount ", ( _cpptest_TestObject.myCurrentAccount ));
    CPPTEST_POST_CONDITION_PTR("Bank * _cpptest_TestObject.myBank ", ( _cpptest_TestObject.myBank ));
    CPPTEST_POST_CONDITION_PTR("BaseDisplay * _cpptest_TestObject.myDisplay ", ( _cpptest_TestObject.myDisplay ));
}
/* CPPTEST_TEST_CASE_END test_withdraw_6 */

/* CPPTEST_TEST_CASE_BEGIN test_withdraw_7 */
/* CPPTEST_TEST_CASE_CONTEXT void ATM::withdraw(double) */
void TestSuite_ATM_cxx_d25c3ea8::test_withdraw_7()
{
    /* Pre-condition initialization */
    /* Initializing argument 0 (this) */ 
        /* Initializing constructor argument 1 (bank) */ 
            /* Initializing factory argument 1 (withAccount) */ 
            bool _withAccount_1  = false;
        ::Bank * _bank_0  = ::CppTest_Factory_Bank(_withAccount_1);
        /* Initializing constructor argument 2 (display) */ 
        ::BaseDisplay * _display_0  = ::CppTest_Factory_BaseDisplay();
    ::ATM _cpptest_TestObject (_bank_0, _display_0);

    /* Initializing argument 1 (amount) */ 
    double _amount  = -1.0;
    /* Tested function call */
    _cpptest_TestObject.withdraw(_amount);
    /* Post-condition check */
    CPPTEST_POST_CONDITION_PTR("Account * _cpptest_TestObject.myCurrentAccount ", ( _cpptest_TestObject.myCurrentAccount ));
    CPPTEST_POST_CONDITION_PTR("Bank * _cpptest_TestObject.myBank ", ( _cpptest_TestObject.myBank ));
    CPPTEST_POST_CONDITION_PTR("BaseDisplay * _cpptest_TestObject.myDisplay ", ( _cpptest_TestObject.myDisplay ));
}
/* CPPTEST_TEST_CASE_END test_withdraw_7 */

/* CPPTEST_TEST_CASE_BEGIN test_withdraw_8 */
/* CPPTEST_TEST_CASE_CONTEXT void ATM::withdraw(double) */
void TestSuite_ATM_cxx_d25c3ea8::test_withdraw_8()
{
    /* Pre-condition initialization */
    /* Initializing argument 0 (this) */ 
        /* Initializing constructor argument 1 (bank) */ 
            /* Initializing factory argument 1 (withAccount) */ 
            bool _withAccount_1  = false;
        ::Bank * _bank_0  = ::CppTest_Factory_Bank(_withAccount_1);
        /* Initializing constructor argument 2 (display) */ 
        ::BaseDisplay * _display_0  = ::CppTest_Factory_BaseDisplay();
    ::ATM _cpptest_TestObject (_bank_0, _display_0);

    /* Initializing argument 1 (amount) */ 
    double _amount  = cpptestLimitsGetMinPosDouble();
    /* Tested function call */
    _cpptest_TestObject.withdraw(_amount);
    /* Post-condition check */
    CPPTEST_POST_CONDITION_PTR("Account * _cpptest_TestObject.myCurrentAccount ", ( _cpptest_TestObject.myCurrentAccount ));
    CPPTEST_POST_CONDITION_PTR("Bank * _cpptest_TestObject.myBank ", ( _cpptest_TestObject.myBank ));
    CPPTEST_POST_CONDITION_PTR("BaseDisplay * _cpptest_TestObject.myDisplay ", ( _cpptest_TestObject.myDisplay ));
}
/* CPPTEST_TEST_CASE_END test_withdraw_8 */

/* CPPTEST_TEST_CASE_BEGIN test_withdraw_9 */
/* CPPTEST_TEST_CASE_CONTEXT void ATM::withdraw(double) */
void TestSuite_ATM_cxx_d25c3ea8::test_withdraw_9()
{
    /* Pre-condition initialization */
    /* Initializing argument 0 (this) */ 
        /* Initializing constructor argument 1 (bank) */ 
            /* Initializing factory argument 1 (withAccount) */ 
            bool _withAccount_1  = false;
        ::Bank * _bank_0  = ::CppTest_Factory_Bank(_withAccount_1);
        /* Initializing constructor argument 2 (display) */ 
        ::BaseDisplay * _display_0  = ::CppTest_Factory_BaseDisplay();
    ::ATM _cpptest_TestObject (_bank_0, _display_0);

    /* Initializing argument 1 (amount) */ 
    double _amount  = 1.0;
    /* Tested function call */
    _cpptest_TestObject.withdraw(_amount);
    /* Post-condition check */
    CPPTEST_POST_CONDITION_PTR("Account * _cpptest_TestObject.myCurrentAccount ", ( _cpptest_TestObject.myCurrentAccount ));
    CPPTEST_POST_CONDITION_PTR("Bank * _cpptest_TestObject.myBank ", ( _cpptest_TestObject.myBank ));
    CPPTEST_POST_CONDITION_PTR("BaseDisplay * _cpptest_TestObject.myDisplay ", ( _cpptest_TestObject.myDisplay ));
}
/* CPPTEST_TEST_CASE_END test_withdraw_9 */

/* CPPTEST_TEST_CASE_BEGIN test_case_0 */
/* CPPTEST_TEST_CASE_CONTEXT void ATM::withdraw(double) */
void TestSuite_ATM_cxx_d25c3ea8::test_case_0()
{
/* CPPTEST_TEST_CASE_DATA_BEGIN */
#if 0

<?xml version="1.0" encoding="UTF-8" standalone="no"?>
<testcase>
    <metadata/>
    <steps>
        <step id="MultiVariableStep" version="1">
            <step id="VariableStep" version="1">
                <name>_bank_0_1</name>
                <type>::Bank</type>
                <value/>
            </step>
            <step id="VariableStep" version="1">
                <name>_bank_0</name>
                <type>::Bank *</type>
                <value>&amp; _bank_0_1</value>
            </step>
            <step id="VariableStep" version="1">
                <name>_display_0_2</name>
                <type>::BaseDisplay</type>
                <value/>
            </step>
            <step id="VariableStep" version="1">
                <name>_display_0</name>
                <type>::BaseDisplay *</type>
                <value>&amp; _display_0_2</value>
            </step>
            <step id="VariableStep" version="1">
                <name>_cpptest_TestObject(_bank_0, _display_0)</name>
                <type>::ATM</type>
                <value/>
            </step>
            <step id="VariableStep" version="1">
                <name>_accountNumber</name>
                <type>int</type>
                <value>0</value>
            </step>
            <step id="VariableStep" version="1">
                <name>_password</name>
                <type>::std::string</type>
                <value>""</value>
            </step>
        </step>
        <step id="CallStep" version="1">
            <comment>Tested function call</comment>
            <return/>
            <name>_cpptest_TestObject.viewAccount</name>
            <params>_accountNumber, _password</params>
        </step>
        <step id="AssertionsStep" version="1">
            <comment>Post-condition check (outcome)</comment>
            <step id="AssertionStep" version="1">
                <type>CPPTEST_ASSERT_PTR_EQUAL</type>
                <P1>0</P1>
                <P2>_cpptest_TestObject.myCurrentAccount</P2>
                <P3/>
                <P4/>
            </step>
            <step id="AssertionStep" version="1">
                <type>CPPTEST_ASSERT_PTR_EQUAL</type>
                <P1>0</P1>
                <P2>_cpptest_TestObject.myBank</P2>
                <P3/>
                <P4/>
            </step>
            <step id="AssertionStep" version="1">
                <type>CPPTEST_ASSERT_PTR_EQUAL</type>
                <P1>0</P1>
                <P2>_cpptest_TestObject.myDisplay</P2>
                <P3/>
                <P4/>
            </step>
        </step>
    </steps>
</testcase>

#endif
/* CPPTEST_TEST_CASE_DATA_END */
::Bank _bank_0_1;
::Bank * _bank_0 = & _bank_0_1;
::BaseDisplay _display_0_2;
::BaseDisplay * _display_0 = & _display_0_2;
::ATM _cpptest_TestObject(_bank_0, _display_0);
int _accountNumber = 0;
::std::string _password = "";
_cpptest_TestObject.viewAccount(_accountNumber, _password);
CPPTEST_ASSERT_PTR_EQUAL(0, _cpptest_TestObject.myCurrentAccount);
CPPTEST_ASSERT_PTR_EQUAL(0, _cpptest_TestObject.myBank);
CPPTEST_ASSERT_PTR_EQUAL(0, _cpptest_TestObject.myDisplay);
}
/* CPPTEST_TEST_CASE_END test_case_0 */
