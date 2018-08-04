/* Program to convert distance into  inches and meters,feets,centimeters*/
/* Author : Sravanthi_Yachareni */
#include<stdio.h>
void main()
{
	float kilometers,meters,inches,feets,centimeters;
	printf("Enter distance between two cities ");
	scanf("%f",&kilometers);
	meters=kilometers*1000;
	feets=kilometers*3280.84;
	inches=kilometers*39370.1;
	centimeters=kilometers*100000;
	printf("Meters is %f\n",meters);
	printf("Inches is %f\n",inches);
	printf("Feets is %f\n",feets);
	printf("Centimeters is %f\n",centimeters);
}
