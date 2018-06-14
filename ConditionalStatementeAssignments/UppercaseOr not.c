/* Program to check whether the given character is uppercase alphabet or not */
/* Author:Sravanthi_Yachareni */
#include<stdio.h>
void main()
{
	char character;
	printf("Enter a character\n");
	scanf("%c",&character);
	if(character>='A' && character<='Z')
	{
		printf("%c is a uppercase alphabet",character);
	}
	else
	{
		printf("%c is not a uppercase alphabet",character);
	}
}
