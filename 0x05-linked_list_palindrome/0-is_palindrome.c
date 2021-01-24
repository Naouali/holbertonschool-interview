#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * is_palindrome - fucntion to check linked list is palindrome
 * @head: head of the linked list
 * Return: 1 if palindrome 0 if not
 */

int is_palindrome(listint_t **head)
{
    int len = 0;
    listint_t *h = malloc(sizeof(listint_t));
    h = *head;
    int *arr1 = malloc(sizeof(int) * len/2);
    int i, j, pal;
    while (h != NULL)
    {
        h = h->next;
        len++;
    }
    h = *head;

    for (i = 0; i < len/2; i++)
    {
        arr1[i] = h->n;
        h = h->next;
    }
    for (j = len/2 - 1; j >= 0; j--)
    {
        if (h->n == arr1[j])
        {
            pal++;
        }
        h = h->next;
    }
    if (pal == len / 2)
    {
        return (1);
    }
    return 0;
}
