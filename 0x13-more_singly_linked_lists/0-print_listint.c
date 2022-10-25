#include "lists.h"

/**
 * print_listint - a function that prints all the elements
 * of a listint_t list.
 * @h: the list_t list.
 *
 * Return: the number of nodes in h.
 */
size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		if (h->n == '\0')
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("%d\n", h->n);
		}
		nodes++;
		h = h->next;
	}
	return (nodes);
}
