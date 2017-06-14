//Program to copy string manually
//written by Chhorm Chhatra on Febuary 19,2017
int main()
{
	char s[100], s2[100];
	int i, j;
	puts("Enter string 1");
	gets(s);
	for(i=0; s[i] != '\0'; i++)
	{
		s2[i]=s[i];		
	}
	s2[i]='\0';	
	puts(s2);
	return 0;
}
