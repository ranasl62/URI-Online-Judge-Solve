#include<stdio.h>

int main()
{
   double A,B,C,a,b,c,d,e,pi = 3.14159;

    scanf("%lf %lf %lf",&A,&B,&C);
    a=.5*A*C;
    b=pi*C*C;
    c=.5*C*(A+B);
    d=B*B;
    e=A*B;
    printf("TRIANGULO: %.3lf\n",a);
    printf("CIRCULO: %.3lf\n",b);
    printf("TRAPEZIO: %.3lf\n",c);
    printf("QUADRADO: %.3lf\n",d);
    printf("RETANGULO: %.3lf\n",e);

    return 0;

}

