/* Program to find the sum of positive and negative numbers in the given list of n numbers */
/* Author:Sravanthi_Yachareni */
#include<stdio.h>
void main(){
	int i,number,evencount=0,evensum=0,oddsum=0,oddcount=0,a[20];
	printf("Enter how many numbers\n");
	scanf("%d",&number);
	printf("Enter array elements");
	for(i=0;i<number;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<number;i++)
	     {
	     	if(a[i]%2==0)
	     	{
	     		evensum=evensum+a[i];
	     		evencount=evencount+1;
			 }
			
		  } 
		  for(i=0;i<number;i++)
		  {
		  	if(a[i]%2!=0)
		  	{
		  		oddsum=oddsum+a[i];
		  		oddcount=oddcount+1;
			  }
		  }
		  printf("Sum of even numbers:%d",evensum);
		  printf("Count of even numbers is:%d",evencount);
		  printf("Sum of odd numbers is:%d",oddsum);
		  printf("Count of odd numbers is:%d",oddcount);
}
