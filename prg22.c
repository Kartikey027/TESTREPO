#include <stdio.h>
int main()
{
    int i,j,k;
    int sp=3;
    for(i=1;i<=7;i=i+2)
    {
        for(k=1;k<=sp;k++)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
        sp--;
    }
    return 0;
}