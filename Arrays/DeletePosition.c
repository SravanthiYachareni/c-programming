/* Program to delete an element from the array of n elements at the specified position */
/* Author:Sravanthi_Yachareni */
#include<stdio.h>
void main(){
	int n,i,position,a[20];
	printf("Enter how many numbers\n");
	scanf("%d",&n);
	printf("Enter array elements");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter position where you wish" );
	scanf("%d",&position);	
	if(position>n+1)
	{
		printf("Deletion not posibble");
	}
	else
	{
		for(i=position-1;i<n-1;i++)
		{
			a[i]=a[i+1];
		}
		printf("Result");
		
	}
	for(i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}
}
