#include<stdio.h>
#include<math.h>
//Oct to dec; dec to oct
int otd(int num);
int dto(int num);
int main()
{
	int num; char a;
	printf("a)Octal to Decima\nb)Decimal to Octal\n");
	a = getchar();scanf("%d", &num);
	if(a=='a'||a=='A')
	printf("(%d)8 = (%d)10", num, otd(num));
	else if(a=='b'||a=='B')
	printf("(%d)10 = (%d)8", num, dto(num));
	return 0;
}
int otd(int num)
{
	int dec,i;
	dec = i = 0;
	while(num)
	{
		dec += (num%10)*pow(8, i);
		num /= 10; i++;
	}
	return dec;
}
int dto(int num)
{
	int oct=0, d =1;
	while(num)
	{
		oct += (num%8)*d;
		num /=8; d*=10;
	}
	return oct;
}
