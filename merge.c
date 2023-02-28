#include<stdio.h>
void mergesort();
void merge();
void print_arr(int a[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}
int a[100],b[100];
int main()
{
    int i,n;
    printf("enter the size of the array");
    scanf("%d",&n);
    printf("enter the arrays into the list");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("given array is ");
    print_arr(a,n);
    mergesort(a,0,n-1);
    printf("\n sorted array is ");
    print_arr(a,n);

}
void mergesort(int a[],int l,int h)
{
    int m;
    if(l<h)
    {
        m=(l+h)/2;
        mergesort(a,l,m);
        mergesort(a,m+1,h);
        merge(a,l,m,h);
    }
}
void merge(int a[],int l,int m,int h)
{
    int i,j,k;
    for(i=l,j=m+1,k=l;i<m && j<h;k++)
    {
        if(a[i]<=a[j])
        {
            b[k]=a[i++];
        }
        else
        {
            b[k]=a[j++];
        }
    }
    while(i<m)
    b[k++]=a[i++];
    while(j<m)
    b[k++]=a[j++];
    for(i=l;i<h;i++)
    {
    a[i]=b[i];
    }
}
