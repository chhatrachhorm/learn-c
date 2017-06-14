#include<stdio.h>
struct student
{
	int roll, Tmark;
	struct birthday{
		int day, month, year;
	}birth;
	char name[50], dep[50];
}stu[100];
int main()
{
	int num, i;
	puts("Enter number of students: ");
	scanf("%d", &num);
	for(i=0; i<num; i++)
	{
		printf("Student %d:\n", i+1);
		printf("Enter the roll num: "); scanf("%d", &stu[i].roll); fflush(stdin);
		printf("Enter the name:"); gets(stu[i].name);
		printf("Enter the birthday(DD-MM-YYYY):\n");
		scanf("%d", &stu[i].birth.day);
		scanf("%d", &stu[i].birth.month);
		scanf("%d", &stu[i].birth.year);fflush(stdin);
		printf("Enter the department: "); gets(stu[i].dep);
		printf("Enter the total mark: "); scanf("%d", &stu[i].Tmark);
		printf("\n***\n");
		
	}
	puts("\nHere you are: ");
	for(i=0; i<num; i++)
	{
		printf("%d-%d\t%s\tDate of Birth:%d/%d/%d\tFrom:%s\tTotal:%d", i+1, stu[i].roll, stu[i].name,stu[i].birth.day,stu[i].birth.month,stu[i].birth.year,stu[i].dep, stu[i].Tmark);
		printf("\n***\n");
	}
	return 0;
}
