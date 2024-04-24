#include <stdio.h>
int main() {
	int i,j,k, rows=5;
   // first loop to print all rows
    for (i = 0; i < rows; i++) {
 
        // first inner loop to print the * in each row
        for ( j = 0; j < rows -i ; j++) {
            printf("* ");
        }
        printf("\n");
    }
   return 0;
}

