#include <stdio.h>
#include <stdlib.h>


// Function to count distinct elements in the array
int countDistinct(int arr[], int n)
{
    int count=n;
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if(arr[i]==arr[j])
            {
                count--;
                break;
            }
        }// write your code here
    }
    return count; // write your code here
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

    int count = countDistinct(arr, n);
    printf("%d\n", count);

    return 0;
}