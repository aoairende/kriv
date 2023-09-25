#include "sort.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * sort_merge - sorts and merges the sub arrays in source.
 *
 * @start: starting index (inclusive) for the left sub array
 * @middle: end index (exclusive) for the left sub array and
 * starting index (inclusive) for the right sub array
 * @end: end index (exclusive) for the right sub array
 * @dest: destination for data
 * @source: source of data
 *
 * Return: void
 */

void sort_merge(size_t start, size_t middle, size_t end, int *dest,
int *source)
{
	size_t i, j, k;

	printf("Merging...\n");
	printf("[left]: ");
	print_array(source + start, middle - start);
	printf("[right]: ");
	print_array(source + middle, end - middle);
	i = start;
	j = middle;
	for (k = start; k < end; k++)
	{
		if (i < middle && (j >= end || source[i] <= source[j]))
		{
			dest[k] = source[i];
			i++;
		}
		else
		{
			dest[k] = source[j];
			j++;
		}
	}
	printf("[Done]: ");
	print_array(dest + start, end - start);
}

/**
 * sort_split_merge - recursively splits the array and merges the sorted arrays
 *
 * @start: starting index (inclusive)
 * @end: end index (exclusive)
 * @array: the array to sort
 * @copy: a copy of the array
 *
 * Return: void
 */

void sort_split_merge(size_t start, size_t end, int *array, int *copy)
{
	size_t middle;

	if (end - start < 2)
		return;
	middle = (start + end) / 2;
	sort_split_merge(start, middle, array, copy);
	sort_split_merge(middle, end, array, copy);
	sort_merge(start, middle, end, array, copy);
	for (middle = start; middle < end; middle++)
		copy[middle] = array[middle];
}

/**
 * merge_sort - sorts an array of integers in ascending order using the
 * merge sort algorithm.
 *
 * @array: array to sort
 * @size: size of the array
 *
 * Return: void
 */

void merge_sort(int *array, size_t size)
{
	size_t i;
	int *copy;

	if (array == NULL || size < 2)
		return;
	/* Allocate memory for a temporary copy of the array. */
	copy = malloc(sizeof(int) * size);
	if (copy == NULL)
		return;
	for (i = 0; i < size; i++)
		copy[i] = array[i];
	/* Call the sorting function to perform the merge sort. */
	sort_split_merge(0, size, array, copy);
	free(copy);
}
