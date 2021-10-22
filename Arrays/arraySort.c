#include<stdio.h>
#include <stdbool.h>
bool ifSorted(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        if(arr[i]<arr[i-1])
        return false;
    }
    return true;
    
}
int main()
{
    printf("Enter the number of elements of array\n");
    int n;
    scanf("%d",&n);
    getchar();
    int a[n];
    printf("Enter the elements of array\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d" , &a[i]);
    }
    printf("\nThe array is sorted : %d" , ifSorted(a,n));
    return 0;
}
