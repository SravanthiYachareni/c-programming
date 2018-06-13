/* Program to find distance between two given points */
/* Author:Sravanthi_yachareni */

#include<stdio.h>
#include<math.h>
void main()
{
	float x1,y1,x2,y2,xd,yd,Distance;
	printf("Enter first point(x1,y1)");
	scanf("%f%f",&x1,&y1);
	printf("Enter second point(x2,y2)");
	scanf("%f%f",&x2,&y2);
	xd=x2-x1;
	yd=y2-y1;
	Distance=sqrt(xd*xd+yd*yd);
	printf("Distance is:%f",Distance);
}
