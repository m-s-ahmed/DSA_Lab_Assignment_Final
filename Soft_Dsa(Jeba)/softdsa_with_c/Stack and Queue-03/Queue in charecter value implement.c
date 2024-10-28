#include <stdio.h>
#include <stdbool.h>

#define N 100

// Global arrays to represent the queue and its indices
char queue[N];
int front = -1;
int rear = -1;

// Function to check if the queue is full
bool isFull() {
    return (rear + 1) % N== front;
}

// Function to check if the queue is empty
bool isEmpty() {
    return front == -1;
}

// Function to add an element to the queue
void enqueue(char data) {
    if (isFull()) {
        printf("Queue is full. Cannot enqueue.\n");
        return;
    }

    if (isEmpty()) {
        front = rear = 0;
    } else {
        rear = (rear + 1) %N;
    }

    queue[rear] = data;
}

// Function to remove an element from the queue
char dequeue() {
    if (isEmpty()) {
        printf("Queue is empty. Cannot dequeue.\n");
        return '\0'; // Assuming null character ('\0') represents an empty character
    }

    char data = queue[front];

    if (front == rear) {
        // Last element in the queue
        front = rear = -1;
    } else {
        front = (front + 1) %N;
    }

    return data;
}

int main() {
    // Step 1: Initialize the queue
    front = rear = -1;

    // Step 2: Add letters from the user to the queue
    printf("Enter letters to add to the queue (press Enter after each letter, and type 'q' to stop):\n");

    char userInput;
    while ((userInput = getchar()) != 'q') {
        // Ignore newline characters
        if (userInput != '\n') {
            enqueue(userInput);
        }
    }

    // Step 3: Remove all items from the queue until it is empty and print them
    printf("Items in the queue in the order they are returned:\n");
    while (!isEmpty()) {
        char item = dequeue();
        printf("%c ", item);
    }  return 0;
}
