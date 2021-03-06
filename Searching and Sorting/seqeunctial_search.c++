#include <iostream>
using namespace std;

void print_array(int *, int);
void sequential_search(int *, int);
int main()
{
    // Note: Sorted array is not necessary in linear search 
    int arr[] = {3, 21, 14, 5, 4, 6, 7};
    int s = sizeof(arr) / sizeof(int);

    print_array(arr, s);
    sequential_search(arr, s);

    return 0;
}
void print_array(int *arr, int s)
{
    cout << "Elements of array are:\n";
    for (int k = 0; k < s; k++)
        cout << arr[k] << " | ";
    cout << "\n";
}

void sequential_search(int *arr, int s)
{
    int e, loc = -1;
    cout << "Enter element to search: ";
    cin >> e;

    for (int j = 0; j < s; j++)
    {
        if (arr[j] == e)
        {
            loc = j;
            cout << e << " found at index " << loc << endl;
            break; // to exit loop
        }
    }

    // check if element not found
    if (loc == -1) // if loc is not updated
        cout << e << "is not found in array !!" << endl;
}