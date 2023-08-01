#include "lists.h"

/**
  * pop_listint - deletes the head node of a listint_t linked list
  * @head: head node
  *
  * Return: head node’s data (n) is list is not empty
  * else 0
  */

int pop_listint(listint_t **head)
{
	int n;

	if (*head == NULL)
		return (0);

	n = (*head)->n;
	free(*head);

	return (n);
}
