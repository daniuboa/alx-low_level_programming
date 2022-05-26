#include "lists.h"

/**
 * reverse_listsint - Reverse a listint_t list.
 *
 * @head: A pointer to the address of
 * the head of the list_t list.
 *
 * Return: A pointer to the first node of the reversed list.
 */

listint_t *reversed_listint(listint_t **head)
{
	listint_t *ahead, *behind;

	if (head == NULL || *head == NULL)
		return (NULL);

	behind = NULL;

	while ((*head)->next != NULL)
	{
		ahead = (*head)->next;
		(*head)->next = behind;
		behind = *head;
		*head = ahead;
	}

	(*head)->next = behind;

	return (*head);
}