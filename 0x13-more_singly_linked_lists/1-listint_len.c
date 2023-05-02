#include "lists.h"
#include <stdio.h>
/**
 * listint_len -  a function that returns the number of elements
 * in a linked listint_t list.
 * @h: lenght of the linked list
 *
 * Return: lenght of the list
 */

size_t listint_len(const listint_t *h)
{
	size_t len;

	if (h == NULL)
		return (0);

	for (len = 0; h != NULL; h = h->next, len++)
		;

	return (len);
}
