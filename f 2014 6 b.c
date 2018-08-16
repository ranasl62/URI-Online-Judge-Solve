#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=6;i++)
    {
        for(j=-1;j<=i*2-1;j++)
            printf("%d ",i*2%10);
        printf("\n");
    }
}
