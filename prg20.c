#include <stdio.h>
int main()
{
    int no,sq,x,sum;
    sum=0;
    printf("Enter any Number >>");
    scanf("%d",&no);
    sq=no*no;
    while(sq>0)
    {
        x=sq%10;
        sq=sq/10;
        sum+=x;
    }
    if(no==sum)
    {
        printf("%d is a Neon number ",no);

    }
    else
    {
        printf("%d is not a Neon number ",no);
    }
    return 0;
}