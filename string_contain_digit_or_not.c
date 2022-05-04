#include<stdio.h>
int main()
{
    char str[100];
    int i,c=0,k=0,a[100];
    scanf("%[^
]s",str);
    for(i=0;str[i]!=NULL;i++)
    {
        if(str[i]>='0'&& str[i]<='9')
        {
            a[k]=str[i]-48;
            k++;
        }
    }
    if(k!=0)
    printf("Contains %d digit",k);
    else
    printf("Doesn't contain digit");
}