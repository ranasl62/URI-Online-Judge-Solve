#include <stdio.h>
int main()
{
    int x,y,z,t,i;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d %d %d",&x,&y,&z);
        if((y>x&&x>z)||(z>x&&x>y))
            printf("Case %d: %d\n",i,x);
        if((x>y&&y>z)||(z>y&&y>x))
            printf("Case %d: %d\n",i,y);
        if((y>z&&z>x)||(x>z&&z>y))
            printf("Case %d: %d\n",i,z);
    }
    return 0;
}
