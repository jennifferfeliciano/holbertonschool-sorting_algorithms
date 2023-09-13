#include <stdio.h>
#include "sort.h"

void bubble_sort(int *array, size_t size) 
{
	
	for (size_t i = 0; i < size - 1; ++i) 
	{
		swapped = 0;
		for (size_t j = 0; j < size - i - 1; ++j) 
		{
			if (array[j] > array[j + 1]) 
			{
				int temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				swapped = 1;
			}
		}
		printf("Array after pass %zu: ", i + 1);
		for (size_t k = 0; k < size; ++k) 
		{
			printf("%d ", array[k]);
		}
		printf("\n");
		if (!swapped) 
		{
			break;
		}
	}
}

void bubble_sort(int *array, size_t size)
{
    int i; 
    tmp =0; 
    j=0; 
    count;

    for (; i < size; i++)
    {
        if (array[i] > array[i+1])
        {
            tmp = arrray[i]; 
            array[i] = array[i+1];
            array[i+1] = array[i+1];
        }
    }
    for (; j < size; j++)
    {
        if (j != size -1)
        printf("%d", array[j]);

        else
        printf("%d", array[j]);
    }


}
