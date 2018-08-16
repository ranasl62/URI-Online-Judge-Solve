#include<stdio.h>
int main ()
{
    int i ,j;
    for(i=1;i<=10;i++)
    {
    for(j=1;j<=10-i;j++)
        printf(" ");
        for(j=1;j<=i*2-1;j++)
            printf("*");
        printf("\n");
    }
     for(i=1;i<=10;i++)
    {
        for(j=1;j<=i;j++)
            printf(" ");
    for(j=1;j<=19-2*i;j++)
        printf("*");
        printf("\n");
    }
    return 0;
}
