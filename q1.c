#include <stdio.h>

int main(void)
{
	#define ROWS 10
	#define COLUMNS 4
	
	int seats[ROWS][COLUMNS] = {0};
	int count, i, j, row, seat, flag;
	
	printf("how many seats do you want to reserve: ");
	scanf("%d", &count);
	
	for (i = 0; i < count; i++)
	{
		flag = 0;
		do
		{
			do
			{
				printf("for your reservation %d, select row (between 1 to 10): ", i + 1);
				scanf("%d", &row);
			}
			while (row < 1 || row > 10);
			row--;
		
			do
			{
				printf("for your reservation %d, select seat (between 1 to 4): ", i + 1);
				scanf("%d", &seat);
				printf("\n");
			}
			while (seat < 1 || seat > 4);
			seat--;
			
			if (seats[row][seat] == 0)
			{
				seats[row][seat] = 1;
				flag = 1;
			}
			else
			{
				printf("Seat already booked\n\n");
			}
		}
		while (flag == 0);
	}
	
	// printing columns heading:
	printf("   ");
	for (i = 0; i < COLUMNS; i++)
	{
		printf("%d ", i + 1);
	}
	
	printf("\n   ");
	for (i = 0; i < COLUMNS; i++)
	{
		printf("__");
	}
	
	printf("\n");
	
	// printing rows 
	for (i = 0; i < ROWS; i++)
	{
		if (i + 1 < 10)
		{
			printf(" %d|",i + 1);
		}
		else
		{
			printf("%d|",i + 1);
		}
			
		for (j = 0; j < COLUMNS; j++)
		{
			printf("%d ", seats[i][j]);
		}
		printf("\n");
	}
	
	
	
	/*	
	printf("   1 2 3 4 \n");
	printf("   ________\n");
	printf("1 |%d %d %d %d  \n", seats[0][0], seats[0][1], seats[0][2], seats[0][3]);
	printf("2 |%d %d %d %d  \n", seats[1][0], seats[1][1], seats[1][2], seats[1][3]);
	printf("3 |%d %d %d %d  \n", seats[2][0], seats[2][1], seats[2][2], seats[2][3]);
	printf("4 |%d %d %d %d  \n", seats[3][0], seats[3][1], seats[3][2], seats[3][3]);
	printf("5 |%d %d %d %d  \n", seats[4][0], seats[4][1], seats[4][2], seats[4][3]);
	printf("6 |%d %d %d %d  \n", seats[5][0], seats[5][1], seats[5][2], seats[5][3]);
	printf("7 |%d %d %d %d  \n", seats[6][0], seats[6][1], seats[6][2], seats[6][3]);
	printf("8 |%d %d %d %d  \n", seats[7][0], seats[7][1], seats[7][2], seats[7][3]);
	printf("9 |%d %d %d %d  \n", seats[8][0], seats[8][1], seats[8][2], seats[8][3]);
	printf("10|%d %d %d %d  \n", seats[9][0], seats[9][1], seats[9][2], seats[9][3]);
	*/
	
	return 0;
}
