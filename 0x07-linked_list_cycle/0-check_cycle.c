#include "lists.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * check_cycle - function to chech cycle in linked list
 * @list:head of linked list
 * Return: 0 if no cycle, else 1
 */

int check_cycle(listint_t *list)
{
    listint_t *f, *s = malloc(sizeof(listint_t));
    f = list;
    s = list;
    while(f && s && f->next != NULL)
    {
        s = s->next;
        f = f->next->next;

        if (s == f)
            return (1);
    }
    return (0);

}
