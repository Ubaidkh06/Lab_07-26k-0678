#include <stdio.h>

int main(void)
{
	#define CLASSES 2
	#define STUDENTS 3
	#define SUBJECTS 3
	
	float marks[CLASSES][STUDENTS][SUBJECTS];
	float total[CLASSES][STUDENTS] = {0};
	int class_topper_index[CLASSES] = {0};
	int topper_index_c = 0;
	int topper_index_s = 0;
	
	int i,j,k;
	// FIND TOPPER IN EACH CLASS
	// FIND TOPPER OVERALL
	
	for (i = 0; i < CLASSES; i++)
	{
		printf("\nFOR CLASS %d:\n", i + 1);
		for (j = 0; j < STUDENTS; j++)
		{
			printf("	FOR STUDENT %d:\n", j + 1);
			for (k = 0; k < SUBJECTS; k++)
			{
				printf("		input marks of subject %d: ", k + 1);
				scanf("%f", &marks[i][j][k]);
				total[i][j] += marks[i][j][k];
			}
			if (total[i][j] > total[i][class_topper_index[i]])
			{
				class_topper_index[i] = j;
			}
			
			if (total[i][j] > total[topper_index_c][topper_index_s])
			{
				topper_index_c = i;
				topper_index_s = j;
			}
		}
	}
	
	for (i = 0; i < CLASSES; i++)
	{
		printf("Top Performer of Class %d: Student %d with %0.1f marks\n", i + 1, class_topper_index[i] + 1, total[i][class_topper_index[i]]);
	}
	
	printf("\nOverall Topper: Student %d of class %d\n",topper_index_s + 1 ,topper_index_c + 1);
		
}
