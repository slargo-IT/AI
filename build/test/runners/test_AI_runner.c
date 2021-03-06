/* AUTOGENERATED FILE. DO NOT EDIT. */

/*=======Test Runner Used To Run Each Test Below=====*/
#define RUN_TEST(TestFunc, TestLineNum) \
{ \
  Unity.CurrentTestName = #TestFunc; \
  Unity.CurrentTestLineNumber = TestLineNum; \
  Unity.NumberOfTests++; \
  if (TEST_PROTECT()) \
  { \
      setUp(); \
      TestFunc(); \
  } \
  if (TEST_PROTECT()) \
  { \
    tearDown(); \
  } \
  UnityConcludeTest(); \
}

/*=======Automagically Detected Files To Include=====*/
#include "unity.h"
#include <setjmp.h>
#include <stdio.h>

int GlobalExpectCount;
int GlobalVerifyOrder;
char* GlobalOrderError;

/*=======External Functions This Runner Calls=====*/
extern void setUp(void);
extern void tearDown(void);
extern void test_string_compare_given_Hello_and_Hello_expect_1(void);
extern void test_string_compare_given_MuMbo_juMbO_and_mambo_Jumbo_expect_1(void);
extern void test_string_compare_given_Rambo_and_Rambu_expect_0(void);
extern void test_string_compare_given_Hello_and_Hell_expect_0(void);
extern void test_string_compare_given_Hell_and_Hello_expect_0(void);
extern void test_given_sentence_contains_my_name_is_or_not (void);
extern void test_given_My_name_is_Wong_Yik_Kai_expect_Wong_Yik_Kai_is_extracted (void);
extern void test_given_Nice_to_meet_you_and_Wong_Yik_Kai_expect_they_are_concatenated (void);
extern void test_speakToAIMachine_Given_Hello_Hi_Hey_Greetings_expect_Hi_there_my_name_is_themachine_What_is_yours(void);
extern void test_speakToAIMachine_Given_Other_Than_Hello_Hi_Hey_Greetings_expect_Error (void);
extern void test_speakToAIMachine2_Given_A_Name_From_User_expect_Nice_To_Meet_You_Username (void);
extern void test_speakToAIMachine2_Given_Wrong_Reply_expect_Error (void);
extern void test_speakToAIMachine3_Given_Bye_expect_Goodbye_Have_a_Nice_Day (void);
extern void test_speakToAIMachine3_Given_Other_Than_Bye_expect_Error (void);


/*=======Test Reset Option=====*/
void resetTest(void);
void resetTest(void)
{
  tearDown();
  setUp();
}


/*=======MAIN=====*/
int main(void)
{
  UnityBegin("test_AI.c");
  RUN_TEST(test_string_compare_given_Hello_and_Hello_expect_1, 13);
  RUN_TEST(test_string_compare_given_MuMbo_juMbO_and_mambo_Jumbo_expect_1, 18);
  RUN_TEST(test_string_compare_given_Rambo_and_Rambu_expect_0, 23);
  RUN_TEST(test_string_compare_given_Hello_and_Hell_expect_0, 28);
  RUN_TEST(test_string_compare_given_Hell_and_Hello_expect_0, 33);
  RUN_TEST(test_given_sentence_contains_my_name_is_or_not , 38);
  RUN_TEST(test_given_My_name_is_Wong_Yik_Kai_expect_Wong_Yik_Kai_is_extracted , 43);
  RUN_TEST(test_given_Nice_to_meet_you_and_Wong_Yik_Kai_expect_they_are_concatenated , 49);
  RUN_TEST(test_speakToAIMachine_Given_Hello_Hi_Hey_Greetings_expect_Hi_there_my_name_is_themachine_What_is_yours, 55);
  RUN_TEST(test_speakToAIMachine_Given_Other_Than_Hello_Hi_Hey_Greetings_expect_Error , 64);
  RUN_TEST(test_speakToAIMachine2_Given_A_Name_From_User_expect_Nice_To_Meet_You_Username , 73);
  RUN_TEST(test_speakToAIMachine2_Given_Wrong_Reply_expect_Error , 82);
  RUN_TEST(test_speakToAIMachine3_Given_Bye_expect_Goodbye_Have_a_Nice_Day , 91);
  RUN_TEST(test_speakToAIMachine3_Given_Other_Than_Bye_expect_Error , 100);

  return (UnityEnd());
}
