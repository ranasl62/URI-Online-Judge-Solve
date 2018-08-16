/*Prblm: Write a c program to input electricity unit charge and calculate total electricity bill acconding to the given condition :

For first 50 units Rs.0.50/unit

for next 100 units Rs.0.75/unit

for next 100 units Rs.1.20/unit

for next above 250 Rs . 1.50/unit

an additional surcharge of 20% is added to the bill*/
#include<stdio.h>
int main()

{
    double a,b,c,d,e,bill;
    {
        printf("Enter the electricity unit :");
        scanf("%lf",&a);
        if (a>=250)
        {
            b=50*0.5;
            c=100*0.75;
            d=100*1.20;
            e=(a-250)*1.5;
            bill=b+c+d+e;
            bill+=bill*0.2;
            printf("This is total electricity bill : %lf",bill);
        }
        else if (a>=150)
        {
            b=50*0.5;
            c=100*0.75;
            e=(a-150)*1.5;
            bill=b+c+e;
            bill+=bill*0.2;
            printf("This is total electricity bill : %lf",bill);

        }
        else if (a>=50)
        {
            b=50*0.5;
            e=(a-50)*0.75;
            bill=b+e;
            bill+=bill*0.2;
            printf("This is total electricity bill : %lf",bill);
        }
        else
        {
            bill=a*0.5;
            bill+=bill*0.2;
            printf("This is total electricity bill : %lf",bill);
        }


}
}
