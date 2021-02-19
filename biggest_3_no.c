#include<stdio.h>

int main()
{
    int i,j,k;
    printf("Enter the value of i :\n");
    scanf("%d",&i);
     printf("Enter the value of j :\n");
    scanf("%d",&j);
     printf("Enter the value of k :\n");
    scanf("%d",&k);
    if(i>j && i>k)
    printf("%d\n",i);
    else if(j>i && j>k)
    printf("%d\n",j);
    else
    printf("%d\n",k);
    return 0;
}