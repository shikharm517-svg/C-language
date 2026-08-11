#include <stdio.h>

int main() {
    int n, i, j, num;
    printf("Enter number of rows: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        num = 1;
        for(j = 0; j <= i; j++) {
            printf("%d", num);   // number print karo
            num = num * (i - j) / (j + 1); // next number ka logic
        }
        printf("\n");
    }

    return 0;
}
