#include <stdio.h>
#include "sort.h"

/**
 * swap - swap two chosen elements which are out of order
 *
 * @big_int: Pointer to the larger of the two elements
 * @small_int: Pointer to the smaller element
 */
void swap(int *big_int, int *small_int)
{
	int temp = *big_int;
	*big_int = *small_int;
	*small_int = temp;
}
/**
 * bubble_sort - Sorts an array of integers in ascending order
 * using Bubble sort algorithm
 *
 * @array: an array of integers in random order passed as a pointer
 * @size: the number of elements inside the arrat
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j;

	for (i = 0; i < size; ++i)
	{
		for (j = 1; j < size; ++j)
		{
			if (array[j - 1] > array[j])
			{
				swap(&array[j - 1], &array[j]);
				print_array(array, size);
			}
		}
	}
}

