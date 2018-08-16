#include<stdio.h>
int main()
{
    float s;
    scanf("%f",&s);
    if(s>=0.0&&s<=400.00)
    {
        printf("Novo salario: %.2f\n",s+s*15/100);
        printf("Reajuste ganho: %.2f\n",s*15/100);
        printf("Em percentual: 15 \%\n");
    }
    if(s>=400.01&&s<=800.00)
    {
        printf("Novo salario: %.2f\n",s+s*12/100);
        printf("Reajuste ganho: %.2f\n",s*12/100);
        printf("Em percentual: 12 %%\n");
    }
    if(s>=800.01&&s<=1200.00)
    {
        printf("Novo salario: %.2f\n",s+s*10/100);
        printf("Reajuste ganho: %.2f\n",s*10/100);
        printf("Em percentual: 10 %%\n");
    }
    if(s>=1200.01&&s<=2000.00)
    {
        printf("Novo salario: %.2f\n",s+s*7/100);
        printf("Reajuste ganho: %.2f\n",s*7/100);
        printf("Em percentual: 7 %%\n");
    }
    if(s>2000.00)
    {
        printf("Novo salario: %.2f\n",s+s*4/100);
        printf("Reajuste ganho: %.2f\n",s*4/100);
        printf("Em percentual: 4 %%\n");
    }
}
