#include<stdio.h>
int a[100],i,n,choice,front,rear,x;
void dequeue();
void enqueue();
void display();
int main()
{
    front=rear=-1;
    printf("enter the size of the queue");
    scanf("%d",&n);
    do
    {
    printf("\n queue operations....\n");
    printf("\n 1.Enqueue \n 2.Dequeue \n 3.Display \n 4.Exit \n");
    printf("\n enter the choice\n");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
        {
            printf("enter the value to be enqueue");
            scanf("%d",&x);
            enqueue(x);
            break;
        }
        case 2:
        {
            dequeue();
            break;
        }
        case 3:
        {
            display();
            break;
        }
        case 4:
        {
            printf("\n exit");
            break;
        }
        default:
        {
            printf("enter the correct choice\n");
        }
    }
    }
    while(choice!=4);
    return 0;
}
void enqueue(int x)
{
    if(rear==-1)
    {
        rear++;
        a[rear]=x;
        front++;
    }
    else if(rear==n-1)
    {
        printf("queue is full");
    }
    else
    {
        rear++;
        a[rear]=x;
    }
}
void dequeue()
{
    if(front==-1)
    {
        printf("queue is empty");
    }
    else
    {
        printf("the element %d is dequeued from the array",a[front]);
        front--;
        
    }
}
void display()
{
    if(rear==-1)
    {
        printf("\n the queue is empty");
        
    }
        else
        {
        printf("\n the queues are");
        for(i=front;i<=rear;i++)
        {
        printf("%d ",a[i]);
        }
        }
    
}