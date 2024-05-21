#include <stdio.h>
void SS(int arr[], int n) {
    int i, j, min, temp;
    for (i = 0; i < n - 1; i++)
	 {
        min = i;
        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[min]) {
                min = j;
            }
        }
        if (min!= i)
		 {
            temp = arr[i];
            arr[i] = arr[min];
            arr[min] = temp;
        }
    }
}
void printArray(int arr[], int n) 
{
    for (int i = 0; i < n; i++) 
	{
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int main() {
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Original array: ");
    printArray(arr, n);
    SS(arr, n);
    printf("Sorted array: ");
    printArray(arr, n);
    return 0;
}
