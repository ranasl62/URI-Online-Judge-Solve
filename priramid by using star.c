#include<stdio.h>
int main()
{
    int i,j,k,l,m,n,o;
    scanf("%d",&n);
    m=n;
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=m; j++)
            printf(" ");
        m--;
        for(j=1;j<=i*2-1; j++)
            printf("*");
        printf("\n");
    }
        k=n;
        m=1;
     for(o=1; o<=n; o++)
    {
        for(l=1; l<=m; l++)
            printf(" ");
        for(j=1;j<=k*2-1; j++)
            printf("*");
        printf("\n");
        k--;
        m++;
     }
    printf("\n\nCreate by M Rana Hossain\n\n");

}
