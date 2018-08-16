#include<stdio.h>
int main()
{
    long long i,in=0,out=0,n,x;
    scanf("%lldd",&n);
    while(n--)
    {
        scanf("%lld",&x);
        if(x>=10&&x<=20)
            in++;
        else
            out++;
    }
    printf("%lld in\n",in);
    printf("%lld out\n",out);
}
