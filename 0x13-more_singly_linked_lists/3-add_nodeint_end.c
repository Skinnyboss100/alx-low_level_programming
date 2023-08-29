#include<stdio.h>
#include<stdlib.h>
#include "lists.h"

/**
 * function that adds a node at the end of a linked list
 * @head: pointer to the first element in the list
 * @n: data to insert in the new element
 *
 * Return:the pointer to the new node created, or NULL if it does not exist
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *temp = *head;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new -> n = n;
	new -> next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (temp -> next)
		temp = temp -> next;

	temp -> next = new;

	return (new);
}

