#include<stdio.h>
int main()
{
    int a,av=0,i=0;
    while(scanf("%d",&a))
    {
        if(a<0)
            break;
        av=av+a;
        i++;
    }
    printf("%.2lf\n",(double)av/(double)i);
    return 0;
}
