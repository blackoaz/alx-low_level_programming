#include "lists.h"
/**
 * reverse_listint - function for reversing a list
 * @head: pointer to a header pointer
 * Return: returns pointer to the first node
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *currentnode, nextnode;

	currentnode = nextnode = *head;

	while (nexnode != NULL)
	{
		nextnode = nextnode->next;
		currentnode->next = *head;
		*head = currentnode;
		currentnode = nextnode;
	}
	return (head);
}
