#include "sandpiles.h"
#include <stdio.h>


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
    if (stable(grid1) == 1)
    {
        for(i = 0; i < 3; i++)
        {
            for (j = 0; j < 3; j++)
            {
                if (grid1[i][j] > 3 )
                {
                    grid1[i][j] = 0;
                    grid1[i][j + 1] += 1;
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
