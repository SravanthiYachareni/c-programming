/*Write a program to calculate the total cost of the vehicle by adding cost with:
a.Exerciseduty (15%)
b.Salestax (10%)
c. Octori  (5%)
d. Roadtax (1%)  */ 
/* Author:Sravanthi_Yachareni */
#include<stdio.h>
#include<conio.h>
void main()
{
float Exerciseduty,Salestax,Octori,Roadtax,Basic_Cost,Total_Cost;
printf("Enter Basic_Cost of vahicle\n");
scanf("%f",&Basic_Cost);
Exerciseduty=Basic_Cost*15/100;
Salestax=Basic_Cost*10/100;
Octori=Basic_Cost*5/100;
Roadtax=Basic_Cost*1/100;
Total_Cost=Exerciseduty+Salestax+Octori+Roadtax;
printf("Basic_Cost=%f\n",Basic_Cost);
printf("Exerciseduty=%f\n",Exerciseduty);
printf("Salestax=%f\n",Salestax);
printf("Octori=%f\n",Octori);
printf("Roadtax=%f\n",Roadtax);
printf("Total_Cost=%f\n",Total_Cost);
}

