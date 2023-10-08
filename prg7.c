#include <stdio.h>
int main()
{
    int i,j,n,t;
    printf("Enter the size of array \n");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        printf("Enter any number \n");
        scanf("%d",&t);
        a[i]=t;
    }
    printf ("Origianl array : \n");
    for(i=0;i<n;i++)
    {
        printf("%d \n",a[i]);
    }
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
    }
    printf("Sorted array : \n");
    for(i=0;i<n;i++)
    {
        printf("%d \n",a[i]);
    }
    return 0;
}