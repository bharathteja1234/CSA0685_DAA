#include <stdio.h>
int containerLoader(int items[], int numItems, int capacity) {
    int numContainers = 0;
    int currentContainer = 0;

    for (int i = 0; i < numItems; i++) {
        if (currentContainer + items[i] <= capacity) {
            currentContainer += items[i];
        } else {
            numContainers++;
            currentContainer = items[i];
        }
    }

    if (currentContainer > 0) {
        numContainers++;
    }

    return numContainers;
}

int main() {
    int numItems;

    printf("Enter the number of items: ");
    scanf("%d", &numItems);

    int items[numItems];

    printf("Enter the sizes of the items:\n");
    for (int i = 0; i < numItems; i++) {
        scanf("%d", &items[i]);
    }

    int capacity;

    printf("Enter the capacity of each container: ");
    scanf("%d", &capacity);

    int minContainers = containerLoader(items, numItems, capacity);

    printf("Minimum number of containers required: %d\n", minContainers);

    return 0;
}
