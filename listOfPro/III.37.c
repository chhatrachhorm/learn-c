#include<stdio.h>
//Reverse the array elements 
int main()
{
	int i, num, a[100], limit=0, temp;
	puts("how many element you want to ente?");
	scanf("%d", &num);
	for(i=0; i<num; i++)scanf("%d", a+i);
	for(i=0; i<num; i++)
	{
		temp = a[i];
		a[i] = a[num-1-i];
		a[num-1-i] = temp;
	}
	for(i=0; i<num; i++)printf("%d\n", *(a+i));	
	
	return 0;
}
