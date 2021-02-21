#include<stdio.h>
int main()
{
    int a,b,sum=0;
    printf("Enter value to check divisbility of 2....\n");
    scanf("%d  %d ",&a,&b);
    for(int i=a;i<=b;i++)
    {
        if(i%2==0)
           sum=sum+i;
         else
         continue;
    }
    printf("Sum of all integers divisible by 2 between two numbers.......\n");
    printf("Divisible by 2 between %d and %d is %d...... \n",a,b,sum);
    return 0;
}