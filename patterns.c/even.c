#include <stdio.h>
int main()
{
    int n = printf("Enter the number :");
    scanf("%d",&n);
    if(n%2!=0)
	{
     printf("Weird\n");	
	}
    else if ( n>=2 && n<=5) 
	{
    printf("2 to 5 Not Weird\n");
    }
    else if (n>=6&&n<=20)
	{
    printf("6 to 20 Weird\n");
    }
    else if (n>20)
	{
    printf("n > 20 Not Weird\n");
	}
 return 0;
}
