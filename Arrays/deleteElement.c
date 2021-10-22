#include<stdio.h>
int deleteEle(int arr[] , int n, int x)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(arr[i] == x)
        break;
    }
    if(i==n)
    return n;
    for (int j = i; j < n-1; j++)
    {
        arr[j]=arr[j+1];
    }
    return n-1;
    
}
int main()
{
    int n,cap;
    printf("Enter the capacity of the array.\n");
    scanf("%d" ,&cap );
    getchar();
    printf("Enter the number of elements of the array.\n");
    scanf("%d" , &n);
    getchar();
    int a[cap];
     printf("Enter the elements of the array.\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the number to be deleted.\n");
    int x;
     scanf("%d",&x);
    getchar();
    int k=deleteEle(a,n,x);
    printf("Array after deletion.\n");
    for(int i=0;i<k;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
