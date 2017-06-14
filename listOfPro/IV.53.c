#include<stdio.h>
//Dec to Hex 
void dth(int num, char c[]);
int main()
{
	int num; char c[100];
	printf("Enter decimal : ");
	scanf("%d", &num);
	dth(num, c);
	printf("(%d)10=(%s)16", num, c);
	return 0;
}
void dth(int num, char c[])
{
	int rem=0, i=0;
	while(num)
	{
		rem = num % 16;
		switch(rem)
		{
			case 10:
				c[i]='A';
				break;
			case 11:
				c[i]='B';
				break;
			case 12:
				c[i]='C';
				break;
			case 13:
				c[i]='D';
				break;
			case 14:
				c[i]='E';
				break;
			case 15:
				c[i]='F';
				break;
			default:
				c[i]=rem + '0';
		}
		i++; num /=16;
	}
	c[i]='\0';
}
