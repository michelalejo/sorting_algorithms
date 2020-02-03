#include "sort.h"

/**
 * bubble_sort - sort an array with bubble sort
 * Each swap prints the array
 * @array: is the given array
 * @size: is the size of the aray
 * Return: Nothing
 */
void bubble_sort(int *array, size_t size)
{
	int tmp = 0;
	unsigned int j, i;

	if (!array)
		return;
	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				tmp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = tmp;
				print_array(array, size);
			}
		}
	}
}
