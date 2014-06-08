#include "IntegerBubbleSort.h"


/**
  * Compare 2 integers
  *
  *
  *Input :
  * v1	is the pointer to the first value
  * v2	is the pointer to the second value
  * Return :
  * 1	 if *v > *v2 
  * 0	 if *v = *v2
  *-1	 if *v < *v2
  */
  
  
int integerCompare(void *v1, void *v2)
{
	int *val1 = (int *)v1;
	int *val2 = (int *)v2;
	
	if(*val1 > *val2 )
		return 1 ;
		
	else if(*val1 < *val2)
		return -1 ;
	
	else 
		return 0; 
}


/**
  * swap 2 integers in the array given
  *
  *
  *Input :
  * array is an array of integers
  * index1 is the index of the 1st integer in the array
  * index2 is the index of the 2nd integer in the array
  *
  *Precondition:
  * indices given must be within bounds of the array 
  *
  */
  
  
 void integerSwap(void *array, int index1, int index2)
 {
 
	int *temp = (int *)index1;
	temp = array[index2];
	array[index2]=array[index1];
	array[index1]=temp;
 
 }
  




