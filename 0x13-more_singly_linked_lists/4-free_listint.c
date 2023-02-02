#include "lists.h"
/**
 * free_listint - free list
 * @head: head of struct
 * Return:0
 */
void free_listint(listint_t *head)
{
	if (head == NULL)
		return;
	while (head)
		free(head);
	head = head->next;
}
