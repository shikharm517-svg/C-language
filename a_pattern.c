#include <stdio.h>

int main() {
    int n = 7; // height of A
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= n; j++) {
            // left diagonal of A
            if (j == 0 && i != 0) {
                printf("*");
            }
            // right diagonal of A
            else if (j == n && i != 0) {
                printf("*");
            }
            // middle horizontal line of A
            else if (i == n/2) {
                printf("*");
            }
            // top of A
            else if (i == 0 && j > 0 && j < n) {
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
