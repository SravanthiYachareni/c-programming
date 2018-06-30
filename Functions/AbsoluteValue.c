#include<stdio.h>
int uabs(int x);
int main()
{
	int number;
	printf("Enter any number");
	scanf("%d",&number);
	printf("Absolute value is :%d",uabs(number));
}
int uabs(int x)
{
	if(x<0)
		return -x;
		else
		return x;
	
}
