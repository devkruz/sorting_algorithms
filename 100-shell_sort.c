#include "sort.h"

void swap(int *a, int *b);

/**
 * shell_sort - shell sort algorithm
 * @array: the array to sort
 * @size: the size of the array
 *
 * Return: nothing
*/

void shell_sort(int *array, size_t size)
{
	size_t gap, j;
	int i;

	if (array == NULL || size < 2)
		return;

	for (gap = 1; gap < size;)
		gap =  gap * 3 + 1;

	for (; gap >= 1; gap = gap / 3 - 1)
	{
		for (j = gap; j < size; j++)
		{
			for (i = j - gap; i >= 0; i = i - gap)
			{
				if (array[i] < array[i + gap])
					break;

				swap(&array[i], &array[i + gap]);
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
