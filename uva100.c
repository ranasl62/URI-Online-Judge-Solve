#include<stdio.h>
long long len(long long n)
{
    if(n==1)
        return 1;
    else if(n%2!=0)
        return len(3*n+1)+1;
    else
        return len(n/2)+1;
}
long long mxcycle(long long a, long long b)
{
    long long mx=0,cl;
    if(a>b)
        return mxcycle(b,a);
    while(a<=b)
    {
        cl=len(a);
        if(mx<cl)
            mx=cl;
        a++;

    }
        return mx;
}
int main()
{
    long long a,b;
    while(scanf("%lld %lld",&a,&b)!=EOF)
        printf("%lld %lld %lld\n",a,b,mxcycle(a,b));
    return 0;

}
