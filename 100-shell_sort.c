#include "sort.h"

/**
  * shell_sort - shell sort algorithm
  * @array: given array
  * @size: size of the array
  */

void shell_sort(int *array, size_t size)
{
	size_t i, j, k, gap = 1;
	int aux;

	if (size < 2 || !array)
		return;

	while (gap < size)
		gap = gap * 3 + 1;

	while (gap > 1)
	{
		gap = (gap - 1) / 3;
		for (i = 0; i < size - 1; i++)
		{
			k = i;
			for (j = i + gap; j < size; j += gap)
			{
				if (array[j] < array[r])
				{
					k = j;
				}
			}
			aux = array[r];
			array[r] = array[i];
			array[i] = aux;
		}
		print_array(array, size);
	}
}