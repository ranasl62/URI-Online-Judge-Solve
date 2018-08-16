#include<stdio.h>
int main()
{
    int i,j,d,dmin;
    for(j=1;j<=9;j++)
    {
        for(i=1;i<=9;i++)
        {
            dmin=100;
            d=i-1;
            if(d<dmin)
                dmin=d;
            d=9-i;
            if(d<dmin)
                dmin=d;
            d=j-1;
            if(d<dmin)
                dmin=d;
            d=9-j;
            if(d<dmin)
                dmin=d;
            if(dmin%2==0)
                printf("Rana");
            else
                printf("    ");
        }
        printf("\n");
    }
}
