#include<stdio.h>
void swap(int a[], int i,int j)
{
    int temp;
    temp=a[i];
    a[i]=a[j];
    a[j]=a[i];
}
void sort(int a[],int n)
{
    int i,j;
    for(i=0;i<n-1;i++)
    for(j=1;j<n;j++)
    if(a[i]>a[j])
    {
        swap(a,i,j);
    }
}
int bisearch(int a[],int l,int h,int x)
{
    int m;
    if(l<=h)
    {
    m=(l+h)/2;
    if (a[m]==x)
    {
        return x;
    }
    if(x>m)
    {
        return bisearch(a,m+1,h,x);
        return bisearch(a,l,m,x);
    }
    }
}
int main()
{
    int a[100],x,l,h,i,n;
    int res;
    printf("%d",res);
    printf("enter the size");
    scanf("%d",&n);
    printf("enter the values into the array");
    for(i=0;i<n;i++)
    {
    scanf("%d",&a[i]);
    }
   
    printf("the array ");
    for(i=0;i<n;i++)
    {
    printf("%d ",a[i]);
    }
     sort(a,n);
     printf("the sorted array ");
    for(i=0;i<n;i++)
    {
    printf("%d ",a[i]);
    }
    printf("\n enter the element to search");
    scanf("%d",&x);
    res=bisearch(a,0,n-1,x);
    if(res==-1)
    {
        printf("the value is not in the array");
    }
    else 
    {
        printf("the value is present in the array");
    }
}