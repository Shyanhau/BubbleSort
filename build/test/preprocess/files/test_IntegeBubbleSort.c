#include "unity.h"
#include "IntegerBubbleSort.h"


void setUp(void){}



void tearDown(void){}



void test_integerCompare_given_3_and_2_should_get_1(void)

{

 int v1 = 3 , v2 = 2;

 UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((integerCompare(&v1,&v2))), (((void *)0)), (_U_UINT)11, UNITY_DISPLAY_STYLE_INT);



}



void test_integerCompare_given_3_and_3_should_get_0(void)

{

 int v1 = 3 , v2 = 3;

 UnityAssertEqualNumber((_U_SINT)((0)), (_U_SINT)((integerCompare(&v1,&v2))), (((void *)0)), (_U_UINT)18, UNITY_DISPLAY_STYLE_INT);

}



void test_integerCompare_given_2_and_3_should_get_neg_1(void)

{

 int v1 = 2 , v2 = 3;

 UnityAssertEqualNumber((_U_SINT)((-1)), (_U_SINT)((integerCompare(&v1,&v2))), (((void *)0)), (_U_UINT)24, UNITY_DISPLAY_STYLE_INT);

}



void test_integerSwap_given_2_and_3_should_get_neg_1(void)

{

 int array[] = {10 ,20, 50 ,30};



 integerSwap(array, 2,3 );

 UnityAssertEqualNumber((_U_SINT)((10)), (_U_SINT)((array[0])), (((void *)0)), (_U_UINT)32, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((20)), (_U_SINT)((array[1])), (((void *)0)), (_U_UINT)33, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((30)), (_U_SINT)((array[2])), (((void *)0)), (_U_UINT)34, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((50)), (_U_SINT)((array[3])), (((void *)0)), (_U_UINT)35, UNITY_DISPLAY_STYLE_INT);

}
