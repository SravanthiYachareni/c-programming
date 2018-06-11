/* Program to find area and circumfernce of a rectangle */
/* Author:Sravanthi_Yachareni*/
#include<stdio.h>
#include<conio.h>
void main()
{
	float l,b,A,C;
	printf("Enter length and breath of a rectangle");
	scanf("%f%f",&l,&b);
	A=l*b;                              /* Area of a rectangle=l*b */
	C=2*(l+b);                          /* Circumfernce of a rectangle=2*(l+b) */
	printf("Area of a rectangle is:%f\n",A);
	printf("Circumference of a rectangle is:%f",C);
}
