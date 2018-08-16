#include<stdio.h>
int main()

{
    int m,f;
    f=1;

    printf("Enter the number\n");
    scanf("%d",&m);
    start:

    f=f*m;
    printf("%d\n",f);
    m++;
    if (m<=10)
    goto start;
    return 0;
}
