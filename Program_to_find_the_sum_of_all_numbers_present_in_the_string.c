#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int sum=0,k=0,a[100],i,n,c=0;
    scanf("%s",str);
    n=strlen(str);
    for(i=0;i<n;i++)
    {
        if(str[i]>='0' && str[i]<='9')
        {
            a[k]=str[i]-'0';
            k++;
        }
    }
    for(i=0;i<k;i++)
    {
        sum=sum+a[i];
    }
    printf("%d",sum);
    
}