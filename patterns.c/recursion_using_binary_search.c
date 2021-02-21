#include<stdio.h>
int recbinary(int array[],int s,int e,int e1)
{
	int i,middle;
	if(e>=s)
	{
	middle=(s+e)/2;
	if(array[middle]==e1)
	return middle;
	if(array[middle]>e1)
	return recbinary(array,0,middle-1,e1);
	return recbinary(array,middle+1,e,e1);
    }
	else
	return -1;
}
int main()
{
	int array[]={2,5,6,7,8,9};
	int n=6;
	int element=2;
	int index_found=recbinary(array,0,n-1,element);
	if(index_found==-1)
	printf("element not found...\n");
	else
	printf("element found at index no = %d\n",index_found);
	return 0;	
}
