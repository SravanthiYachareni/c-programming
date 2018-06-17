/* Program ti display each digits of a given number in words */
/* Author:Sravanthi_Yachareni */
#include<stdio.h>
void main(){
	int number,d,n,reverse=0;
	printf("Enter any number");
	scanf("%d",&number);
	while(number!=0){
	d=number%10;
	reverse=reverse*10+d;
	number=number/10;
	}
	n=reverse;
	while(n!=0){
		d=n%10;
		switch(d){
			case 0:
				printf("Zero");
				break;
				case 1:
				printf("One");
				break;
				case 2:
				printf("Two");
				break;
				case 3:
				printf("Three");
				break;
				case 4:
					printf("Four");
					break;
					case 5:
						printf("Five");
						break;
						case 6:
							printf("Six");
							break;
							case 7:
								printf("Seven");
								break;
								case 8:
									printf("Eight");
									break;
									case 9:
										printf("Nine");
										break;
		}
		n=n/10;
	}
}
