#include "lists.h"

/**
 * add_nodeint - adds a new node in  the beginning of a linked list
 * @head: pointer to the first node in the list
 * @k: data to insert in that new node
 *
 * Return: pointer to the new node, or NULL if fails
 */
listint_t *add_nodeint(listint_t **head, const int k)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->k = k;
	new->next = *head;
	*head = new;

	return (new);
}
