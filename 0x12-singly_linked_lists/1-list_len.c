#include <stdio.h>
#include "lists.h"
/**
 * list_len - returns the number of elements in a linked list
 * @h: head node
 * Return: returns the size of linked list
 */
size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		h = h->next;
		++n;
	}
	return (n);
}
