#include<stdio.h>
int main()
{
    int i,j,k;

    for(k=0,i=3;k<=9;k++)
    {
        printf("%d\n",i);
        i=i+2+k%4;
        i=i%14;
    }
}
