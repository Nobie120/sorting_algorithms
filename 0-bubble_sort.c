#include "sort.h"

/**
 * bubble_sort - algorathm for sorting
 * @array:The array to be sorted
 * @size:number of digits in the array
 *
 */

void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int temp, flag = 0;

	if (!array || !size)
		return;
	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < size - 1; j++)
		{
			if (array[j + 1] < array[j])
			{
				temp = array[j + 1];
				array[j + 1] = array[j];
				array[j] = temp;
				print_array(array, size);
				flag = 1;
			}
		}
		if (flag == 0)
			break;
	}
}
