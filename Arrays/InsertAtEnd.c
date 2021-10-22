#include <stdio.h>
int insertAtEnd(int arr[] , int size, int n , int x)
{
    if(n==size)
    return n;
    else
    {
    arr[n]=x;
    return (n+1);
    }
}
int main()
{
    int size;
    printf("Enter the maximum size of the array.\n");
    scanf("%d" ,&size);
    getchar();
    int n;
    printf("\nHow many elements do you want to enter?\n");
    scanf("%d" , &n);
    getchar();
    int a[size];
    for(int i=0;i<n;i++)
    {
        scanf("%d" , &a[i]);
    }
    printf("\nEnter the element you want to add at the end\n");
    int x;
    scanf("%d" , &x);
    getchar();
    int k=insertAtEnd(a,size,n,x);
    printf("Array after insertion.\n");
    for(int i=0;i<k;i++)
    {
        printf("%d " , a[i]);
    }
}