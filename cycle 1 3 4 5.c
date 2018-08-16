#include<stdio.h>
int main(void)
{
    int i,j;
    for(i=0;i<=9;i++)

    {   if(i%5==1)
            continue;
            printf("%d ",i%5+1);

    }
}
