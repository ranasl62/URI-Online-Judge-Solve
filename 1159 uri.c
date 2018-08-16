#include<stdio.h>
int main ()
{
    int x,y,sum;
    while(scanf("%d",&x)&&x!=0)
    {

        if(x%2!=0)
            x++;
        y=5;
        sum=0;
        while(y--)
        {
            sum+=x;
            x+=2;
        }
        printf("%d\n",sum);
    }
    return 0;
}
