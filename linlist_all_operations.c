#include<stdio.h>
#include<stdlib.h>
void create();
void ins_beg();
void ins_pos();
void ins_end();
void del_beg();
void del_pos();
void del_end();
void display();
struct node
{
    int data;
    struct node* next;
};
struct node *start=NULL;
struct node *newnode,*ptr,*pre_ptr,*temp;
int main()
{
    int choice,x,pos,n,i;
    while(1)
    {
        printf("\n..............linked list...........\n");
        printf("\n 1.Create Nodes\n2.Insertion at the begining\n3.Insertion at the position\n4.Insertion at the end\n5.Deletion at the begining\n6.Deletion at the position\n7.Deletion at the end\n8.Display\n9.Exit\n");
        printf("\nEnter your choice\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            printf("enter number of nodes");
            scanf("%d",&n);
            for(i=0;i<n;i++)
            {
                printf("enter the data for node %d :- ",i+1);
                scanf("%d",&x);
                create(x);
            }
            break;
            case 2:
            printf("enter the data to be inserted:- ");
            scanf("%d",&x);
            ins_beg(x);
            break;
            case 3:
            printf("enter the data and the position to be inserted:- ");
            scanf("%d%d",&x,&pos);
            ins_pos(x,pos,n);
            break;
            case 4:
            printf("enter the data to be inserted:- ");
            scanf("%d",&x);
            ins_end(x);
            break;
            case 5:
            del_beg();
            break;
            case 6:
            printf("enter the position to be deleted:- ");
            scanf("%d",&pos);
            del_pos(pos,n);
            break;
            case 7:
            del_end();
            break;
            case 8:
            display();
            break;
            case 9:
            exit(0);
            break;
            default:
            printf("correct number adikkedaaaa... ");
            break;
        }
    }
    return 0;
}
void create(int x)
{
    newnode=(struct node*)malloc(sizeof(struct node));
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
void ins_beg(int x)
{
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=x;
    newnode->next=NULL;
    if(start==NULL)
    {
        start=newnode;
        ptr=newnode;
    }
    else
    {
        ptr=start;
        newnode->data=x;
        newnode->next=ptr;
        start=newnode;
    }
}
void ins_pos(int x,int pos,int n)
{
    int count;
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=x;
    newnode->next=NULL;
    if(start==NULL && pos==1)
    {
        start=newnode;
        ptr=newnode;
    }
    else if(pos==n)
    {
        ins_end(x);
    }
    else
    {
        pre_ptr=start;
        count=1;
        while(pre_ptr->next!=NULL)
        {
            count+=1;
            temp=pre_ptr;
            pre_ptr=pre_ptr->next;
            if(count==pos)
            {
                temp->next=newnode;
                newnode->next=pre_ptr;
            }
        }
    }
}
void ins_end(int x)
{
    newnode=(struct node*)malloc(sizeof(struct node));
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
void del_beg()
{
    if(start==NULL)
    {
        printf("sorry mahn.. list is empty");
    }
    pre_ptr=start;
    temp=pre_ptr->next;
    free(pre_ptr);
    start=temp;
}
void del_pos(int pos,int n)
{
    int count;
    if(pos==1)
    {
        del_beg();
    }
    if(pos==n-1)
    {
        del_end();
    }
    else
    {
        count=0;
        pre_ptr=start;
        while(pre_ptr->next!=NULL)
        {
            count+=1;
            temp=pre_ptr;
            if(count==pos)
            {
                temp=pre_ptr->next;
                free(pre_ptr);
            }
            pre_ptr=pre_ptr->next;
        }

    }
}
void del_end()
{
    ptr=start;
    while(ptr->next!=NULL)
    {
        pre_ptr=ptr;
        ptr=ptr->next;
    }
            pre_ptr->next=NULL;
            free(ptr);
}
void display()
{
    printf("\n the list is :- ");
    ptr=start;
    while(ptr!=NULL)
    {
        printf("%d->",ptr->data);
        ptr=ptr->next;
    }
    printf("NULL");
}