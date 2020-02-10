#include "sort.h"

/**
 *  shell_sort - sort an algorithm using the knut
 *  secuence in the shell sort
 *
 *  @array: is the given array
 *  @size: is the size of the array
 *  Return: nothing
 */
void shell_sort(int *array, size_t size)
{
	int tmp;
	size_t gasp = 1, j, i;

	while (gasp < (size / 3))
		gasp =  gasp * 3 + 1;

	while (gasp >= 1)
	{
		for (i = gasp; i < size; i++)
		{
			for (j = i; j >= gasp && array[j] < array[j - gasp];
			     j -= gasp)
			{
				tmp = array[j];
				array[j] = array[j - gasp];
				array[j - gasp] = tmp;
			}
		}
		print_array(array, size);
		gasp /= 3;
	}
}
