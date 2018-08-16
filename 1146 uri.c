#include<stdio.h>
int main()
{
    int x,i;
    while(scanf("%d",&x)&&x!=0)
    {
        for(i=1; i<=x; i++)
        {
            if(i==1)
                printf("%d",i);
            else
                printf(" %d",i);
        }
            printf("\n");

    }
    return 0;
}
