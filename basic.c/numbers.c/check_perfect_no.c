/*Perfect numbers is apositive integer that is equal to the sum of its positive divisors,
exculding the number itself.
example:number is 6. 6 has a divisors 1+2+3=6*/
#include<stdio.h>
#include<math.h>
int main()
{
    int n,sum=0;
    printf("Enter a value....\n");
    scanf("%d",&n);
    for(int i=1;i<n;i++)
    {
        if(n%i==0)
        {
            sum=sum+i;
        }
    }
        if(sum==n)
        printf("perfect number......\n");
        else
        printf("not a perfect number....\n");
    return 0;
}