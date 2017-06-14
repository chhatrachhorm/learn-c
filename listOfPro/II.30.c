#include<stdio.h>
#include<math.h>
//Make simple calculator in C
int main()
{
	char sym; 
	int a, b, ans, k=1;
	puts("Instruction: ");
	puts("Enter the first number, \nthen a symbol(+, -, *, /, %, ^)\nfinally enter the second number.");
	printf("a = "); scanf("%d", &a); fflush(stdin);
	printf(""); sym = getchar();
	printf("b = ");scanf("%d", &b);
	switch(sym)
	{
		case '+':
			ans = a + b; break;
		case '-':
			ans = a - b; break;
		case '*':
			ans = a * b; break;
		case '/':
			ans = a / b; break;
		case '%':
			ans = a % b; break;
		case '^':
			ans = pow(a, b); break;
		default:
			printf("please enter one of the symbol above only!");
			k = 0;		
	}
	if(k!=0)
	{
		printf("%d %c %d = %d", a, sym, b, ans);
	}
	
	
	
	return 0;
}
