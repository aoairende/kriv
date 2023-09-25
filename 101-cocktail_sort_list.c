#include "sort.h"
#include <stdio.h>

/**
 * swap - swaps a node with the next node in the list
 *
 * @list: double pointer to the beginning of the list
 * @node: node to swap
 *
 * Return: void
 */

void swap(listint_t **list, listint_t *node)
{
	node->next->prev = node->prev;
	if (node->prev)
		node->prev->next = node->next;
	else
		*list = node->next;
	node->prev = node->next;
	node->next = node->next->next;
	node->prev->next = node;
	if (node->next)
		node->next->prev = node;
}

/**
 * cocktail_sort_list - sorts a doubly linked list of integers in ascending
 * order using the Cocktail shaker sort algorithm
 *
 * @list: Double pointer to the head of the doubly linked list
 *
 * Return: void
 */

void cocktail_sort_list(listint_t **list)
{
	/* Initialize swapped flag to 1. */
	char swapped = 1;
	listint_t *temp;

	/* Check if the list is NULL or empty, in which case no sorting is needed.*/
	if (list == NULL || *list == NULL)
		return;
	/* Initialize a temporary pointer to the list head. */
	temp = *list;
	while (swapped != 0)
	{
		swapped = 0;
		while (temp->next != NULL)
		{
			if (temp->next->n < temp->n)
			{
				swap(list, temp);
				swapped = 1;
				print_list(*list);
			}
			else
				/* Move to the next node. */
				temp = temp->next;
		}
		if (swapped == 0)
			break;
		swapped = 0;
		while (temp->prev != NULL)
		{
			if (temp->prev->n > temp->n)
			{
				swap(list, temp->prev);
				swapped = 1;
				print_list(*list);
			}
			else
				/* Move to the previous node. */
				temp = temp->prev;
		}
	}
}
