#include<stdio.h>
#include<conio.h>
void main(){
	int number,d,reverse=0;
	printf("Enter any  numbers:");
	scanf("%d",&number);
	while(number!=0){
		d=number%10;
		reverse=reverse*10+d;
		number=number/10;
	}
	printf("The reverse of a given number is:%d",reverse);
}
