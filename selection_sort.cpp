/* program to sort elements of an array using selection sort*/
#include<stdio.h>
int  main( )
{
    int i,j,t,n,min,a[10];
    printf("\n How many elements you want to sort? ");
    scanf("%d",&n);
    printf("\Enter elements for an array:");
    for(i=0; i<n; i++)
        scanf("%d",&a[i]);
    for(i=0; i<n; i++)
    {
        min=i;
        for(j=i+1; j<n; j++)
            if(a[j] < a[min])
            {
                min=j;
            }
        t=a[i];
        a[i]=a[min];
        a[min]=t;
    }
    printf("\nAfter sorting the elements are:");
    for(i=0; i<n; i++)
        printf("%d ",a[i]);
}

