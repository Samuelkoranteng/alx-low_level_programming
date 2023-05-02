#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * sum_listint - a function that returns the sum of
 * all the data `n` of a `listint_t` linked list
 * @head: pointer to head
 * Return: sum of all the data (n) or 0 if list empty
 */
int sum_listint(listint_t *head)
{
	int sum;
	listint_t *current;

	for (sum = 0, current = head; current != NULL; current = current->next)
		sum += current->n;

	return (sum);
}
