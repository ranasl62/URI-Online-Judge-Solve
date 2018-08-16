#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=6;i++)
    {
        for(j=i;j<=i*3-2;j++)
            printf("%d ",j%10);
        printf("\n");
    }
}
