/* Two numbers are input through the keyboard into two locations a,b.Write a 
program to interchange the contents of a and b.
Author:Sravanthi_Yachareni */
#include<stdio.h>
void main()
{
	int a,b,temp;
	printf("Enter a,b");
	scanf("%d %d",&a,&b);
	printf("before swaping\n");
	printf("%d  %d",a,b);
	printf("\nAfter swaping\n");
	temp=a;
	a=b;
	b=temp;
	printf("%d %d",a,b);
}
