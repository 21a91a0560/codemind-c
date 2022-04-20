#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	if(n>0)
	{
		printf("Positive Number");
	}
	else if(n<0)
	{
		printf("Negative Number");
	}
	else if(n=0)
	{
		printf("0 is neither positive nor negative");
	}
	else
	{
		printf("your input is not in our limit");
	}
	
	return 0;
}