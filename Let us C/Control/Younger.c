#include<stdio.h>
void main()
{
int ram,shyam,ajay;
printf("Enter ages");
scanf("%d %d %d ",&ram,&shyam,&ajay);
if(ram<shyam)
{
	if(ram<ajay)
	{
		printf("ram is  younger");
	}
		else
		{
		printf("ajay is  younger");
	}
}
else
{
	if(shyam<ajay)
	{
	printf("shyam is younger");
}
	else
	{
	printf("ajay is younger");
}
}
	
	
	
	
	
	
	
		
}
