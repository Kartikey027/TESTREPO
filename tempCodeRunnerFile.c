#include <stdio.h>
#include <math.h>
int main()
{
    int no,i,x,sum;
    printf("Enter a number >>");
    scanf("%d",&no);
    sum=0;
    i=no;
    while(i>0)
    {
        x=i%10;
        i=i/10;
        sum+=pow(x,3);
    }
    if(sum==no)
    {
        printf("%d is an Angstrom number ",no);
    }
    else
    {
        printf("%d is not an Angstrom number ",no);
    }
    return 0;
}