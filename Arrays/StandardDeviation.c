/* Program to find standard deviation of n given numbers */
/* Author :Sravanthi_yachareni */
#include<stdio.h>
#include<math.h>
void main(){
	int number,i,sum=0,a[20];
	float mean,sumdeviation=0.0;
	printf("Enter how many numbers");
	scanf("%d",&number);
	printf("Enter array elements");
	for(i=0;i<number;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<number;i++)
	{
		sum=sum+a[i];
	}
	mean=sum/number;
	for(i=0;i<number;i++)
	{
		sumdeviation=sumdeviation+(a[i]-mean)*(a[i]-mean);
	
	}
	sumdeviation=sqrt(sumdeviation)/number;
	printf("the value of sumdeviation is=%f",sumdeviation);
	printf("the value of mean is=%f",mean);
}
