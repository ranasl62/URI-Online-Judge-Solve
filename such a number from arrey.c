#include<stdio.h>
int main()
{
    int array[100],i,lok,key,ch,n;

    scanf("%d",&n);

    for(i=0;i<n;i++)

        scanf("%d",&array[i]);

        scanf("%d",&key);

        ch=0;

    for(i=0;i<n;i++)

    {
        if(array[i]==key)
            {
                ch=1;

                lok=i+1;

            }
    }
        if(ch==1)

            printf("%d",lok);

            else

                printf("No match");

    return 0;

}
