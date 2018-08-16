#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=9;i++)
    {
        for(j=1;j<=9-i;j++)
            printf(" ");
        for(j=i;j<=i*2-1;j++)
          printf("%d",j%10);
        for(j=i*2-2;j>=i;j--)
            printf("%d",j%10);
            printf("\n");
        }
    }

