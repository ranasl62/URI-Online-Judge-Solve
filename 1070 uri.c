#include<stdio.h>
int main ()
{
    int x,i;
    scanf("%d",&x);
    if(x%2==0)
        x++;
    else
        x+=2;
    for(i=x;i<=x+10;i+=2)
        printf("%d\n",i);
    return 0;
}
