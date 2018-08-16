#include<stdio.h>
int main ()
{
    int n,y,m,d;
    scanf("%d",&n);
    y=n/365;
    m=(n-y*365)/30;
    d=n-(y*365+m*30);
    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n",y,m,d);
    return 0;
}
