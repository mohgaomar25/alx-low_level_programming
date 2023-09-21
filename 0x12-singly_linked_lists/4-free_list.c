#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees a list_t list
 * @head: pointer to the head of the list
 */
void free_list(list_t *head)
{
	list_t *current;

	while (head != NULL)
	{
		current = head;
		head = head->next;
		free(current->str); /* Free the string stored in the current node*/
		free(current);      /* Free the current node itself*/
    }
}
