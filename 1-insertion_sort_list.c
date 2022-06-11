#include "sort.h"

/**
 * insertion_sort_list - Sort an array using Insertion Sort algorithm
 * in ascending order
 * @list: list list list
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *current, *tmp;

	if (!list)
		return;

	for (current = *list; current; current = current->next)
	{
		tmp = current;
		while (tmp->prev && (tmp->n < tmp->prev->n))
		{
			tmp->prev->next = tmp->next;
			if (tmp->next)
				tmp->next->prev = tmp->prev;
			tmp->next = tmp->prev;
			tmp->prev = tmp->prev->prev;
			tmp->next->prev = tmp;
			if (tmp->prev)
				tmp->prev->next = tmp;
			else
				*list = tmp;
			print_list(*list);
		}
	}
}
