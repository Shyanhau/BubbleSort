#include "BubbleSort.h"


void swap(int array[],int index1, int index2)
{
	int temp;
	if(array[index1] > array[index2])
	{
		temp = array[index2];
		array[index2] = array [index1];
		array[index1] = temp;
	}
}


void singleBubbleSort(int array[],int size, int length)
{
	while((size-1)!=0)
	{
	if(array[length-1] < array[size-2])
		swap(array,size-2,length-1);	
	length--;
	size--;
	}
	
}

void bubbleSort(int array[], int length)
{

	int size=length;
	int count; 
	
	for(count=0; count<length ; count++)
	{
		singleBubbleSort(array,size,length);
	}
		
}	





