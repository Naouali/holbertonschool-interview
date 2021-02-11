#include <stdio.h>
#include "palindrome.h"


int is_palindrome(unsigned long n)
{
    int j = 0;
    int i = 0;
    unsigned long rem;
    unsigned long rev = 0;
    unsigned long hold;
    unsigned long hold_right;
    hold = n;
    hold_right = n;
    while (hold)
    {
        hold /= 10;
        j++;
    }
    if (j % 2 == 0)
    {

    
    while (n > 0 && i < j / 2)
    {
        rem = n % 10;
        rev = rev * 10 + rem;
        n /= 10;
        i++;
    }
    i = 0;
    while (hold_right && i < j / 2)
    {
        i++;
        hold_right /= 10;

    }
    if (hold_right == rev)
        return 1;
    }
    else
    {
    while (n > 0 && i < j / 2)
    {
        rem = n % 10;
        rev = rev * 10 + rem;
        n /= 10;
        i++;
    }
    i = 0;
    printf("len = %d\n", j / 2);
    while (hold_right && i < j / 2 + 1)
    {
        i++;
        hold_right /= 10;

    }
    if (hold_right == rev)
        return 1;
    }

    return 0;

}

