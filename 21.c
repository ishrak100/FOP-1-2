#include <stdio.h>

int hasPairWithSum(int arr[], int n, int sum)
{
    int i, j, count = 0;
    for (int i = 0; i<n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i] + arr[j] == sum)
            {
                return 1;
            }
        }
    }

    return 0;
}

int main()
{
    int n, sum;
    scanf("%d %d", &n, &sum);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("%d\n", hasPairWithSum(arr, n, sum));
    return 0;
}
