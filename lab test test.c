#include<stdio.h>
int main(void)
{
    int i,j;

    for(i=1;i<=5;i++)
        {
            for(j=1;j<=i*2-1;j++)
                printf("%d",j);
        printf("\n");
        }


    return 0;
}
