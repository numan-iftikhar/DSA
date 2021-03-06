#include <stdio.h>

/* insertion in arrays */

void display(int arr[], int n)
{
    // traversal
    printf("Traversing...\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d | ", arr[i]);
    }
    printf("\n");
}

int indexInsertion(int arr[], int size, int element, int index, int capacity)
{
    // insertion
    if (size >= capacity)
    {
        return -1; // no insertion
    }

    for (int i = size - 1; i >= index; i--)
    {
        arr[i + 1] = arr[i]; // moving element one index forward for making space for new element
    }
    arr[index] = element;
    return 1; //tells successful completion
}

int main()
{
    system("cls");

    int arr[100] = {7, 8, 12, 27, 88};
    int size = 5;

    printf("Array before insertion\n");
    display(arr, size);

    indexInsertion(arr, size, 25, 3, 100); //calling insertion function

    printf("Array after insertion\n");
    size += 1;          //incrementing size
    display(arr, size); //printing first six elements of inserted array

    return 0;
}