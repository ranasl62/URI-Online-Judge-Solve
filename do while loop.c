#include<stdio.h>
int main()
{
    int i=1,j=1;
    do
    {
        printf("%d\t%d\n",j,i);
        j=j+i;
        i++;
    }while(j<=29&&i<=9);
    return 0;
}
