/* Program to find area of a triangle */
/* Author:Sravanthi_Yachareni */

#include<stdio.h>
#include<math.h>
void main()
{
	float a,b,c,area,side;
	printf("Enter length of three sides of a triangle");
	scanf("%f%f%f",&a,&b,&c);
	side=a+b+c/2;
	printf("%f\n",side);
	area=sqrt(side*(side-a)*(side-b)*(side-c));
	printf("Area of a triangle is:%f",area);
	
}
