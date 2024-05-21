#include <stdio.h>
#include <limits.h>
#define MAX_CITIES 10
int min(int a, int b) {
    return (a < b) ? a : b;
}

int tsp(int n, int graph[][MAX_CITIES], int start) {
    int numStates = 1 << n;
    int dp[numStates][n];

    for (int i = 0; i < numStates; i++) {
        for (int j = 0; j < n; j++) {
            dp[i][j] = INT_MAX;
        }
    }

    for (int i = 0; i < n; i++) {
        if (i == start) {
            dp[1 << i][i] = 0;
        } else {
            dp[1 << i][i] = graph[start][i];
        }
    }

    for (int mask = 1; mask < numStates; mask++) {
        for (int i = 0; i < n; i++) {
            if ((mask & (1 << i)) == 0) {
                continue;
            }
            for (int j = 0; j < n; j++) {
                if ((mask & (1 << j)) != 0 || i == j) {
                    continue;
                }
                dp[mask | (1 << j)][j] = min(dp[mask | (1 << j)][j], dp[mask][i] + graph[i][j]);
            }
        }
    }

    int finalMask = (1 << n) - 1;
    int minCost = INT_MAX;
    for (int i = 0; i < n; i++) {
        if (i != start) {
            minCost = min(minCost, dp[finalMask][i] + graph[i][start]);
        }
    }

    return minCost;
}

int main() {
    int n;

    printf("Enter the number of cities (maximum %d): ", MAX_CITIES);
    scanf("%d", &n);

    if (n > MAX_CITIES || n < 1) {
        printf("Invalid number of cities. Please enter a value between 1 and %d.\n", MAX_CITIES);
        return 0;
    }

    int graph[MAX_CITIES][MAX_CITIES];

    printf("Enter the distance matrix between cities:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &graph[i][j]);
        }
    }

    int startCity;

    printf("Enter the starting city (0 to %d): ", n - 1);
    scanf("%d", &startCity);

    if (startCity >= n || startCity < 0) {
        printf("Invalid starting city. Please enter a value between 0 and %d.\n", n - 1);
        return 0;
    }

    int minCost = tsp(n, graph, startCity);
    printf("Minimum cost of the TSP tour: %d\n", minCost);

    return 0;
}
