#include <stdio.h>
long long fat[21];
int main()
{
    long long m, n;
    int i;
    fat[0] = 1;

    for(i = 1; i <= 20; i++)
    {
        fat[i] = fat[i-1]*i;
    }

    while(scanf("%d %d",&m,&n)!=EOF)
    {

        printf("%lld\n", fat[m] + fat[n]);
    }

    return 0;
}
