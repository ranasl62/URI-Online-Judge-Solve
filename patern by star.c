#include<stdio.h>
int main ()
{
    int i,j;
    for(i=1;i<=4;i++)
    {
        for(j=4-i;j>=1;j--)
            printf(" ");
        for(j=1;j<=i*2-1;j++)
            printf("*");
        printf("\n");
    }
}
