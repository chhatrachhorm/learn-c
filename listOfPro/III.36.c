#include<stdio.h>
//Smallest among N numbers in an array
int main()
{
	int i, temp, a[100], limit=0;
	puts("how many element you want to enter?");
	scanf("%d", &limit);
	for(i=0; i<limit; i++)
	scanf("%d", a+i);
	for(i=0; i<limit; i++)
	{
		if(temp>a[i])
		temp = a[i];
	}
	printf("The smallest number is %d", temp);
	return 0;
}
