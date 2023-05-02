#include "lists.h"
#include <stddef.h>
#include <stdio.h>
/**
 * add_nodeint_end -  a function that adds a new node
 * at the end of a listint_t list
 * @head: element list to add to node
 * @n: value to give
 *
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *current;
	listint_t *new;

	current = *head;
	while (current && current->next != NULL)
		current = current->next;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;

	if (current)
		current->next = new;
	else
		*head = new;
	return (new);
}
