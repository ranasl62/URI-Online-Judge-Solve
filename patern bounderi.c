#include <stdio.h>
int main (void)
{
    int d, dmin,row,col;
    for (row=1;row<=9;row++)
    {
        for (col=1;col<=9;col++)
          {
             dmin=100;
             d=row-1; //from up
        if(d<dmin)
                dmin=d;
        d=9-row; //from down
        if(d<dmin)
             dmin=d;
        d=col-1; //from left
        if(d<dmin) dmin=d;
        d=9-col; //from right
        if(d<dmin)
             dmin=d;
        if(dmin % 2==0)
            printf ("*");
        else
        printf(".");
          }
        printf("\n");
    }
}
