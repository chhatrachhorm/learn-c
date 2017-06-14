#include<stdio.h>
//Check whether a character is vowel or consonant 
int main()
{
	char a;
	puts("Enter a character: ");
	a = getchar();
	if((a>='A'&& a<='Z')||(a>='a'&&a<='z'))
	{
	if(a=='a' || a=='e' || a=='i' || a=='o' || a=='u'
	||a=='A' || a=='E' || a=='I' || a=='O' || a=='U')
	printf("%c is a vowel", a);
	else printf("%c is a consonant", a);
	}
	else printf("Please Enter Character only!");
	
	return 0;
}
