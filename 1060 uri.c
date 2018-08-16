#include<stdio.h>
int main()
{
    double a[6];
    int i,t=0;
    for(i=0; i<6; i++)
        scanf("%lf",&a[i]);
    for(i=0; i<6; i++)
        if(a[i]>=0)
            t++;
    printf("%d valores positivos\n",t);
    return 0;
}
