#include<stdio.h>

int main()
{
    int num,rev=0,rem,temp;
    printf("Enter a value to reverse the number.....");
    scanf("%d",&num);
    temp=num;
    while(num>0)
    {
        rem=num%10;
        rev=rev*10+rem;
        num=num/10;
    }
    printf("reverse is %d.....\n",rev);
    if(temp==rev)
    printf("The number is palindrome......\n");
    else
    printf("Number is not a palindrome......\n");
    return 0;
}