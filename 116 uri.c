#include<stdio.h>
#include<math.h>
int main ()
{
    int i,j;
    double s;
    for(i=1,j=0; i<=39; i+=2,j++)
    {
        s+=i/pow(2,j);
    }
    printf("%.2lf\n",s);
    return 0;
}

