#include "lists.h"
/**
 * add_nodeint - adds a node
 * @head: is the head node
 * @n: a variable
 * Return: a new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	if (*head == NULL)
		return (0);

	listint_t *ptr;

	ptr = malloc(sizeof(listint_t));

	if (ptr == NULL)
		return (0);

	ptr->n = n;
	ptr->next = *head;
	*head = ptr;
	return (head);
}
