//Program to practice Single Variable in Structure;
//written by Chhatra Chhorm following Mr.Leo on 31/01/2016
#include<stdio.h>
struct student{
	char name[50];
	int roll;
	float marks;
};
int main()
{
	struct student s;
	printf("Enter information of students: \n\n");
	printf("Enter your name: ");
	scanf("%s", s.name);
	printf("Enter roll number: ");
	scanf("%d", &s.roll);
	printf("Enter marks: ");
	scanf("%f", &s.marks);
	printf("\nDisplaying Information\n");
	printf("Name: %s\n", s.name);
	printf("Roll: %d\n", s.roll);
	printf("Marks: %.2f\n", s.marks);
	return 0;
}
