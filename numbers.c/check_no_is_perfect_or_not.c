  #include<stdio.h>
  int main()
  {
   int i,num,sum=0;
   printf("Enter a Number to know whether it is perfect or not=");
   scanf("%d",&num);                   
   for(i=1;i<=num;i++)
   {
    if(num%i==0)
    {
    sum=sum+i;
    }
   }   
   if(sum==num)
   { 
    printf("The given number %d is perfect\n",num);
   }
   else
   { 
    printf("The given number %d is not perfect because the sum of its divisor are %d\n",num,sum);
   } 
  return 0;
  }

