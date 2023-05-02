#include "lists.h"
#include <stdio.h>
/**
 * pop_listint - a function that deletes the head
 *  node of a listint_t linked list
 *  and returns the head node’s data (n)
 *  @head: head of the list
 *
 *  Return: the head node's data(n) or 0 if linked list is empty
 */
int pop_listint(listint_t **head)
{
	int s;
	listint_t *current, *tmp;

	if (head == NULL)
		return (0);
	tmp = current = *head;
	if (*head)
	{
		s = current->n;
		*head = current->next;
		free(tmp);
	}
	else
		s = 0;
	return (s);
}
