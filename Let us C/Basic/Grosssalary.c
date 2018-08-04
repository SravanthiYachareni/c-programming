/* Ramesh's basic salary is input the keyboard.His dearness allowance is 40% of basic salary
 and house rent allowance is 20% of basic salary.Write a program to calculate his gross salary*/
/* Author:Sravanthi_Yachareni */

#include<stdio.h>
void main()
{
float basic,hra,da,grosssalary;
printf("Enter basic");
scanf("%f",&basic);
hra=40%100*basic;
da=20%100*basic;
grosssalary=hra+da;
printf("%f",grosssalary);
}
