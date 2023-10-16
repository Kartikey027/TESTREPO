#include <stdio.h>
int main()
{
    int no,x,flag,t;
    flag=0;
    printf("Enter any number >>");
    scanf("%d",&no);
    t=no;
    while(t>0)
    {
        x=t%10;
        t=t/10;
        if(x==0)
        {
            flag++;
        }
    }
    if(flag!=0)
    {
        printf("%d is an Duck number",no);
    }
    else
    {
        printf("%d is not a Duck number ",no);
    }
    return 0;
}