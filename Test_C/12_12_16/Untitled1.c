#include<stdio.h>

main()
{
    int number , rev;

    printf("Write a number to be reversed: ");
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
