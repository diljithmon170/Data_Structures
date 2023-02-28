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
void selection_sort(int a[],int n)
{
    int i,j,k;
    for(i=0;i<n-1;i++)
    {
    k=i;
    for(j=i+1;j<n;j++)
    if(a[k]>a[j])
    k=j;
    if(k!=i)
    swap(a,i,k);
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
    selection_sort(a,n);
    printf("\n the sorted array is");
    print_array(a,n);
}