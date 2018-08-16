#include<stdio.h>
void sumofodd(int a, int b)
{
    int i,sum=0;
    if (a>b)
        return sumofodd(b,a);
    if(a%2==0)
        a++;
    else
        a+=2;
    for(i=a; i<=b-1; i+=2)
    {
        sum=sum+i;
    }
    printf("%d\n",sum);
}
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    sumofodd(a,b);
    return 0;
}
