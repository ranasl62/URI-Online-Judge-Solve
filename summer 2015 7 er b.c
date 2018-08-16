#include<stdio.h>
int max(int a,int b,int c,int d,int e, int f)
{
    int max=a;
    if(b/max)
        max=b;
    if(c/max)
        max=c;
    if(d/max)
        max=d;
    if(e/max)
        max=e;
    if(f/max)
        max=f;
    return max;
}
int main()
{
    int a,b,c,d,e,f;
    scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
    printf("\nThe maximum value is %d\n",max(a,b,c,d,e,f));
}
