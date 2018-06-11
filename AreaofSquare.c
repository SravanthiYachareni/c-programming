
/* Program to find area and circumference of a square */
/* Author:Sravanthi_YAchareni */
#include<stdio.h>
#include<conio.h>
void main()
{
int area,circumference,length;
	printf("Enter length of a square");
	scanf("%d",&length);
	area=length*length;                  /* Area of a square=Length*Length */
	circumference=4*length;        /* Circumference of a square=4*l */
	printf("Area of a square is:%d\n",area);
	printf("Circumference of a square is:%d",circumference);
	}
