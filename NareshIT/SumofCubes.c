

#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c,ac,bc,cc,sum;
printf("Enter any three numbers");
scanf("%d%d%d",&a,&b,&c);
ac=a*a*a;
bc=b*b*b;
cc=c*c*c;
sum=ac+bc+cc;
printf("Sum of cubes of three numbers is:%d",sum);
}
