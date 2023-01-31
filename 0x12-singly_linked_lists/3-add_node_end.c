#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 **add_node - function that adds node at the end of the list
 *@str: string to be duplicated
 *@head: head of list
 *Return: returns the duplicated string
 */
list_t *add_node_end(list_t **head, const char *str)
{
	int i, count = 0;
	list_t *new;
	list_t *temp;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		count++;

	new->len = i;
	new->str = strdup(str);
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	temp = *head;

	while (temp->next != NULL)
		temp = temp->next;

	temp->next = new;

	return (new);
}
