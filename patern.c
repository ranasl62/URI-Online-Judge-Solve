#include<stdio.h>
int main()
{
    int i,j,n=10;
    for(i=n;i>=-n;i--)

    {
        for(j=n;j>=abs(i);j--)
        printf(" ");
        for(j=n;j>=abs(i);j--)
            printf("*");

            printf("\n");
    }
}
