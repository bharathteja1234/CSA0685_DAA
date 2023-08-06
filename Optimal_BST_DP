#include <stdio.h>
#include <limits.h>
int sumOfFreq(int freq[], int i, int j) {
    int sum = 0;
    for (int k = i; k <= j; k++) {
        sum += freq[k];
    }
    return sum;
}

int optimalBST(int keys[], int freq[], int n) {
    int cost[n][n];

    for (int i = 0; i < n; i++) {
        cost[i][i] = freq[i];
    }

    for (int l = 2; l <= n; l++) {

        for (int i = 0; i <= n - l + 1; i++) {
            int j = i + l - 1;
            cost[i][j] = INT_MAX;

            for (int r = i; r <= j; r++) {
                int c = ((r > i) ? cost[i][r - 1] : 0) +
                        ((r < j) ? cost[r + 1][j] : 0) +
                        sumOfFreq(freq, i, j);
                if (c < cost[i][j]) {
                    cost[i][j] = c;
                }
            }
        }
    }

    return cost[0][n - 1];
}

int main() {
    int n;

    printf("Enter the number of keys: ");
    scanf("%d", &n);

    int keys[n], freq[n];

    printf("Enter the keys:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &keys[i]);
    }

    printf("Enter the corresponding frequencies:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &freq[i]);
    }

    int optimalCost = optimalBST(keys, freq, n);
    printf("Optimal binary search tree cost: %d\n", optimalCost);

    return 0;
}
