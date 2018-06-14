/* Program to check whether the given character is alphabet  or not */
/* Author:Sravanthi_Yachareni */
#include<stdio.h>
void main() 
{
char character;
printf("Enter a character\n");
scanf("%c",&character);
if(character>='A' && character<='Z'|| character>='a' && character<='z')
{
	printf("%c is a alphabet",character);
}
else
{
	printf("%c is not a alphabet",character);
}
}
