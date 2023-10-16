#include <stdio.h>
int main()
{
    int n;
    printf("enter the length of array \n");
    scanf("%d",&n);
    int a[n];
    int i;
    for(i=0;i<n;i++)
    {
        printf("enter any number >>");
        scanf("%d",&a[i]);
    }
    printf("ORIGINAL ARRAY \n");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
    int j,x,max,count,c;
    count=0;
    c=1;
    for(i=0;i<n;i++)
    {
        x=a[i];
        for(j=i+1;j<n;j++)
        {
            if(x==a[j])
            {
                c++;
            }
        }
        if(c>count)
        {
            max=x;
            count=c;
        }
        c=1;
    }
    printf("the maximum occuring element is %d with frequency %d",max,count);
    return 0;
    
}