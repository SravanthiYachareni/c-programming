/* Program to display the count of positive and negative and zeros entered */
#include<stdio.h>
void main()
{
	int x,n,pcount=0,ncount=0,ocount=0;
	printf("Enter number");
	scanf("%d",&x);
	while(x>0)
	{
		scanf("%d",&n);
		if(n>0)
		pcount++;
		if (n<0)
		ncount++;
		if(n==0)
		ocount++;
		x--;
	}
	printf("%d",pcount);
	printf("%d",ncount);
	printf("%d",ocount);
}
