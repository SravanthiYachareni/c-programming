#include<stdio.h>
struct fraction
{
	int numarator;
	int denominator;
};
void main()
{
	struct fraction fr1,fr2,res;
	printf("Enter first fraction in the form x/y");
	scanf("%d/%d",&fr1.numarator,&fr1.denominator);
	printf("Enter second fraction in the form x/y");
	scanf("%d/%d",&fr2.numarator,&fr2.denominator);
	res.numarator=fr1.numarator*fr2.denominator-fr1.denominator*fr2.numarator;
	res.denominator=fr1.numarator*fr2.denominator;
	printf("Subtraction is %d/%d",res.numarator,res.denominator);
}
