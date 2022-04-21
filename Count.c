#include<stdio.h>
int main()
{
    int N,i,arr[100],c1=0,c2=0;
    scanf("%d",&N);
    for(i=0;i<N;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<N;i++)
    {
        if(arr[i]%2==0)
        {
            c1++;
        }
        else
        {
            c2++;
        }
    }
    printf("%d %d",c1,c2);
}