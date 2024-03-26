#include "lists.h"
/**
 * free_list - frees a list
 * @head: head ptr
 * Returns: returns nothing
 */
void free_list(list_t *head)
{
	list_t *temp = head;
	
	while (temp != NULL)
	{
		free(temp);
		temp = temp->next;
	}
}	
