#include<stdio.h>
int btd(int a);
int b8(int b);
void b18(int e);
struct info
{
	int birth, favorNum;
}data1;
struct pass
{
	char passcode[5];
	int passnum;
}data2;
int main()
{
	int test, temp, digit, ans, phase1, phase2, phase3;
	printf("Password Generator");
	printf("Base on your Opinion of the passwaord, \nplease answer these question below: \n");
	printf("Enter a birthday date of someone: "); scanf("%d", &data1.birth);
	printf("Enter your favorite number\n(0<n<50)"); 
	scanf("%d", &test);
	while(test <= 0 || test >= 50 )
	{
		printf("The favorite number is either invalid or unacceptable\n");
		printf("Enter it again: ");
		scanf("%d", &test);
	}
	data1.favorNum = test;
	printf("Enter five Letters that you want to include in your password: ");
	scanf("%s", data2.passcode);
	printf("Enter 6digits number that you want to include in your password: ");
	scanf("%d", &data2.passnum);
	printf("%s", data2.passcode);
	printf("\n%d", data2.passnum);
	//start phase1
	temp = btd(data1.birth);
	while(temp)
	{
		digit = temp % 10;
		phase1 += digit;
		temp  = temp / 10;
	}
	printf("%d", phase1);
	//start phase2
	phase2 = b8(data1.favorNum);
	printf("%d", phase2);
	//start phase3
	printf("%s", data2.passcode);
	//start phase4
	b18(data2.passnum);
	//The next step will be printed
	return 0;
		
}
int btd(int a)
{
	int answer = 0;
	while(a)
	{
		answer = answer + ( a % 2 ) * 10;
		a = a / 10;
	}
	return answer;
} 
int b8(int b)
{
		int answer;
	while(b)
	{
		answer = answer + ( b % 8 ) * 10;
		b = b/10;
	}
	return answer;
}
void b18(int e)
{
	int i, answer;
	while(e)
	{
		answer = e % 18;
		switch (answer)
		{
			case 0: printf("0");
			case 1: printf("1");
			case 2: printf("2");
			case 3: printf("3");
			case 4: printf("4");
			case 5: printf("5");
			case 6: printf("6");
			case 7: printf("7");
			case 8: printf("8");
			case 9: printf("9");
			case 10: printf("i");
			case 11: printf("h");
			case 12: printf("g");
			case 13: printf("f");
			case 14: printf("e");
			case 15: printf("d");
			case 16: printf("c");
			case 17: printf("b");
			case 18: printf("a");		
		}
		e = e / 10;
	}
	
}

