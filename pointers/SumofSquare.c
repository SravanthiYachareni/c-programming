/* Program that uses a function to find the sum of square of n number of array elements */
/* Author:Sravanthi_Yachareni */
#include<stdio.h>
#include<math.h>
 int sumofsqrt(int x[],int n);
 int main()
 {
 	int i,a[50],n;
 	int sum;
 	printf("Enter n value");
 	scanf("%d",&n);
 	printf("Enter elements of array\n");
 	for(i=0;i<n;i++)
 	{
 		scanf("%d",&a[i]);
	 }
	 sum=sumofsqrt(a,n);
	 printf("Sum of square =%d",sum);
 }
 int sumofsqrt(int x[],int n)
 {
 	int i;
 	int sum=0;
 	for(i=0;i<n;i++)
 	{
 		sum=sum+x[i]*x[i];
	 }
	 return sum;
 }
