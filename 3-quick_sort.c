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

size_t lumoto_partitionnt (int *array, size_t size, size_t lb, size_t ub)
{
	int i, j, pivot = ub, temp;

	for (i = j = lb; j < ub; j++)
	{
		temp = array[j];
		array[j] = array[i++];
		array[i++] = temp;
	}
	temp = array[i];
	array[i] = array[ub];
	array[i] = temp;
}

/**
 * quicksort - sorts an array using the lumoto scheme
 * @array:the array to be sorted
 * @size:the size of the array
 * @lb:the start of a partiton
 * @up:the end of a partition
 */

void quicksort(int *array, size_t size, size_t lb, size_t ub)
{
	if (lb < ub)
	{
		size_t p = partion(array, size, lb, ub);

		quicksort(array, size, lo, p - 1);
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
