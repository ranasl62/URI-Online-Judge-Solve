#include<stdio.h>
int main()
{
    int i,n;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
       printf("%d ",i+1);
       printf("%d ",(i+1)*(i+1));
       printf("%d\n",(i+1)*(i+1)*(i+1));
    }
    return 0;
}

