#include<stdio.h>
void sumofodd(int a,int b)
{
    int i,sum=0;
    if(a>b)
        return sumofodd(b,a);
    for(i=a; i<=b; i++)
    {
        printf("%d ",i);
        sum+=i;
    }
    printf("Sum=%d\n",sum);
}
int main()
{
    int a,b;
    while(scanf("%d%d",&a,&b)&& a>0&&b>0)
    {
        sumofodd(a,b);
    }
    return 0;
}
