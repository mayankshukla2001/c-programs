#include<stdio.h>
#include<math.h>
int main()
{
    int n,rem,temp1,sum=0,temp2;
    int count=0;
    printf("Enter a value to find armstrong between them.....\n");
    scanf("%d",&n);
    do
    {
        n/=10;
        count++;
    }while(n>0);
    for(int i=1;i<=n;i++)
    {
        temp1=i;
        temp2=i;
        while(temp1>0)
    {
        rem=temp1%10;
        sum=sum+pow(rem,count);
        temp1=temp1/10;
    }
    }
    if(sum==temp1)
    {
     printf("armstrong value from 1 to %d is %d.....\n",n,sum);
     printf("No of digit is.....%d\n",count);
    }
    return 0;
}
/*#include<stdio.h>

int main()
{
    int n,count=0;
    printf("enter a valueto count digits....\n");
    scanf("%d\n",&n);
    do
    {
        n/=10;
        count++;
    }while(n>0);
    printf("count is.....%d\n",count);
    return 0;
}*/