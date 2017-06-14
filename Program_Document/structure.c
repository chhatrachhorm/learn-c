//Program to add and convert inch and feet
//Practice structure
//Written by Chhorm Chhatra by following Mr. Leo on 31/01/2017
#include<stdio.h>

struct Distance{
	int feet;
	float inch;
}d1, d2, sum;
int main()
{
	printf("1st distance\n");
	printf("Enter feet: ");
	scanf("%d", &d1.feet);
	printf("Enter inch: ");
	scanf("%f", &d1.inch);
	printf("2nd distance\n");
	printf("Enter feet: ");
	scanf("%d", &d2.feet);
	printf("Enter inch: ");
	scanf("%f", &d2.inch);
	sum.feet = d1.feet + d2.feet;
	sum.inch = d1.inch + d2.inch;
	while(sum.inch>=12){
		++sum.feet;
		sum.inch=sum.inch-12;
	}
	printf("Sum of distances =%d\'-%.1f\"", sum.feet, sum.inch);
	return 0;
}
