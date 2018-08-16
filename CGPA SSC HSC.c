#include <stdio.h>

int main()
{
int i,sub,marks,op,osub;
float gp =0.0;

printf("\n ---GPA CALCULATION FOR SSC & HSC:---\n\n");
printf("\nEnter the number of main subjects: ");
scanf("%d",&sub);

for(i=1; i<=sub; i++)
{
printf("Enter %d No Subject marks: \n",i);
scanf("%d",&marks);
switch(marks/10)
{
case 10:
case 9:
case 8:printf("A+\n");gp=gp+5.0;break;
case 7:printf("A\n");gp=gp+4.0;break;
case 6: printf("A-\n");gp=gp+3.5; break;
case 5: printf("B\n"); gp=gp+3.0; break;
case 4: printf("C\n"); gp=gp+2.5; break;
case 3: printf("D\n"); gp=gp+2.0; break;
default: printf("F\n");
}
}
printf("\nIf you have any optional Subject then Press :1 \nIf you have No optional Subject then Press :0\n\n");
scanf("%d",&op);
if(op==1)
{
printf("Enter the marks of Optional subjects: ");
scanf("%d",&osub);
switch(osub/10)
{
case 10:
case 9:
case 8:printf("A+\n");gp=gp+3.0;break;
case 7:printf("A\n");gp=gp+2.0;break;
case 6: printf("A-\n");gp=gp+1.5; break;
case 5: printf("B\n"); gp=gp+1; break;
case 4: printf("C\n"); gp=gp+.50; break;
case 3: printf("D\n"); gp=gp+0.0; break;
default: printf("F\n");
}
if(sub==5)
{
if(gp>25.0)
{gp=25.0;
printf("\n Your GPA= %.2f",gp/sub);
}
else
printf("\n Your GPA= %.2f",gp/sub);
}
if(sub==8)
{
if(gp>40.0)
{
gp=40.0;
printf("\n Your GPA= %.2f",gp/sub);
}
else
printf("\n Your GPA= %.2f",gp/sub);
}
}
else
printf("\n Your GPA= %.2f",gp/sub);
return 0;
}
