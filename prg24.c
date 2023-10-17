#include <stdio.h>
int main()
{
    int i,j,k;
    i=0;j=1;int sum=0;
    for(k=1;k<=10;k++)
    {printf("%d  ",sum);
       i=j;
       j=sum;
       sum=i+j;

    }
    return 0;
    
}