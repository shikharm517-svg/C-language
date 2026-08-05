#include <stdio.h>

int main() {
    int n, i;
    long long a = 0, b = 1, next;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");
    for(i = 0; i < n; i++) {
        if(i == 0) next = a;
        else if(i == 1) next = b;
        else {
            next = a + b;
            a = b;
            b = next;
        }
        printf("%lld ", next);
    }

    printf("\n");
    return 0;
}
