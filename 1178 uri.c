#include<stdio.h>
int main()
{
    double  n[100],t;
    int i;
    scanf("%lf",&t);
    for (i=0; i<100; i++)
    {
        n[i]=t;
        printf("N[%d] = %.4lf\n",i,n[i]);
        t/=2;
    }
    return 0;

}

