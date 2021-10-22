#include <stdio.h>
int insert(int arr[],int n,int cap,int pos,int x)
{
    if (n==cap)
    {
        return n;
    }
    else
    {
        int ind=pos-1;
        for(int i=n-1;i>=ind;i--)
        {
            arr[i+1]=arr[i];
        }
        arr[ind]=x;
        return (n+1);
    }
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
    int pos;
     printf("Enter the position of new element of the array.\n");
    scanf("%d",&pos);
    getchar();
    int x;
    printf("Enter the new element of the array.\n");
    scanf("%d",&x);
    getchar();
     printf("Enter the elements of the array.\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    int k=insert(a,n,cap,pos,x);
    printf("Array after insertion.\n");
    for(int i=0;i<k;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;

}
