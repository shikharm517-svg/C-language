#include <stdio.h>

int main() {
    int i, j, rows;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    for(i = 0; i < rows; i++) {
        for(j = 0; j < rows; j++) {
            if(i == 0 || i == rows/2 || j == 0)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }

    return 0;
}
