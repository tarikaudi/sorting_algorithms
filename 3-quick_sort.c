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
  * quicksort - quicksort algorithm
  * @array: given array
  * @low: starting index
  * @high: ending index
  * @size: size of the array
  * Return: void
  */

void quicksort(int *array, int low, int high, size_t size)
{
    int p = 0;
	if (low < high)
	{
		int p = partition(array, low, high, size);
		quicksort(array, low, p - 1, size);
		quicksort(array, p + 1, high, size);
	}
}

/**
  * quick_sort - quick sort function
  * @array: given array
  * @size: size of the array
  */

void quick_sort(int *array, size_t size)
{
	if (!array || size < 2)
		return;
	quicksort(array, 0, size - 1, size);
} 