/* Program to find addition of two matrices*/
#include<stdio.h>
void main()
{
	int a[10][10],b[10][10],c[10][10],i,j,m,n,p,q;
	printf("Enter first matrix of rows and columns");
	scanf("%d %d",&m,&n);
	printf("Enter second matrix of rows and columns");
	scanf("%d %d",&p,&q);
	printf("Enter array elements of first matrix ");
	if((m==p)&&(n==q))
	{
		for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("Enter array elements of second matrix");
	for(i=0;i<p;i++)
	{
		for(j=0;j<q;j++)
		{
			scanf("%d",&b[i][j]);
			
		}
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
		}
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d",c[i][j]);
		}
		printf("");
	}
}
}
