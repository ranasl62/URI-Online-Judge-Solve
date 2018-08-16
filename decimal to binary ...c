#include<stdio.h>
int main()
{
int dec,i=1,rem,res=0;
printf("Enter the Value ");
scanf("%d",&dec);
while(dec!=0)
{
res=res+(i * (rem=dec%2));
dec=dec/2;
i=i*10;
}
printf("\nThe Binary value is %d\n",res);
}
