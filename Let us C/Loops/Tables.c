/* Write a program  to print the multiplication table of the number entered by the user*/
/* Author: Sravanthi_yachareni */
#include<stdio.h>
void main()
{
	int number,i;
	printf("Enter n value");
	scanf("%d",&number);
	for(i=1;i<=10;i++)
	{
		printf("%d*%d=%d\n",number,i,number*i);
	}

}
