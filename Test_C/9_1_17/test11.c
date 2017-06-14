//Program to convert a given string
#include <stdio.h>
main ()
{
	int i, j, n;
	printf("How many characters do you want to enter? \n");
	scanf("%d", &n);
	fflush(stdin);
	printf("Now enter the your string to be converted either from lowercase to upercase or upercase to lower case: ");
	char str[n+1], c;
	gets (str);
	fflush (stdin);
	for (i=0; i<n; i++)
	{
		if(64<str[i] && str[i]<91)
		{
			str[i]=str[i]+32;
		}
		else if (96<str[i] && str[i]<123)
		{
			str[i]=str[i]-32;
		}
		
	}
	puts(str); 
}
