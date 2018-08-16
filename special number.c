#include<stdio.h>
int main()
{
    int a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, n,i,t,right=0,wrong=0;
    printf("How many time you cheek the number ");
    scanf("%d",&t);
    for(i=1;i<=t;i++){
    printf("\n\nEnter the Number : ");
    scanf("%d",&n);
    a1 = n % 5 == 0;
    a2 = n % 11 == 0;
    a3 = n % 17 == 0;
    a4 = n % 8 == 0;
    a5 = n % 9 == 0;
    a6 = n % 3 == 0;
    a7 = n % 7 == 0;
    a8 = n % 13 == 0;
    a9 = n % 19 == 0;
    a10 = n % 23 == 0;
    if (a1+a2+a3+a4+a6+a7+a8+a9==2 && a10==0)
    {
        printf("\n\nThe number is special number ");
        right = right +1;
    }

    else
    {
       printf("\n\nThe number is not special number ");
       wrong = wrong+1;
    }

    }
        printf("\n\n%d Time get Special number ",right);
        printf("\n\n%d Time get not Special number ",wrong);
    return 0;
}
