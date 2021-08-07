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
    listint_t *new = malloc(sizeof(listint_t));
    listint_t *h;
    if (*head == NULL) 
        return NULL;
    
    if (new == NULL)
        return NULL;
    h = *head;
    if (!h)
    {
        *head = new;
        return (*head);
    }
    new->n = number;
    if (number < h->n)
    {
        new->next = h;
        *head = new;
    }
    else
    {
        while (h->next != NULL && number > h->next->n)
        {
            h = h->next;
        }
        new->next = h->next;
        h->next = new;
    }
    return (new);

}

