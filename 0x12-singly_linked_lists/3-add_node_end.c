#include "lists.h"
/**
 * add_node_end - adds a new node to the end of a list
 * @head: head ptr
 * @str: value of node
 * Return: returns the address of the new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp = malloc(sizeof(list_t));
	list_t *temp1;

	if (temp == NULL)
		return (NULL);

	temp->len = strlen(str);
	temp->str = strdup(str);
	temp->next = NULL;

	if (*head == NULL)
	{
		*head = temp;
		return (temp);
	}

	temp1 = *head;
	while (temp1->next != NULL)
	{
		temp1 = temp1->next;
	}

	temp1->next = temp;

	return (temp);
}
