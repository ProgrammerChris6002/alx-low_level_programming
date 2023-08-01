#include "lists.h"

/**
  * free_listint2 - frees a listint_t list
  * @head: head node
  */

void free_listint2(listint_t **head)
{
	listint_t *current;

	while (*head != NULL)
	{
		current = *head;
		*head = (*head)->next;
		free(current);
	}
}
