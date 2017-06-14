#include <stdio.h>
#include <stdlib.h>
int main ()
{
//array: a list of item;	
/* syntax 
	char name[n];
	......
	name[n.th] = 'char'; */
	char name [10];
	puts ("Enter your name! \n");
	gets (name);
	fflush (stdin);
	printf("Your name is %s \n", name);
	
	name [2] ='r';
	printf("Your name is %s \n", name);
	
	name [2]='h';
	printf("Your name is %s \n", name);
	
	char inte[] = "one of the best students";
	printf("Your are %s in the world!", inte);
	strcpy (inte, "one of best leaders");// just like integer a = b but for string we use array and function strcpy 
	printf("Your are %s in the world!", inte);
	
	return 0; 
}
