#include "lists.h"
#include <stdlib.h>
/**
  * free_listint - a function that frees a listint_t list.
  * @head: head list to free
  */
void free_listint(listint_t *head)
{
	if (head == NULL)
		return;
	free_listint(head->next);
	free(head);
}
