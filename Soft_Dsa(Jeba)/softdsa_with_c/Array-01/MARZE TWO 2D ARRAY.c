//TASK7:MERGE TWO 2D ARRAYS
#include <stdio.h>
#include <stdlib.h>
// Function to merge two 1D arrays into a single sorted array
void merge(int arr1[], int size1, int arr2[], int size2, int result[]) {
int i = 0, j = 0, k = 0;
while (i < size1 && j < size2) {
if (arr1[i] < arr2[j]) {
result[k++] = arr1[i++];
} else {
result[k++] = arr2[j++];
}
}
while (i < size1) {
result[k++] = arr1[i++];
}
while (j < size2) {
result[k++] = arr2[j++];
}
}
// Function to merge two 2D arrays into a single 2D array
void merge2DArrays(int arr1[][100], int rows1, int cols1, int arr2[][100], int rows2, int cols2, int result[][100]) {
int size1 = rows1 * cols1;
int size2 = rows2 * cols2;
int tempArray[size1 + size2];
// Convert 2D arrays to 1D arrays for merging
int k = 0;
for (int i = 0; i < rows1; ++i) {
for (int j = 0; j < cols1; ++j) {
tempArray[k++] = arr1[i][j];
}
}
for (int i = 0; i < rows2; ++i) {
for (int j = 0; j < cols2; ++j) {
tempArray[k++] = arr2[i][j];
}
}
// Merge the 1D arrays
int resultSize = size1 + size2;
merge(tempArray, size1, tempArray + size1, size2, tempArray);
// Convert the merged 1D array back to a 2D array
k = 0;
for (int i = 0; i < rows1; ++i) {
for (int j = 0; j < cols1; ++j) {
result[i][j] = tempArray[k++];
}
}
for (int i = 0; i < rows2; ++i) {
for (int j = 0; j < cols2; ++j) {
result[rows1 + i][j] = tempArray[k++];
}
}
}
// Function to print a 2D array
void print2DArray(int arr[][100], int rows, int cols) {
printf("2D Array elements:\n");
for (int i = 0; i < rows; ++i) {
for (int j = 0; j < cols; ++j) {
printf("%d\t", arr[i][j]);
}
printf("\n");
}
}
int main() {
int rows1, cols1, rows2, cols2;
// Input size of the first 2D array
printf("Enter the number of rows for the first array: ");
scanf("%d", &rows1);
printf("Enter the number of columns for the first array: ");
scanf("%d", &cols1);
// Input size of the second 2D array
printf("Enter the number of rows for the second array: ");
scanf("%d", &rows2);
printf("Enter the number of columns for the second array: ");
scanf("%d", &cols2);
// Declare the 2D arrays
int arr1[100][100], arr2[100][100], result[200][100];
// Input elements for the first 2D array
printf("Enter elements for the first 2D array:\n");
for (int i = 0; i < rows1; ++i) {
for (int j = 0; j < cols1; ++j) {
scanf("%d", &arr1[i][j]);
}
}
// Input elements for the second 2D array
printf("Enter elements for the second 2D array:\n");
for (int i = 0; i < rows2; ++i) {
for (int j = 0; j < cols2; ++j) {
scanf("%d", &arr2[i][j]);
}
}
// Merge the 2D arrays
merge2DArrays(arr1, rows1, cols1, arr2, rows2, cols2, result);
// Print the merged 2D array
print2DArray(result, rows1 + rows2, cols1);
return 0;
}
