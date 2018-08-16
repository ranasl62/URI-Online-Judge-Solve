#include<stdio.h>
int main()
{
    int c1,p1,c2,p2;
    float pt1,pt2,t1,t2,total;
    scanf("%d %d %f",&c1,&p1,&pt1);
    t1=p1*pt1;
    scanf("%d %d %f",&c2,&p2,&pt2);
    t2=p2*pt2;
    total=t1+t2;
    printf("VALOR A PAGAR: R$ %.2f\n",total);
    return 0;

}
