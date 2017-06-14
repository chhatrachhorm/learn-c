#include<stdio.h>
//calculating string length without strlen function 
int main()
{
	char str[100]; int i;
	gets(str);
	for(i=0; str[i]!='\0'; i++);
	printf("string's length is %d", i);
	return 0;
}
