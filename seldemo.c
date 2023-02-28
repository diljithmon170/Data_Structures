#include<stdio.h>
void swap(int a[],int i,int j)
{
    int temp;
    temp=a[i];
    a[i]=a[j];
    a[j]=temp;
}
void selection_sort(int a[],int n)
{
    int i,j,k;
    for(i=0;i<n-1;i++)
    {
        k=i;
        for(j=i+1;j<n;i++)
        
            if(a[j]<a[k])
            k=j;
            if(k!=i)
            swap(a,i,k);
        
    }
}
void print_array(int a[],int n)
{
    int i;
    for(i=0;i<n;i++)
    printf("%d ",a[i]);
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
    print_array(a,n);
    selection_sort(a,n);
    printf("the sorted arrays are ");
    print_array(a,n);
}