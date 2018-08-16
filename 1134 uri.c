#include<stdio.h>
int main()
{
    int a=0,g=0,d=0,n;
    while(n!=4)
    {
        while(n!=4)
        {
            scanf("%d",&n);
            if(n==1)
                a++;
            if(n==2)
                g++;
            if(n==3)
                d++;
        }
        printf("MUITO OBRIGADO\nAlcool: %d\nGasolina: %d\nDiesel: %d\n",a,g,d);
    }
    return 0;
}
