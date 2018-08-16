#include<stdio.h>
#include<string.h>
#include<conio.h>
struct user
{
    char first_name[50];
    char last_name[50];
    char user_name[50];
    char password[50];
    struct dateofbirth
    {
        int day;
        int month;
        int year;
    } birthday;
    char sex[10];
};
void pass_gen(char password[])
{
    int i=0;
    char ch;
    while(1)
    {
    ch=getch();
    if(ch==13)
        break;
    putchar('*');
    password[i++]=ch;

    }
    password[i]='\0';
}
int main ()
{
    char passck[50];
    struct user signup;
    printf("Enter your first name : ");
    scanf("%[^\n]",signup.first_name);
    printf("Enter your last name : ");
    scanf("%s",signup.last_name);
    printf("Enter your user name : ");
    scanf("%s",signup.user_name);
   pass : printf("Enter your password : ");
    pass_gen(signup.password);
    printf("\nRetype your password : ");
    pass_gen(passck);
    if(strcmp(signup.password,passck)!=0)
    {
            printf("Don't match your password\n");
            goto pass;
    }

    printf("\nEnter your date of birth : \n");
    printf("Date:");
    scanf("%d",&signup.birthday.day);
    printf("Month:");
    scanf("%d",&signup.birthday.month);
    printf("Year:");
    scanf("%d",&signup.birthday.year);
sexck : printf("\nEnter your your sex (press f/F for Female **** press m/M for Male): ");
    scanf("%s",signup.sex);
    int male,female;
    if((strcmp(signup.sex,"f"))==0||(strcmp(signup.sex,"F"))==0)
    {
        male=0;
        female=1;
    }
   else if((strcmp(signup.sex,"m"))==0||(strcmp(signup.sex,"M"))==0)
    {
        male=1;
        female=0;
    }
    else
    {
        printf("Retype your valid sex\n");
        goto sexck;
    }
    printf("\nYour full name : %s %s",signup.first_name,signup.last_name);
    printf("\nYour User name : %s",signup.user_name);
    printf("\nYour Password  : %s",signup.password);
    printf("\nYour date of birth  : %d / %d / %d ",signup.birthday.day,signup.birthday.month,signup.birthday.year);
    if(male)
    printf("\nYour sex : Male");
    else
        printf("\nYour sex : Female\n");

    return 0;
}
