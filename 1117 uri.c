#include<stdio.h>
int main()
{
    double a,i=0,sum=0;
    while(i<=1)
    {
        scanf("%lf",&a);
        if((a>=0.0&&a<=10.00))
        {
            i++;
            sum+=a;
        }
        else
            printf("nota invalida\n");
        if(i==2)

            printf("media = %.2lf\n",sum/2);
    }
    return 0;
}
