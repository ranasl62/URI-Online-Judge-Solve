#include <stdio.h>
int main()
{
    int sth,stm ,eth,etm, rth,rtm;
    scanf("%d %d %d %d", &sth, &stm,&eth,&etm);
    rth = eth - sth;
    rtm = etm - stm;
    if (rth<=0)
        rth = 24 + (eth - sth);
    if(rtm <=0)
    {
        rtm = 60 + (etm - stm);
        rth=rth-1;

    }
    if(rtm>=60)
    {
        rtm-=60;
    rth++;
    }
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", rth,rtm);
    return 0;
}

