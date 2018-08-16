#include<stdio.h>
void main()
{
    int i,k,n=9;
    for(i=n;i>=-n;i--)
    {
    ///for(k=1;k<=abs(i);k++)
     ///  printf(" ");
    for(k=1;k<=abs(i);k++)
    {

        printf("*");

    }
   for(k=1;k>=-n*i;k--)
       printf(" ");
        for(k=1;k<=abs(i);k++)
       printf("*");
    printf("\n");
    }

}
