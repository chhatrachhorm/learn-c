/* this program is written to do the sum and find the average of the twelve subjects in high school */
/* Writer: Chhatra Chhorm on 13/12/16 */
#include<stdio.h>

main()
{	int a , b , c , d , e , f , g , h , i , j , k , l , sum , average;
	printf("Enter the mark for each subject");
	scanf("%d",a);
	scanf("%d",b);
	scanf("%d",c);
	scanf("%d",d);
	scanf("%d",e);
	scanf("%d",f);
	scanf("%d",g);
	scanf("%d",h);
	scanf("%d",i);
	scanf("%d",j);
	scanf("%d",k);
	scanf("%d",l);
	sum=a+b+c+d+e+f+j+k+l;
	average=sum/16;
	printf("the sum is %d",sum);
	printf("the average is %d",average);
	if(average<25)printf("you failed");
	else printf("you passed");

}
