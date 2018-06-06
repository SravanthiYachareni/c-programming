#include<stdio.h>
#include<conio.h> 
int main(void)
{

int value;
printf("Enter the value");
scanf("%d",&value);
if(value==100)
   printf("Exellent!!");
   else if(value==75)
   {
   	printf("Good");
   }
   else if(value==36)
   {
   	printf("Pass");
   }
   else if(value==34)
   {
   	printf("Fail");
   }
   
   	
   
   getch();
}
