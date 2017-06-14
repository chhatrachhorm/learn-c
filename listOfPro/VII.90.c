//Length of a string using pointers
#include<stdio.h>
int main()
{
	char a[100];
	int i;
	gets(a);
	for(i=0; *(a+i)!='\0'; i++);
	printf("You have enter: %d characters", i);
	return 0;
}
