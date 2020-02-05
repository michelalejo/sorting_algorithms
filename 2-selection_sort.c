#include "sort.h"

/**
 *  selection_sort - sorts an array using selection sort
 *  each swamp prints the array
 *  @array: is the given array
 *  @size: is the size of the array
 *  Return: Nothing
 */
void selection_sort(int *array, size_t size)
{
	unsigned int i, j, swap, tmp;

	for (i = 0; i < size - 1; i++)
	{
		swap = i;
		for (j = i++; j < size; j++)
		{
			array[j] < array[i] && array[j] < array[swap] ? swap = j : swap;
		}

		if (swap != i)
		{
			tmp = array[i];
			array[i] = array[swap];
			array[swap] = tmp;
			print_array(array, size);
		}
	}
}
