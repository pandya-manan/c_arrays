#include<stdio.h>
void removeArrayElement(int arr[],int ele,int n);
int main()
{
    int n;
    printf("Enter the size of the array\n");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        printf("Enter the element for position %d ",(i+1));
        scanf("%d",&arr[i]);

    }
    int element;
    printf("Enter the element which needs to be removed from the array\t");
    scanf("%d",&element);
    removeArrayElement(arr,element,n);
    return 0;
}

void removeArrayElement(int arr[],int ele,int n)
{
    for (int j=0;j<n;j++)
    {
        if(arr[j]!=ele)
        {
            printf("%d ",arr[j]);
        }
    }
}