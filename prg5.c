#include <stdio.h>
int main()
{
    int n,s,x;
    printf("Enter any number \n");
    scanf("%d",&n);
    int t=n;
    s=0;
    while(t>0)
    {
        x=t%10;
        t=t/10;
        s=s*10 + x;
    }
    if(s==n)
    {
        printf("%d is a palindrome number \n",n);
    }
    else
    {
        printf("%d is not a palindrome number \n",n);
    }
    return 0;
}