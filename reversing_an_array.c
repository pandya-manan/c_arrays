#include<stdio.h>
void reverseArray(int arr[],int start, int end);
void printElements(int arr[],int n);
int main()
{
    int n;
    printf("Enter the number of elements\n");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        printf("Enter the elements of the array for position %d ",(i+1));
        scanf("%d",&arr[i]);
    }
    printf("The array before reversal\t");
    printElements(arr,n);
    reverseArray(arr,0,n-1);
    printf("The array after reversal\t");
    printElements(arr,n);
    return 0;
}

void reverseArray(int arr[],int start, int end)
{
    int temp;
    while(start<end)
    {
        int temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
}

void printElements(int arr[],int n)
{
    for(int y=0;y<n;y++)
    {
        printf("%d ",arr[y]);
    }
    printf("\n");
}