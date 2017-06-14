/*C pro to count the number of words, digits, vowels using pointer */
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<conio.h>
//Low implies that position of pointer is within a word
#define low 1
//High implies that position of pointer is out of word
#define high 0
void main()
{
	int nob,i=0, now, nod, nov, nos, pos = high;
	//char *str;
	char k[150];
	nob =now =nod = nov = nos = 0;
	printf("Enter any string");
	gets(k);
//	str = k;
	while(*(k+i) != '\0')
	{
		if(*(k+i) == ' ')
		{
			//counting number of blank spaces
			pos = high;
			++nob;
		}else if(pos == high){
			//counting number of words
			pos = low;
			++now;
		}
		if(isdigit(*(k+i)))/*counting number of digits*/
		++nod;
		if(isalpha(*(k+i)))/*counting number of vowels*/
		switch(*(k+i))
		{
			case 'a':
			case 'e':
			case 'i':
			case 'o':
			case 'u':
			case 'A':
			case 'E':
			case 'I':
			case 'O':
			case 'U':
				++nov;
				break;	
		}
		if(!isdigit(*(k+i))&&!isalpha(*(k+i))&&*(k+i) !=' ')
		++nos;
		i++;
	}
	printf("\nNumber of words %d", now);
	printf("\nNumber of spaces %d", nob);
	printf("\nNumber of vowels %d", nov);
	printf("\nNumber of digits %d", nod);
	printf("\nNumber of special char %d", nos);


}
