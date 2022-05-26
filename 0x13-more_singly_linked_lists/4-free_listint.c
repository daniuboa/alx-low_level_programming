#include "lists.h"

/**
 * free_listint - Free a listint_t list.
 *
 * @head: A pointer to the head of the listint_ list to be frred.
 */

void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(tmp);
		head = tmp;
	}
}
