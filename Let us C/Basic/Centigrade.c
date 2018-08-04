/* Write a program to convert fahrenheit temp into  centigrade temp */
/* Author: Sravanthi_Yachareni */
#include<stdio.h>
void main()
{
	float fahrenheit,centigrade;
	printf("Enter fahrenheit");
	scanf("%f",&fahrenheit);
	centigrade=(fahrenheit-32)/1.8;
	printf("Cenigrade is %f",centigrade);
}
