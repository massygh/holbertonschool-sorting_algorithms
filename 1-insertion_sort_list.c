#include "sort.h"

/**
 * insertion_sort_list - Sorts a doubly linked of integers in ascending order
 * using the Insertion sort algorithm.
 *
 * @list: Pointer to the head of the doubly linked list
 */

void insertion_sort_list(listint_t **list)
{
	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	listint_t *current = (*list)->next;

	while (current != NULL)
	{
		listint_t *insert_node = current;
		listint_t *prev = current->prev;

		while (prev != NULL && insert_node->n < prev->n)
		{
			/* Swap nodes */
			if (insert_node->next != NULL)
				insert_node->next->prev = prev;

			prev->next = insert_node->next;
			insert_node->next = prev;

			if (prev->prev != NULL)
				prev->prev->next = insert_node;

			insert_node->prev = prev->prev;
			prev->prev = insert_node;

			if (insert_node->prev == NULL)
				*list = insert_node; /* Update head if needed */

			/* Print the list after each swap */
			print_list(*list);
			prev = insert_node->prev;
		}

		current = current->next;
	}
}

