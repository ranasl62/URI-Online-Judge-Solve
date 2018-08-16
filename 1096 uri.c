#include<stdio.h>
int main()
{
    int i,j;
    for(i=0,j=0; i<15; i++,j++)
        printf("I=%d J=%d\n",i/3*2+1,7-j%3);
    return 0;
}
