/*------------------
This program was written on i forgot
-Used to find the total score of five subjects
--------------------*/

#include<stdio.h>

void main(){
	int score[5], i, total = 0;
	char subjects[5][25] = {"Math", "Khmer", "C Programming", "English", "Speech and Oral"};
	printf("===Enter your points: \n");
	for(i=0;i<85;i++)printf("+");
	for(i=0;i<5;i++){
		printf("\n--> %s : ",subjects[i]);
		scanf("%d", &score[i]);
		total = total + score[i];
	}
	for(i=0;i<85;i++)printf("+");
	printf("\nThe addition of five subjects is: %d\n", total);

}
