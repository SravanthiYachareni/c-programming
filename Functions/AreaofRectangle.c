/* Program to find area of rectangle by defining user-defined function */
/* Author :Sravanthi_Yachareni */
#include<stdio.h>
float rarea(float length,float breadth );
int main()
{
	float length,breadth,area;
	printf("Enter length and breath of a rectangle");
	scanf("%f%f",&length,&breadth);
	area=rarea(length,breadth);
	printf("Area of a rectangle is %f",area);
	return 0;
}
float rarea(float length,float breadth)
{
	float area;
	area=length*breadth;
	return area;
}
