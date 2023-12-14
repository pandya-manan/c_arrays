#include<stdio.h>
void reverseString(char arr[],int end);
int main()
{
    int n;
    printf("Enter the size of the word ");
    scanf("%d",&n);
    char word[n];
    printf("Enter the word\n");
    scanf("%s",&word);
    printf("The string before reversing %s \n",word);
    reverseString(word,n-1);
    printf("The string after reversing %s",word);
    return 0;
}

void reverseString(char arr[],int end)
{
    char temp;
    int start=0;
    while(start<end)
    {
        temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
}