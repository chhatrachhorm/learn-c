/* this program is written to reverse the number */

#include <stdio.h>

main()
{
	int number , rev;
	printf("Enter any number to reverse");
	scanf("%d",&number);
do
{
	rev=number%10;
	number=number/10;
	printf("%d",rev);
}	
while(number!=0);
return 0;
	
}
