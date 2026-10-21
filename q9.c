#include <stdio.h>

int main(void)
{
	int departments;
	int days;
	int i, j;
	int salary;
	int department_sum;
	int total_sum = 0;
	
	printf("enter the number of departments in the company: ");
	scanf("%d", &departments);
	printf("\n");
	
	int employees;
	
	for (i = 0; i < departments; i++)
	{
		department_sum = 0;
		printf("	enter the number of employees in department %d: ", i + 1);
		scanf("%d", &employees);	
		
		for (j = 0; j < employees; j++)
		{
			printf("		enter the number of days worked by employee %d of department %d: ", j + 1, i + 1);
			scanf("%d", &days);
			salary = days * 500;
			
			if (days > 25)
			{
				salary += 2000;
			}
			department_sum += salary;
			printf("\n--------------------------------------------------------------------------------------------------------\n");
			printf("		Department %d, Employee %d: Days Worked = %d, Salary = Rs. %d\n", i + 1, j + 1, days, salary);
			printf("--------------------------------------------------------------------------------------------------------\n\n");
		}
		total_sum += department_sum;
		
		printf("--------------------------------------------------------------------------------------------------------\n");
		printf("total salary paid to all employees in department %d: %d\n", i + 1, department_sum);
		printf("--------------------------------------------------------------------------------------------------------\n\n");
	}
	printf("--------------------------------------------------------------------------------------------------------\n");
	printf("total salary paid across all departments combined: %d\n", total_sum);
	printf("--------------------------------------------------------------------------------------------------------\n\n");
		
}
