#include <stdio.h>
int main()
{
    int no,i,flag;
    flag=0;
    printf("Enter a number >>");
    scanf("%d",&no);
    for(i=1;i<no;i++)
    {
        if(i*(i+1)==no)
        {
            flag++;
        }
    }
    if(flag!=0)
    {
        printf("%d is a Pronic number ",no);
    }
    else
    {
        printf("%d is not a Pronic number ",no);
    }
return 0;
}