#include<stdio.h>
#include<math.h>
void main()
{
	int n,a,b=0,c=0;
	printf("Enter a number");
	scanf("%d",&n);
	while(n!=0)
	{
		a=n%10;
		b=pow(2,c);
		n=n/10;
		c++;
	}
	printf("%d",b);
}
