#include "lists.h"

/**
  * insert_nodeint_at_index - inserts a new node at a given position
  * @head: head node
  * @idx: index which node will be inserted
  * @n: n value of new node
  *
  * Return:  the address of the new node, or NULL if it failed
  */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ptr, *ptr2;
	unsigned int i;

	if (head == NULL)
		return (NULL);

	ptr = *head;
	ptr2 = malloc(sizeof(listint_t));
	if (ptr2 == NULL)
		return (NULL);

	ptr2->n = n;
	ptr2->next = NULL;

	if (idx == 0)
	{
		ptr2->next = *head;
		*head = ptr2;
		return (ptr2);
	}

	for (i = 0; i < idx - 1 && ptr != NULL; i++)
		ptr = ptr->next;
	if (ptr == NULL)
	{
		free(ptr2);
		return (NULL);
	}

	ptr2->next = ptr->next;
	ptr->next = ptr2;

	return (ptr2);
}
