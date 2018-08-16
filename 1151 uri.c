#include<stdio.h>
int main()
{
    int a,b,i,n,t;
    a=0;
    b=1;
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        if (a==0)
        printf("%d",a);
        else
            printf(" %d",a);
        a+=b;
        t=a;
        a=b;
        b=t;
    }
    printf("\n");
    return 0;
}

