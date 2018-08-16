#include<stdio.h>
int main()
{
    int i,j,temp,b,c,d,a[3];
    for(i=0;i<3;i++)
        scanf("%d",&a[i]);
        b=a[0];
        c=a[1];
        d=a[2];
    for(i=0;i<2;i++)
    {
        for(j=i+1;j<3;j++)
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
    }
    for(i=0;i<3;i++)
        printf("%d\n",a[i]);
        printf("\n%d\n%d\n%d\n",b,c,d);
    return 0;
}
