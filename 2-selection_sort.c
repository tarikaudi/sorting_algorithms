#include "sort.h"

/**
 * selection_sort - Sort an array using Selection Sort algorithm
 * in ascending order
 * @array: array of integers to sort
 * @size: length of the array
 */

void selection_sort(int *array, size_t size)
{
	size_t i, d, f, aux2, aux;

	for (i = 0; i < size; i++)
	{
		aux = 0;
		for (d = i + 1, f = i; d < size; d++)
		{
			if (array[f] > array[d])
			{
				f = d;
				aux = 1;
			}
		}
		if (aux == 1)
		{
			aux2 = array[i];
			array[i] = array[f];
			array[f] = aux2;
			print_array(array, size);
		}
	}
}
