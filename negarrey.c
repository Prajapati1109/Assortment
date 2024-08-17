#include <stdio.h>

int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements of the array:\n");
    int i;
    for(i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    printf("Negative elements: ");
    int j;
    for (j = 0; j < n; j++) {
        if (arr[j] < 0) {
            printf("%d ", arr[j]);
        }
    }

}
