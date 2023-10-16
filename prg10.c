#include <stdio.h>
int main()
{
    int i,n,m,j;
    printf("enter the size of array \n");
    scanf("%d %d",&n,&m);
    int a[n][m];
    int b[m][n];

    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("enter any number \n");
            scanf("%d",&a[i][j]);
        }
    }
    printf("ORIGINAL ARRAY \n");
        for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
     printf("\n");
     for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            b[i][j]=a[j][i];
        }
    }
       printf("ARRANGED ARRAY \n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }
    return 0;
}