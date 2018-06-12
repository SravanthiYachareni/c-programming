#include<stdio.h>
#include<conio.h>
void main()
{
	float inches,CentiMeters;
	printf("Enter inches");
	scanf("%f",&inches);
	CentiMeters=inches*2.5;
	printf("%2f inches =%2fcm\n",inches,CentiMeters);
}
