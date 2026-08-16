#include <stdio.h>

int main() {
    int i, j, rows;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    for(i = 0; i < rows; i++) {
        for(j = 0; j < rows; j++) {
            // Top line, middle line, left diagonal, right diagonal
            if(i == 0 || i == rows/2 || j == 0 || j == rows-1) {
                printf("* ");
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }

    return 0;
}
