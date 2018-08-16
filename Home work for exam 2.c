#include<stdio.h>
int main()
{
    int i;
    for(i=0;i<31;i++)
    {
      putchar(i%8/3*2+i/8+97);
    }
}

