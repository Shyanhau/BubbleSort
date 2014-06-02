#include "unity.h"
#include "BubbleSort.h"

void setUp(void){}

void tearDown(void){}

void test_swap_should_not_swap_two_values_if_in_order(void)
{
	int array[]= {1,2};
	swap(array,0,1);
	TEST_ASSERT_EQUAL(1,array[0]);
	TEST_ASSERT_EQUAL(2,array[1]);
}

void test_swap_should_swap_two_values_if_not_in_order(void)
{
	int array[]= {3,2};
	swap(array,0,1);
	TEST_ASSERT_EQUAL(2,array[0]);
	TEST_ASSERT_EQUAL(3,array[1]);
}

void test_swap_should_not_swap_two_negative_values_if_in_order_(void)
{
	int array[]= {-10,-6};
	swap(array,0,1);
	TEST_ASSERT_EQUAL(-10,array[0]);
	TEST_ASSERT_EQUAL(-6,array[1]);
}

void test_swap_should_swap_two_negative_values_if_not_in_order(void)
{
	int array[]= {-10,-22};
	swap(array,0,1);
	TEST_ASSERT_EQUAL(-22,array[0]);
	TEST_ASSERT_EQUAL(-10,array[1]);
}

void test_singleBubbleSort_given_22_should_do_nothing(void)
{
	int array[]= {22};
	singleBubbleSort(array,1,1);
	TEST_ASSERT_EQUAL(22,array[0]);
}


void test_singleBubbleSort_given_22_5_should_swap_larger_number_to_the_end(void)
{
	int array[]= {22,5};
	singleBubbleSort(array,2,2);
	TEST_ASSERT_EQUAL(5,array[0]);
	TEST_ASSERT_EQUAL(22,array[1]);
}
	

void test_singleBubbleSort_should_move_the_largest_number_to_the_end(void)
{
	int array[]= {22,3,5,9};
	singleBubbleSort(array,4,4);
	TEST_ASSERT_EQUAL(3,array[0]);
	TEST_ASSERT_EQUAL(22,array[1]);
	TEST_ASSERT_EQUAL(5,array[2]);
	TEST_ASSERT_EQUAL(9,array[3]);
}

void test_singleBubbleSort_should_move_the_largest_number_to_the_end_with_negative_number(void)
{
	int array[]= {22,-3,5,9};
	singleBubbleSort(array,4,4);
	TEST_ASSERT_EQUAL(-3,array[0]);
	TEST_ASSERT_EQUAL(22,array[1]);
	TEST_ASSERT_EQUAL(5,array[2]);
	TEST_ASSERT_EQUAL(9,array[3]);
}

void test_singleBubbleSort_given_four_number_which_in_order_should_do_nothing(void)
{
	int array[]= {3,5,11,22};
	singleBubbleSort(array,4,4);
	TEST_ASSERT_EQUAL(3,array[0]);
	TEST_ASSERT_EQUAL(5,array[1]);
	TEST_ASSERT_EQUAL(11,array[2]);
	TEST_ASSERT_EQUAL(22,array[3]);
}

void test_singleBubbleSort_given_four_negative_number_which_in_order_should_do_nothing(void)
{
	int array[]= {-22,-11,-5,-3};
	singleBubbleSort(array,4,4);
	TEST_ASSERT_EQUAL(-22,array[0]);
	TEST_ASSERT_EQUAL(-11,array[1]);
	TEST_ASSERT_EQUAL(-5,array[2]);
	TEST_ASSERT_EQUAL(-3,array[3]);
}


void test_bubbleSort_given_42_22_5_should_sort_to_5_22_42(void)
{
	
	int array[] = {42,22,5};
	bubbleSort(array,3);
	TEST_ASSERT_EQUAL(5,array[0]);
	TEST_ASSERT_EQUAL(22,array[1]);
	TEST_ASSERT_EQUAL(42,array[2]);
	
}


void test_bubbleSort_given_23_1_70_150_neg_100_5_90_should_sort_to_neg100_1_5_23_70_90_150(void)
{
	
	int array[] = {23,1,70,150,-100,5,90};
	bubbleSort(array,7);
	TEST_ASSERT_EQUAL(-100,array[0]);
	TEST_ASSERT_EQUAL(1,array[1]);
	TEST_ASSERT_EQUAL(5,array[2]);
	TEST_ASSERT_EQUAL(23,array[3]);
	TEST_ASSERT_EQUAL(70,array[4]);
	TEST_ASSERT_EQUAL(90,array[5]);
	TEST_ASSERT_EQUAL(150,array[6]);
}



