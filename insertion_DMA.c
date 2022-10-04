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
    int *arr, size, index;
    printf("enter the size of array: ");
    scanf("%d", &size);
    arr = malloc(size*sizeof(int));
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
    printf("\nEnter the index of element which to be deleted: ");
    scanf("%d", &index);
    deletion(arr, size,index);
    free(arr);
return 0;
}