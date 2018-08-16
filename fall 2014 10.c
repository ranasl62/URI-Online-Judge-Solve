#include<stdio.h>
int main(void) {
 int a,b;
 a=b;
 if(a-b)
 printf("Good Morning\n");
 if(a<=b)
 printf("Welcome to C Exam\n");
 if(a=1)
 printf("A is true\n");
 else if(a==1)
 printf("A is also true\n");
 b=a-1;
 if(b)
 printf("The End\n");
 else
 printf("You get an A\n");
 printf("%d\n",a<b);
}
