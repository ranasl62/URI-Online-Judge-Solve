#include<stdio.h>
int main ()
{
    int sd,sh,sm,ss,ed,eh,em,es,rd,rh,rm,rs;
    scanf("Dia %d",&sd);
    scanf("%d : %d : %d\n",&sh,&sm,&ss);
    scanf("Dia %d",&ed);
    scanf("%d : %d : %d",&eh,&em,&es);
    rd=ed-sd;
    rh=eh-sh;
    rm=em-sm;
    rs=es-ss;
    if(rh<0)
    {
        rh=24+(eh-sh);
        rd--;
    }
    if (rm<0)
    {
        rm=60+em-sm;
        rh--;
    }
    if(rs<0)
    {
        rs=60+es-ss;
        rm--;
    }
    printf("%d dia(s)\n",rd);
    printf("%d hora(s)\n",rh);
    printf("%d minuto(s)\n",rm);
    printf("%d segundo(s)\n",rs);
    return 0;
}
