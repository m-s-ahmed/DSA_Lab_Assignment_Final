//TASK1:Basic operations
#include <stdio.h>
#include <stdlib.h>
// Function to initialize the array with random values
void initializeArray(int arr[], int size) {
for (int i = 0; i < size; ++i) {
arr[i] = rand() % 100; // Generating random values between 0 and 99
}
}
// Function to print the elements of the array
void printArray(int arr[], int size) {
printf("Array elements: ");
for (int i = 0; i < size; ++i) {
printf("%d ", arr[i]);
}
printf("\n");
}
// Function to calculate and print the sum of array elements
void printSum(int arr[], int size) {
int sum = 0;
for (int i = 0; i < size; ++i) {
sum += arr[i];
}
printf("Sum of array elements: %d\n", sum);
}
// Function to find and print the maximum and minimum values in the array
void findMinMax(int arr[], int size) {
int max = arr[0];
int min = arr[0];
for (int i = 1; i < size; ++i) {
if (arr[i] > max) {
max = arr[i];
} else if (arr[i] < min) {
min = arr[i];
}
}
printf("Maximum value: %d\n", max);
printf("Minimum value: %d\n", min);
}
// Function to calculate and print the average value of the array
void printAverage(int arr[], int size) {
int sum = 0;
for (int i = 0; i < size; ++i) {
sum += arr[i];
}
double average = (double)sum / size;
printf("Average value: %.2lf\n", average);
}
int main() {
// Seed the random number generator
int N;
printf("\nEnter the array size: ");
scanf("%d",&N);
// Declare and initialize the array
int Array[N];
initializeArray(Array,N);
// Print the array elements
printArray(Array,N);
// Calculate and print the sum of array elements
printSum(Array,N);
// Find and print the maximum and minimum values in the array
findMinMax(Array,N);
// Calculate and print the average value of the array
printAverage(Array,N);
return 0;
}
