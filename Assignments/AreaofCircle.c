/* Program to find area and circumference of a circle*/
/* Author:Sravanthi_Yachareni */
#include<stdio.h>
#include<conio.h>
void main()
{	
float r,A,C;
printf("Enter radius of a circle");
scanf("%f",&r);
A=3.147*r*r;                    /* Area of a circle=3.147*r*r */
C=2*3.147*r;                    /* Circumfernce of a circle =2*3.147*r */
printf("Area of a circle is:%0.2f\n",A)
printf("Circumference of a circle is:%0.2f",C);
}
