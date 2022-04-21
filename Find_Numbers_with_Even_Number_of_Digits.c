#include<stdio.h>
int main()
{
    int n,i,a[100],k=0,d,m=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        while(a[i]>0)
        {
            d=a[i]%10;
            k++;
            a[i]=a[i]/10;
        }
       if(k%2==0)
       m++;
       k=0;
    }
    printf("%d",m);
}