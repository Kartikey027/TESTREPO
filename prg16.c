#include <stdio.h>
int main()
{
    int no,i,x,t,sum,fac;
    printf("Enter any Number >>");
    scanf("%d",&no);
    t=no;
    sum=0;
    fac=1;
    while(t>0)
    {
       x=t%10;
       t=t/10;
       for(i=1;i<=x;i++)
       {
        fac=fac*i;
       }
       sum+=fac;
       fac=1;
    }
    if(no==sum)
    {
        printf("%d is a Special Number ",no);
    }
    else
    {
        printf("%d is not a Special Number ",no);
    }
    return 0;
}