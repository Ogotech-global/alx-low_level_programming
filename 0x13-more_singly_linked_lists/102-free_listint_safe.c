#include "lists.h"
#include <stdlib.h>

/**
 * free_listint_safe - Frees a listint_t linked list safely (handles loops)
 * @h: A pointer to a pointer to the head of the linked list
 *
 * Return: The size of the list that was freed
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *tortoise, *hare, *temp;
	size_t count = 0;

	tortoise = hare = *h;

	while (tortoise != NULL && hare != NULL && hare->next != NULL)
	{
	temp = hare->next->next;

	/* Free the current node and move the pointers */
	free(tortoise);
	tortoise = temp;
	hare = temp != NULL ? temp->next : NULL;

	count++;

	if (tortoise == hare)
		{
		/* Loop detected, free the remaining nodes and break */
		tortoise = *h;
		while (tortoise != hare)
		{
		temp = hare->next;
		free(tortoise);
		tortoise = temp;
		count++;
		}

			*h = NULL;
			break;
		}
	}

	*h = NULL; /* Set the head to NULL after freeing the list */

	return (count);
}

