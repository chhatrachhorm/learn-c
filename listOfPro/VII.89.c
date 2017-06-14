#include<stdio.h>
//Count number of words using pointers 
int main()
{
	char str[100];
	int in, word=0, i;
	in = 0;
	printf("Enter a string: ");
	gets(str);
	for(i=0; *(str+i)!='\0'; i++)
	{
		if(*(str+i)==' ')
		{
			in = 0;
		}
		else if(in == 0)
		{
			word++; in = 1;
		}
	}
	printf("Number of words you have enter: %d", word);
}
