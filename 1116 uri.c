#include<stdio.h>
int main()
{
    int x,y,n;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d%d",&x,&y);

        if (y)
        printf("%.1lf\n",(double)x/(double)y);
        else
            printf("divisao impossivel\n");


    }
    return 0;
}




