#include<stdio.h>
int main ()
{
    long long n,i;
    scanf("%lld",&n);
    for(i=2; i<=n; i+=2)
        printf("%lld^2 = %lld\n",i,i*i);
    return 0;

}
