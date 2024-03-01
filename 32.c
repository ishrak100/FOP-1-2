#include <stdio.h>

void findMinMax(int matrix[][100], int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        int min = matrix[i][0], max = matrix[i][0];

        // Find min and max in each row
        for (int j = 1; j < m; j++)
        {
            if (matrix[i][j] < min)
            {
                min = matrix[i][j];
            }
            if (matrix[i][j] > max)
            {
                max = matrix[i][j];
            }
        }

        // Print the min and max of each row
        printf("Row %d: min = %d, max = %d\n", i, min, max);
    }
}

int main()
{
    int n, m;

    // Get matrix dimensions
    printf("Enter the number of rows (N): ");
    scanf("%d", &n);
    printf("Enter the number of columns (M): ");
    scanf("%d", &m);

    // Get matrix elements
    int matrix[100][100];
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Find and print min and max for each row
    findMinMax(matrix, n, m);

    return 0;
}