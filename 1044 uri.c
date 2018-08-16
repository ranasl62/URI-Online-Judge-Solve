#include<stdio.h>
void multiple(int a, int b)
{
    if(a<b)
        return multiple(b,a);
    if (a%b==0)
        printf("Sao Multiplos\n");
    else
        printf("Nao sao Multiplos\n");
}
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    multiple(a,b);
    return 0;
}
