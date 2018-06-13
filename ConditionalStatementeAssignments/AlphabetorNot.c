/* Program to check whether the given character is alphabet  or not */
/* Author:Sravanthi_Yachareni */
#include<stdio.h>
void main() 
{
char ch;
printf("Enter a character\n");
scanf("%c",&ch);
if(ch>='A' && ch<='Z'|| ch>='a' && ch<='z')
{
	printf("%c is a alphabet",ch);
}
else
{
	printf("%c is not a alphabet",ch);
}
}
