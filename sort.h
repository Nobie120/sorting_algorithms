#ifndef SORT_H
#define SORT_H

#include <stdio.h>
#include <stdlib.h>

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

int main(void);
void print_list(const listint_t *list);
void print_array(const int *array, size_t size);
void swap(listint_t *a, listint_t *b);
void insertion_sort_list(listint_t **list);
void bubble_sort(int *array, size_t size);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);
void quicksort(int *array, size_t size, ssize_t lb, ssize_t ub);
size_t lumoto_partitiont (int *array, size_t size, ssize_t lb, ssize_t ub);
void swap_2(int *array, size_t size, int *a, int *b);

#endif
