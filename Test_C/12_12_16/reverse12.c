/* This program is written to reverse the number */
#include <stdio.h>
main()
 
{	int reverse, number;
	int ans=0;
	printf("Enter the number to be reversed");
	scanf("%d",&number);
	while(number!=0){
		int units=number%10;
		ans=ans*10+units;
		number=number/10;
	}
	return ans;
	printf("reverse is %d",ans);

}
