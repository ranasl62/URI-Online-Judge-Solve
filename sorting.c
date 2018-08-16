#include<stdio.h>
int main()
{
    int i,j,n,temp,a[100];
    printf("How many number you want to sorting \n\n\n");
    scanf("%d",&n);
    printf("\n\n\nEnter the numbers\n\n\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
        {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }

        }
    }
    printf("\n\n\nThe sorting according to the order \n\n\n");
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
        printf("\n\n\n");
}
