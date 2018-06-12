
/* Program to find compound interest by accepting principle and time and rate */
/* author:Sravanthi_Yachareni */  
#include<stdio.h>
#include<math.h>
void main()
{
	float principle,time,rate,CompoundInterest;
	printf("Enter principle,time and rate");
	scanf("%f%f%f",&principle,&time,&rate);
	CompoundInterest=principle*pow((1+rate/100),time);
	printf("Compound Interest is:%f",CompoundInterest); 
}
