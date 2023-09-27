#include "lists.h"

/**
 * find_listint_loop - Finds the loop in a listint_t linked list.
 * @head: Pointer to the head of the list.
 *
 * Return: The address of the node where the loop starts, or NULL if there is
 * no loop.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow_p = head;
	listint_t *fast_p = head;

	while (slow_p != NULL && fast_p != NULL && fast_p->next != NULL)
	{
		slow_p = slow_p->next;
		fast_p = fast_p->next->next;

		if (slow_p == fast_p)
		{
			slow_p = head;
			while (slow_p != fast_p)
			{
				slow_p = slow_p->next;
				fast_p = fast_p->next;
			}
			return (slow_p);
		}
	}

	return (NULL);
}

