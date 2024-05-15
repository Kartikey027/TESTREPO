#include <stdio.h>
#include <stdlib.h>

struct node
{
    int marks;
    struct node *next;
};

struct node *head=NULL;

void enqueue()
{
    struct node *ptr;
    struct node *temp;
    ptr=(struct node*)malloc(sizeof(struct node));
    printf("Enter marks >>");
    scanf("%d",&ptr->marks);
    if(head==NULL)
    {
        head=ptr;
        ptr->next=NULL;
    }
    else{
        temp=head;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=ptr;
        ptr->next=NULL;
    }

}
void dequeue()
{
    struct node *ptr,*temp;
    if(head==NULL)
    {
        printf("UnderFlow\n");
    }    
    else if(head->next==NULL)
    {
        temp=head;
        printf("The deleted marks are >>%d\n",temp->marks);
        head=NULL;
        free(temp);
    }
    else{
        temp=head;
        ptr=temp->next;
        printf("The deleted marks are >>%d \n",temp->marks);
        head=ptr;
        free(temp);
    }
}

void traverse()
{
    struct node*temp;
    temp=head;
    if(temp==NULL)
    {
        printf("UnderFlow \n");
    }
    else{
        while(temp!=NULL)
        {
            printf("%d ",temp->marks);
            temp=temp->next;
        }
        printf("\n");
    }
}

int main()
{
    int ch;
    do
    {
        printf("Enter 1 for Enqueue\nEnter 2 for Dequeue \nEnter 3 for Traversal\nEnter Your choice >>");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:enqueue(); printf("\n"); break;
            case 2:dequeue(); printf("\n"); break;
            case 3:traverse(); printf("\n"); break;
            default: printf("Exited due to wrong choice \n"); exit(0);
        }
    } while (1);
    return 0;
    
}