#include <stdio.h>
#include "lists.h"
/**
 * print_dlistint - prints size of doubly linked list
 * @h: head node
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t n;

	n = 0;
	while (h != NULL)
	{
		printf("%d\n", (*h).n);
		h = (*h).next;
		++n;
	}
	return (n);
}
