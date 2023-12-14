#include<stdio.h>
float calculateAverage(int arr[]);
int main()
{
    int arr[10];
    for(int i=0;i<10;i++)
    {
        printf("Enter the element for position %d\t",(i+1));
        scanf("%d",&arr[i]);
    }
    float avg=calculateAverage(arr);
    printf("The average of all the elements in the array is %0.2f",avg);
    return 0;

}

float calculateAverage(int arr[])
{
    int n=10;
    int sum=0;
    for(int i=0;i<10;i++)
    {
        sum=sum+arr[i];
    }
    float avg=(float)sum/n;
    return avg;
}