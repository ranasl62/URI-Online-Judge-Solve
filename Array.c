#include<stdio.h>
long int board[6][5]={{1,2,3,4,-10},{6,6,4},{5,6,-1},-1,-1,-1};
int main()
{
    int row,col;
    for (row=3;row>=-3;row--)
    {
        for(col=0;col<=4;col++)

            printf("%3d",board[col][abs(row)]);
       /// else
             ///printf("%3d",board[row][col]);
        printf("\n");
    }
}
