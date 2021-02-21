#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if(n>9)
    printf("greater than 9");
    else if(n>=1 && n==1 && n<=9)
    printf("one");
    else if(n>=1 && n==2 && n<=9)
    printf("two");
    else if(n>=1 && n==3 && n<=9)
    printf("three");
    else if(n>=1 && n==4 && n<=9)
    printf("four");
    else if(n>=1 && n==5 && n<=9)
    printf("five");
    else if(n>=1 && n==6 && n<=9)
    printf("six");
    else if(n>=1 && n==7 && n<=9)
    printf("seven");
    else if(n>=1 && n==8 && n<=9)
    printf("eight");
    return 0;
}
