#include<stdio.h>
int main()
{
    float s;
    while(scanf("%f",&s)!=EOF)
    {
        if(s>=0.00&&s<=2000.00)
            printf("Isento\n");
        if(s>=2000.01&&s<=3000.00)
        {
            s=s-2000.00;
            printf("R$ %.2f\n",s*8/100);
        }
        if(s>=3000.01&&s<=4500.00)
        {
            s=s-3000.00;

            printf("R$ %.2f\n",(s*18/100)+(10*8));

        }
        if(s>4500.00)
        {
            s=s-4500.00;
            printf("R$ %.2f\n",(s*28/100)+(15*18)+(10*8));
        }

    }
    return 0;
}
