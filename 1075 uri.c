#include<stdio.h>
int main()
{
    long long  i,n;
    scanf("%lld",&n);

    for(i=1; i<=10000; i++)
        if(i%n==2)
            printf("%lld\n",i);
    return 0;

}
