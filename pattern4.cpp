#include <stdio.h>

int main() {
    int rows = 5;
    int i, j, num;

    for (i = 1; i <= rows; i++) {
        num = i;
        
        for (j = 1; j <= rows - i; j++) {
            printf("  ");
        }
        
        for (j = 1; j <= i; j++) {
            printf("%d ", num);
            num++;
        }
        
        num -= 2;
        for (j = 1; j < i; j++) {
            printf("%d ", num);
            num--;
        }
        
        printf("\n");
    }

    return 0;
}

