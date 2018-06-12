/* Program to convert centigrade temperature into fahrenheit temperature */
/* Author:Sravanthi_Yachareni */
#include<stdio.h>
#include<conio.h>
void main()
{
	float Centigrade,FarenheitTemperature;
	printf("Enter Centigrade Temperature \n");
	scanf("%f",&Centigrade);
	FarenheitTemperature=Centigrade*1.8+32;
	printf("Farenheit Temperature is:%f",FarenheitTemperature);
}
