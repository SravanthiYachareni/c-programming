/* Program to convert Farenheit temperature into Centigrade Temperature */
/* Author:Sravanthi_Yachareni */
#include<stdio.h>
#include<conio.h>
void main()
{
	float CentigradeTemperature,Farenheit;
	printf("Enter Farenheit Temperature");
	scanf("%f",&Farenheit);
	CentigradeTemperature=(Farenheit-32)/1.8;
	printf("Centigrade Temperature is:%f",CentigradeTemperature);
}
