#include<stdio.h>

void swap(int arr[],int i,int j)
{
    int temp;
    temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

int partition(int arr[],int l,int r)
{
    int pivot = arr[r];
    int i = l-1;
    for(int j=l;j<r;j++)
    {
        if(arr[j]<pivot)
        {
            i++;
            swap(arr,i,j);
        }
    }
    swap(arr,i+1,r);
        return i+1;
}

void Quick_Sort(int arr[],int l,int r)
{

    if(l<r)
    {
        int pi = partition(arr,l,r);
        Quick_Sort(arr,l,pi-1);
        Quick_Sort(arr,pi+1,r);
    }
}

void main()
{
    int arr[50],n,i,l,r;
    printf("No.of Elements : ");
    scanf("%d",&n);
    printf("\nElements : ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    l=0;r=n-1;
    Quick_Sort(arr,l,r);
    printf("\nAfter Quick Sort : ");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }

}
