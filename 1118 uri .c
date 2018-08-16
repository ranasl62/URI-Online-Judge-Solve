#include<stdio.h>
int main()
{
    double a,av;
    int x=0,t;
    while(x!=2)
    {
        t=2;
        av=0;
        while(t>0)
        {
            scanf("%lf",&a);
            if(a<=10&&0<=a)
            {
                t--;
                av=av+a;
            }
            else
                printf("nota invalida\n");
        }
        printf("media = %.2lf\n",av);
        x=0;
        while(x!=1)
        {
            printf("novo calculo (1-sim 2-nao)\n");
            scanf("%d",&x);
            if(x==2)
                break;
        }
    }
    return 0;
}
