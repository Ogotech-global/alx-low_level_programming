#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint_safe - Prints a listint_t linked list safely (handles loops)
 * @head: A pointer to the head of the linked list
 *
 * Return: The number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
    const listint_t *tortoise, *hare;
    size_t count = 0;

    tortoise = hare = head;

    while (tortoise != NULL && hare != NULL && hare->next != NULL)
    {
        printf("[%p] %d\n", (void *)tortoise, tortoise->n);
        tortoise = tortoise->next;
        hare = hare->next->next;

        if (tortoise == hare)
        {
            printf("-> [%p] %d\n", (void *)tortoise, tortoise->n);
            printf("-> [%p] %d\n", (void *)hare, hare->n);
            printf("Linked list has a loop\n");
            exit(98);
        }

        count++;
    }

    return count;
}

