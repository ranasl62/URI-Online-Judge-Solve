#include<stdio.h>
int main()
{
    int a[100],i,j,temp,t;
    for(i=0; i<100; i++)
        scanf("%d",&a[i]);
    temp=a[0];
    for(i=0; i<100; i++)
    {
        for(j=i+1; j<100; j++)
            if(temp<a[j])
            {
                temp=a[j];
                t=j+1;
            }


    }
    printf("%d\n%d\n",temp,t);
    return 0;
}
