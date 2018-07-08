#include<stdio.h>
void main()
{
	struct complex
	{
		float real;
		float img;
	};
	struct complex A,B,C;
	printf("Enter first complex number\n");
	scanf("%f%f",&A.real,&A.img);
	printf("Enter second complex number\n");
	scanf("%f%f",&B.real,&B.img);
	C.real=A.real-B.real;
	C.img=A.img-B.img;
	printf("Subtraction is:%f+i%f",C.real,C.img);
}
