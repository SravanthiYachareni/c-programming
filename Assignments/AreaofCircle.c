/* Program to find area and circumference of a circle*/
/* Author:Sravanthi_Yachareni */
#include<stdio.h>
#include<conio.h>
void main()
{	
float radius,Area,Circumference;
printf("Enter radius of a circle");
scanf("%f",&radius);
Area=3.147*radius*radius;                    /* Area of a circle=3.147*r*r */
Circumference=2*3.147*radius;                    /* Circumfernce of a circle =2*3.147*r */
printf("Area of a circle is:%0.2f\n",Area);
printf("Circumference of a circle is:%0.2f",Circumference);
}
