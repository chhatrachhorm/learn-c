#include<stdio.h>
#define s2 1.41
#define s3 1.44
//TO FIND SIN(X) USING SINE SERIES 
int main()
{
	int a; float ans;
	printf("Please Enter only the special angle to find sine\n");
	printf("NB: Enter only angle from first catrong with positive value only\n");
	printf("x = ");
	scanf("%d", &a);
	if(a>=0 && a<=90)
	{
		switch(a)
		{
			case 0:
				ans = 0;
				break;
			case 30:
				ans = 0.5;
				break;
			case 45:
				ans = s2 / 2;;
				break;
			case 60:
				ans = s3 / 2;
				break;
			case 90:
				ans = 1;
				break;
		}
		printf("sine of %d degree is %.3f", a, ans);
	}else printf("Only first catrong pls.");
	return 0;
	
}
