#include<stdio.h>
int main()
{
    int i,n,aux=1000,pos;
    scanf("%d",&n);
    int a[n];
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
        if(a[i]<aux)
        {
            aux=a[i];
            pos=i;

        }

    }

    printf("Menor valor: %d\nPosicao: %d\n",a[pos],pos);
}


