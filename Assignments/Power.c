/* Program to find x power y value */
/* Author:Sravanthi_Yachareni */

#include<stdio.h>
#include<math.h>
void main()
{
	int base,exponent,power;
	printf("Enter base number");
	scanf("%d",&base);
	printf("Enter exponent number");
	scanf("%d",&exponent);
	power=pow(base,exponent);
	printf("Power  is:%d",power);
}
