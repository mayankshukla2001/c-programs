#include<stdio.h>
int main()
{
    int a;
    printf("Enter the no to check even or odd : \n");
    scanf("%d\n",&a);
    if(a%2==0)
        printf("even no..... ");
    else
        printf("odd no...... ");
    return 0;
}