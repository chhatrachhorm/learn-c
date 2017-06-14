//Program to find the sum and the total marks of student
//written by Chhorm Chhatra on  2/02/2017
#include<stdio.h>
#define size 50
struct student
{
	char name[50];
	int roll;
	int subject[3];
	int total;
}s[size];
int main()
{
	int num, i, j, max, maxnum, subj;
	printf("Program to read data and determine the total marks, the highest mark and the student, \nthe student who obtained highest total\n");
	printf("Enter Number of Student in the class: ");scanf("%d", &num);
	if(num>size)printf("Students must be less than 50");
	else{
		printf("Enter Number of Subject: "); scanf("%d", &subj);
		printf("Enter Details of Each Student\n");
		for(i=0; i<num; i++)
		{
			printf("%d Student name: ", i+1);scanf("%s", s[i].name);
			printf("Enter the roll number: ");scanf("%d", &s[i].roll);
			printf("Enter the marks for the three subjects: \n");
			for(j=0; j<subj; j++)	scanf("%d", &s[i].subject[j]);
		}
		
		for(i=0; i<num; i++)
		{
			for(j=0; j<subj; j++)	s[i].total += s[i].subject[j];
		}
		printf("Total Marks obtained by each student: \n");
		for(i=0; i<num; i++)
			printf("%d.\tName: %s\tRoll Number: %d\tTotal Mark:%d\n", i+1, s[i].name, s[i].roll, s[i].total);
		for(j=0; j<subj; j++)
		{
			max = 0;
			for(i=0; i<num; i++)
			{
				if(max < s[i].subject[j])
				{
					max = s[i].subject[j];
					maxnum = i;	
				}
			}
			printf("\n The highest mark for %d subject is %d which is belong to %s\n", j, max, s[maxnum].name);
	
		}
		
		
		for(i=0; i<num; i++)
		{
			for(j=0; j<num-1-i; j++)
			{
				if(s[j].total<s[j+1].total)
				{
					s[num]=s[j];
					s[j]=s[j+1];
					s[j+1]=s[num];
				}
			}
		}
		printf("\nlist of the total marks of each and every students:\n");
		for(i=0; i<num; i++)
			printf("%d\tName: %s\tRoll Number: %d\t Total: %d\n", i+1, s[i].name, s[i].roll, s[i].total);
			printf("\n----------------------------------");
		printf("\nThe Highest Total Mark is %d\n", s[0].total);
		for(i=0; i<num; i++)
		{
			if(s[i].total==s[0].total)
			{
				printf("\n%d", s[i].roll);
				printf("\t%s", s[i].name);
				printf("\t%d", s[i].total);
			}
		}
	}
	
}
