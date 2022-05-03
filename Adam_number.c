#include<stdio.h>
int reverse(int n)
{
    int r,rev=0;
    while(n>0)
    {
        r=n%10;
        rev=(rev*10)+r;
        n=n/10;
    }
    return rev;
}
int main()
{
    int n,d,m,rev=0,z,rem,rev1=0;
    scanf("%d",&n);
    m=n*n;
    rev=reverse(n);
    z=rev*rev;
    rev1=reverse(z);
    if(rev1==m)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}