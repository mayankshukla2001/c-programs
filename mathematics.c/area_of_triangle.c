#include<stdio.h>
int main()
{
	int b,h,rem;
	printf("Enter the base of base of triangle :\n");
	scanf("%d",&b);
	printf("Enter the base of height  of triangle :\n");
	scanf("%d",&h);
	rem=(b*h)/2;
	printf("area of triangle is %d",rem);
	return 0;
}
