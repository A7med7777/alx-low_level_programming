#include <stdlib.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position
 * in a dlistint_t list
 * @h: Pointer to the pointer of the head of the doubly linked list
 * @idx: Index where the new node should be added (starting from 0)
 * @n: Value to be assigned to the new node
 *
 * Return: The address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newNode, *temp = *h;
	unsigned int count = 0;

	if (h == NULL)
		return (NULL);

	if (idx == 0)
		return (add_dnodeint(h, n));
	/* Use your existing function for adding at the beginning */

	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = n;

	while (temp != NULL)
	{
		if (count == idx - 1)
		{
			newNode->next = temp->next;
			newNode->prev = temp;
			if (temp->next != NULL)
				temp->next->prev = newNode;
			temp->next = newNode;
			return (newNode);
		}
		temp = temp->next;
		count++;
	}

	free(newNode);  /*Failed to add the new node at the specified index*/
	return (NULL);
}

