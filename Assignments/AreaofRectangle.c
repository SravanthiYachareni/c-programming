/* Program to find area and circumfernce of a rectangle */
/* Author:Sravanthi_Yachareni*/
#include<stdio.h>
#include<conio.h>
void main()
{
	float length,breath,Area,Circumference;
	printf("Enter length and breath of a rectangle");
	scanf("%f%f",&length,&breath);
	Area=length*breath;                              /* Area of a rectangle=l*b */
	Circumference=2*(length+breath);                          /* Circumfernce of a rectangle=2*(l+b) */
	printf("Area of a rectangle is:%f\n",Area);
	printf("Circumference of a rectangle is:%f",Circumference);
}
