#include<stdio.h>
int main()
{
    int i,j;
    for(i=3;i<=13;i+=2)
    {
        for(j=i;j>=1;j--)
            printf("%d ",j%10);
        printf("\n");
    }
}
