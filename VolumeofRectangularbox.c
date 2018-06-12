/* Program to find volume of a rectangular box */
/* Author:Sravanthi_Yachareni */

#include<stdio.h>
#include<conio.h>
void main()
{
	float length,breath,height,volume;
	printf("Enter a length and breath and height of rectangular box");
	scanf("%f%f%f",&length,&breath,&height);
	 volume=length*breath*height;
	 printf("Volume of a rectangle is:%0.2f",volume);

}
