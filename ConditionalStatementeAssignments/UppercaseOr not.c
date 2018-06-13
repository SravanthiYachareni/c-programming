/* Program to check whether the given character is uppercase alphabet or not */
/* Author:Sravanthi_Yachareni */
#include<stdio.h>
void main()
{
	char ch;
	printf("Enter a character\n");
	scanf("%c",&ch);
	if(ch>='A' && ch<='Z')
	{
		printf("%c is a uppercase alphabet",ch);
	}
	else
	{
		printf("%c is not a uppercase alphabet",ch);
	}
}
