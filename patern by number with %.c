#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=7;i++)
    {
        for(j=1;j<=i*2-1;j++)
            printf("%d ",j%10);
        printf("\n");
    }
}