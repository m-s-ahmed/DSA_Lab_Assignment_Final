//Task3:SEARCHING IN SORTED ARRAY.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// Function to initialize the array with random values
void initializeArray(int arr[], int size) {
for (int i = 0; i < size; ++i) {
arr[i] = rand() % 100; // Generating random values between 0 and 99
}
}
// Function to print the array elements
void printArray(int arr[], int size) {
printf("Array elements: ");
for (int i = 0; i < size; ++i) {
printf("%d ", arr[i]);
}
printf("\n");
}
// Function to perform Selection Sort on the array
void selectionSort(int arr[], int size) {
for (int i = 0; i < size - 1; ++i) {
int minIndex = i;
for (int j = i + 1; j < size; ++j) {
if (arr[j] < arr[minIndex]) {
minIndex = j;
}
}
// Swap the found minimum element with the element at index i
int temp = arr[i];
arr[i] = arr[minIndex];
arr[minIndex] = temp;
}
}
// Function to perform Bubble Sort on the array
void bubbleSort(int arr[], int size) {
for (int i = 0; i < size - 1; ++i) {
for (int j = 0; j < size - i - 1; ++j) {
if (arr[j] > arr[j + 1]) {
// Swap arr[j] and arr[j+1] if they are in the wrong order
int temp = arr[j];
arr[j] = arr[j + 1];
arr[j + 1] = temp;
}
}
}
}
// Function to perform Insertion Sort on the array
void insertionSort(int arr[], int size) {
for (int i = 1; i < size; ++i) {
int key = arr[i];
int j = i - 1;
// Move elements of arr[0..i-1] that are greater than key to one position ahead of their current position
while (j >= 0 && arr[j] > key) {
arr[j + 1] = arr[j];
j = j - 1;
}
arr[j + 1] = key;
}
}
// Function to perform Binary Search on the sorted array
int binarySearch(int arr[], int size, int target) {
int left = 0;
int right = size - 1;
while (left <= right) {
int mid = left + (right - left) / 2;
if (arr[mid] == target) {
return mid; // Element found
}
if (arr[mid] < target) {
left = mid + 1;
} else {
right = mid - 1;
}
}
return -1; // Element not found
}
int main() {
srand(time(NULL));
int size;
printf("Enter the size of the array: ");
scanf("%d", &size);
int myArray[size];
initializeArray(myArray, size);
printf("Choose a sorting algorithm:\n");
printf("1. Selection Sort\n");
printf("2. Bubble Sort\n");
printf("3. Insertion Sort\n");
int choice;
scanf("%d", &choice);
switch (choice) {
case 1:
selectionSort(myArray, size);
break;
case 2:
bubbleSort(myArray, size);
break;
case 3:
insertionSort(myArray, size);
break;
default:
printf("Invalid choice\n");
return 1;
}
// Print the sorted array
printf("Sorted array using the selected algorithm:\n");
printArray(myArray, size);
// Search for a value using binary search
int target;
printf("Enter the value to search for: ");
scanf("%d", &target);
int result = binarySearch(myArray, size, target);
if (result != -1) {
printf("Value %d found at index %d\n", target, result);
} else {
printf("Value %d not found in the array\n", target);
}
return 0;
}
