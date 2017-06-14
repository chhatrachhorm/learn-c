/**
* @Date:   2017-03-19T23:48:26+07:00
* @Last modified time: 2017-03-20T00:33:16+07:00
*/



#include<stdio.h>
#include<math.h>
//Convert :Bin to dec; dec to bin
int btd(int num);
int dtb(int num);
int main()
{
	char a; int num;
	puts("a) Binary to Decimal\nb) Decimal to Binary");
	a = getchar();
	puts("Enter the number: ");scanf("%d", &num);
	if(a=='a'||a=='A')
	printf("(%d)2 = (%d)10", num, btd(num));
	else if(a=='b'||a=='B')
	printf("(%d)10 = (%d)2", num, dtb(num));
	return 0;
}

int btd(int num){
	int i=0, ans=0;
	while(num)
	{
		ans = (num%10)*pow(2, i) + ans;
		num /= 10; i++;
	}
	return ans;
}
int dtb(int num)
{
	int i=0, ans=0, d=1;
	while(num)
	{
		ans = (num%2)*d + ans;
		d *=10; num /= 2;
	}
	return ans;
}
