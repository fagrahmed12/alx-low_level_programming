#include "main.h"
#include <stdio.h>

/**
<<<<<<< HEAD
 * print_list - Prints all elements of a list_t list.
 *
 * Return: The number of nodes in h.
=======
 * print_list - Prints all the elements of a list_t list.
 *
 * Return: number of nodes in h.
>>>>>>> temp-branch
 */

size_t print_list(const list_t *h)
{
<<<<<<< HEAD
	size_t nodes = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");

		else
			printf("[%d] %s\n", h->len, h->str);

		nodes++;
		h = h->next;
	}

	return (nodes);
}
=======
	size_t s = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		s++;
	}

	return (s);
}

>>>>>>> temp-branch
