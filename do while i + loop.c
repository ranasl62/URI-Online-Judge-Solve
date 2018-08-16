#include<stdio.h>
int main(void)
{
    int i=5,j=5,l=1;
 do
 {
     printf("%d\n",i);
     l=-l;
     j+=5;
    i=j*l;
 }while(j<=100);



}



