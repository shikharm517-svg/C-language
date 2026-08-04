#include <stdio.h>

int main() {
    int n, fact = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    // Loop to calculate factorial
    for(int i = 1; i <= n; i++) {
        fact = fact * i;
    }

    printf("Factorial of %d = %d\n", n, fact);

    return 0;
}
