#include "lists.h"

/**
  * delete_nodeint_at_index - deletes the node at index index of a
  * listint_t linked list
  * @head: head node
  * @index: index of node to be deleted
  * Return: 1 if it succeeded, -1 if it failed
  */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *temp = *head;
	listint_t *temp2 = NULL;

	if (*head == NULL)
		return (-1);

	temp = *head;
	temp2 = *head;

	if (index == 0)
	{
		*head = temp->next;
		free(temp);
		return (1);
	}
	else
	{
		for (i = 0; i < index && temp != NULL; i++)
		{
			temp2 = temp;
			temp = temp->next;
		}
		temp2->next = temp->next;
		free(temp);
	}

	return (1);
}
