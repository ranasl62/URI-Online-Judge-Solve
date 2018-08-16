#include<stdio.h>
int main(void)
{
    int i,j,k,n,l,t;
    scanf("%d",&n);
    k=t=n;
 for(i=1;i<=n;i++)

     {
          for(j=1;j<=i;j++)
        printf("  ");

    for(l=1;l<=k*2-1;l++)
        printf("%c%c",95,65);
         k--;
     printf("\n");
     }
    for(i=1;i<=n;i++)
     {

     for(l=1;l<=t;l++)
        printf("  ");
        t--;

     for(j=1;j<=i*2-1;j++)
       printf("%c%c",95,65);
        printf("\n");
     }




}



