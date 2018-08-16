#include<stdio.h>
int main ()
{
    int i,t,n,a;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        a=0;
        for(i=1;i<=n;i++)
            if(n%i==0)
            a++;
    if(a==2)
        printf("%d eh primo\n",n);
    else
        printf("%d nao eh primo\n",n);
    }
    return 0;
}
