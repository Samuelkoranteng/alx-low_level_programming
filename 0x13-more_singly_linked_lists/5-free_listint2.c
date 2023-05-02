#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_listint2 - a function that frees a `listint_t` list
 * @head: pointer to head
 */
void free_listint2(listint_t **head)
{
	listint_t *hold;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		hold = *head;
		*head = (*head)->next;
		free(hold);
	}
}
