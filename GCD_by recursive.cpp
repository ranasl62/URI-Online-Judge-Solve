#include<iostream>
using namespace std;
int gcd(int a , int b)
{
    if(b==0)
        return a;
        return gcd(b,a%b);
}

int main()
{
    int a,b;
    int gcd_value;
    cin>>a>>b;
    if(a<b)
    {
        a=a+b;
        b=a-b;
        a=a-b;
    }
    gcd_value=gcd(a,b);
    cout<<"THE GCD OF "<<a<<" , "<<b<<" IS : "<<gcd_value<<endl;
    cout<<"THE LCM OF "<<a<<" , "<<b<<" IS : "<<(a*b)/gcd_value<<endl;
    return 0;
}
