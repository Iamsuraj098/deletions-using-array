#include<stdio.h>
#include<stdlib.h>
void deletion(int arr[],int size,int index)
{
    for (int i = 0; i < size; i++)
    {
        if (i >= index)
        {
            arr[i] = arr[i+1];
        }
    }
    printf("New array will be: \n");
    for (int i = 0; i < size-1; i++)
    {
        printf("%d ", arr[i]);
    }
    
}
int main()
{
    int arr[50], size, index;
    printf("enter the size of array: ");
    scanf("%d", &size);
    printf("enter the array: \n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Array wili be: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\nEnter the index which going to delete: ");
    scanf("%d", &index);
    deletion(arr, size, index);
return 0;
}