#include<stdio.h>
int largestEle(int arr[],int n)
{
    int res=0;
    for(int i=1;i<n;i++)
    {
        if(arr[i]>arr[res])
        res=i;
    }
    return res;
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
    printf("\nthe largest number is on the index : %d " , largestEle(a,n));
    return 0;
}
