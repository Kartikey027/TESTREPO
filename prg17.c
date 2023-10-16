#include <stdio.h>
int main()
{
    int no,x;
    printf("Enter any number >>");
    scanf("%d",&no);
    x=no%10;
    if(no%7==0 || x==7)
    {
        printf("%d is a Buzz Number ",no);

    }
    else
    {
        printf("%d is not a Buzz number ",no);
    }
    return 0;
}