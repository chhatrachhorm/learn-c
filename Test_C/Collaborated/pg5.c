/*------------------
This program was written on Dec 14, 2016
-Used to calculate the number chosen by user
-This is a magic of math
+Contributor:
	- Sopheaktra
	- Kimchhun
--------------------*/

#include<stdio.h>
#include<math.h>

void main(){

	int i, j = 1, m = 1, distant = 0, possible, n = 1, contnum = 0, numofrow, numofnum = 1, numofcol, number, ans[100], answer, startnum = 1, k;
	printf("We will calculate which number your choose\n");
	printf("Enter number of row: ");
	scanf("%d", &number);
	numofrow = number;
	numofcol = pow(2, numofrow-1);
	possible = pow(2, numofrow)-1;
	printf("You can pick from 1 to %d\n", possible);
	printf("If you see your number, enter 1 else 0\n");
	printf("===========================\n");
	for(i = 1; i <= numofrow; i++){
		n = pow(2, i-1);
		m = n;
		j = 1;
		for(; j<=numofcol;){
			for(k=1; k<=n; k++){
				printf("%d ", m);
				m++;
				j++;
			}
			m=m+n;
		}
		scanf("%d", &ans[i]);
		printf("\n");
		answer += n * ans[i];
	}
	printf("Your number is %d", answer);
}

	/*
	for(i = 1; i <= numofrow; i++)
	{
		printf("1");
		for(j = 1; j <= numofcol;)
		{
			printf("2");

			for(number; number <= numofnum; number+=distant)
			{
				printf("3");
				printf("%d ", number);
				j++;
			}
		}
		numofnum *= 2;
		scanf("%d", &ans[i]);
		printf("\n");
		answer += numofnum * ans[i];
	}*/
