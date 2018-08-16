#include<stdio.h>
#include<cderr.h>

void main()
{
    int op,a,b;
    printf("***Welcome to my calculator***\n\n");

    do{
    printf("Choose an option\n\n");
    printf(" 1: addition\n 2: Subtraction\n 3: Multiplication\n 4: Division\n");
    scanf("%d",&op);
    }while ((op!=1) && (op!=2) && (op!=3) && (op!=4));
    printf("Type the first number\n");
    scanf("%d",&a);
    printf("Type the second number\n");
    scanf("%d",&b);
    switch(op){
    case 1:
        printf("You have chosen the addition\n");
        printf("%d+%d=%d",a,b,a+b);
        break;
    case 2:
        printf("You have chosen the Subtraction \n");
        printf("%d-%d=%d",a,b,a-b);
        break;
    case 3:
        printf("You have chosen the Multiplication \n");
        printf("%d*%d=%d",a,b,a*b);
        break;
    case 4:
        printf("You have chosen the Division \n");
        printf("%d/%d=%d",a,b,a/b);
        break;

    }
    return 0;
}
