#include <stdio.h>
#include <stdlib.h>
int q[20],front=-1,end=-1;
void enqueue(int no)
{
    if(end==19)
    {
        printf("Overflow\n");
    }
    else if(end==-1)
    {
        front=end=0;
        q[end]=no;
    }
    else
    {
        end++;
        q[end]=no;
    }
}
void dequeue()
{
    if(front==-1)
    {
        printf("Underflow\n");
    }
    else if(front==end)
    {
        printf("The deleted element is %d\n",q[front]);
        end=front=-1;
    }
    else{
        printf("The deleted element is %d\n",q[front]);
        front++;
    }
}
void display()
{
    if(front==-1 || front>end)
    {
        printf("Underflow\n");
    }
    else{
    printf("The queue is as follows :");
    for(int i=front;i<=end;i++)
    {
        printf("%d  ",q[i]);
    }
    printf("\n");
    }
}
int main()
{
    int no,ch;
    while(1)
    {
        printf("Enter 1 for insertion\nEnter 2 for Deletion\nEnter 3 for Traversal\nEnter 4 to exit\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:printf("Enter the number to be entered >>");
            scanf("%d",&no);
            enqueue(no);
            break;

            case 2:dequeue();
                break;
            case 3:display();
            break;
            case 4:exit(0);
        }
    }
    return 0;
}