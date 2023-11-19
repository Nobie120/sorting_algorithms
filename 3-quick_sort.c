#include "sort.h"

/**
 * swap_2 - swaps two numbers in array
 * @size:the size of an array
 * @a:the first number to swap
 * @b:the second number to swap
 * @array:The array
 */

void swap_2(int *array, size_t size, int *a, int *b)
{
	if (*a != *b)
	{
		*a = *a + *b;
		*b = *a - *b;
		*a = *a - *b;
		print_array(array, size);
	}

}

/**
 * lumoto_partition - partition an array into subaray
 * @lb:start of the partition to be partioned
 * @ub:end of the partition
 * @size:size of the array
 * @array:the array to be sorted
 *
 * Return:The lb of the resulting partition
 */

size_t lumoto_partition(int *array, size_t size, ssize_t lb, ssize_t ub)
{
	int i, j, pivot = array[ub];

	for (i = j = lb; j < ub; j++)
		if (array[j] < pivot)
			swap_2(array, size, &array[j], &array[i++]);
	swap_2(array, size, &array[i], &array[ub]);

	return (i);
}

/**
 * quicksort - sorts an array using the lumoto scheme
 * @array:the array to be sorted
 * @size:the size of the array
 * @lb:the start of a partiton
 * @ub:the end of a partition
 */

void quicksort(int *array, size_t size, ssize_t lb, ssize_t ub)
{
	if (lb < ub)
	{
		size_t p = lumoto_partition(array, size, lb, ub);

		quicksort(array, size, lb, p - 1);
		quicksort(array, size, p + 1, ub);
	}
}

/**
 * quick_sort - quick sort algorithm using lomuto partinoning
 * @array:The array to be sorted
 * @size:The size of the array
 *
 * Return:The ned of a partition
 */

void quick_sort(int *array, size_t size)
{
	if (!array || !size)
		return;
	quicksort(array, size, 0, size - 1);
}
