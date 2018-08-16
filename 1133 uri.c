#include<stdio.h>
void result(int a,int b)
{
    int i;
    if (a>b)
        return result (b,a);
    for(i=a+1;i<b;i++)
        if(i%5==2||i%5==3)
        printf("%d\n",i);
}
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    result(a,b);
    return 0;
}
