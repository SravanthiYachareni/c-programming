/* Program to find the roots of a quadratic equation */
/* Author:Sravanthi_Yachareni */

#include<stdio.h>
#include<math.h>
void main(){
	float a,b,c,d,real,imaginary,r1,r2;
	printf("Enter the values of a,b,c:");
	scanf("%f%f%f",&a,&b,&c);
	d=b*b-4*a*c;
	if(d>0){
	printf("The roots are real and different\n");
	r1=(-b+sqrt(d))/(2*a);
	r2=(-b-sqrt(d))/(2*a);
	printf("The first root is:%f\n",r1);
	printf("The second root is:%d\n",r2);
    }
    else{
    	if(d==0){
		
    	printf("The roots are real and different\n");
    	r1=-b/(2*a);
    	printf("The root is:%f\n",r1);
	}
	else{
		printf("The roots are imaginary\n");
		real=-b/(2*a);
		imaginary=sqrt(-d)/(2*a);
		printf("First root is:%f +i %f\n",real);
		printf("Second root is:%f -i %f\n",imaginary);
	}


		
		
		
		
		
		
		
	}
}
