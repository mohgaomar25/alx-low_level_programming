#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - Adds a new node at the end of a listint_t list.
 * @head: Pointer to a pointer to the head of the list.
 * @n: Integer value to be stored in the new node.
 *
 * Return: The address of the new element, or NULL if it failed.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *temp;

	/* Allocate memory for the new node */
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	/* Set the data and next pointer of the new node */
	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		/* If the list is empty, make the new node the head */
		*head = new_node;
	}
	else
	{
		/* Traverse the list to find the last node */
		temp = *head;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}

		/* Set the last node's next pointer to the new node */
		temp->next = new_node;
	}

	return (new_node);
}
