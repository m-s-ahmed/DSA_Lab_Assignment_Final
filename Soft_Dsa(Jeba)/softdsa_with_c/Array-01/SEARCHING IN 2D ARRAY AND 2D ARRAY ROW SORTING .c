//Task5:SEARCHING ARRAY IN A 2D ARRAY
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// Function to initialize the 2D array with random values
void initializeArray(int arr[100][100], int rows, int cols) {
for (int i = 0; i < rows; ++i) {
for (int j = 0; j < cols; ++j) {
arr[i][j] = rand() % 100; // Generating random values between 0 and 99
}
}
}
// Function to print the 2D array
void printArray(int arr[100][100], int rows, int cols) {
printf("2D Array elements:\n");
for (int i = 0; i < rows; ++i) {
for (int j = 0; j < cols; ++j) {
printf("%d\t", arr[i][j]);
}
printf("\n");
}
}
// Function to perform linear search in the 2D array
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
// Function to sort each row in the 2D array
void sortRows(int arr[100][100], int rows, int cols) {
for (int i = 0; i < rows; ++i) {
for (int j = 0; j < cols - 1; ++j) {
for (int k = 0; k < cols - j - 1; ++k) {
if (arr[i][k] > arr[i][k + 1]) {
// Swap arr[i][k] and arr[i][k+1] if they are in the wrong order
int temp = arr[i][k];
arr[i][k] = arr[i][k + 1];
arr[i][k + 1] = temp;
}
}
}
}
}
int main() {
srand(time(NULL));
int rows, cols;
// Input the size of the 2D array
printf("Enter the number of rows: ");
scanf("%d", &rows);
printf("Enter the number of columns: ");
scanf("%d", &cols);
// Declare and initialize the 2D array
int myArray[100][100];
// Initialize the 2D array with random values
initializeArray(myArray, rows, cols);
// Print the original 2D array
printArray(myArray, rows, cols);
// Enter a value to search for in the 2D array
int target;
printf("Enter the value to search for: ");
scanf("%d", &target);
// Perform linear search in the 2D array
linearSearch(myArray, rows, cols, target);
// Sort each row in the 2D array
sortRows(myArray, rows, cols);
// Print the 2D array after sorting rows
printf("\n2D Array after sorting rows:\n");
printArray(myArray, rows, cols);
return 0;
}
