#include <stdio.h>
main ()
{
	long int num, ans[100], ansn[100], j=0, i, number;
	printf("Program to convert decimal number: ");
	scanf("%ld", &num);
	number = num;
	for (i=0; i<100; i++)
	{
		if (num != 0)
		{
			ans[i]= num % 2;
			num = num / 2 ;
			j++;
		}
			
	}
	printf("Binary: ");
	for (i = j-1; i>-1; i--)
	{
		printf("%ld", ans[i]);
	}
printf("\n");
	num = number;
	j = 0;
	for (i=0; i<100; i++)
	{
		if (num != 0)
		{
			ansn[i]= num % 8;
			num = num / 8;
			j++;
		}
	}
	printf("Octal: ");
	for (i=j-1; i>-1; i--)
	{
		
		printf("%d", ansn[i]);
	}
printf("\n");
	num = number;
	j = 0;
	for (i=0; i<100; i++)
	{
		if (num != 0)
		{
			ansn[i]= num % 16;
			num = num / 16;
			j++;
		}
	}
	printf("Hexa-Decimal: ");
	for (i=j-1; i>-1; i--)
	{
		switch (ansn[i])
		{
			case 10:
				ansn[i]='A';
				printf("%c", ansn[i]);
				break;
			case 11:
				ansn[i]='B';
				printf("%c", ansn[i]);
				break;
			case 12:
				ansn[i]='C';
				printf("%c", ansn[i]);
				break;
			case 13:
				ansn[i]='D';
				printf("%c", ansn[i]);
				break;
			case 14:
				ansn[i]='E';
				printf("%c", ansn[i]);
				break;
			case 15:
				ansn[i]='F';
				printf("%c", ansn[i]);
				break;
			default:
				printf("%d", ansn[i]);	
		}
		
	}				
}
