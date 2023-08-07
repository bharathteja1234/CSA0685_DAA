#include <stdio.h>
#include <stdbool.h>
void printSubset(int subset[], int subsetSize) {
    printf("Subset with target sum:\n");
    for (int i = 0; i < subsetSize; i++) {
        printf("%d ", subset[i]);
    }
    printf("\n");
}

bool isSubsetSum(int set[], int n, int targetSum, int subset[], int subsetSize, int currentIndex) {
    if (targetSum == 0) {
        printSubset(subset, subsetSize);
        return true;
    }

    if (currentIndex >= n) {
        return false;
    }

    subset[subsetSize] = set[currentIndex];
    if (isSubsetSum(set, n, targetSum - set[currentIndex], subset, subsetSize + 1, currentIndex + 1)) {
        return true;
    }

    if (isSubsetSum(set, n, targetSum, subset, subsetSize, currentIndex + 1)) {
        return true;
    }

    return false;
}

int main() {
    int n;

    printf("Enter the number of elements in the set: ");
    scanf("%d", &n);

    int set[n];
    printf("Enter the elements of the set:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &set[i]);
    }

    int targetSum;
    printf("Enter the target sum: ");
    scanf("%d", &targetSum);

    int subset[n];
    bool found = isSubsetSum(set, n, targetSum, subset, 0, 0);

    if (!found) {
        printf("No subset with the target sum exists.\n");
    }

    return 0;
}
