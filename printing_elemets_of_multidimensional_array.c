#include<stdio.h>
void printElements(int arr[][10],int n,int m);
void enterElements(int arr[][10],int n,int m);
int main()
{
    int n,m;
    printf("Enter the first dimension ");
    scanf("%d",&n);
    printf("Enter the second dimension ");
    scanf("%d",&m);
    int arr[n][m];
    enterElements(arr,n,m);
    printElements(arr,n,m);
    return 0;
    
}

void enterElements(int arr[][10],int n,int m)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            printf("Enter the element for the position %d %d ",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
}

void printElements(int arr[][10],int n,int m)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}