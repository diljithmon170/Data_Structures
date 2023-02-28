#include<stdio.h>
#include<stdlib.h>
void delete();
void create();
void display();
struct node
{
    int data;
    struct node *next;
};
struct node *start=NULL;
int main()
{
    int choice;
    while(1)
    {
    printf("\nMenu...\n");
    printf("1.Create\n2.Delete\n3.Display\n4.Exit\n");
    printf("enter the choice");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
        {
            create();
            break;
        }
        case 2:
        {
            delete();
            break;
        }
        case 3:
        {
            display();
            break;
        }
        case 4:
        {
            exit(0);
            break;
        }
        default:
        {
            printf("enter the correct choice\n");
        }
    }
    }
    return 0;
}
void create()
{
    int x;
    struct node *newnode,*ptr;
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("\nenter the value");
    scanf("%d",&x);
    newnode->data=x;
    newnode->next=NULL;
    if(start==NULL)
    {
    start=newnode;
    ptr=newnode;
    }
    else
    {
        ptr->next=newnode;
        ptr=newnode;
    }
}
void display()
{
    struct node* ptr;
    if(start==NULL)
    {
        printf("the list is empty");
    }
    else
    {
        ptr=start;
        printf("\nthe elements are");
        while(ptr!=NULL)
        {
            printf("%d->",ptr->data);
            ptr=ptr->next;
        }
    }
    printf("NULL");
}
void delete()
{
    struct node* ptr,*temp;
    ptr=start;
    while(ptr->next!=NULL)
    {
    temp=ptr;
    ptr=ptr->next;
    }
    temp->next=NULL;
    printf("\ndeleted %d ",ptr->data);
    free(ptr);
}