#include<stdio.h>
#include<math.h>
//Bin to dec and oct 
int main()
{
	int i=0, num, a, oct=0, dec, d=1, ans;
	puts("Enter a binary number: ");
	scanf("%d", &num);
	a = num;
	while(num)
	{
		dec += (num%10)*pow(2, i);
		i++; num/=10;
	} 
	ans = dec;
	while(ans)
	{
		oct = (ans%8)*d + oct;
		d *= 10;
		ans /= 8;
	}
	printf("(%d)2=(%d)10=(%d)8", a, dec, oct);
	return 0;
}
