#include "sort.h"

/**
 * insertion_sort_list - link list insertion algorithm
 * @list: node list head
 *
 * Return: nothing
*/

void insertion_sort_list(listint_t **list)
{
	(void)list;
}

/**
 * insertion_sort_array - array insertion sort algorithm
 * @array: array of int
 * @size: size of the array
 *
 * Return: nothing
*/

void insertion_sort_array(int *array, int size)
{
	int sorted_index, unsorted_index, to_sort;

	for (unsorted_index = 1; unsorted_index < size; unsorted_index++)
	{
		sorted_index = unsorted_index - 1;
		to_sort = array[unsorted_index];

		while (sorted_index >= 0 && array[sorted_index] > to_sort)
		{
			array[sorted_index + 1] = array[sorted_index];
			/* consider array[sorted_index] empty now */
			sorted_index = sorted_index - 1;
			print_array(array, size);
		}
		array[sorted_index + 1] = to_sort;
		print_array(array, size);
	}
}
