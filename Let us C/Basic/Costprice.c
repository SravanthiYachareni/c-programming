/* If the total selling price of 15 items and the total profit earned on them is input
the keyboard.Write a program find the cost price of one item */
/* Author:Sravanthi_Yachareni */
#include<stdio.h>
void main()
{
	float cost,profit,sale,costitem;
	printf("Enter total selling of 15 items");
	scanf("%f",&sale);
	printf("Enter profit");
	scanf("%f",&profit);
	cost=sale-profit;
	costitem=cost/15;
	printf("cost price of one item is %f",costitem);
}
