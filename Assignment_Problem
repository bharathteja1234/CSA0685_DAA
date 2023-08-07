#include <stdio.h>
#define N 5
void assignJobs(int cost[N][N]) {
    int assignment[N];
    int jobsDone[N] = {0};

    for (int i = 0; i < N; i++) {
        int minCost = -1;
        int minJob = -1;

        for (int j = 0; j < N; j++) {
            if (!jobsDone[j] && (minCost == -1 || cost[i][j] < minCost)) {
                minCost = cost[i][j];
                minJob = j;
            }
        }

        assignment[i] = minJob;
        jobsDone[minJob] = 1;
    }

    printf("Assignment:\n");
    for (int i = 0; i < N; i++) {
        printf("Person %d -> Job %d\n", i, assignment[i]);
    }
}

int main() {
    int cost[N][N];

    printf("Enter the cost matrix (size %d x %d):\n", N, N);
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            scanf("%d", &cost[i][j]);
        }
    }

    assignJobs(cost);

    return 0;
}
