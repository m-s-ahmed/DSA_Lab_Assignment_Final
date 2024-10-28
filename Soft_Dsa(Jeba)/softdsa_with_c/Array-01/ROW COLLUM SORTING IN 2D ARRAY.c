//TASK6:SORTING ROWS IN A 2D ARRAY.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void initializeArray(int arr[100][100], int rows, int cols) {
for (int i = 0; i < rows; ++i) {
for (int j = 0; j < cols; ++j) {
arr[i][j] = rand() % 100; // Generating random values between 0 and 99
}
}
}
void printArray(int arr[100][100], int rows, int cols) {
printf("2D Array elements:\n");
for (int i = 0; i < rows; ++i) {
for (int j = 0; j < cols; ++j) {
printf("%d\t", arr[i][j]);
}
printf("\n");
}
}
void linearSearch(int arr[100][100], int rows, int cols, int target) {
int found = 0;
int row = -1, col = -1;
for (int i = 0; i < rows; ++i) {
for (int j = 0; j < cols; ++j) {
if (arr[i][j] == target) {
found = 1;
row = i;
col = j;
break;
}
}
if (found) {
break;
}
}
if (found) {
printf("Value %d found at position (%d, %d)\n", target, row, col);
} else {
printf("Value %d not found in the 2D array\n", target);
}
}
// Function to swap two rows in the 2D array
void swapRows(int arr[100][100], int row1, int row2, int cols) {
for (int i = 0; i < cols; ++i) {
int temp = arr[row1][i];
arr[row1][i] = arr[row2][i];
arr[row2][i] = temp;
}
}
// Quicksort algorithm for sorting rows based on a specified column
void quicksort(int arr[100][100], int low, int high, int col) {
if (low < high) {
int pivot = arr[high][col];
int i = low - 1;
for (int j = low; j <= high - 1; j++) {
if (arr[j][col] < pivot) {
i++;
swapRows(arr, i, j, high + 1);
}
}
swapRows(arr, i + 1, high, high + 1);
int partitionIndex = i + 1;
quicksort(arr, low, partitionIndex - 1, col);
quicksort(arr, partitionIndex + 1, high, col);
}
}
int main() {
srand(time(NULL));
int rows, cols;
printf("Enter the number of rows: ");
scanf("%d", &rows);
printf("Enter the number of columns: ");
scanf("%d", &cols);
int myArray[100][100];
initializeArray(myArray, rows, cols);
printArray(myArray, rows, cols);
int target;
printf("Enter the value to search for: ");
scanf("%d", &target);
linearSearch(myArray, rows, cols, target);
// Sort rows based on a chosen column
int chosenColumn;
printf("Enter the column to sort the rows based on (0 to %d): ", cols - 1);
scanf("%d", &chosenColumn);
quicksort(myArray, 0, rows - 1, chosenColumn);
printf("\n2D Array after sorting rows based on column %d:\n", chosenColumn);
printArray(myArray, rows, cols);
return 0;
}
