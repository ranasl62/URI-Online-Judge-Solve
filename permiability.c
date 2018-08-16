#include<stdio.h>
int main()
{
    char s[100];
    int len,i,half,ch,n;
    while(scanf("%s",s)!=EOF)
    {
        len=strlen(s);
        half=len/2;
        len--;
        ch=1;
        for(i=0; i<half; i++)
            if(s[i]!=s[len-i])
            {
                ch=0;
                break;
            }

        if(ch)
            printf("palindrome\n");
        else
            printf("Not palindrome\n");
    }
    return 0;
}
