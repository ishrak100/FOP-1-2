#include <stdio.h>

// Function to replace all occurrences
// of a number in the array
void replace(int arr[], int sizeofArr,
             int oldVal, int newVal)
{
    int in[sizeofArr];
    for(int i=0; i<sizeofArr; i++)
    {
        if(oldVal==arr[i])
        {
           arr[i]=newVal;
        } // Write your code here
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

    int oldVal, newVal;
    scanf("%d", &oldVal);
    scanf("%d", &newVal);

    replace(arr, n, oldVal, newVal);

    for (int i = 0; i < n; i++)
    {
        if(i) printf(" ");
        printf("%d", arr[i]);
    }
    printf("\n");

    return 0;
}