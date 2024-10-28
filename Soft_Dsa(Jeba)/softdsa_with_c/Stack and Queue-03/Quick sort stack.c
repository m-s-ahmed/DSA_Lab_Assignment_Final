
#include <stdio.h>
#include <stdlib.h>

void swap(int arr[], int i, int j) {
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

int partition(int arr[], int low, int high) {
    int pivot = arr[low];
    int i = low + 1;
    int j = high;

    while (1) {
        while (i <= j && arr[i] <= pivot) {
            i++;
        }

        while (i <= j && arr[j] > pivot) {
            j--;
        }

        if (i <= j) {
            swap(arr, i, j);
        } else {
            break;
        }
    }

    swap(arr, low, j);
    return j;
}

void quickSort(int arr[], int size) {
    int* stack = (int*)malloc(sizeof(int) * size * 2);
    int top = -1;

    stack[++top] = 0;
    stack[++top] = size - 1;

    while (top >= 0) {
        int high = stack[top--];
        int low = stack[top--];

        int pivotIndex = partition(arr, low, high);

        if (pivotIndex - 1 > low) {
            stack[++top] = low;
            stack[++top] = pivotIndex - 1;
        }

        if (pivotIndex + 1 < high) {
            stack[++top] = pivotIndex + 1;
            stack[++top] = high;
        }
    }

    free(stack);
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int size;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);

    int* arr = (int*)malloc(sizeof(int) * size);

    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Original array: ");
    printArray(arr, size);

    quickSort(arr, size);

    printf("Sorted array: ");
    printArray(arr, size);

    free(arr);

    return 0;
}
