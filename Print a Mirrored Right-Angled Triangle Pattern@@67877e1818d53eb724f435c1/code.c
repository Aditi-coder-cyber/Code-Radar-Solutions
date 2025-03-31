#include <stdio.h>

int main() {
    int rows;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (int i = 1; i <= rows; i++) {
        // Print spaces for the mirroring effect
        for (int space = 1; space <= rows - i; space++) {
            printf("  "); // Two spaces for better visual alignment
        }

        // Print stars
        for (int j = 1; j <= i; j++) {
            printf("* "); // Star and a space
        }
        printf("\n");
    }}