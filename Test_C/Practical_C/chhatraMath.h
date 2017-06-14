//this header file is written by Chhorm Chhatra on 29/01/2017
#define pi 3.1415926
#define e 2.71828
fact(n)
{
	int i, ans = 1;
	for(i=1; i<=n; i++)
	{
		ans = ans * i;
	}
	return ans;
}
power(x, n)
{
	int i;
	float ans = 1;
	for(i=0; i<n; i++)
	{
		ans = ans * x;
	}
	return ans;
}
exPower(x){
	float ans = 1;
	int i;
	for(i=0; i<x; i++)
	ans = ans * e;
	return ans;
}

