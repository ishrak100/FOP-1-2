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
    for (int i = rows-1; i >= 0; i--)
    {
        for (int j = cols-1; j >= 0; j--)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}