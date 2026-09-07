#include <stdio.h>

int main() {
    int n = 7; // height of C
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            // Top row
            if (i == 0 && j > 0) {
                printf("*");
            }
            // Bottom row
            else if (i == n-1 && j > 0) {
                printf("*");
            }
            // Left column
            else if (j == 0 && i > 0 && i < n-1) {
                printf("*");
            }
            else {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
