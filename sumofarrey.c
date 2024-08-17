#include <stdio.h>

int main() {
    int rows, cols;
    
    // Input the array's row and column size
    printf("Enter the array's row size: ");
    scanf("%d", &rows);
    printf("Enter the array's column size: ");
    scanf("%d", &cols);

    int arr[rows][cols];
    
    // Input the array elements
    printf("Enter the array's elements:\n");\
    int i,j;
    for ( i = 0; i < rows; i++) {
        for ( j = 0; j < cols; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    int rowSum = 0, colSum = 0, rowNum, colNum;

    // Input the row number and calculate the sum of that row
    printf("Enter row number: ");
    scanf("%d", &rowNum);

    printf("Elements of row %d: ", rowNum);
    for (j = 0; j < cols; j++) {
        printf("%d ", arr[rowNum][j]);
        rowSum += arr[rowNum][j];
    }
    printf("\nThe sum of row %d: %d\n", rowNum, rowSum);

    // Input the column number and calculate the sum of that column
    printf("Enter column number: ");
    scanf("%d", &colNum);

    printf("Elements of column %d: ", colNum);
    for ( i = 0; i < rows; i++) {
        printf("%d ", arr[i][colNum]);
        colSum += arr[i][colNum];
    }
    printf("\nThe sum of column %d: %d\n", colNum, colSum);

    return 0;
}
