#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - Free a listint_t list.
 *
 * @head: A pointer to the head of the listint_ list to be frred.
 */

void free_listint(listint_t *head)
{
	listint_t *tp, *tp2;

	tp = head;
	while (tp != NULL)
	{
		tp2 = tp->next;
		free(tp);
		tp = tp2;
	}
}
