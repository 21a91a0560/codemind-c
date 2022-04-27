#include<stdio.h>
int findtotal(int *arr,int n)
{
	int i,sum=0;
	for(i=0;i<n;i++)
	{
		sum=sum+arr[i];
	}
	return sum;
}
int main()
{
	int i,n,total,arr[100];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	total=findtotal(arr,n);
	printf("%d",total);
	
	return 0;
}