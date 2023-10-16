#include <stdio.h>
int main()
{
    int i,j,k,l,sp;
    sp=0;
    for(i=5;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d",j);
        }
        for(k=1;k<=sp;k++)
        {
            printf(" ");
        }
        sp+=2;
        for(l=i;l>=1;l--)
        {
            printf("%d",l);
        }
        printf("\n");
    }
    sp=8;
    for(i=1;i<=5;i++)
    {
       for(j=1;j<=i;j++)
       {
        printf("%d",j);
       }
       for(k=1;k<=sp;k++)
       {
        printf(" ");
       }
       sp-=2;
       for(l=i;l>=1;l--)
       {
        printf("%d",l);
       }
       printf("\n");
    }
    return 0;
}