#include "lists.h"

/**
 * free_listint - frees any linked list
 * @head: listint_t any list that needs to be free
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
