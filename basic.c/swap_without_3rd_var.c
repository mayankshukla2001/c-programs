 #include<stdio.h>
 int main()
 {
  int a,b;
  printf("Enter a=");
  scanf("%d",&a);
  printf("Enter b=");
  scanf("%d",&b);
  printf("The values of a is %d and b is %d before swaping\n",a,b);
  a=a+b;
  b=a-b;
  a=a-b;
  printf("The values of a is %d and b is %d after swaping\n",a,b);
 return 0;
 }
