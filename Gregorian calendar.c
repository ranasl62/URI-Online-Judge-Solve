/*5. According to Gregorian calendar, it was Monday on the date 01/01/1900. If any
year is input through the keyboard write a program to find out what is the day on
1 st January of this year&*/
#include <stdio.h>


int main ()
{

int year,days,d;
printf("year?"); scanf("%d",&year);
days = 365*year + (year-1)/4 - (year-1)/100 + (year-1)/400 ;


d=days%7;


if(d==1)
printf("\n\n\tmonday");
else if(d==2)
printf("\n\n\ttuesday");
else if(d==3)
printf("\n\n\twednesday");
else if(d==4)
printf("\n\n\tthursday");
else if(d==5)
printf("\n\n\tfriday");
else if(d==6)
printf("\n\n\tsaturday");
else if(d==0)
printf("\n\n\tsunday");
return(0);

}
