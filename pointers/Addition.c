/* Addition of two numbers */
/* Author:Sravanthi_Yachareni */
#include<stdio.h>
void main()
{
	int a;
	int b;
	int r;
	int *pa=&a;
	int *pb=&b;
	int *pr=&r;
	printf("Enter the first number:");
	scanf("%d",pa);
	printf("Enter the second number:");
	scanf("%d",pb);
	*pr=*pa+*pb;
	printf("Addition is %d",*pr);
}
