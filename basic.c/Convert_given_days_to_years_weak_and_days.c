#include<stdio.h>
 int main()
 {
  int years,weeks,days,total_days;
  printf("Enter the total day=");
  scanf("%d",&total_days);

  years=total_days/365;
  weeks=(total_days%365)/7;
  days=(total_days%365)%7;
  printf("%d =%d years,%d weeks,%d days",total_days,years,weeks,days);
 
 return 0;
 }