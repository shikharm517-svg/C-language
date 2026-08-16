#include <stdio.h>

int main() {
    int i, j, rows;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    for(i = 0; i < rows; i++) {
        for(j = 0; j < rows; j++) {
            // Top line, middle line, bottom line
            if(i == 0 || i == rows/2 || i == rows-1 || j == 0 || j == rows-1) {
                printf("* ");
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }

    return 0;
}
