#include<stdio.h>
int main()
{
    int n,r,i,a[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    scanf("%d",&r);
    for(i=0;i<n;i++)
    {
        if(r==a[i])
        break;
        }


printf("%d",i+1);
}
