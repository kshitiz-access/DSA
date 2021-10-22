#include<stdio.h>
int searchEle(int arr[],int n,int x){
    for(int i=0;i<n;i++)
    {
        if(arr[i]==x)
        return i;

    }
    return -1;
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
    printf("Enter the number to be searched.\n");
    int x;
    scanf("%d" , &x);
    getchar();
    int k=searchEle(a,n,x);
    printf("\nindex of searched element is : %d" , k);
    
    return 0;
}
