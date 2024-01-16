#include "sort.h"

/**
 * insertion_sort_list - Sorts a doubly linked list of integers in ascending
 *                       order using the Insertion sort algorithm.
 * @list: A pointer to a pointer to the head of the list.
 */
void insertion_sort_list(listint_t **list)
{
	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	listint_t *current = (*list)->next;

	while (current != NULL)
	{
		listint_t *prev = current->prev;
		listint_t *next = current->next;

		while (prev != NULL && prev->n > current->n)
		{
			prev->next = next;
			if (next != NULL)
				next->prev = prev;

			current->next = prev;
			current->prev = prev->prev;

			if (prev->prev != NULL)
				prev->prev->next = current;
			prev->prev = current;

			if (current->prev == NULL)
				*list = current;

			print_list(*list);

			prev = current->prev;
		}

		current = next;
	}
}
