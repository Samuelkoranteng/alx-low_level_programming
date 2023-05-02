#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
  * delete_nodeint_at_index -  a function that deletes the node
  * at index of a listint_t linked list.
  * @head: head of the list
  * @index:  index of the node that should be deleted.
  * Index starts at 0
  * Return: 1 if it succeeded, -1 if it failed
  */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int k;
	listint_t *current, *subsequent;

	if (!head || !*head)
		return (-1);
	current = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		free(current);
		return (1);
	}
	for (k = 0; k < (index - 1); k++)
	{
		current = current->next;
		if (current == NULL)
			return (-1);
	}
	subsequent = current->next;
	current->next = subsequent->next;
	free(subsequent);
	return (1);
}
