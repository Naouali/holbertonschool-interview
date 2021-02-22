#include "slide_line.h"

/**
 * slide_line - function to add number like 2084
 * @line: array of numbers
 * @size: size of the array
 * @direction: left or right
 * Return: 1 or zero
 */


int slide_line(int *line, size_t size, int direction)
{
    size_t i;

    if (direction == 0)
    {
            for(i = 0; i < size; i++)
            {
                if (line[i] == line[i + 1] || line[0] == 0 )
            {
                line[i + 1] += line[i];
                line[i] = 0;
            }
            }
        return (1);
    }

    if (direction == 1)
    {
            for(i = size; i > 0; i--)
            {
                if (line[i] == line[i - 1] || line[i] == 0)
            {
                line[i - 1] += line[i];
                line[i] = 0;
            }
            }
        return (1);
    }
    return (0);
}
