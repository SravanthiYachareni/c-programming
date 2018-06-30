/* Program to find GCD of two given numbers by difining an user-defined function */
/* Author :Sravanthi_Yachareni */
#include<stdio.h>
int gcd(int x,int y);
int main()
{
	int number1,number2,result;
	printf("Enter any two numbers\n");
	scanf("%d%d",&number1,&number2);
	result=gcd(number1,number2);
	printf("GCD of %d and %d is %d",number1,number2,result);
	return 0;
}
int gcd(int x,int y)
{
	int r;
	r=x%y;

while(r!=0)
{
	x=y;
	y=r;
	r=x%y;
}
return y;
}
