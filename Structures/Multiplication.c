#include<stdio.h>
void main()
{
	struct complex
	{
		float real;
		float img;
	};
	struct complex A,B,C;
	printf("Enter first complex number\n ");
	scanf("%f%f",&A.real,&A.img);
	printf("Enter second complex number\n");
	scanf("%f%f",&B.real,&B.img);
	C.real=A.real*B.real-A.img*B.img;
	C.img=A.real*B.img+A.img*B.real;
	printf("Multiplication is:%f+i %f",C.real,C.img);
}
