//Program to Find the detail of employees
//Practice structure in Structure 
//Written by Chhorm Chhatra by following Mr. Leo on 31/01/2017
#include <stdio.h>
struct Employee
{
   char ename[20];
   int empno;
   float salary;
   struct date
       {
       int date;
       int month;
       int year; 
       }doj;
}emp;

int main()
{
	printf("\nEnter the name :");
	scanf("%s",emp.ename);
	printf("\nEnter the employee number :");
	scanf("%d",&emp.empno);
	printf("\nEnter the date of joining in the format Date : Month : year");
	scanf("%d%d%d",&emp.doj.date,&emp.doj.month,&emp.doj.year);
	printf("\n Enter the salary :");
	scanf("%f",&emp.salary);
	
	printf("\nEmployee Name\t: %s",emp.ename);  
	printf("\nEmployee Number\t: %d",emp.empno);  
	printf("\nEmployee Salary\t: %f",emp.salary);  
	printf("\nEmployee DOJ\t: %d/%d/%d", emp.doj.date,emp.doj.month,emp.doj.year);  
	    
	return 0;
}

