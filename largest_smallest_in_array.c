#include<stdio.h>
int largestElement(int arr[]);
int smallestElement(int arr[]);
int main()
{
    int arr[10];
    for(int i=0;i<10;i++)
    {
        printf("Enter the element for position %d\n",(i+1));
        scanf("%d",&arr[i]);
    }
    int maximum=largestElement(arr);
    int minimum=smallestElement(arr);
    printf("The largest element in the array is %d\n",maximum);
    printf("The smallest element in the array is %d",minimum);
    return 0;

}

int largestElement(int arr[])
{
    int max=arr[0];
    for(int i=0;i<10;i++)
    {
        if(arr[i]>max)
        max=arr[i];
    }
    return max;
}

int smallestElement(int arr[])
{
    int min=arr[0];
    for(int i=0;i<10;i++)
    {
        if(arr[i]<min)
        min=arr[i];
    }
    return min;
}