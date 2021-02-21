#include<stdio.h>
int main()
{
    int num,i;
    printf("Enter a value of num :\n");
    scanf("%d\n",&num);
    printf("odd number :\n");
    for( i=1;i<num;i++)
    {
        if(i%2==1)
        {
        printf("%d\t",i);
        }
        else
        {
            continue;
        }
    }
    return 0;
}
