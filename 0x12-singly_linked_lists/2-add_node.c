#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * *add_node - function that adds node to the behggining of a list
 * @head: the struct
 * @str:string to be duplicated
 * Return: returns the address of the new element or NULL if failed
 */
list_t *add_node(list **head, const char *str)
{
	int i, count = 0;
	list_t *new;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		count++;
	new->len = i;
	new->str = strdup(str);
	new->next = head;

	*head = new;

	return (new);

}
