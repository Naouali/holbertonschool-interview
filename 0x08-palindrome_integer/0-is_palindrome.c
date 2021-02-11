#include <stdio.h>
#include "palindrome.h"


int is_palindrome(unsigned long n)
{
    unsigned long i, j = 0;
    unsigned long rem = 0;
    unsigned long rev = 0;
    unsigned long hold;
    unsigned long hold2;
    hold = n;
    hold2 = n;
    while (hold)
    {
        hold /= 10;
        j++;
    }
    if (j == 1)
    {
        return (1);
    }

    i = 0;
    while (n > 10 && i < j / 2)
    {
        rem = n % 10;
        rev = rev * 10 + rem;
        n /= 10;
        i++;
        hold2 /= 10;
        if ((i == (j / 2) - 1 && j % 2 != 0) || (j == 3))
        {
            hold2 /= 10;
        }
    }
    if (hold2 == rev)
    {
        return (1);
    }
    
    return 0;
}
        
