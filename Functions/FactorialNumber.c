#include<stdio.h>
#include<conio.h>
int isNegative(int n);
int fact (int n);
int main()
{
	int n,factorial;
	printf("Enter any number");
	scanf("%d",&n);
	if(isNegative(n))
	{
		printf("Factorial is not possible \n");
   }
   else
   {
   	factorial=fact(n);
   	printf("Factorial of %d is %d",n,factorial);
   }
   return 0;
   int isNegative(int n)
   {
   	if(n<0)
   	return 1;
   	else
   	return 0;
   }
   int fact(int n)
   {
   	int i,t=1;
   	for(i=1;i<=n;i++)
   	{
   		t=t*i;
	   }
	   return t;
   	
   }
   
   
}
