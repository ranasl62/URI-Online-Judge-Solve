#include<stdio.h>
#include<string.h>
int n;
struct cse40
{
char name[20];
int sid;
double cgpa;
};
void output(struct cse40 student[])
{
int i;
for(i=0; i<n; i++)
{
printf("Sl # %d. %s\t%d\t%.2lf\n",i+1,student[i].name,student[i].sid,student[i].cgpa);
}
}
void namesort(struct cse40 student[])
{
struct cse40 temp;
int i,j;
for (i=0; i<9; i++)
{
for(j=i+1; j<10; j++)
if(strcmp(student[i].name , student[j].name)>0)
{
strcpy(temp.name,student[i].name);
temp.sid=student[i].sid;
temp.cgpa=student[i].cgpa;

strcpy(student[i].name,student[j].name);
student[i].sid=student[j].sid;
student[i].cgpa=student[j].cgpa;

strcpy(student[j].name,temp.name);
student[j].sid=temp.sid;
student[j].cgpa=temp.cgpa;
}
}
}
void idsort(struct cse40 student[])
{
struct cse40 temp;
int i,j;
for (i=0; i<n-1; i++)
{
for(j=i+1; j<n; j++)
if(student[i].sid>student[j].sid)
{
strcpy(temp.name,student[i].name);
temp.sid=student[i].sid;
temp.cgpa=student[i].cgpa;

strcpy(student[i].name,student[j].name);
student[i].sid=student[j].sid;
student[i].cgpa=student[j].cgpa;

strcpy(student[j].name,temp.name);
student[j].sid=temp.sid;
student[j].cgpa=temp.cgpa;
}
}
}
void cgpasort(struct cse40 student[])
{
struct cse40 temp;
int i,j;
for (i=0; i<n-1; i++)
{
for(j=i+1; j<n; j++)
if(student[i].cgpa>student[j].cgpa)
{
strcpy(temp.name,student[i].name);
temp.sid=student[i].sid;
temp.cgpa=student[i].cgpa;

strcpy(student[i].name,student[j].name);
student[i].sid=student[j].sid;
student[i].cgpa=student[j].cgpa;

strcpy(student[j].name,temp.name);
student[j].sid=temp.sid;
student[j].cgpa=temp.cgpa;
}
}
}
void input(struct cse40 student[])
{
int i;
printf("Enter student NAME <space> ID <space> CGPA\n");
for(i=0; i<n; i++)
{
scanf("%s%d%lf",student[i].name,&student[i].sid,&student[i].cgpa);
}
}
int main()
{
    printf("How may student in CSE 40 Batch in SEU\n");
    scanf("%d",&n);
struct cse40 student[n];
input(student);
int t;
printf("If you enter 1 it's make name wise sort\n");
printf("If you enter 2 it's make ID wise sort\n");
printf("If you enter 3 it's make CGPA wise sort\n");
rana :
scanf("%d",&t);
switch(t)
{
case 1:
namesort(student);
break;
case 2:
idsort(student);
break;
case 3:
cgpasort(student);
break;
default :
{
printf("Enter the valid key\n");
goto rana;
}
}
output(student);
return 0;
}
