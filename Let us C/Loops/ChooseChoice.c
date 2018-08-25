
#include<stdio.h>
void main()
{
	int fact=1,prime,n,i,dcount=0;
	char choice;
	printf("1.Prime Number");
	printf("2.Factorial");
	printf("3.Even number");
	printf("4.Exit");
	scanf("%d",&choice);
switch(choice)
{
	case 1:
		printf("Enter n number");
		scanf("%d",&n);
		for(i=1;i<=n;i++)
		{
			if(n%i==0)
			{
				dcount=dcount+1;
			}
		}
			if(dcount==2)
			{
				printf("Prime number");
			}
			else
			{
				printf("Not  a prime number");
			}
		
		break;
		case 2:
			printf("Enter n number");
			scanf("%d",&n);
			for(i=1;i<=n;i++)
			{
				fact=fact*i;
			}
			printf("%d",fact);
			break;
			case 3:
          printf("Enter n number");
		  scanf("%d",&n);
		  if(n%2==0)
		  {
		  	printf("Even Number");
			  }	
			  else
			  {
			  	printf("Odd Number");
			  }
			  break;
			  case 4:
			  	printf("Exit");
			  	break;
			  	default:
			  		printf("Invalid choice");
					  }
	
}
