#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 2, 4, 32, 1, 2, 34, 52, 3};
    int size = sizeof(arr) / sizeof(int);

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " | ";
    }

    return 0;
}