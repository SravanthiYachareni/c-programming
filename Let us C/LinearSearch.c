#include<stdio.h>
#include<stdlib.h>
void main()
{
	int a[30],n,i,FOUND=0,key;
	printf("Enter n number");
	scanf("%d",&n);
	if(n>30)
	{
		printf("TOO many numbers");
		exit(0);
	}
	printf("Enter array elements");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter number to be searched");
	scanf("%d",&key);
	if(key==a[i])
	{
		printf("Found %d",i);
		FOUND=1;
	}
	if(FOUND==0)
	{
		printf("Not found");
	}
}
