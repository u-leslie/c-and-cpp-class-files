#include <stdio.h>

int main() {
    int i, j;

    for (i = 1; i <= 5; i++) {
        // Print spaces
        for (j = 1; j <= 5 - i; j++) {
            printf(" ");
        }
        
        // Print asterisks
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        
        // Print asterisks in decreasing order
        for (j = 1; j < i; j++) {
            printf("*");
        }
        
        printf("\n");
    }

    return 0;
    
}

