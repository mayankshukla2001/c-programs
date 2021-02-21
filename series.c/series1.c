#include<stdio.h>
int main()
{
	int n,i;
	float sum=0;
	printf("Enter the value till u want series :\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	sum=sum+(float)1/i;
	}
	printf("the value of ");
	for(i=1;i<=n;i++)
	{
		if(i<n)
		{
			printf("1/%d+",i);
		}
		else
		printf("1/%d=",i);
	}
	printf("%f",sum);
	return 0;

}

