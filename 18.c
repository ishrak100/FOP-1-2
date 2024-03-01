#include <stdio.h>

int findSecondLargest(int arr[], int n)
{
    int max, max2, i;
    max = arr[0];
    for (i = 1; i < n; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    max2 = arr[0];
    for (i = 0; i < n; i++)
    {
        if (max == arr[i])
        {
            if (i == 0)
            {
                max2 = arr[i + 1];
            }
            else
                max2 = arr[i - 1];
        }
        else if (max2 < arr[i])
        {
            max2 = arr[i];
        }
    }
    return max2;
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
    printf("%d\n", findSecondLargest(arr, n));
    return 0;
}
