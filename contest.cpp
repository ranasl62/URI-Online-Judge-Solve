#include<iostream>
#include<cmath>
#include<cstdio>
using namespace std;
int main()
{
    double R1,R2,R3,a,b,c,s,area_t,A,B,C,area_A,area_B,area_C;
    int t;
    cin>>t;
    while(t--)
    {
        cin>>R1>>R2>>R3;

        a=R1+R2;

        b=R2+R3;

        c=R1+R3;

        s=(a+b+c)/2;

        area_t=sqrt(s*(s-a)*(s-b)*(s-c));

        A=(acos((((b*b)+(c*c)-(a*a))/(2*b*c))))*180/M_PI;

        B=(acos(((-(b*b)+(c*c)+(a*a))/(2*a*c))))*180/M_PI;

        C=(acos((((b*b)-(c*c)+(a*a))/(2*b*a))))*180/M_PI;

        area_A=A/360*M_PI*R1*R1;

        area_B=B/360*M_PI*R2*R2;

        area_C=C/360*M_PI*R3*R3;

        printf("%.4lf\n",area_t-(area_A+area_B+area_C));

    }
    return 0;
}
