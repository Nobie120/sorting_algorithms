#include "sort.h"

/**
 * lumoto_partition - partition an array into subaray
 * @lb:start of the partition to be partioned
 * @ub:end of the partition
 * @size:size of the array
 * @array:the array to be sorted
 *
 * Return:The lb of the resulting partition
 */

size_t lumoto_partition (int *array, size_t size, ssize_t lb, ssize_t ub)
{
	int i, j, pivot = array[ub], temp;

	for (i = j = lb; j < ub; j++)
	{
		if (array[j] < pivot)
		{
			temp = array[i];
			array[i++] = array[j];
			array[j] = temp;
		}
	}
	temp = array[i];
	array[i] = array[ub];
	array[ub] = temp;
	print_array(array, size);

	return (i);
}

/**
 * quicksort - sorts an array using the lumoto scheme
 * @array:the array to be sorted
 * @size:the size of the array
 * @lb:the start of a partiton
 * @up:the end of a partition
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
