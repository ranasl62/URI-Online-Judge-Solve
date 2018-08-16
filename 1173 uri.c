#include<stdio.h>
int main()
{
    int i , x,t,a[10];
    scanf("%d",&x);
    for(i=0;i<10;i++)
    {
        a[i]=x;
        x+=x;
    }
    for(i=0;i<10;i++)
        printf("N[%d] = %d\n",i,a[i]);
    return 0;
}
