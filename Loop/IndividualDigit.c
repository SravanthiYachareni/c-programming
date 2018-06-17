#include<stdio.h>
#include<conio.h>
void main(){
	int number,d,sum=0;
	printf("Enter any two numbers:");
	scanf("%d",&number);
	while(number!=0){
		
		d=number%10;
		sum=sum+d;
		number=number/10;
}
     printf("The sum of individual digits in a given number%d",sum);
 }
