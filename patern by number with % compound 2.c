#include<stdio.h>>
int main()
{
    int i,j,n;
    for(i=1;i<=9;i++)
    {
        for(j=1;j<=9-i;j++)
            printf("\t");
        for(j=i;j<=i*2-1;j++)
            printf("%d\t",j%10);
        for(j=i*2-2;j>=i;j--)
            printf("%d\t",j%10);
        printf("\n");
    }
}
