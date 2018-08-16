#include<stdio.h>
int main()
{
    int i,j,n=5;
    for(i=1;i<=5;i++)
        {
            for(j=1;j<=n;j++)
                printf(" ");
            for(j=1;j<=i*2-1;j++)
                printf("%c",i+96);
                for(j=n-1;j>=1;j--)
                    printf("#");
                n--;
        printf("\n");
        }
}

