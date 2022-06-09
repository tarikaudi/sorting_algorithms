#include "sort.h"

/**
 * selection_sort - Sort an array using Selection Sort algorithm
 * in ascending order
 * @array: array of integers to sort
 * @size: length of the array
 */

void selection_sort(int *array, size_t size)
{
    unsigned int i, j, tmp;

    for(i = 0; i < size; i++) {
        for(j = i + 1; j < size; j++) {
            if(array[i] > array[j]) {
                tmp = array[i];
                array[i] = array[j];
                array[j] = tmp;
                print_array(array, size);
            }
        }
    }
}