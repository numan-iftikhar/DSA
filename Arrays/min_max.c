#include <stdio.h>
#include <conio.h>
#define SIZE 5
int main()
{
    int n, min, max;
    for (int i = 0; i < SIZE; i++)
    {
        printf("Enter number %d: ", i+1);
        scanf("%d", &n);

        if (i == 0)
            min = max = n;
        if (max < n)
            max = n;
        if (min > n)
            min = n;
    }
    
    printf("\nMininum: %d", min);
    printf("\nMaximun: %d", max);

    return 0;
}