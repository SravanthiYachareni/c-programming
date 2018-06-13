/* Program to calculate the salary of medical representive based on the sales */
/* Author:Sravanthi_Yachareni */
#include<stdio.h>
void main()
{
	float basic,hra,da,conveyance,incentive,bonus,Total_Salary,sales;
	printf("Enter sales of medical representive");
	scanf("%f",&sales);
	basic=3000;
	hra=basic*20/100;
	da=basic*110/100;
	conveyance=500;
	if(sales>100000)
	{
		incentive=sales*10/100;
		bonus=500;
	}
	else
	{
		incentive=sales*5/100;
		bonus=200;
		
	}
	  Total_Salary=basic+hra+da+conveyance+incentive+bonus;
	  printf("Basic:%2f\n",basic);
	  printf("Hra:%2f\n",hra);
	  printf("Da:%2f\n",da);
	  printf("conveyance:%2f\n",conveyance);
	  printf("Incentive:%2f\n",incentive);
	  printf("Bonus:%2f\n",bonus);
	  printf("Total Salary:%2f\n",Total_Salary);
}
