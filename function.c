#include<stdio.h>
int func(int x)
{
    printf("x1=%d\n",x);
    if(x<=0)
        return 1;
    return func(x-1)+x;
   }
main()
{
    printf("%d\n",func(5));
}
