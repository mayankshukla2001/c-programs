#include<stdio.h>

int main()
{
    int n;
    long fact=1;
    printf("Enter a number to find its factorial.......\n");
    scanf("%d",&n);
    while(n>1)
    {
        if(n<1)
        printf("No negative number factorial.....\n");
        else 
        fact=fact*n;
        n--;
    }
    printf("factorial of %d is %d ......\n",n,fact);
    return 0;
}