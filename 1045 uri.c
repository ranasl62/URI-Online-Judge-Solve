#include<stdio.h>
void cheek(double a,double b,double c)
{
    if(a>=b+c)
        printf("NAO FORMA TRIANGULO\n");
    else if(a*a==b*b+c*c)
        printf("TRIANGULO RETANGULO\n");
    else if(a*a>b*b+c*c)
        printf("TRIANGULO OBTUSANGULO\n");
    else if(a*a<b*b+c*c)
        printf("TRIANGULO ACUTANGULO\n");
    if(a==b&&b==c)
        printf("TRIANGULO EQUILATERO\n");
    else if(a==b||b==c)
        printf("TRIANGULO ISOSCELES\n");
}

int main()
{
    double a,b,c,temp,d[3];
    int i,j;
    scanf("%lf%lf%lf",&a,&b,&c);
    d[0]=a;
    d[1]=b;
    d[2]=c;
    for(i=0; i<2; i++)
    {
        for(j=i+1; j<3; j++)
            if(d[i]<d[j])
            {
                temp=d[i];
                d[i]=d[j];
                d[j]=temp;
            }
    }
    a=d[0];
    b=d[1];
    c=d[2];
    cheek(a,b,c);
    return 0;
}
