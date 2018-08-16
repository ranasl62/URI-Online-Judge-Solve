#include<stdio.h>
void main()
{
int s[1][2]={{1243,20}};
int i,j;
for(i=0;i<1;i++){
for(j=0 ;j<=1;j++){
printf("%d",*(*(s+i)+j));}}getch();}
