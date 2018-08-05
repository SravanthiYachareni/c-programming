/* Any integer is input through the keyboard.Write a program to find out whether it is 
an odd or even number */
/* Author :Sravanthi_yachareni */
#include<stdio.h>
void main()
{
int number;
printf("Enter any number");
scanf("%d",&number);
if(number%2==0)
{
	printf("%d is a even number",number);
 } 
 else
 {
 	printf("%d is a odd number",number);
 }
}
