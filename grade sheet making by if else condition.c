#include<stdio.h>
int main()
{
    int mark;

    scanf("%d",&mark);

    if (mark>=80) printf("GPA is A+");

    else if (mark>=75) printf("GPA is A");

    else if (mark>=70) printf("GPA is A-");

    else if (mark>=65) printf("GPA is B+");

    else if (mark>=60) printf("GPA is B");

    else if (mark>=55) printf("GPA is B-");

    else if (mark>=50) printf("GPA is C+");

    else if (mark>=45) printf("GPA is C");

    else if (mark>=40) printf("GPA is D");

    else  printf("fail");

    return 0;
    }
