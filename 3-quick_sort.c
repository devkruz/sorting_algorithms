#include "sort.h"

void controller(int *array, int lb, int ub, int size);
int partition(int *array, int lb, int ub, int size);
void swap(int *a, int *b);

/**
 * quick_sort - quick sort algorithm
 * @array: the array to sort
 * @size: the size of the array
 *
 * Return: nothing
*/

void quick_sort(int *array, size_t size)
{
	controller(array, 0, size - 1, size);
}

/**
 * partition - slice an array into partition
 * @array: the array to partition
 * @lb: the start of the partition
 * @ub: the end of the partition
 * @size: the size of the array
 *
 * Return: the mid index of the partion
*/

int partition(int *array, int lb, int ub, int size)
{
	int pivot, start, end;

	pivot = array[lb];
	start = lb;
	end = ub;

	while (start < end)
	{
		while (array[start] <= pivot)
			start++;
		while (array[end] > pivot)
			end--;

		if (start < end)
		{
			swap(&array[start], &array[end]);
			print_array(array, size);
		}
	}



	swap(&array[lb], &array[end]);
	print_array(array, size);

	return (end);

}

/**
 * controller - controls the partition function
 * @array: the array to partition
 * @lb: the start of the partition
 * @ub: the end of the partition
 * @size: the size of the array
 *
 * Return: nothing
*/
void controller(int *array, int lb, int ub, int size)
{
	int mid_part_index;

	if (lb < ub)
	{
		mid_part_index = partition(array, lb, ub, size);
		controller(array, lb, mid_part_index - 1, size);
		controller(array, mid_part_index + 1, ub, size);

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
