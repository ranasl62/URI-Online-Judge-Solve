#include<stdio.h>
char subject[100];
int main()
{
    float mark,i,number=0;
    for(i=1; i<=3; i++)
    {
        scanf("%s %f",subject,&mark);
        number=number+mark;


        if (mark>=80) printf("\nGPA is A+\n");

        else if (mark>=60) printf("\nGPA is B\n");

        else if (mark>=50) printf("\nGPA is C\n");

        else  printf("\nGPA is F\n");

    }
    printf("\nAverage of three marks = %f\n",number/3);
    return 0;
    }
