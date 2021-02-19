#include<stdio.h>
int main()
{
    int n;
    printf("Enter the year :\n");
    scanf("%d",&n);
    if(n%100!=0)
    {
        if(n%4==0)
        printf("leap year.... ");
        else if(n%400==0)
        printf("leap year.........");
        else
        printf("not a leap year......");
    }

    return 0;
}