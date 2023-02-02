#include "lists.h"
/**
 * add_nodeint_end - function for adding node at the end.
 * @head: adress for head
 * @n: data to be added.
 * Return: retuns the new adress.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr, *temp;

	if (head == NULL)
		return (0);
	ptr = *head;

	temp = malloc(sizeof(listint_t));

	if (temp == NULL)
		return (0);
	temp->n = n;
	temp->next = NULL;

	while (ptr->next != NULL)
	{
		ptr = ptr->next;
	}
	ptr->next = temp;
	return (temp);
}
