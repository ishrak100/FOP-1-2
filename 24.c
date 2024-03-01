#include <stdio.h>

int diagonalSum(int matrix[100][100], int rows, int cols)
{
    int i, j, s = 0;
    ;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (i == j)
            {
                s = s + matrix[i][j];

            }
        }
    }
    return s;
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
    printf("%d\n", diagonalSum(matrix, rows, cols));
    return 0;
}
