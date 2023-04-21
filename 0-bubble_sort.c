#include "sort.h"

void swap(int *a, int *b);

/**
 * bubble_sort - bubble sort algorithm
 * @array: the array to sort
 * @size: the size of the array
 *
 * Return: nothing
*/

void bubble_sort(int *array, size_t size)
{
	size_t index_1, index_2;

	if (array == NULL || size <= 1)
		return;

	index_1 = 0;

	for (; array != NULL && index_1 < size; index_1++)
	{
		index_2 = 0;

		for (; index_2 < (size - 1); index_2++)
		{
			if (array[index_2] > array[index_2 + 1])
			{
				swap(&array[index_2], &array[index_2 + 1]);
				print_array(array, size);
			}
		}

	}
}

/**
 * swap - swap two integer
 * @a: firt integer
 * @b: second integer
 *
 * Return: nothing
*/

void swap(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
