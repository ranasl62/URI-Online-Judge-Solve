/*(b) Write a loop to print the following:
b c d a b c d a b c d a  */
#include<stdio.h>
int main()
{
    int i,j;
    for(j=1;j<4;j++)
        for(i=100;i>=97;i--)
            printf("%c ",i);

}
