#include "lists.h"

/**
  * add_node_end - Adds a new node at the end of a list_t list
  * @head: Pointer to a pointer to the head of the list
  * @str: String to be added as the data in the new node
  * Return: The address of the new element (new node), or NULL if it failed
  */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *last_node;
	unsigned int len = 0;

	while (str[len])
		len++;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->len = len;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		last_node = *head;
		while (last_node->next != NULL)
			last_node = last_node->next;
		last_node->next = new_node;
	}

	return (new_node);
}
