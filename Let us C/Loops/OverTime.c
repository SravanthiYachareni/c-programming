/* Write  a program  to calculate overtime pay of 10 emplyees overtime is paid at
the rate of Rs.12.00 per hour for every hour worked above 40 hours,Assume that employees
do not work for fractional part of an hour */
#include<stdio.h>
void main()
{
	int employee,overpay,overtime,hours;
	for(employee=1;employee<=10;employee++)
	{
		printf("Enter number of hours ");
		scanf("%d",&hours);
		if(hours>0)
		{
			overtime=40;
			overpay=overtime*12;
			printf("Over pay is %d\n",overpay);
		}
		if(hours<0)
		{
			printf("The is no over time pay for employee");
		}
	}
}
