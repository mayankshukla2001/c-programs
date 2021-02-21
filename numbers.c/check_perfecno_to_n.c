#include<stdio.h>
int main()
{
	int i,j,sum,n;
	printf("Enter the number to check perfect number till n: \n");
	scanf("%d",&n);
	printf("the perfect no between 1 to n :\n");
   for(i=1;i<=n;i++)
   {
    sum=0;
    for(j=1;j < i;j++)
    {
     if(i%j==0)
     {
      sum=sum+j;
     }
    }   
    if(sum==i)
    { 
     printf("%d\t",i);
    }
   } 
  return 0;
  }
