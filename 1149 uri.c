#include <stdio.h>
int main()
{
    int a, n,i,soma=0;
    scanf("%d",&a);
    scanf("%d",&n);
    while(n <= 0)
        scanf("%d",&n);
    for(i = 0; i < n; i++)
        soma +=a+i;
    printf("%d\n",soma);
    return 0;
}
