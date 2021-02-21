#include<stdio.h>

int main()
{
    int n, sum=0,rem=0,quo;
    printf("Enter a number :");
    scanf("%d",&n);
    rem=n%10;
    quo=n/10;
    sum=sum+rem+quo;
    printf("sum of numbers = %d\n",sum);
    return 0;
}