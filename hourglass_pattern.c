#include <stdio.h>

int main() {
    int n;
    printf("Enter number of rows: ");
    scanf("%d", &n);

    // upper inverted pyramid
    for (int i = n; i >= 1; i--) {
        for (int j = 0; j < n - i; j++) {
            printf(" ");
        }
        for (int k = 0; k < (2 * i - 1); k++) {
            printf("*");
        }
        printf("\n");
    }

    // lower pyramid
    for (int i = 2; i <= n; i++) {
        for (int j = 0; j < n - i; j++) {
            printf(" ");
        }
        for (int k = 0; k < (2 * i - 1); k++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
