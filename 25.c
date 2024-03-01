#include <stdio.h>

int countZeroes(int matrix[100][100], int rows, int cols)
{
    int i, j, count = 0;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (matrix[i][j] == 0)
            {
                count++;
            }
        }
    }
    return count;
}

int main()
{
    int rows, cols;
    scanf("%d %d", &rows, &cols);
    int matrix[100][100];
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("%d\n", countZeroes(matrix, rows, cols));
    return 0;
}
