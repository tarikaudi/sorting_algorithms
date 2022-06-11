#include "sort.h"

/**
  * swap - classic swap
  * @a: int * first value
  * @b: int * second value
  */

void swap(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

/**
  * partition - partition of the array
  * @array: given array
  * @low: starting index
  * @high: ending index
  * @size: size of the array
  * Return: int
  */

int partition(int *array, int low, int high, size_t size)
{
	int j;
	int pivot = array[high];
	int i = low - 1;

	for (j = low; j < high; j++)
	{
		if (array[j] < pivot)
		{
			i++;
			swap(&array[i], &array[j]);
			if (array[i] != array[j])
				print_array(array, size);
		}
	}
	swap(&array[i + 1], &array[high]);
	if (array[high] != array[i + 1])
		print_array(array, size);
	return (i + 1);
}

/**
 * sort_q - quick_sort
 * @array: to be sorted
 * @low: starting index
 * @high: ending index
 * @size: size of array
 * Return: Always 0 (Sucess)
 */
int sort_q(int *array, size_t low, size_t high, size_t size)
{
	size_t p;

	if (low < high)
	{
		p = partition(array, low, high, size);
		if (p != low)
			sort_q(array, low, p - 1, size);
		if (p != high)
			sort_q(array, p + 1, high, size);
	}
	return (0);
}

/**
  * quick_sort - quick sort function
  * @array: given array
  * @size: size of the array
  */

void quick_sort(int *array, size_t size)
{
	sort_q(array, 0, size - 1, size);
}