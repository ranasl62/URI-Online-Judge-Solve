#include<stdio.h>
int main()
{
    int n,c=0,i,r=0,s=0;
    char t;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d %c",&i,&t);
        if(t=='C')
            c+=i;
        if(t=='R')
            r+=i;
        if(t=='S')
            s+=i;
    }
    printf("Total: %d cobaias\n",r+c+s);
    printf("Total de coelhos: %d\n",c);
    printf("Total de ratos: %d\n",r);
    printf("Total de sapos: %d\n",s);
    printf("Percentual de coelhos: %.2lf %%\n",((double)c*100/(double)(r+c+s)));
    printf("Percentual de ratos: %.2lf %%\n",((double)r*100/(double)(r+c+s)));
    printf("Percentual de sapos: %.2lf %%\n",((double)s*100/(double)(r+c+s)));
}
