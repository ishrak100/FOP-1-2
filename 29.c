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
    int trps[cols][rows];
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            trps[j][i] = matrix[i][j];
        }
    }
    for (int i = 0; i < cols; i++)
    {
        for (int j = 0; j < rows; j++)
        {
            printf("%d ", trps[i][j]);
        }
        printf("\n");
    }
}