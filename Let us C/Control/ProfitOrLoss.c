/* If cost and selling price of an item is input through the keyboard,write a 
program to determine whether the seller has made profit or incurred loss.Also
determine how much profit he made or loss he incurred */
/* Author: Sravanthi_Yachareni */  
#include<stdio.h>
void main()
{
	int costprice,sellingprice,loss,profit;
	printf("Enter costprice and sellingprice");
	scanf("%d %d",&costprice,&sellingprice);
	if(costprice>sellingprice)
	{
		loss=costprice-sellingprice;
		printf("Loss is %d",loss);
	}
	else
	{
		profit=sellingprice-costprice;
		printf("Profit is %d",profit);
	}
}
