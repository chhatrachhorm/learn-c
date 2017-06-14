#include<stdio.h>
#include<stdlib.h>
//write records to a file using structure
//fprintf() - writes the values in structure variable to file
int main()
{	
	FILE *fp;
	struct emp 
	{
		char name[50];
		int age;
		float bs;
	};
		struct emp e;
		fp = fopen("D://Application/C_program/Program_Document/Filehandling/employee.txt", "r");
		if(fp == NULL)
		{
			puts("Cannot Open the file");
			exit(1);
		}
		while (fscanf(fp, "%s %d %f", e.name, &e.age, &e.bs) != EOF)
		printf("\n%s\t%d\t%f\n", e.name, e.age, e.bs);
		fclose(fp);
		return 0;
}
