#include<stdio.h>
int main ()
{
    int p1,p2,d,n,t1,t2;
    double g1,g2;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d%d%lf%lf",&p1,&p2,&g1,&g2);

        t1=p1*g1/100;
        t2=p2*g2/100;
        p1+=t2;
        p2+=t1;
        d=p2-p1;
        if(d>100)
            printf("Mais de 1 seculo.\n");
        else
            printf("%d anos.\n",d);
    }
    return 0;

}
