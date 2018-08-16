/*1. Three numbers are input through keyboard. Write a program to find out the
maximum and minimum of these 3 numbers.*/
   #include<stdio.h>
    void main()
    {
        int a,b,c;
        printf("\n Please enter the value of A: ");
        scanf("%d",&a);
        printf("\n Please enter the value of B: ");
        scanf("%d",&b);
        printf("\n Please enter the value of C: ");
        scanf("%d",&c);
        if (a<b && a<c)
            printf("\n %d is Minimum which is value of A",a);
        else if(b<a && b<c)
            printf("\n %d is Minimum which is value of B",b);
        else
            printf("\n %d is Minimum which is value of C",c);

        if (a>b && a>c)
            printf("\n\n %d is Maximum which is value of A",a);
        else if(b>a && b>c)
            printf("\n\n %d is Maximum which is value of B",b);
        else
            printf("\n\n %d is Minimum which is value of C",c);

    }
