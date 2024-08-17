#include <stdio.h>

int main() {
    int rows, cols;
    
    // Input the array's row and column size
    printf("Enter the array's row & column size: ");
    scanf("%d %d", &rows, &cols);

    int arr[rows][cols];
    
    // Input the array elements
    printf("Enter the array's elements:\n");
    int i,j;
    for ( i = 0; i < rows; i++) {
        for ( j = 0; j < cols; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    // Print the transpose of the matrix
    printf("The transpose matrix of the array:\n");
    for ( i = 0; i < cols; i++) {
        for ( j = 0; j < rows; j++) {
            printf("%d ", arr[j][i]);
        }
        printf("\n");
    }

}
