/*(a) A number is "Special" if it is divisible by exactly two of the numbers 3, 5, 7, 16, 20,
23, 31 and not divisible by at least 2 of the numbers 2, 3, 9, 17. For example 30 is
special. Write a program that can decide whether a number is "Special" or not. */
#include<stdio.h>
int main()
{
    int n, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10;
    printf("Enter the number :");
    scanf("%d",&n);
    a1=n%3==0;
    a2=n%5==0;
    a3=n%7==0;
    a3=n%16==0;
    a4=n%20==0;
    a5=n%23==0;
    a6=n%31==0;

    a7=n%2==0;
    a8=n%3==0;
    a9=n%9==0;
    a10=n%17==0;
    if(a1+a2+a3+a4+a5+a6==2 && a7+a8+a9+a10>=2)
        printf("\n%d is the special number\n\n",n);
    else
        printf("\n%d is not special number\n\n",n);

}

