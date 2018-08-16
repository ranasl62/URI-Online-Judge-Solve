#include<stdio.h>
int fact(int n)
{
    int i;
    if(n==0||n==1)
        return 1;
    for(i=n;i>=1;i--)
        return n*fact(n-1);
}
int main()
{
    int n;
    scanf("%d",&n);
    printf("%d\n",fact(n));
    return 0;
}


