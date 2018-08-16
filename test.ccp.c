#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#define N 10
void main( )
{
int i,j,t,range1,range2,b,count=0;
int a[N][N],s[90];
printf("elements of an array \n \n");
for( b=0; b<50;b++)
printf("_");
{
for( i=0; i<10; i++)
{
printf("\n");
for ( j=0; j<10; j++){
    a[ i ][ j ]=(rand()%12)+1;
printf ("³%4d", a[ i ][ j ]);
}
}
}
{
printf("\n");
}
printf("Enter the range separated by space:");
scanf("%d %d",&range1,&range2);
if(range2>range1)
{
    t=range2;
    range2=range1;
    range1=t;
}
for( i=0; i<10; i++)
for ( j=0; j<10; j++)
{
    if(range1>=a[i][j]&&range2<=a[i][j])
    {
      s[count++]  = a[i][j];
    }
}
printf("The array contain %d numbers within the inputed range : ",count);
for(i=0;i<count;i++)
    printf("%4d",s[i]);
printf("\n");
return 0;
}
