#include <stdio.h>

int main(void)
{
	int data[3][3];
	int key[3][3];
	int encrypted[3][3];
	int max_index_i = 0;
	int max_index_j = 0;
	
	int i, j;
	
	for(i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("enter data for (%d, %d): ", i, j);
			scanf("%d", &data[i][j]);
		}		
	}
	printf("\n");
	
	for(i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("enter key for (%d, %d): ", i, j);
			scanf("%d", &key[i][j]);
			encrypted[i][j] = (data[i][j] * key[i][j]) + i + j;
			
			if (encrypted[i][j] > encrypted[max_index_i][max_index_j])
			{
				max_index_i = i;
				max_index_j = j;
			}
		}		
	}	
	
	printf("   ");
	
	for (i = 0; i < 3; i++)
	{
		printf("%4d ", i);
	}
	
	printf("\n  ");
	
	for (i = 0; i < 3; i++)
	{
		printf("-----", i);
	}
	
	
	for (i = 0; i < 3; i++)
	{
		printf("\n%d |", i);
		
		for (j = 0; j < 3; j++)
		{
			printf("%4d ", encrypted[i][j]);
		}
	}
	
	printf("\nHighest encrypted value is: \"%d\" located at: (%d, %d)", encrypted[max_index_i][max_index_j], max_index_i, max_index_j);
	return 0;
}

