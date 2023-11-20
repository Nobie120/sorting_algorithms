#include "sort.h"

/**
 * shell_sort - sorts an array using Knuth sequence
 * @array:te array to be sorted
 * @size:the size of the array
 */

void shell_sort(int *array, size_t size)
{
	int gap, i, temp;
	size_t j, n = 1;

	while (n < size)
		n = n * 3 + 1;
	n = ((n - 1) / 3);

	if (!array || !size)
		return;
	for (gap = n; gap; gap = (gap - 1) / 3)
	{
		for (j = gap; j < size; j++)
		{
			for (i = j - gap; i >= 0; i = i - gap)
			{
				if (array[i + gap] > array[i])
					break;
				temp = array[i];
				array[i] = array[i + gap];
				array[i + gap] = temp;
			}
		}
		print_array(array, size);
	}
}
