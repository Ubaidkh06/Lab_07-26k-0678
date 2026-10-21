#include <stdio.h>

int main(void)
{
	int grid[3][3] = {0};
	int i, j, k , l;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("input in box (%d,%d): ", i + 1, j + 1);
			scanf("%d", &grid[i][j]);	
			
			if (grid[i][j] > 9 || grid[i][j] < 0)
			{
				printf("Invalid grid - input number is not between 1 and 9\n");
				return 1;
			}
			
			for (k = 0; k <= i; k++)
			{
				if (k == i)
				{
					for (l = 0; l < j; l++)
					{
						if (grid[i][j] != 0 && grid[i][j] == grid[k][l])
						{
							printf("\nInvalid grid - (%d,%d) and (%d,%d) are dupelicates\n", i + 1, j + 1, k + 1, l + 1);
							return 2;
						}
					}
				}
				else
				{
					for (l = 0 ; l < 3; l++)
					{
						if (grid[i][j] != 0 && grid[i][j] == grid[k][l])
						{
							printf("\nInvalid grid - (%d,%d) and (%d,%d) are dupelicates\n", i + 1, j + 1, k + 1, l + 1);
							return 2;
						}
					}
				}
			}		
		}
	}
	printf("\nvalid grid\n");
	
	printf("+-----+\n");
	for (i = 0; i < 3; i++)
	{	
		printf("|%d|%d|%d|\n",grid[i][0], grid[i][1], grid[i][2]);
		printf("+-----+\n");

	}
	return 0;
}

/*

ALTERNATE:

#include <stdio.h>

int main(void)
{
	int grid[3][3] = {0};
	int numbers[9] = {0};
	int i, j, k , count = 0;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("input in box (%d,%d): ", i + 1, j + 1);
			scanf("%d", &grid[i][j]);	
			
			if (grid[i][j] > 9 || grid[i][j] < 0)
			{
				printf("Invalid grid - input number is not between 1 and 9\n");
				return 1;
			}
			for (k = 0; k < 9; k++)
			{
				if (grid[i][j] == numbers[k] && grid[i][j] != 0)
				{
					printf("\nInvalid grid - dupelicates\n");
					return 2;
				}
			}
			numbers[count] = grid[i][j];
			count++;	
		}
	}
	printf("\nvalid grid\n");
	
	printf("+-----+\n");
	for (i = 0; i < 3; i++)
	{	
		printf("|%d|%d|%d|\n",grid[i][0], grid[i][1], grid[i][2]);
		printf("+-----+\n");

	}
	return 0;
}
*/
