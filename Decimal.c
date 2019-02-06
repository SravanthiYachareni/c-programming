#include<stdio.h>
void main()
{
	int a,b=0,n,c=1;
	printf("Enter number");
	scanf("%d",&n);
	while(n>0)
	{
		a=n%2;
		b=b+(a*c);
		n=n*10;
		n=n/2;
	}
	printf("%d",b );
}
