#include<stdio.h>
int main ()
{
    int i;
    double s=0.0,t;
    for(i=1; i<=100; i++)
    {
        t=i;
        s+=(1/t);
    }
    printf("%.2lf\n",s);
    return 0;
}
