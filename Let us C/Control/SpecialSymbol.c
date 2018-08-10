/* Whether a character entered through the keyboard is a specialsymbol or not */
/* Author:Sravanthi_Yachareni*/
#include<stdio.h>
void main()
{
	char ch;;
	printf("enter a character ");
	scanf("%c",&ch);
	if(ch>=0&&ch<=47||ch>=58&&ch<=64||ch>=91&&ch<=96||ch>=123&&ch<=127)
	{
		printf("It is a symbol");
	}
else
{
	printf("It is not a symbol");
}
}
