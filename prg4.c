#include <stdio.h>
int main()
{
    int a,b,c;
    printf("enter three numbers \n");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b)
    {
        if(a>c)
        {
            printf("%d is biggest of all numbers \n",a);

        }
        else
        {
            printf("%d is biggest of all numbers \n",c);
        }
    }
    else
    {
        if(b>c)
        {
            printf("%d is biggest of all numbers \n",b);

        }
        else
        {
            printf("%d is biggest of all numbers \n",c);
        }
    }
    return 0;
}