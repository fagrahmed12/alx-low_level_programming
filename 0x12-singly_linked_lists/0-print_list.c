#include "main.h"
#include <stdio.h>

/**
 * print_list - Prints all the elements of a list_t list.
 *
 * Return: number of nodes in h.
 */

size_t print_list(const list_t *h)
{
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


}
