#include<stdio.h>
void main()
{
	int n;
	printf("Enter number");
	scanf("%d",&n);
	switch(n)
	{
		case 0:
		case 1:
	   	case 3:
		case 4:
		case 5:
		case 6:
		case 7:
	    case 8:
	    case 9:
	    	printf("Digit");
	    	break;
	    	default:printf("Not a digit");
	}
}
