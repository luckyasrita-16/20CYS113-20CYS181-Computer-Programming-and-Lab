#include <stdio.h>

int main() {
    int rows, k = 1;

    printf("Enter the number of rows ");
    scanf("%d", &rows);

    
    for (int i = 0; i < rows; i++) {
        
        for (int space = 1; space <= rows - i; space++) {
            printf("  ");
        }

        
        for (int j = 0; j <= i; j++) {
            
            if (j == 0 || i == 0) {
                k = 1;
            } else {
                k = k * (i - j + 1) / j;
            }

            printf("%4d",k); 
        }

        printf("\n");
    }

    return 0;
}

