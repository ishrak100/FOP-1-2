#include <stdio.h>
void removeDuplicates(int arr[], int *n)
{
    int i, j, k;
    int count = 0;
    for (i = 0; i < *n - 1; i++)
    {
        for (j = i + 1; j < *n; j++)
        {
            if (arr[i] == arr[j])
            {
                for (k = j; k < *n - 1; k++)
                {
                    arr[k] = arr[k + 1];
                }
                j--;
                (*n)--;
            }
        }
    }
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
    removeDuplicates(arr, &n);
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}