#include<stdio.h>
/*Author:Sravanthi_Yachareni*/
/*Student_Marks_Avg*/
void main()
{

float maths,physics,chemistry,avg;
printf("Enter marks for maths:\n");
scanf("%f",&maths);
printf("Enter marks for physics:\n");
scanf("%f",&physics);
printf ("Enter marks for chemistry:\n");
scanf("%f",&chemistry);
avg=(maths+physics+chemistry)/3;
printf("%2f",avg);
if(avg>=90)
{
	printf("/n Grade:A\n");
}
else if(avg>=80)
{
	printf("/n Grade:B\n");
}
else if(avg>=50)
{
	printf("/n Grade:C\n");
}
else
{
	printf("/nWork hard\n");
} 

}




















