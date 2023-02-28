#include<stdio.h>
void swap(int a[], int i,int j)
{
    int temp=a[i];
    a[i]=a[j];
    a[j]=temp;
}
void print_array(int a[],int n)
{
    int i;
    for(i=0;i<n;i++)
    printf("%d ",a[i]);
}
void bubble_sort(int a[],int n)
{
    int i,j,k;
    for(i=0;i<n-1;i++)
    for(j=0;j<n-i-1;j++)
    if(a[j]>a[j+1])
    swap(a,j,j+1);
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
    bubble_sort(a,n);
    printf("\n the sorted array is");
    print_array(a,n);
}