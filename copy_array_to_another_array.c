#include<stdio.h>
void copyElements(int arr[],int arr2[],int n);
void printElements(int arr[],int n);
int main()
{
    int n;
    printf("Enter the size of the array\n");
    scanf("%d",&n);
    int arr[n],arr2[n];
    for(int i=0;i<n;i++)
    {
        printf("Enter the element for the position %d ",(i+1));
        scanf("%d",&arr[i]);
    }
    printf("The elements in the main array are\n");
    printElements(arr,n);
    copyElements(arr,arr2,n);
    printf("The elements in the duplicated array are\n");
    printElements(arr2,n);
    return 0;
}

void copyElements(int arr[],int arr2[],int n)
{
    for(int j=0;j<n;j++)
    {
        arr2[j]=arr[j];
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