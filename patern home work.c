#include<stdio.h>
void main()
{
    int i,k,n=9;
    for(i=1;i<=n;i++)
    {
    for(k=1;k<=9;k++)
        if(k==1||k==n||i==1||i==n)
            printf("*");
        else if(i>=4&&i<=6&&k>=4&&k<=6&&i*k!=25)
                printf(" ");
        else if(i>=3&&k>=3&&i<=7&&k<=7)
                printf("*");
            else
                printf(" ");
    printf("\n");
    }

}
