#include <stdio.h>

int main(void)
{
	int height;
	int i, j;
	int num;
	int half;
	
	do 
	{
		printf("input height of pyramid (input number between 1 and 5): ");
		scanf("%d", &height);
	}
	while (height < 1 || height > 5);
	
	do
	{
		printf("half or full pyramid? (1 = half, 0 = full): ");
		scanf("%d", &half);
	}
	while (half != 0 && half != 1);
	for (i = 0; i < height; i++)
	{
		printf("\n\n");
		
		if (half == 1)
		{
			// spaces
			for (j = 0; j < (2 * height) - 2 - (2 * i); j++)
			{
				printf(" ");
			}
			// bricks
			for (j = 0; j < i + 1; j++)
			{
				printf("* ");
			}
			printf(" | ");
			// spaces
			for (j = 0; j < (2 * height) - 2 - (2 * i); j++)
			{
				printf(" ");
			}
			// numbers
			num = 1;
			for (j = 0; j < i + 1; j++)
			{
				printf("%d ", num);
				num++;
			}
			printf(" | ");
			// spaces
			for (j = 0; j < (2 * height) - 2 - (2 * i); j++)
			{
				printf(" ");
			}
			//characters;
			num = 65;
			for (j = 0; j < i + 1; j++)
			{
				printf("%c ", num);
				num++;
			}
		}
		else if (half == 0)
		{
			// spaces
			for (j = 0; j < (2 * height) - 2 - (2 * i); j++)
			{
				printf(" ");
			}
			//bricks
			for (j = 0; j < (2 * i) + 1; j++)
			{
				printf("* ");
			}
			// spaces
			for (j = 0; j < (2 * height) - 2 - (2 * i); j++)
			{
				printf(" ");
			}
			
			printf(" | ");
			
			// spaces
			for (j = 0; j < (2 * height) - 2 - (2 * i); j++)
			{
				printf(" ");
			}
			//numbers
			num = 1;
			for (j = 0; j < (2 * i) + 1; j++)
			{
				printf("%d ", num);
				num++;
			}
			// spaces
			for (j = 0; j < (2 * height) - 2 - (2 * i); j++)
			{
				printf(" ");
			}
			
			printf(" | ");
			
			// spaces
			for (j = 0; j < (2 * height) - 2 - (2 * i); j++)
			{
				printf(" ");
			}
			//characters
			num = 65;
			for (j = 0; j < (2 * i) + 1; j++)
			{
				printf("%c ", num);
				num++;
			}
			// spaces
			for (j = 0; j < (2 * height) - 2 - (2 * i); j++)
			{
				printf(" ");
			}
			
		}
	}
}
