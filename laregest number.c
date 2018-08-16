#include<stdio.h>
int main ()

{
    int a,b,c;

    printf("Enter the number\n");

    scanf("%d",&a);

    scanf("%d",&b);

    scanf("%d",&c);

    if(a>b)
    printf("a");
    else
    printf("b");
    if (a>c)
    printf("a");
    else
    printf("c");
    if(b>c)
    printf("b");
    else
    printf("c");
    return 0;
    }
