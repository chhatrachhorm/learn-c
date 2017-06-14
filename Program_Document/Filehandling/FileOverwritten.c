#include<stdio.h>
#include<stdlib.h>
//write records to a file using structure
//fprintf() - writes the values in structure variable to file
int main()
{	
	FILE *fp;
	char another = 'Y';
	struct emp 
	{
		char name[50];
		int age;
		float bs;
	};
		struct emp e;
		fp = fopen("D://Application/C_program/Program_Document/Filehandling/employee.txt", "w"); //change to for apending data
		if(fp == NULL)
		{
			puts("Cannot Open the file");
			exit(1);
		}
		while (another == 'Y')
		{
			printf("\nEnter name, age and basic salary: ");
			scanf("%s %d %f", e.name, &e.age, &e.bs);
			fprintf(fp, "%s %d %f\n", e.name, e.age, e.bs);
			printf("Add another record(Y/N)"); fflush(stdin);
			another = getchar();
		}
		fclose(fp);
		return 0;
}
