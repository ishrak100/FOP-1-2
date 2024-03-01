#include <stdio.h>

void shiftArrayRight(int arr[], int n)
{
    int t;
    t = arr[n - 1];
    for (int i = n-1; i >=0; i--)

        arr[i + 1] = arr[i];

    arr[0] = t;
}

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    shiftArrayRight(arr, n);
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
