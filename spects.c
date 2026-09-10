#include <stdio.h>

int main() {
    int n = 7; // size fix, odd number better
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n*2; j++) {
            // left circle condition
            if((i==0 || i==n-1) && (j>=1 && j<=n-2))
                printf("*");
            else if((j==0 || j==n-1) && (i>=1 && i<=n-2))
                printf("*");
            else if(i==n/2 && j<n)
                printf("*");

            // right circle condition
            else if((i==0 || i==n-1) && (j>=n+1 && j<=2*n-2))
                printf("*");
            else if((j==n || j==2*n-1) && (i>=1 && i<=n-2))
                printf("*");
            else if(i==n/2 && j>=n)
                printf("*");

            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}
