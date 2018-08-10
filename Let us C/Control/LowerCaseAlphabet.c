/* Whether the character entered through the keyboard is a lower case alphabet or not */
/* Auhthor:Sravanthi_Yachareni */
#include<stdio.h>
void main()
{
	char ch;
	printf("Enter a character\n");
	scanf("%c",&ch);
	if(ch>='a'&& ch<='z')
	{
		printf("Lower case alphabet");
	}
	else
	{
		printf("Not a lower case alphabet");
	}
}
