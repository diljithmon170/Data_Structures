#include<stdio.h>
void print_array(int a[],int n)
{
    int i;
    for(i=0;i<n;i++)
    printf("%d ",a[i]);
}
void ins_sort(int a[],int n)
{
    int i,j,x;
    for(i=0;i<n;i++)
    {
        x=a[i];
        for(j=i-1;j>=0;j--)
        if(x<a[j])
        a[j+1]=a[j];
        else
        break;
        a[j+1]=x;
    }
}
void main()
{
    int n,i,a[100];
    printf("enter the size of the array");
    scanf("%d",&n);
    printf("enter the elments");
    for(i=0;i<n;i++)
    {
    scanf("%d",&a[i]);
    }
    printf("the unsorted array is");
    print_array(a,n);
    ins_sort(a,n);
    printf("\n the sorted array is");
    print_array(a,n);
}