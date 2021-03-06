/* AUTOGENERATED FILE. DO NOT EDIT. */

//=======Test Runner Used To Run Each Test Below=====
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
  if (TEST_PROTECT() && !TEST_IS_IGNORED) \
  { \
    tearDown(); \
  } \
  UnityConcludeTest(); \
}

//=======Automagically Detected Files To Include=====
#include "unity.h"
#include <setjmp.h>
#include <stdio.h>

int GlobalExpectCount;
int GlobalVerifyOrder;
char* GlobalOrderError;

//=======External Functions This Runner Calls=====
extern void setUp(void);
extern void tearDown(void);
extern void test_addThenMultiply_given_2_plus_3_times_4_should_get_20(void);
extern void test_addThenMultiply_given_2p3_plus_3p4_times_4p5_should_get_xxx(void);
extern void test_explore_function_pointer(void);


//=======Test Reset Option=====
void resetTest()
{
  tearDown();
  setUp();
}


//=======MAIN=====
int main(void)
{
  Unity.TestFile = "test_FunctionPointer.c";
  UnityBegin();
  RUN_TEST(test_addThenMultiply_given_2_plus_3_times_4_should_get_20, 53);
  RUN_TEST(test_addThenMultiply_given_2p3_plus_3p4_times_4p5_should_get_xxx, 62);
  RUN_TEST(test_explore_function_pointer, 72);

  return (UnityEnd());
}
