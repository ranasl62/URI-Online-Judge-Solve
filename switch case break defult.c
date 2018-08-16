#include<stdio.h>
int main()

{
    int Number;
    printf("Enter the Number\n");
    scanf("%d",&Number);
    switch (Number)
    {
    case 10:
        printf("The number is 10\n");
    break;
    case 9:
        printf("The number is 9\n");
    break;
    case 8:
        printf("The number is 8\n");
    break;
    default:
        printf("Unknown Number\n");
    }
    return 0;
    }
