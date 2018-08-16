#include<stdio.h>
void main(void)
{
  int a=40, b=15;
  printf("%d",~(((a>>2)&(b<<3))^(a|b)));

}
