/* program to find area of triangle by defining user-defined function */
/* Author:Sravanthi_Yachareni */
#include<stdio.h>
float tarea(float base,float height);
int main()
{
	float base,height,area;
	printf("Enter length and height of a triangle \n");
	scanf("%f%f",&base,&height);
	area=tarea(base,height);
	printf("Area of a triangle is %f",area);
}
float tarea(float base,float height)
{
	float area;
	area=base*height*0.5;
	return area;
}
