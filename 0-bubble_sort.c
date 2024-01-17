#include "sort.h"
/**
 * swap - swap variable.
 * @a: variable 1
 * @b: variable 2
 */

void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

/**
 * bubble_sort - sort an array in ascending order
 * @array: pointer to the array to sort
 * @size: size of the array
 */

void bubble_sort(int *array, size_t size)
{
	size_t i, j, k;

	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				/* Swap elements if they are in the wrong order */
				swap(&array[j], &array[j + 1]);

				/* Print the array after each swap */
				for (k = 0; k < size - 1; k++)
				{
					printf("%d, ", array[k]);
				}
				printf("%d\n", array[size - 1]);
			}
		}
	}
}
