#include "sort.h"

/**
 * fix_heap - fixes a heap
 *
 * @array: the heap to fix
 * @root: the root of the heap
 * @end: the last index of the heap
 * @size: size of the array
 *
 * Return: void
 */

void fix_heap(int *array, size_t root, size_t end, size_t size)
{
	size_t left_child, right_child, swap;
	int temp;

	while ((left_child = (2 * root) + 1) <= end)
	{
		swap = root;
		right_child = left_child + 1;
		if (array[swap] < array[left_child])
			swap = left_child;
		if (right_child <= end && array[swap] < array[right_child])
			swap = right_child;
		if (swap == root)
			return;
		temp = array[root];
		array[root] = array[swap];
		array[swap] = temp;
		print_array(array, size);
		root = swap;
	}
}

/**
 * make_heap - makes a heap from an unsorted array
 *
 * @array: array to turn into a heap
 * @size: size of the array
 *
 * Return: void
 */

void make_heap(int *array, size_t size)
{
	size_t parent;

	for (parent = ((size - 1) - 1) / 2; 1; parent--)
	{
		fix_heap(array, parent, size - 1, size);
		if (parent == 0)
			break;
	}
}

/**
 * heap_sort - sorts an array of ints in ascending order w/ the Heap sort algo
 *
 * @array: array to sort
 * @size: size of the array
 *
 * Return: void
 */

void heap_sort(int *array, size_t size)
{
	size_t end;
	int temp;

	if (array == NULL || size < 2)
		return;
	/* Create a max heap from the input array. */
	make_heap(array, size);
	/* Initialize the 'end' variable to the last index of the array. */
	end = size - 1;
	while (end > 0)
	{
		/* Swap the root with the last element in heap.*/
		temp = array[end];
		array[end] = array[0];
		array[0] = temp;
		/* Print the array after each swap for visualization. */
		print_array(array, size);
		end--;
		fix_heap(array, 0, end, size);
	}
}
