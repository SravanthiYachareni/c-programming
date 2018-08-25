/*Program to display first n number in the fibonacci series */
#include<stdio.h>
void main()
{
	int f1,f2,f3,i,n;
	printf("Enter n number");
	scanf("%d",&n);
	f1=0;
	f2=1;
	f3=f1+f2;
	printf("%d",f1);
	printf("%d",f2);
	i=3;
	while(i<=n)
	{
		printf("%d",f3);
			f1=f2;
			f2=f3;
			f3=f1+f2;
			i++;
		
	}
}
