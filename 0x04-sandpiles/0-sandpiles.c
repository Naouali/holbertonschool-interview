#include "sandpiles.h"
#include <stdio.h>


/**
 * stable - function to check if a sandpile is stable
 * @grid: grid to be checked
 * Return: 0 if stable else 1
 */


int stable(int grid[3][3])
 {
     int i, j;
 
     for(i = 0; i < 3; i++)
     {
         for (j = 0; j < 3; j++)
         {
             if (grid[i][j] > 3)
             {
                 return (1);
             }
         }
     }
     return (0);
 } 

/**
 * print_grid - function to print cool grid
 * @grid: grid to be printed
 * Return: void
 */


void print_grid(int grid[3][3])
{
	int i, j;

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			if (j)
				printf(" ");
			printf("%d", grid[i][j]);
		}
		printf("\n");
    
	}
}

/**
 * sandpiles_sum - function to sum sindpiles
 * @grid1: grid1
 * @grid2: grid2
 * Return: sum of to sandpiles
 */


void sandpiles_sum(int grid1[3][3], int grid2[3][3])
{
    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            grid1[i][j] += grid2[i][j];
        }
    }
    while (stable(grid1) == 1)

    {

        printf("=\n");
        print_grid(grid1);
        for(i = 0; i < 3; i++)
        {
            for (j = 0; j < 3; j++)
            {
                if (grid1[i][j] > 3 )
                {
                    grid1[i][j] -= 4;
                    if (j + 1 < 3)
                        grid1[i][j + 1] += 1;
                    if (i + 1 < 3)
                        grid1[i + 1][j] += 1;
                    if (i)
                        grid1[i -1][j] += 1;
                    if (j)
                        grid1[i][j - 1] += 1;
                }
            }

        }
       
    }

}
