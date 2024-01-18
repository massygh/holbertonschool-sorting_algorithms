#include "sort.h"

/**
 * insertion_sort_list - Sorts a doubly linked of integers in ascending order
 * using the Insertion sort algorithm.
 *
 * @list: Pointer to the head of the doubly linked list
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *current, *insert_node, *prev;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;
	for (current = (*list)->next; current != NULL; current = current->next)
	{
		insert_node = current;
		prev = current->prev;
		while (prev != NULL && insert_node->n < prev->n)
		{
			insert_node->prev = prev->prev;
			prev->next = insert_node->next;
			/* Swap nodes */
			if (insert_node->next != NULL)
				insert_node->next->prev = prev;

			insert_node->next = prev;
			prev->prev = insert_node;

			if (insert_node->prev != NULL)
				insert_node->prev->next = insert_node;

			else
				*list = insert_node; /* Update head if needed */

			/* Print the list after each swap */
			print_list(*list);
			prev = insert_node->prev;
		}
	}
}
