#ifndef LISTS_H
#define LISTS_H

/**
 * dlistint_t - is a struct that represents a doubly linked list node
 * @n: refers to the data stored at the node
 * @next: refers to next node
 * @prev: refers to previous node
 */
typedef struct Node {
	int n;
	struct Node *next;
	struct Node *prev;
}dlistint_t;

size_t print_dlistint(const dlistint_t *h);

#endif
