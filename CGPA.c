#include<stdio.h>
#include<conio.h>
void main(void)
{
//*program that can calculate cgpa of four smesters
float gpa1,gpa2,gpa3,gpa4,cgpa;
printf("Enter your first gpa=");
scanf("%f",&gpa1);
printf("\nEnter your 2nd gpa=");
scanf("%f",&gpa2);
printf("\nEnter your 3rd gpa=");
scanf("%f",&gpa3);
printf("\nEnter your 4rth gpa=");
scanf("%f",&gpa4);
cgpa=(gpa1+gpa2+gpa3+gpa4)/4;
printf("\nYour CGPA is %f",cgpa);
return 0;
}
