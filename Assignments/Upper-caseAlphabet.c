/* Prigram to convert a given Lower-case alphabet into Upper-case alphabet */
/* Author:Sravanthi_Yachareni */
#include<stdio.h>
#include<conio.h>
void main()
{
	char character;
	printf("Enter a lowercase alphabet");
	scanf("%c",&character);
	character=character-32;
	printf("Uppercase alphabet is:%c",character);
}
