#include <stdio.h>
void initialize(int n, int k, long long int memo[][k + 1]) {
    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= k; j++) {
            memo[i][j] = -1;
        }
    }
}

long long int binomialCoefficient(int n, int k, long long int memo[][k + 1]) {
    if (k == 0 || k == n) {
        return 1;
    }

    if (memo[n][k] != -1) {
        return memo[n][k];
    }

    memo[n][k] = binomialCoefficient(n - 1, k - 1, memo) + binomialCoefficient(n - 1, k, memo);
    return memo[n][k];
}

int main() {
    int n, k;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Enter the value of k: ");
    scanf("%d", &k);

    long long int memo[n + 1][k + 1];
    initialize(n, k, memo);

    long long int result = binomialCoefficient(n, k, memo);
    printf("Binomial Coefficient C(%d, %d) = %lld\n", n, k, result);

    return 0;
}
