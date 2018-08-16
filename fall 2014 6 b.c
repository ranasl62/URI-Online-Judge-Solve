#include<stdio.h>
double x=23.198238, y=1.23444445e6;
int main(void)
{
 printf("%.0lf %.7lf %12.5le %14.3le\n",y,x,y,x);
 return 0;
}
