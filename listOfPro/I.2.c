#include<stdio.h>
//ASCII value of a character
int main()
{
	char a;
	printf("Enter a character to display its ASCII\n");
	a = getchar();
	printf("%c = %d", a, a);
	return 0;
}
