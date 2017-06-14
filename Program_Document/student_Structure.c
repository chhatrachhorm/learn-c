//Program to find the sum and the total marks of student
//written by Chhorm Chhatra following Mr. Leo on  01/02/2017
/*Problem Statement :
The annual examination is conducted for 50 students for three subjects. Write a program to read the data and determine the following:
"	(a) Total marks obtained by each student.
"	(b) The highest marks in each subject and the Roll No. of the student who secured it.
"	(c) The student who obtained the highest total marks.
*/
//Written by Chhorm Chhatra following Mr.Leo on 31/January/2017
#include<stdio.h>
#define SIZE 50

struct student {
   char name[30];
   int rollno;
   int sub[3];
};

void main() {
   int i, j, max, count, total, n, a[SIZE], ni;
   struct student st[SIZE];
 //  clrscr();

   printf("Enter how many students: ");
   scanf("%d", &n);
 /* for loop to read the names and roll numbers*/
   for (i = 0; i < n; i++)
   {
      printf("\nEnter name and roll number for student %d : ", i+1);
      scanf("%s", &st[i].name);
      scanf("%d", &st[i].rollno);
   }
 /* for loop to read ith student's jth subject*/
   for (i = 0; i < n; i++) 
   {
      for (j = 0; j <= 2; j++) 
	  {
         printf("\nEnter marks of student %d for subject %d : ", i+1, j+1);
         scanf("%d", &st[i].sub[j]);
      }
   }

   /* (i) for loop to calculate total marks obtained by each student*/

   for (i = 0; i < n; i++) {
      total = 0;
      for (j = 0; j < 3; j++) {
         total = total + st[i].sub[j];
      }
      printf("\nTotal marks obtained by student %s are %d", st[i].name,total);
      a[i] = total;
   }

   /* (ii) for loop to list out the student's roll numbers who
    have secured the highest marks in each subject */

   /* roll number who secured the highest marks */

   for (j = 0; j < 3; j++) {
      max = 0;
      for (i = 0; i < n; i++)
	   {
         if (max < st[i].sub[j]) 
		 {
            max = st[i].sub[j];
            ni = i;
         }
      }
      printf("\nStudent %s got maximum marks = %d in Subject : %d",st[ni].name, max, j);
   }

   max = 0;

   for (i = 0; i < n; i++) {
      if (max < a[i]) {
         max = a[i];
         ni = i;
      }
   }

   printf("\n%s obtained the total highest marks.", st[ni].name);
 //  getch();
}





