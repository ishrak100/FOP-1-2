#include <stdio.h>

// Function to multiply two matrices
void multiplyMatrices(int mat1[][110], int rows1, int cols1,
                      int mat2[][110], int rows2, int cols2)
{
    int x[rows1][cols2],s;
    for(int i = 0; i < rows1; i++)
    {
        for(int j = 0; j < cols2; j++)
        {

            for(int k = 0; k < cols1; k++)
            {
                s=s+mat1[i][k]*mat2[k][j];
            }
            x[i][j]=s%10000009;
            s=0;
        }
    }
    for(int i = 0; i < rows1; i++)
    {
        for(int j = 0; j < cols2; j++)
        {
            mat1[i][j]=x[i][j];
        }
    }// write your code here
}

int main()
{
    int rows1, cols1, rows2, cols2;
    scanf("%d %d", &rows1, &cols1);

    int arr1[110][110];
    for(int i = 0; i < rows1; i++)
    {
        for(int j = 0; j < cols1; j++)
        {
            scanf("%d", &arr1[i][j]);
        }
    }

    scanf("%d %d", &rows2, &cols2);

    int arr2[110][110];
    for(int i = 0; i < rows2; i++)
    {
        for(int j = 0; j < cols2; j++)
        {
            scanf("%d", &arr2[i][j]);
        }
    }

    multiplyMatrices(arr1, rows1, cols1, arr2,  rows2, cols2);

    for(int i = 0; i < rows1; i++)
    {
        for(int j = 0; j < cols2; j++)
        {
            if(j) printf(" ");
            printf("%d", arr1[i][j]);
        }
        printf("\n");
    }

    return 0;
}