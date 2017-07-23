#include <stdio.h>
#include <stdlib.h>
#define N 40

int main()
{
    int f[N]={0,1} , i,j ;

    for( i=2;i<N;i++)
    f[i]= f[i-1]+f[i-2];

    for(j=0;j<N;j++)
    printf("%d:\n",f[j]);
    return 0;

}
