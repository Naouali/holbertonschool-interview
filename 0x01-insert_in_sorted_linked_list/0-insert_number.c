#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * insert_node - function to insert node in sorted LL
 * @head: head of the line list
 * @number: number in the node
 * Return: adress of new node or NULL
 */

listint_t *insert_node(listint_t **head, int number)
{
	listint_t *current = *head;
	listint_t *prev;
	listint_t *new;

    if (!head)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = number;
	if (!current || number < (*head)->n)
	{
		new->next = current;
		*head = new;
		return (*head);
	}

	while (current && current->n <= number)
	{
		prev = current;
		current = current->next;
	}

	new->next = current;
	prev->next = new;
	return (new);
}