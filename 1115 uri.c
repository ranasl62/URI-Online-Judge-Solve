#include<stdio.h>
int main()
{
    int x,y;
    while(scanf("%d%d",&x,&y))
    {

        if(x==0||y==0)
            break;
        if(x>0&&0<y)
            printf("primeiro\n");
        if(x>0&&0>y)
            printf("quarto\n");
        if(x<0&&0>y)
            printf("terceiro\n");
        if(x<0&&0<y)
            printf("segundo\n");
    }
    return 0;
}




