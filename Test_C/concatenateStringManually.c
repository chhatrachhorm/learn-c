//Program to concatenation string manually
//written by Chhorm Chhatra on Febuary 19,2017
int main()
{
	char str1[100], str2[100];
	int i, j;
	puts("Enter the string");
	gets(str1);
	puts("Enter another string");
	gets(str2);
	for(i=0; str1[i] != '\0'; i++);
	str1[i] =' ';
	i +=1;
	for(j=0; str2[j] != '\0'; j++, i++)
	{
		str1[i]=str2[j];
	}
	str1[i]='\0';
	puts(str1);
	return 0;
}
