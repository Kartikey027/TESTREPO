#include <stdio.h>
int main()
{
    int n,x,sum,pro,i;
    printf("enter any number >>");
    scanf("%d",&n);
    i=n;
    sum=0;
    pro=1;
    while(i>0)
    {
        x=i%10;
        i=i/10;
        sum+=x;
        pro*=x;
    }
    if(sum==pro)
    {
        printf("%d is a Spy number",n);
    }
    else
    {
        printf("%d is not a Spy number ",n);
    }
    return 0;

}