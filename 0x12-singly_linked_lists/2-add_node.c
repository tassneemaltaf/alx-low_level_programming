#include "lists.h"
/**
 * add_node - adds a new node at the beginning of a list
 * @head: head pte
 * @str: node data
 * Return: returns the address of the new element, or NULL if fails
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);

	temp->len = strlen(str);	
	temp->str = strdup(str);
	temp->next = *head;
	*head = temp;
	return (*head);
}
