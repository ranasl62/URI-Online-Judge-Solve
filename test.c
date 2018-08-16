#include<stdio.h>
int main(void)
{
     int i,j,n=10;
     for(i=1;i<=9;i++)
     {
        for(j=1;j<=n;j++)
            if(j%2!=0)
                printf("\\");
            else
                printf("/");
        printf("\n");
        n--;
     }
     return 0;
}
