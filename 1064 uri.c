#include<stdio.h>
int main()
{
    double a[6],s=0;
    int i,t=0;
    for(i=0; i<6; i++)
        scanf("%lf",&a[i]);
    for(i=0; i<6; i++)
        if(a[i]>=0)
        {
            s=s+a[i];
            t++;
        }
    printf("%d valores positivos\n%f\n",t,s/t);
    return 0;
}
