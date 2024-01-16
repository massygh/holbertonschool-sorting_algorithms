#include "sort.h"

/**
 * swap - swap to values
 * @a: first value to swap
 * @b: second value to swap
 */

void swap(int *a, int *b)
{
	int tmp;

	tmp = *b;
	*b = *a;
	*a = tmp;
}

/**
 * lomuto_partition - performs the lomuto partition scheme on
 * a given partition of an array
 * @array: array to be sorted
 * @low: starting index of partition
 * @high: ending index of partition
 * Return: final index of the pivot
 */
int lomuto_partition(int *array, int low, int high, size_t size)
{
	int pivot = array[high];
	int i = low - 1;
	int j;

	for (j = low; j < high; j++)
	{
		if (array[j] <= pivot)
		{
			i++;
			swap(&array[i], &array[j]);
			if (i != j)
				print_array(array, size);
		}
	}
	swap(&array[i + 1], &array[high]);
	if (i + 1 != j)
		print_array(array, size);

	return (i + 1);
}
/**
 * quicksort - recursively sorts a partition of an array
 * using the quicksort algorithm
 * @array: array to be sorted
 * @low: starting index of partition to be sorted
 * @high: ending index of partition to be sorted
 * @size: size of the array
 */
void quicksort(int *array, int low, int high, size_t size)
{
	int partition_index;

	if (low < high)
	{
		partition_index = lomuto_partition(array, low, high, size);
		quicksort(array, low, partition_index - 1, size);
		quicksort(array, partition_index + 1, high, size);
	}
}
/**
 * quick_sort - function that sorts an array of integers in ascending order
 * @array: array to be sorted
 * @size: size of the array
 */
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size <= 1)
		return;

	quicksort(array, 0, size - 1, size);

}
