#include <stdio.h>

void selection_sort(int *array, size_t size) 
{
    for (size_t i = 0; i < size - 1; i++) 
    {
        size_t min_index = i;
        for (size_t j = i + 1; j < size; j++) 
        {
            if (array[j] < array[min_index]) 
            {
                min_index = j;
            }
        }
        if (min_index != i) 
        {
            int temp = array[i];
            array[i] = array[min_index];
            array[min_index] = temp;
        }

        printf("Array after swap: ");
        for (size_t k = 0; k < size; k++)
        {
            printf("%d ", array[k]);
        }
        printf("\n");
    }
}
