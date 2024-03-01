#include <stdio.h>

int findSmallest(int arr[], int n)
{
    int min, i;
    min = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (min > arr[i])
        {
            min = arr[i];
        }
    }
    return min;
}

int findLargest(int arr[], int n)
{
  int max, i;
    max = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    return max;  
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
    printf("Smallest: %d\n", findSmallest(arr, n));
    printf("Largest: %d\n", findLargest(arr, n));
    return 0;
}
