#include<stdio.h>
int main()
{
    int n;
    FILE *pf;
    pf = fopen("newfile.txt","w");
    scanf("%d",&n);
    fprintf(pf,"%d",n);
    fclose(pf);
    pf=fopen("newfile.txt","r");
    fscanf(pf,"%d",&n);
    printf("%d",n);
    fclose(pf);
}
