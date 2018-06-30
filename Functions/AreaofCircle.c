/* program to find area of triangle by defining user-defined function */
/* Author:Sravanthi_Yachareni */
#include<stdio.h>
#include<conio.h>
float circlearea(float radius );
int main()
{
	float radius,area;
	printf("Enter radius of a circle");
	scanf("%f",&radius);
	area=3.147*radius*radius;
	printf("Area of a circle is :%f",area);
	return 0;
}
float circlearea(float radius)
{
	float area;
	area=3.147*radius*radius;
	return area;
}
