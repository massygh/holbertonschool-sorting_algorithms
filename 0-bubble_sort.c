#include "sort.h"

/**
 * swap - sort an array in ascending order
 * @a: pointer to the array to sort
 * @b: size of the array
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
	for (size_t i = 0; i < size - 1; i++)
	{
		for (size_t j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				// Swap elements if they are in the wrong order
				swap(&array[j], &array[j + 1]);

				// Print the array after each swap
				for (size_t k = 0; k < size - 1; k++)
				{
					printf("%d, ", array[k]);
				}
				printf("%d\n", array[size - 1]);
			}
		}
	}
}
