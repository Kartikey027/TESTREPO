#include <stdio.h>
#include<stdlib.h>

struct node
{
    int marks;
    struct node* next;
    struct node* prev;

};
struct node* head=NULL;

void add_beg()
{
    struct node *ptr,*temp;
    ptr=(struct node*)malloc(sizeof(struct node));
    printf("Enter your marks >>");
    scanf("%d",&ptr->marks);
    ptr->next=NULL;
    ptr->prev=NULL;
    if(head==NULL)
    {
        head=ptr;
    }
    else
    {
        temp=head;
        temp->prev=ptr;
        ptr->next=temp;
        head=ptr;
    }
}

void traverse()
{
    if(head==NULL)
    {
        printf("Underflow \n");
    }
    else
    {
        struct node *temp;
        temp=head;
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
    while(1)
    {
        printf("Enter 1 for insertion at the beginning \n");
        printf("Enter 2 for traversal \n");
        printf("Enter your choice >>");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:add_beg(); printf("\n");
            break;

            case 2:printf("The list is >>");
            traverse(); printf("\n");
            break;

            default: printf("Exited the program :-)");
            exit(0);
        }
    }
    return 0;
}