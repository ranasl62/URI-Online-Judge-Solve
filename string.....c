#include<stdio.h>
#include<string.h>
int main()
{
    char a[100];
    int address,base;
    scanf("%s",a);
    base=(int) (a);
    address =(int) (strchr(a,'a'));
    if(address==0)
        printf("Not found!\n");
    else
        printf("Found at %d \n",address-base+1);

    return 0;
}
