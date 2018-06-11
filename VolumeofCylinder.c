/* Program to find volume of a cylinder */
/* Author:Sravanthi_Yachareni */
#include<stdio.h>
#include<conio.h>
void main()
float r,h,volume;
{
printf("Enter a volume of a cylinder");
scanf("%f%f",&r,&h);
volume=3.147*r*r*h;      /* Volume of a cylinder=3.147*radius*radius*height */ 
printf("Volume of a cylinder is:%f",volume);
}
