///##aaabbA###aaabbC###aaabbE###aaab
#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=30;i++)
    {
        j=i%8/3;
        if(j==0&&i%4==0)
            printf("%c",i/8+64);
        else if(j==0)
            printf("#");
            else if (j==1)
                printf("a");
            else if (j==2)
                printf("b");

    }
}
