#include <stdio.h>

int main() {
    int rows, cols;
    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    int arr[rows][cols];
    printf("Enter the elements of the array:\n");
    int i,j;
    for ( i = 0; i < rows; i++) {
        for ( j = 0; j < cols; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    int max = arr[0][0];
    for ( i = 0; i < rows; i++) {
        for ( j = 0; j < cols; j++) {
            if (arr[i][j] > max) {
                max = arr[i][j];
            }
        }
    }

    printf("The largest element is: %d\n", max);

}
