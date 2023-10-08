#include <stdio.h>
int main()
{
    int a,b,i,gcd;
    printf("enter amy 2 numbers \n");
    scanf("%d %d",&a,&b);
    for(i=1;i<=a;i++)
    {
        if(a%i==0 && b%i==0)
        {
            gcd=i;
        }
    }
    printf("the GCD of %d and %d is %d",a,b,gcd);
    return 0;
}