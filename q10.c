#include <stdio.h>

int main(void)
{
	int classes;
	int students;
	int subjects;
	float marks;
	int count = 0;
	int pass; // 1 = pass, 0 = fail
	float total_student = 0;
	float total_class;
	float total_marks = 0;
	float avg_s;
	float avg_c;
	int i, j, k;
	// multiple classes
	// each class has multiple stundets 
	// each student has multiple subjects
	
	printf("enter number of classes: ");
	scanf("%d", &classes);
	
	for (i = 0; i < classes; i++)
	{
		total_class = 0;
		
		printf("	enter number of students in class %d: ", i + 1);
		scanf("%d", &students);
		
		for (j = 0; j < students; j++)
		{
			count++;
			pass = 1;
			total_student = 0;
			printf("		enter number of subjects of student %d from class %d: ", j + 1, i + 1);
			scanf("%d", &subjects);
			
			for (k = 0; k < subjects; k++)
			{
				printf("			for student %d,  Input marks for subject %d: ", j + 1, k + 1);
				scanf("%f", &marks);
				
				if (marks < 40)
				{
					pass = 0;	
				}
				total_student += marks;
			}
			avg_s = total_student / subjects;
			total_class += total_student;
			
			printf("Class %d ,Student %d: Total Marks = %0.1f, Average = %0.1f, Result = %s\n", i + 1, j + 1, total_student, avg_s, (pass == 1) ? "Pass" : "Fail");
		}
		avg_c = total_class / students;
		total_marks += total_class;
		printf("\ntotal marks of all students in class %d: %0.1f\n", i + 1, total_class);
		printf("total average of class is: %0.1f\n\n", avg_c);
	}
	printf("total marks of all students in the entire school: %0.1f\n", total_marks);
	printf("total average of all students in the entire school is: %0.1f\n", total_marks / count);
	
}
