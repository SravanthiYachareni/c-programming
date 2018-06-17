/* Program to check whether the given number is palindrome or not
Palindrome:Reverse of the given number is again the same number */
/* Author:Sravanthi_Yachareni */
#include<stdio.h>
#include<conio.h>
void main(){
	int number,n,d,reverse;
	printf("Enter any number:");
	scanf("%d",&number);
	n=number;
	while(number!=0){
		d=number%10;
		reverse=reverse*10+d;
		number=number/10;
	}
	printf("The reverse number of a given number");
	if(reverse==n){
		printf("Number is palindrome\n");
	}
	else{
		printf("Number is not palindrome\n");
	}
}
