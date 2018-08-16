#include<stdio.h>
int main()
{
    char *s="hello world";
    int i=-6;
    printf("%.*s %.*c",i,s,i,3);
}
