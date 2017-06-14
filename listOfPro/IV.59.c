#include<stdio.h>
//Reverse the sentence using recursion 
void rev();
int main()
{
	printf("Enter your sentence: ");
	rev();
	return 0;
}
void rev()
{
	char c;
	scanf("%c", &c);
	if(c!='\n')
	{
		rev();
		printf("%c", c);
	}
}
