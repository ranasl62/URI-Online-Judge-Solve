#include<stdio.h>
int sum(int a,int b)
{
    int i,sum13=0;
    if(a>b)
        return sum(b,a);
    for(i=a;i<=b;i++)
        if(i%13!=0)
        sum13+=i;
        return sum13;

}
int main()
{
    int a,b,i;
    scanf("%d%d",&a,&b);
    printf("%d\n",sum(a,b));
    return 0;
}
