#include "lists.h"

/**
  * sum_listint - returns the sum of all the data of a listint_t linked list
  * @head: head node
  *
  * Return: sum of all the data (n) of a listint_t linked list if found
  * else 0
  */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp;

	if (head == NULL)
		return (0);

	temp = head;
	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
