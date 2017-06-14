/*------------------
This program was written on i forgot
-Used to find the simple interest
--------------------*/

#include<stdio.h>
#include<CONIO1.h>
#include<stdlib.h>
void main(){
	int i;
	int N, P;
	float SI, R;
	printf("FIND THE SIMPLE INTEREST\n");
	for(i=0;i<35;i++)printf("+");
	printf("\n> Principal Amount: ");
	scanf("%d", &P);
	printf("> Number of Years: ");
	scanf("%d", &N);
	printf("> Rate of Interest: ");
	scanf("%f", &R);
	SI = (P*N*R)/100;
	for(i=0;i<35;i++)printf("+");
	delay(5000);
	printf("\nThe Simple interest is : %.2f", SI);
}
