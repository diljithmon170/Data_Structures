#include<stdio.h>
int top,n,i,choice,x,a[100];
void pop();
void push();
void display();
int main()
{
    top=-1;
    printf("enter the size of the stack");
    scanf("%d",&n);
   
    do
    {
        printf("\n stack operations...\n");
        printf("1.Push \n 2.Pop \n 3.Display \n 4.Exit\n");
        printf("\n enter the choice\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            {
                push();
                break;
            }
            case 2:
            {
                pop();
                break;
            }
            case 3:
            {
                display();
                break;
            }
            case 4:
            {
                printf("\nexited");
                break;
            }
            default:
            {
                printf("enter the correct choice");
                break;
            }
        }
    }
    while(choice!=4);
    return 0;
}
void push()
{
    if(top<n)
    {
    int x;
    printf("\n enter the value to be pushed");
    scanf("%d",&x);
    top++;
    a[top]=x;
    }
    else
    {
        printf("stack is overflow");
    }
}
void pop()
{
    if(top==-1)
    {
    printf("the stack is unserflow");
    }
    else
    {
        printf("the element is popped from the stack is %d",a[top]);
        top--;
    }
}
void display()
{
    if(top>=0)
    {
        printf("\n the elements are");
        for(i=top;i>=0;i--)
        {
        printf("\n %d",a[i]);
        }
    }
        else
        {
            printf("the stack is empty");
        }
    
}