#include "sort.h"

/**
 *  partition - is the partition of the quicksort
 *  @array: is the array
 *  @low: is the low index
 *  @high: is the high index
 *  Return: the pivot's index at the end
 */
int partition(int *array, int low, int high, int size)
{
	int i = low, j, tmp;

	for (j = low; j < high; j++)
	{
		if (array[j] < array[high])
		{
			tmp = array[i];
			array[i] = array[j];
			array[j] = tmp;
            if (i != j)
                print_array(array, size);
			i++;
		}
	}
	tmp = array[high];
	array[high] = array[i];
	array[i] = tmp;
    if (i != high)
    {
        print_array(array, size);
    }
    
	return (i);
}

/**
 *  sort - is the quick sort
 *  @array: is the array
 *  @low: is the low index
 *  @high: is the high index
 *  Return: nothing
 */
void sort(int *array, int low, int high, int size)
{
	int p;

	if (low < high)
	{
		p = partition(array, low, high, size);
		sort(array, low, p - 1, size);
		sort(array, p + 1, high, size);
	}
}

/**
 *  quick_sort - sorts an array using quick sort
 *  each swamp prints the array
 *  @array: is the given array
 *  @size: is the size of the array
 *  Return: Nothing
 */
void quick_sort(int *array, size_t size)
{
	if (!array)
		return;
	sort(array, 0, size - 1, size);
}
