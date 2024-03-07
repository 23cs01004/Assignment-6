#include <stdio.h>

int main()
{
    int rows, cols;
    printf("Rows: ");
    scanf("%d", &rows);
    printf("columns: ");
    scanf("%d", &cols);
    int mat[rows][cols];
    for (int i=0; i<rows; i++)
    {
        for (int j=0; j<cols; j++)
        scanf("%d", &mat[i][j]);   
    }
    printf("\n");
    for (int i=0; i<cols; i++)
    {
        for (int j=0; j<rows; j++)
        printf("%d ", mat[j][i]);
        printf("\n");
    }
    return 0;
}