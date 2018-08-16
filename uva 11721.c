#include<stdio.h>
int main()
{
    int x,y,t;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d",&x,&y);
        if(x>y)
            printf(">\n");
        if(x<y)
            printf("<\n");
        if(x==y)
            printf("=\n");
    }
    return 0;
}
