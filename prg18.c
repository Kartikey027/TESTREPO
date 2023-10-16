#include <stdio.h>
#include <math.h>
int main()
{
    int i,no,x,l,sq;
    printf("enter any number >>");
    scanf("%d",&no);
    i=no;
    l=0;
    while(i>0)
    {
       i=i/10;
       l++;
    }
    sq=pow(no,2);
    i=pow(10,l);
    if(sq%i==no)
    {
        printf("%d is an Automorphic number ",no);
    }
    else
    {
       printf("%d is not an Automorphic number ",no);
    }
    return 0;

}