#include<stdio.h>
int main()
{
    int i,j,n;
    for(i=0,j=0; i<15; i++,j++)
        printf("I=%d J=%d\n",1+i/3*2,7-j%3+i/3*2);
    return 0;
}
