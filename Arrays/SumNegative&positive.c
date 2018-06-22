/* Program to find the sum of positive numbers and negative numbers in the given list of n numbers */
/* Author:Sravanthi_Yachareni */  
#include<stdio.h>
void main(){
	int a[20],number,i,positivesum=0,negativesum=0;
	printf("Enter how many numbers");
	scanf("%d",&number);
	printf("Enter array elemnts ");
	for(i=0;i<number;i++)
	{
		scanf("%d",&a[i]);
	
	}
	for(i=0;i<number;i++)
	{
		if(a[i]>0)
		positivesum=positivesum+a[i];
		else if(a[i]<0)
		negativesum=negativesum+a[i];
	}
	printf("Sum  of negative numbers is :%d",negativesum);
	printf("Sum of positive numbers is %d ",positivesum);
}
