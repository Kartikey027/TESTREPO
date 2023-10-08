#include <stdio.h>
int main()
{
   int i,n;
   printf("enter the size of array \n");
   scanf("%d",&n);
   int a[n];
 
   for(i=0;i<n;i++)
   {
     printf("Enter any number \n");
     scanf("%d",&a[i]);
   }
   printf("Original array : \n");
 
   for(i=0;i<n;i++)
   {
     printf("%d \n",a[i]);
   }

   int x;
   int f=0;
   printf("enter the value to search in the array \n");
   scanf("%d",&x);
 
   for(i=0;i<n;i++)
   {
     if(a[i]==x)
     {
        printf("%d is found at index %d",x,(i+1));
        f++;
     }
   }
   if(f==0)
   {
    printf("%d not found in the array",x);
   }
   return 0;
}