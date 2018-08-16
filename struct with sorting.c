#include<stdio.h>
#include<string.h>
struct cse40
{
    char name[20];
    int sid;
    double cgpa;
};
void output(struct cse40 student[])
{
    int i;
    for(i=0; i<10; i++)
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
    for (i=0; i<9; i++)
    {
        for(j=i+1; j<10; j++)
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
    for (i=0; i<9; i++)
    {
        for(j=i+1; j<10; j++)
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
    printf("Enter student NAME ID CGPA\n");
    for(i=0; i<10; i++)
    {
        scanf("%s%d%lf",student[i].name,&student[i].sid,&student[i].cgpa);
    }
}
int main()
{

    struct cse40 student[10];
    input(student);
    int n;
    printf("If you enter 1 it's crate name sort\n");
    printf("If you enter 2 it's crate ID sort\n");
    printf("If you enter 3 it's crate CGPA sort\n");
rana :
    scanf("%d",&n);
    switch(n)
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
        printf("Please enter the valid key\n");
        goto rana;
    }
    }
    output(student);
    return 0;
}
