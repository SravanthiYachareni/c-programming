#include<stdio.h>
void main()
{
	int i,j,n,temp,a[30];
	printf("Enter n number");
	scanf("%d",&n);
	printf("Enter array elements");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Before sorting");
	for(i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
			printf("After sorting");
			for(i=0;i<n;i++)
			{
				printf("%d\n",a[i]);
			}
		}
	}
}
