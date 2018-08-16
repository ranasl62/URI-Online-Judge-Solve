#include<stdio.h>
int main()
{
    int i,j;
    for(i=1; i<=6; i++)
    {
        for(j=1; j<i; j++)
            printf("a");
        for(j=2; j<=i; j++)
            printf("b");
        for(j=3; j<=i; j++)
            printf("*");
        printf("%c",65+i);
        printf("\n");
    }

}
