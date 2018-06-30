#include<stdio.h>
int minimum(int x,int y);
int main()
{
	int n1,n2,result;
	printf("Enter any two numbers");
	scanf("%d%d",&n1,&n2);
	result=minimum(n1,n2);
	printf("Result is :%d",result);
}
int minimum(int x,int y)
{
	if(x<y)
	return x;
	else
	return y;
}
