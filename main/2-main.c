#include "../sort.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int array[] = {2, 3, 4, 5, 6, 12, 13, 14, 15, 17, 19, 20, 22, 23, 25, 26, 27, 28, 29, 30, 31, 33, 34, 35, 36, 40, 41, 42, 47, 48};
    size_t n = sizeof(array) / sizeof(array[0]);

    print_array(array, n);
    printf("\n");
    selection_sort(array, n);
    printf("\n");
    print_array(array, n);
    return (0);
}
