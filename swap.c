#include "sort.h"

/**
 * swap - function for swapping nodes
 * @a:Node to be swapped
 * @b:Node to be swapped
 */

void swap(listint_t *a, listint_t *b)
{
	if (a->prev)
		a->prev->next = b;
	if (b->next)
		b->next->prev = a;

	a->next = b->next;
	b->next = a->prev;
	a->prev = b;
	b->next = a;

}
