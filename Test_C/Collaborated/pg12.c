/*----------------
This program was written on Dec 15, 2016
- Swaping two number without third variable
------------------*/

#include <stdio.h>

void main(){

	int a, b;

	printf("Enter a: ");
	scanf("%d", &a);
	scanf("%d", &b);
	if(a!=b){
		a=a+b;
		b=a-b;
		a=a-b;
	}
	printf("A: %d\nB: %d",a,b);
}
