#include <stdio.h>

void printPattern(int n) {
    int i, j;

    // Print upper half of the pattern
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= i; j++) {
            printf("*%d", j);
        }
        for (j = i - 1; j >= 1; j--) {
            printf("%d", j);
        }
        printf("*\n");
    }

    // Print lower half of the pattern
    for (i = n - 1; i >= 1; i--) {
        for (j = 1; j <= i; j++) {
            printf("*%d", j);
        }
        for (j = i - 1; j >= 1; j--) {
            printf("%d", j);
        }
        printf("*\n");
    }
}

int main() {
    int n;

    printf("Enter the number of lines: ");
    scanf("%d", &n);

    printPattern(n);

    return 0;
}

