#include<stdio.h>
int main()
{
    int a, b, i;

    scanf("%d%d",&a ,&b);
    for(i=a;i<=b;i+=2)
    {

      printf("%d ",i);
        if (i==25)
        break;
        else
            continue;

    }

}
