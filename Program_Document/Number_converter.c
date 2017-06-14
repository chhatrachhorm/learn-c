//Program to Convert big number to any kinds of number system
//Written by Chhorm Chhatra on 11/01/2017

#include<stdio.h>
main ()
{
	long int num, base, number, ans[100], ansn[100], unit, i, j=0, t=0;
	printf("Number Conversion\n");
	printf("Enter the base of the number to be converted: ");
	scanf("%ld", &base);
	printf("Enter the number: ");
	scanf("%ld", &num);
	number = num;
	switch (base)
	{
		case 8:	
			
			
		case 10:
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
					
					printf("%d", ans[i]);
				}
			printf("\n");
				num = number;
				j = 0;
				for (i=0; i<100; i++)
				{
					if (num != 0)
					{
						ans[i]= num % 16;
						num = num / 16;
						j++;
					}
				}
				printf("Hexa-Decimal: ");
				for (i=j-1; i>-1; i--)
				{
					switch (ans[i])
					{
						case 10:
							ansn[i]='A';
							printf("%c", ans[i]);
							break;
						case 11:
							ansn[i]='B';
							printf("%c", ans[i]);
							break;
						case 12:
							ansn[i]='C';
							printf("%c", ans[i]);
							break;
						case 13:
							ansn[i]='D';
							printf("%c", ans[i]);
							break;
						case 14:
							ansn[i]='E';
							printf("%c", ans[i]);
							break;
						case 15:
							ansn[i]='F';
							printf("%c", ans[i]);
							break;
						default:
							printf("%d", ans[i]);	
					}
					
				}
		break;
				
			
	}
}
