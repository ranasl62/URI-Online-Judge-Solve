#include<stdio.h>
int odd();
int even();
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    if(a%2!=0||b%2!=0)
        printf("%d\n",odd(a,b));
    if(a%2==0&&b%2==0)
    printf("%d\n",even(a,b));

}

int odd(int a, int b)
{
    if(a%2==0||b%2==0)
    {
    if(a%2==0)
        return b;
    return a;
    }
    else
    {
    if(a>b)
        return a;
    return b;
    }

}
int even(int a, int b)
{
    if(a<b)
        return a;
    return b;
}
