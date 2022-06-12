#include "sort.h"
/**
  * shell_sort - shell sort
  * @array: array
  * @size: size
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
			r = i;
			for (j = i + gap; j < size; j += gap)
			{
				if (array[j] < array[k])
				{
					k = j;
				}
			}
			aux = array[k];
			array[k] = array[i];
			array[i] = aux;
		}
		print_array(array, size);
	}
}
