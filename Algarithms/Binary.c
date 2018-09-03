#include<stdio.h>
void main()
{
	int a,b=0,c=1,n;
	printf("Enter n number");
	scanf("%d",&n);
	while(n!=0)
	{
		a=n%2;
		b=b+(a*c);
		c=c*10;
		n=n/2;
	}
	printf("%d",b);
}
