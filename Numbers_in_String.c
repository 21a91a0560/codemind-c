#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int i,sum=0,a[100],k=0;
    scanf("%[^
]s",str);
    for(i=0;str[i]!=NULL;i++)
    {
        if(str[i]>='0' && str[i]<='9')
        {
            a[k]=str[i]-48;
            k++;
        }
    }
    for(i=0;i<k;i++)
    {
       sum=sum+a[i];
    }
    printf("%d",sum);
}
