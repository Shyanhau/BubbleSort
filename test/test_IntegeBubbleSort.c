#include "unity.h"
#include "IntegerBubbleSort.h"

void setUp(void){}

void tearDown(void){}

void test_integerCompare_given_3_and_2_should_get_1(void)
{
	int v1 = 3 , v2 = 2; 
	TEST_ASSERT_EQUAL(1, integerCompare(&v1,&v2));

}

void test_integerCompare_given_3_and_3_should_get_0(void)
{
	int v1 = 3 , v2 = 3; 
	TEST_ASSERT_EQUAL(0, integerCompare(&v1,&v2));
}

void test_integerCompare_given_2_and_3_should_get_neg_1(void)
{
	int v1 = 2 , v2 = 3; 
	TEST_ASSERT_EQUAL(-1, integerCompare(&v1,&v2));
}

void test_integerSwap_given_2_and_3_should_get_neg_1(void)
{
	int array[] = {10 ,20, 50 ,30};
	
	integerSwap(array, 2,3 );
	TEST_ASSERT_EQUAL(10,array[0]);
	TEST_ASSERT_EQUAL(20,array[1]);
	TEST_ASSERT_EQUAL(30,array[2]);
	TEST_ASSERT_EQUAL(50,array[3]);
}	