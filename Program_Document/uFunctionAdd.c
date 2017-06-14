//Program to practice Function 
//Adding Function
//Written By Chhorm Chhatra by following Mr. Leo on Feb/07/2016
#include<stdio.h>
int add(int a, int b);
int main(){
	int num1, num2, sum;
	printf("Enter any two numbers to add \n");
	scanf("%d %d", &num1, &num2);
	sum = add(num1, num2);
	printf("Sum is %d", sum);
}
int add(int a, int b){
	return a + b;
}
