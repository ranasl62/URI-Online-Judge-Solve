#include <stdio.h>

int main()
{
    int n, f,j,i;
    long long fib[61];
    scanf("%d",&n);
    while(n--)
    {
        fib[0] = 0;
        fib[1] = 1;
        for( j = 2; j <= 60; j++)
        {
            fib[j] = fib[j-2] + fib[j-1];
        }
                f=0;
            scanf("%d",&f);
        printf("Fib(%d) = %lld\n",f,fib[f]);
    }
    return 0;
}
