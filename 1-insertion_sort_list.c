#include "sort.h"

/**
 * swap - swaps two nodes of a linked list
 * @a:node to be interchanged
 * @b:noed to be interchanged
 */

void swap(listint_t *a, listint_t *b)
{
	if (a->next)
		a->next->prev = b;
	if (b->prev)
		b->prev->next = a;

	a->next = b->next;
	b->prev = a->prev;
	a->prev = b;
	b->next = a;
}


/**
 * insertion_sort_list - sorting algorithm
 * @list:the linked list to be sorted
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *i, *j;

	if (!list || !*list || !(*list)->next)
		return;

	i = (*list)->next;
	while (i)
	{
		j = i;
		i = i->next;
		while (j != NULL && j->prev)
		{
			if (j->prev->n > j->n)
			{
				swap(j->prev, j);
				if (j->prev == NULL)
					*list = j;
				print_list((const listint_t *)*list);
			}
			else
				j = j->prev;
		}
	}
}
