#include<stdio.h>
#define PI  3.14
int main()
{
	int r;
	float area;
	printf("Enter the radius of circle :\n");
	scanf("%d",&r);
	area=PI*(r*r);
	printf("Area of a circle is %.2f\n ",area);
	return 0;
}

