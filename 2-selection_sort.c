#include "sort.h"

/**
 * selection_sort - selecton sort algorithms
 * @array: the array to sort
 * @size: the size of the array
 *
 * Return: nothing
*/

void selection_sort(int *array, size_t size)
{
	size_t current, index, tmp, min_int_index;

	if (size < 2)
		return;

	index = 0;
	while (array && index < size)
	{
		min_int_index = index;
		current = index + 1;

		while (current < size)
		{
			if (array[min_int_index] > array[current])
				min_int_index = current;

			 current++;
		}

		if (min_int_index != index)
		{
			tmp = array[index];
			array[index] = array[min_int_index];
			array[min_int_index] = tmp;
			print_array(array, size);
		}
		index++;
	}
}
