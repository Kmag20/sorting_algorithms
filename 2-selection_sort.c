#include "sort.h"
#include <stddef.h>

/**
 * swap - swaps the value of smallest index with start index
 *
 * @start_elem - pointer to start element
 * @smallest_elem - pointer to smallest element
 */
void swap(int *start_elem, int *smallest_elem)
{
	size_t temp;

	temp = *start_elem;
	*start_elem = *smallest_elem;
	*smallest_elem = temp;
}

/**
 * selection_sort - sorts an array in ascending order using selction sort algo
 *
 * @array: an array of integers
 * @size: the total number of elements in an array
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j;
	size_t start_index, smallest_index;


	start_index = 0;
	for (i = start_index; i < size; ++i)
	{
		smallest_index = i;
		for (j = smallest_index + 1; j < size; ++j)
		{
			if (array[j] < array[smallest_index])
			{
				smallest_index = j;
			}
		}
		if (smallest_index != start_index)
		{
			swap(&array[i], &array[smallest_index]);
			print_array(array, size);
		}
	}
}

