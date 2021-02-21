#include<stdio.h>
#include<stdlib.h>
int main()
{
	int choice;
	int a,b,res;
	while(1)
	{
	printf("1.Addition...\n");
	printf("2.Subtraction...\n");
	printf("3.Multiplication...\n");
	printf("4.Division...\n");
	printf("5.Exit...\n");
	printf("Enter your choice .....\n");
	scanf("%d",&choice);
	printf("Enter the value of a :\n");
	scanf("%d",&a);
	printf("Enter the value of b :\n");
	scanf("%d",&b);
	switch(choice)
	{
		case 1:
			res=a+b;
			printf("Sum of the value is %d \n",res);
			break;
			case 2:
				res=a-b;
				printf("subtraction of a and b is %d\n",res);
				break;
				case 3:
					res=a*b;
					printf("Multiplication of a and b is %d\n",res);
					break;
					case 4:
						res=a/b;
						printf("division of a and b is %d\n ",res);
						break;
						case 5: exit(0);
							
						default:
							printf("invalid choice.....\n");
	}
}
	return 0;
	
}
