#include <stdio.h>

int main() {
    int i, j, n;

    printf("Enter number of columns: ");
    scanf("%d", &n);

    // Zig-zag has 3 rows fixed
    for(i = 1; i <= 3; i++) {
        for(j = 1; j <= n; j++) {
            if(((i + j) % 4 == 0) || (i == 2 && j % 4 == 0))
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }

    return 0;
}
