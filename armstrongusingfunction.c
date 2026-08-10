#include <stdio.h>
#include <math.h>

int isArmstrong(int n) {
    int temp = n, sum = 0, digits = 0;

    // Count digits
    while (temp) {
        digits++;
        temp /= 10;
    }

    temp = n;
    while (temp) {
        int d = temp % 10;
        sum += pow(d, digits);
        temp /= 10;
    }

    return sum == n;
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    printf("\n-----------------------------\n");
    if (isArmstrong(num))
        printf(" %d is Armstrong\n", num);
    else
        printf(" %d is Not Armstrong\n", num);
    printf("-----------------------------\n\n");

    return 0;
}
