/* Program:Call by address
The format arguments in the called function have effect on the values of actual arguments in the calling function */
/* Author:Sravanthi_Yachareni */
#include<stdio.h>
void swap(int *x,int *y);
void main()
{
	int a,b;
	printf("Enter any two numbers\n");
	scanf("%d%d",&a,&b);
	printf("before calling function");
	printf("a=%d\n",a);
	printf("b=%d\n",b);
	swap(&a,&b);
	printf("After calling function");
	printf("a=%d\n",a);
	printf("b=%d\n",b);
}
void swap(int *x,int *y)
{
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
}
