#include "unity.h"
#include "BubbleSort.h"


void setUp(void){}



void tearDown(void){}



void test_swap_should_not_swap_two_values_if_in_order(void)

{

 int array[]= {1,2};

 swap(array,0,1);

 UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((array[0])), (((void *)0)), (_U_UINT)12, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((2)), (_U_SINT)((array[1])), (((void *)0)), (_U_UINT)13, UNITY_DISPLAY_STYLE_INT);

}



void test_swap_should_swap_two_values_if_not_in_order(void)

{

 int array[]= {3,2};

 swap(array,0,1);

 UnityAssertEqualNumber((_U_SINT)((2)), (_U_SINT)((array[0])), (((void *)0)), (_U_UINT)20, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((3)), (_U_SINT)((array[1])), (((void *)0)), (_U_UINT)21, UNITY_DISPLAY_STYLE_INT);

}



void test_swap_should_not_swap_two_negative_values_if_in_order_(void)

{

 int array[]= {-10,-6};

 swap(array,0,1);

 UnityAssertEqualNumber((_U_SINT)((-10)), (_U_SINT)((array[0])), (((void *)0)), (_U_UINT)28, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((-6)), (_U_SINT)((array[1])), (((void *)0)), (_U_UINT)29, UNITY_DISPLAY_STYLE_INT);

}



void test_swap_should_swap_two_negative_values_if_not_in_order(void)

{

 int array[]= {-10,-22};

 swap(array,0,1);

 UnityAssertEqualNumber((_U_SINT)((-22)), (_U_SINT)((array[0])), (((void *)0)), (_U_UINT)36, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((-10)), (_U_SINT)((array[1])), (((void *)0)), (_U_UINT)37, UNITY_DISPLAY_STYLE_INT);

}



void test_singleBubbleSort_given_22_should_do_nothing(void)

{

 int array[]= {22};

 singleBubbleSort(array,1,1);

 UnityAssertEqualNumber((_U_SINT)((22)), (_U_SINT)((array[0])), (((void *)0)), (_U_UINT)44, UNITY_DISPLAY_STYLE_INT);

}





void test_singleBubbleSort_given_22_5_should_swap_larger_number_to_the_end(void)

{

 int array[]= {22,5};

 singleBubbleSort(array,2,2);

 UnityAssertEqualNumber((_U_SINT)((5)), (_U_SINT)((array[0])), (((void *)0)), (_U_UINT)52, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((22)), (_U_SINT)((array[1])), (((void *)0)), (_U_UINT)53, UNITY_DISPLAY_STYLE_INT);

}





void test_singleBubbleSort_should_move_the_largest_number_to_the_end(void)

{

 int array[]= {22,3,5,9};

 singleBubbleSort(array,4,4);

 UnityAssertEqualNumber((_U_SINT)((3)), (_U_SINT)((array[0])), (((void *)0)), (_U_UINT)61, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((22)), (_U_SINT)((array[1])), (((void *)0)), (_U_UINT)62, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((5)), (_U_SINT)((array[2])), (((void *)0)), (_U_UINT)63, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((9)), (_U_SINT)((array[3])), (((void *)0)), (_U_UINT)64, UNITY_DISPLAY_STYLE_INT);

}



void test_singleBubbleSort_should_move_the_largest_number_to_the_end_with_negative_number(void)

{

 int array[]= {22,-3,5,9};

 singleBubbleSort(array,4,4);

 UnityAssertEqualNumber((_U_SINT)((-3)), (_U_SINT)((array[0])), (((void *)0)), (_U_UINT)71, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((22)), (_U_SINT)((array[1])), (((void *)0)), (_U_UINT)72, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((5)), (_U_SINT)((array[2])), (((void *)0)), (_U_UINT)73, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((9)), (_U_SINT)((array[3])), (((void *)0)), (_U_UINT)74, UNITY_DISPLAY_STYLE_INT);

}



void test_singleBubbleSort_given_four_number_which_in_order_should_do_nothing(void)

{

 int array[]= {3,5,11,22};

 singleBubbleSort(array,4,4);

 UnityAssertEqualNumber((_U_SINT)((3)), (_U_SINT)((array[0])), (((void *)0)), (_U_UINT)81, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((5)), (_U_SINT)((array[1])), (((void *)0)), (_U_UINT)82, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((11)), (_U_SINT)((array[2])), (((void *)0)), (_U_UINT)83, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((22)), (_U_SINT)((array[3])), (((void *)0)), (_U_UINT)84, UNITY_DISPLAY_STYLE_INT);

}



void test_singleBubbleSort_given_four_negative_number_which_in_order_should_do_nothing(void)

{

 int array[]= {-22,-11,-5,-3};

 singleBubbleSort(array,4,4);

 UnityAssertEqualNumber((_U_SINT)((-22)), (_U_SINT)((array[0])), (((void *)0)), (_U_UINT)91, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((-11)), (_U_SINT)((array[1])), (((void *)0)), (_U_UINT)92, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((-5)), (_U_SINT)((array[2])), (((void *)0)), (_U_UINT)93, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((-3)), (_U_SINT)((array[3])), (((void *)0)), (_U_UINT)94, UNITY_DISPLAY_STYLE_INT);

}





void test_bubbleSort_given_42_22_5_should_sort_to_5_22_42(void)

{



 int array[] = {42,22,5};

 bubbleSort(array,3);

 UnityAssertEqualNumber((_U_SINT)((5)), (_U_SINT)((array[0])), (((void *)0)), (_U_UINT)103, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((22)), (_U_SINT)((array[1])), (((void *)0)), (_U_UINT)104, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((42)), (_U_SINT)((array[2])), (((void *)0)), (_U_UINT)105, UNITY_DISPLAY_STYLE_INT);



}





void test_bubbleSort_given_23_1_70_150_neg_100_5_90_should_sort_to_neg100_1_5_23_70_90_150(void)

{



 int array[] = {23,1,70,150,-100,5,90};

 bubbleSort(array,7);

 UnityAssertEqualNumber((_U_SINT)((-100)), (_U_SINT)((array[0])), (((void *)0)), (_U_UINT)115, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((array[1])), (((void *)0)), (_U_UINT)116, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((5)), (_U_SINT)((array[2])), (((void *)0)), (_U_UINT)117, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((23)), (_U_SINT)((array[3])), (((void *)0)), (_U_UINT)118, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((70)), (_U_SINT)((array[4])), (((void *)0)), (_U_UINT)119, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((90)), (_U_SINT)((array[5])), (((void *)0)), (_U_UINT)120, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((150)), (_U_SINT)((array[6])), (((void *)0)), (_U_UINT)121, UNITY_DISPLAY_STYLE_INT);

}
