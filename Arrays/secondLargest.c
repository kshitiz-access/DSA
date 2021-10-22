#include<stdio.h>
int secondLargest(int arr[] , int n)
{
    int res=-1,largest=0;
    for(int i=1;i<n;i++)
    {
        if(arr[i]>arr[largest])
        {
            res=largest;
            largest=i;
        }
        else if(arr[i]!=arr[largest])
        {
            if(res==-1 || arr[i]>arr[res])
            res=i;
        }

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
    printf("\nThe second Largest element is at the index : %d " , secondLargest(a,n));
    return 0;
}
