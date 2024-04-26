#include <stdio.h>
#include <stdlib.h>
int q[20],end=-1,front=-1;
void enqueue(int no)
{
    if(end==-1)
    {
        end=front=0;
        q[end]=no;
    }
    else if(front==0 && end==19)
    {
        printf("Overflow\n");
    }
    else if(front==0 && end<19)
    {
        end++;
        q[end]=no;
    }
    else if(front>0 && end==19)
    {
        end=0;
        q[end]=no;
    }
    else if(front >0 && end==front-1)
    {
        printf("Overflow \n");
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
    else if(end==front)
    {
        printf("Element deleted is %d\n",q[front]);
        front=end=-1;
    }
    else if(front==19)
    {
        printf("Element deleted is %d\n",q[front]);
        front=0;
    }
    else
    {
        printf("Element deleted is %d\n",q[front]);
        front++;
    }
}
void display()
{
    printf("The queue is:");
    if(end==-1)
    {
        printf("Underflow\n");
    }
    else if(front<=end)
    {
        for(int i=front;i<=end;i++)
        {
            printf("%d ",q[i]);
        }
    }
    else
    {
        int i;
        for(i=front;i<20;i++)
        {
            printf("%d ",q[i]);
        }
        for(i=0;i<=end;i++)
        {
            printf("%d ",q[i]);
        }
    }
    printf("\n");
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
