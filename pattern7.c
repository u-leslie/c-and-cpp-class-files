#include <stdio.h>
int main() {
	int i,j,k, rows=5;
  // first loop for printing all rows
    for ( i = 0; i < rows; i++) {
 
        // first inner loop for printing leading white
        // spaces
        for ( j = 0; j < 2 * i; j++) {
            printf(" ");
        }
 
        // second inner loop for printing stars *
        for ( k = 0; k < 2 * (rows - i) - 1; k++) {
            printf("* ");
        }
        printf("\n");
    }
   return 0;
}

