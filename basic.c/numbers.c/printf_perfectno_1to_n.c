#include<stdio.h>
#include<math.h>
int main()
{
    int n,sum=0;
    printf("Enter a value....\n");
    scanf("%d",&n);
    for(int i=1;i<n;i++)
    {
        for(int j=1;j<=i;j++)
        {
                if(i%j==0)
            {
                sum=sum+j;
            }
        }
        if(sum==i)
        printf("perfect number %d......\n",sum);
    }
    return 0;
}