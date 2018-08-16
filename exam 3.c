#include<stdio.h>
int main()
{
    int i;
    for(i=0;i<=19;i++)
        printf("%d ",i%4*((i+4)/4)+2);
    return 0;

}
