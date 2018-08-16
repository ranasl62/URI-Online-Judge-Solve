#include<stdio.h>
void sumofodd(int a,int b)
{
    int i,sum=0;
    if(a>b)
        return sumofodd(b,a);
    if(a%2==0)
        a++;
    else
        a+=2;
    for(i=a; i<b; i+=2)
        sum+=i;
    printf("%d\n",sum);
}
int main()
{
    int a,b,n;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d%d",&a,&b);
        sumofodd(a,b);
    }
    return 0;
}
