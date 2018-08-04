/* Program to find  area and perimeter of a rectangle and
area and circumference of a circle */
/* Author : Sravanthi_Yachareni */
#include<stdio.h>
void main()
{
	float length,breath,radius,carea,rarea,perimeter,circumference;
	printf("Enter length and breath of a rectangle\n");
	printf("Enter radius of a circle\n");
	scanf("%f%f",&length,&breath);
	scanf("%f",&radius);
	rarea=length*breath;
	perimeter=2*(length+breath);
	carea=3.147*radius*radius;
	circumference=2*3.147*radius;
	printf("Area and perimeter of a rectangle is %f %f\n",rarea,perimeter);
	printf("Area and circumference of a circle is %f %f\n ",carea,circumference);
}
