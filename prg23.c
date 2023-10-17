#include <stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            if(j==i)
            {
                printf("*");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    for(i=4;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
            if(j==i)
            {
                printf("*");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    for(i=2;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            if(i==j)
            {
                printf("*");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}