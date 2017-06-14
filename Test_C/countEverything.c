/*This program is written to practice string
write by Chhorm Chhatra following Mr.Leo on 15/Feb/2017*/
#include<stdio.h>
int main()
{
	char str[150];
	int i, v, c, d, s;
	i = v = c = s = d = 0;
	printf("Enter a string \n");
	gets(str);
	fflush (stdin);
	for(i=0; str[i] != '\0'; ++i)
	{
	if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' || str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U')
		++v;
	else if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z'))
		++c;
	else if(str[i]>='0' && str[i]<='9')
		++d;
	else if(str[i]==' ')
		++s;
	}
	printf("Vowel: %d\nConsonants: %d\nDigits: %d\nWhite space: %d", v, c, d, s);
	return 0;
}     

