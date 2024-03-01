#include <stdio.h>

void mergeSortedArrays(int arr1[], int n1, int arr2[], int n2, int arr3[])
{
    int i = 0, j = 0, k = 0;
    while (i < n1 && j < n2)
    {
        if (arr1[i] < arr2[j])
        {
            arr3[k] = arr1[i];
            i++;
        }
        else
        {
            arr3[k] = arr2[j];
            j++;
        }
        k++;
    }
    if (i >= n1)
    {
        while (j < n2)
        {
            arr3[k] = arr2[j];
            k++;
            j++;
        }
    }
    if (j >= n2)
    {
        while (i < n1)
        {
            arr3[k] = arr1[i];
            k++;
            i++;
        }
    }
}

int main()
{
    int n1, n2;
    scanf("%d", &n1);
    int arr1[n1];
    for (int i = 0; i < n1; i++)
    {
        scanf("%d", &arr1[i]);
    }
    scanf("%d", &n2);
    int arr2[n2];
    for (int i = 0; i < n2; i++)
    {
        scanf("%d", &arr2[i]);
    }
    int arr3[n1 + n2];
    mergeSortedArrays(arr1, n1, arr2, n2, arr3);
    for (int i = 0; i < n1 + n2; i++)
    {
        printf("%d ", arr3[i]);
    }
    printf("\n");
    return 0;
}