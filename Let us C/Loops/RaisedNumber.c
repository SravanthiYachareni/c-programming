/* Program to find  the value of one number raised to the power of another */
#include<stdio.h>
void main()
{
	int n1,n2,result=1;
	printf("Enter n1,n2");
	scanf("%d %d",&n1,&n2);
	while(n2>0)
	{
		result=result*n1;
		n2--;
	}
	printf("Result is %d",result);
}
