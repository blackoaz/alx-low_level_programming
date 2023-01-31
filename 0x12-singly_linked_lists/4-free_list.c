#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *
 * free - function for freeing list
 * @head: struct
 * Return:0
 */
void free_list(list_t *head)
{
	if (head == NULL)
		return;

	if (head->next != NULL)
		free_list(head->next);
	free(head->str);
	free(head);
}
