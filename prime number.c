#include<stdio.h>
void main()
{
    int n, c;
    printf("Enter a number to check if it is prime\n");
    scanf("%d",&n);
    for (c=2;c<n;c++)
    {
        if (n%c==0 )
    {
         printf("%d is not prime.\n",n);
    break;
    }
    }
    if (c==n)
    printf("%d is prime.\n",n);
  }
