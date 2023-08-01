#include "lists.h"

/**
  * get_nodeint_at_index - returns the nth node of a listint_t linked list
  * @head: head node
  * @index: index of node to be returned
  *
  * Return: nth node of a listint_t linked list if found
  * else NULL
  */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *temp = head;

	for (i = 0; i <= index && temp != NULL; i++)
	{
		temp = temp->next;

		if (i == index)
			return (temp);
	}

	return (NULL);
}
