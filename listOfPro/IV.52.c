#include<stdio.h>
#include<math.h>
//Bin to Octal, Octal to bin
int bto(int num);
int otb(int num);
int main()
{
	int num; char a;
	printf("a)Binary to Octal\nb)Octal to Binary");
	a = getchar();
	scanf("%d", &num);
	if(a=='a'||a=='A')
	printf("(%d)2 = (%d)8", num, bto(num));
	else if(a=='b'||a=='B')
	printf("(%d)8 = (%d)2", num, otb(num));
	return 0;
}
int bto(int num)
{
	int i, dec, d=1, oct=0;
	i = dec = 0;
	while(num)
	{
		dec += (num%10) * pow(2, i);
		num /= 10; i++;
	}
	while(dec)
	{
		oct += (dec%8)*d; 
		d*=10; dec /= 8;
	}
	return oct;
}
int otb(int num)
{
	int dec, i, d=1, bin=0;
	dec = i = 0;
	while(num)
	{
		dec += (num%10)*pow(8, i);
		num /= 10; i++;
	}
	while(dec)
	{
		bin += (dec%2)*d;
		d *= 10; dec/=2;
	}
	return bin;
}
