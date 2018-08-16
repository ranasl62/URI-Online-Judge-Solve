/*! \file finalproject.c
* \brief My final project GPA calculator
*
* \author Mantz Sussky
* \date 8 April 2005
*
* This program accepts as inputs as integer numbers and characters and then prints the students current
* GPA and calculates the grades they need to achieve their goal GPA
*/

#include <stdio.h>
#include <assert.h>
#include <math.h>

/*! \fn
* \brief This is the entry point.
*
* These are the only functions in this simple program.  The return type of
* main is int by default.
*/

int main(void) {

/*! \var number
* number is the number of integers in the array
*/
int number;

/*! \var sum
* sum is the sum of integers in the array
*/
double sum;

/*! \var mean
* mean is the average of integers in the array
*/
double mean;

/*! \var i
* i is the marker number in the array
*/
int i;
int semester_comp;
int semester_left;
int classes;
double goal_gpa;
double gpa_needed;
int class_left;
int total_class;


/*! Prompt user and get input */
printf("How many semesters have you been in school? \n");
printf("\n >");
scanf("%i", &semester_comp);

printf("\n How many semesters do you have left to complete? \n");
printf("\n >");
scanf("%i", &semester_left);

printf("\n How many classes do you take per semester? \n");
printf("\n >");
scanf("%i", &classes);

printf("\n What is your goal GPA you would like to achieve? \n");
printf("\n >");
scanf("%lf", &goal_gpa);

/*! \ var x[number]
* x[number] defines the size of the array.
*/
number = classes * semester_comp;
int x[number];

/*char A;

double A-;
double "B+";
double B;
double "B-";
double "C+";
double C;
double "C-";
double "D+";
double D;
double "D-";
double F; */

/*(A) = 4.0;
(A-) = 3.67;
(B+) = 3.33;
(B) = 3.0;
(B-) = 2.67;
(C+) = 2.33;
(C) = 2.0;
(C-) = 1.67;
(D+) = 1.33;
(D) = 1.0;
(D-) = .67;
(F) = 0;*/

printf("Enter your grades for the %i classes you have completed and press return after each letter \n", number);
printf("\n **Please enter letter grades A through F in all caps with pluses or minuses**\n \n");
for ( i = 0; i < number;  ++i)
scanf("%i", &x[i]);
printf("\n >");
printf("%i\n", x[i]);
/*
if (x[i] == "A")
    y[i] = 4.00;
else if (x[i] == "A-")
    y[i] = 3.67;
else if (x[i]=="B+")
    y[i] = 3.33;
else if (x[i]=="B")
    y[i] = 3.00;
else if (x[i]=="B-")
    y[i] = 2.67;
else if (x[i]=="C+")
    y[i] = 2.33;
else if (x[i]=="C")
    y[i] = 2.00;
else if (x[i]=="C-")
    y[i] = 1.67;
else if (x[i]=="D+")
    y[i] = 1.33;
else if (x[i]=="D")
    y[i] = 1.00;
else if (x[i]=="D-")
    y[i] = 0.67;
else if (x[i]=="F")
    y[i] = 0.00;
else printf("\n Incorrect Data Entry Program Failed");
*/
/*! Compute the sum */
sum = 0;
for (i = 0; i < number; ++i) {
sum += x[i];
}

/*! Find GPA */
mean = sum / number;
printf("\n Your current G.P.A. is %.2f.\n", mean);

class_left = semester_left * classes;
total_class = class_left + number;
gpa_needed = (((goal_gpa * total_class)-(mean * number))/class_left);

if (gpa_needed > 4.00)
printf("\n I'm sorry that GPA is out of reach.");
else if (gpa_needed <= 4.00 && gpa_needed > 3.67)
printf("\n You need an A average for your next %i semesters", semester_left);
else if (gpa_needed <= 3.67 && gpa_needed > 3.33)
printf("\n You need an A- average for your next %i semesters", semester_left);
else if (gpa_needed <= 3.33 && gpa_needed > 3.00)
printf("\n You need a B+ average for your next %i semesters", semester_left);
else if (gpa_needed <= 3.00 && gpa_needed > 2.67)
printf("\n You need a B average for your next %i semesters", semester_left);
else if (gpa_needed <= 2.67 && gpa_needed > 2.33)
printf("\n You need a B- average for your next %i semesters", semester_left);
else if (gpa_needed <= 2.33 && gpa_needed > 2.00)
printf("\n You need a C+ average for your next %i semesters", semester_left);
else if (gpa_needed <= 2.00 && gpa_needed > 1.67)
printf("\n You need a C average for your next %i semesters", semester_left);
else if (gpa_needed <= 1.67 && gpa_needed > 1.33)
printf("\n You need a C- average for your next %i semesters", semester_left);
else if (gpa_needed <= 1.33 && gpa_needed > 1.00)
printf("\n You need a D+ average for your next %i semesters", semester_left);
else if (gpa_needed <= 1.00 && gpa_needed > 0.67)
printf("\n You need a D average for your next %i semesters", semester_left);
else if (gpa_needed <= 0.67 && gpa_needed > 0.00)
printf("\n You need a D- average for your next %i semesters", semester_left);
else if (gpa_needed <= 0.00)
printf("\n You grades are good enough to achieve your goal gpa without even passing your next %i semesters.", semester_left);

return 0;

}
