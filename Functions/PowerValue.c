#include<stdio.h>
/* Program to find x power y value without using library function */
/* Author : Sravanthi_Yachareni * /
#include<conio.h>
 int upow(int x,int y);
int main()
{
	int a,b,c;
	printf("Enter base and power values \n");
	scanf("%d%d",&a,&b);
	c=upow(a,b);
	printf("%d power of %d is %d",a,b,c);
	return 0; 
}
  int upow (int x,int y )
{
	int i;
    int t=1;
	for(i=1;i<=y;i++)
	{
		t=t*x;
	}
	return t;
}
