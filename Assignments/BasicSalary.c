/* Write a program to calculate gross salary and net salary of an employee by accepting basic salary and given da=90% ,hra=30%
pf=12%     Formulas: Gross=basic+da+hra

            Net salary=gross-pf */
#include<stdio.h>
#include<conio.h>
void main()
{
	float basic,da,hra,pf,Gross,net;
	printf("Enter basic salary");
	scanf("%f",&basic);
	da=basic*90/100;
	hra=basic*30/100;
	pf=basic*12/100;
	Gross=basic+da+hra;
	net=Gross-pf;
	printf("Basic Salary=%f\n",basic);
	printf("da=%f\n",da);
	printf("hra=%f\n",hra);
	printf("pf=%f\n",pf);
	printf("Gross Salary=%f\n",Gross);
	printf("Net Salary=%f\n",net);
}
