#ifndef SORT_H
#define SORT_H
<<<<<<< HEAD

#include <stdio.h>
#include <stdlib.h>

=======
#include <stddef.h>
#include <stdbool.h>
>>>>>>> ea77904187673509d5571df21f3d8d19289e6887
/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

/*  ----------------- mandatory task ---------------------------------*/
void swap_ints(int *a, int *b);
void bubble_sort(int *array, size_t size);
void swap(int *a, int *b);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);
void print_array(const int *array, size_t size);
void print_list(const listint_t *list);
<<<<<<< HEAD

=======
>>>>>>> ea77904187673509d5571df21f3d8d19289e6887
#endif
