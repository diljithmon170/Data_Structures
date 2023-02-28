#include<stdio.h>
void swap(int *i,int *j)
{
    int temp;
    temp=*i;
    *i=*j;
    *j=temp;  
}
int partition(int a[],int low,int high)
{
    int pivot=a[high];
    int i=(low-1);
    for(int j=low;j<high;j++)
    {
        if(a[j]<=pivot)
        {
            i++;
            swap(&a[i],&a[j]);
        }
    }
    swap(&a[i+1],&a[high]);
    return(i+1);
}
void quicksort(int a[],int low,int high)
{
    if(low<high)
    {
        int pi=partition(a,low,high);
        quicksort(a,pi+1,high);
        quicksort(a,low,pi-1);
    }
}
int main()
{
    int n,i,a[100];
    printf("enter the size of the array");
    scanf("%d",&n);
    printf("enter the elements into the array");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("unsorted array is ");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    quicksort(a,0,n-1);
    printf("the sorted arrays are ");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}