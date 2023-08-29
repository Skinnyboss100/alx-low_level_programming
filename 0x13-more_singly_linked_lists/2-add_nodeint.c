#include"lists.h"

/**
 * function that adds a new node at the beginning of a linked list
 * @head: the pointer to the first node in the list
 * @n: data inserted in that new node
 *
 * Return: the pointer to the new node, or NULL if it doesnt exist
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}

