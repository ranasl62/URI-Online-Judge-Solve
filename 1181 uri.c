#include <stdio.h>
#define max 12
main()
{

  int i,j,L;
  float M[max][max],soma=0;
  char T;

  scanf("%d %c",&L,&T);

  for(i=0; i<max; i++)
  for(j=0; j<max; j++)

  scanf("%f",&M[i][j]);

  for(j=0; j<max; j++) soma = soma+M[L][j];
  if(T=='S'){printf("%.1f\n",soma);}
  else
  {
    if(T=='M'){ printf("%.1f\n",soma/144);}
  }
}
