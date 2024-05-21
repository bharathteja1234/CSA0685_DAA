#include <stdio.h>
int factorial(int n) {
    if (n <= 1)
        return 1;
    else
        return n * factorial(n - 1);
}

int main() {
    int numRows;

    printf("Enter the number of rows for Pascal's triangle: ");
    scanf("%d", &numRows);

    for (int i = 0; i < numRows; i++) {
        for (int j = 0; j <= i; j++) {
            int coefficient = factorial(i) / (factorial(j) * factorial(i - j));
            printf("%d ", coefficient);
        }
        printf("\n");
    }

    return 0;
}
