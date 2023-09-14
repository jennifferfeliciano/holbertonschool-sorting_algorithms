#include <stdio.h>
#include "sort.h"

/**
 * swap - Swaps two elements in an array.
 * @array: The array containing elements to be swapped.
 * @a: Index of the first element.
 * @b: Index of the second element.
 */
void swap(int *array, size_t a, size_t b)
{
    int temp = array[a];
    array[a] = array[b];
    array[b] = temp;
}

/**
 * partition - Lomuto partition scheme for Quick Sort.
 * @array: The array to be partitioned.
 * @low: The starting index of the partition.
 * @high: The ending index of the partition.
 * @size: The size of the array.
 *
 * Return: The index of the pivot element after partitioning.
 */
size_t partition(int *array, ssize_t low, ssize_t high, size_t size)
{
    int pivot = array[high];
    ssize_t i = low - 1;

    for (ssize_t j = low; j <= high - 1; j++)
    {
        if (array[j] <= pivot)
        {
            i++;
            if (i != j)
            {
                swap(array, i, j);
                printf("Swap: %d %d\n", array[i], array[j]);
                for (size_t k = 0; k < size; k++)
                {
                    if (k != 0)
                        printf(", ");
                    printf("%d", array[k]);
                }
                printf("\n");
            }
        }
    }
    if (i + 1 != high)
    {
        swap(array, i + 1, high);
        printf("Swap: %d %d\n", array[i + 1], array[high]);
        for (size_t k = 0; k < size; k++)
        {
            if (k != 0)
                printf(", ");
            printf("%d", array[k]);
        }
        printf("\n");
    }
    return (i + 1);
}

/**
 * quicksort - Recursive function to perform Quick Sort.
 * @array: The array to be sorted.
 * @low: The starting index of the partition.
 * @high: The ending index of the partition.
 * @size: The size of the array.
 */
void quicksort(int *array, ssize_t low, ssize_t high, size_t size)
{
    if (low < high)
    {
        size_t pi = partition(array, low, high, size);
        quicksort(array, low, pi - 1, size);
        quicksort(array, pi + 1, high, size);
    }
}

/**
 * quick_sort - Sorts an array of integers in ascending order using Quick Sort.
 * @array: The array to be sorted.
 * @size: The size of the array.
 */
void quick_sort(int *array, size_t size)
{
    if (array == NULL || size < 2)
        return;

    quicksort(array, 0, size - 1, size);
}
