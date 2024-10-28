// charter type data push in stack
#include <stdio.h>

#define N 100 // Maximum size of the stack
int top=-1;
char stack[N];

// Function to push an element onto the stack
void push(char element) {
    if (top==N - 1) {
        printf("Stack Overflow: Cannot push more elements onto the stack.\n");
        return;
    }

    stack[++(top)]=element;
}

// Function to pop an element from the stack
char pop() {
    if (top ==-1) {
        printf("Stack Underflow: Cannot pop from an empty stack.\n");
        return '\0';
    }

    return stack[(top)--];
}

int main() {

   // Initialize top of the stack to -1

    // Add letters from the user to the stack
    printf("Enter a sequence of letters (press Enter after each letter, and '0' to stop):\n");

    char input;
    while (1) {
        scanf(" %c", &input);

        if (input=='0') {
            break; // Stop taking input if '0' is entered
        }

        push(input);
    }

    // Remove all items from the stack and print them in reverse order
    printf("Items removed from the stack and printed in reverse order:\n");

    while (top!=-1) {
        char popped = pop();
        if (popped!='\0') {
            printf("%c ",popped);
        }
    } return 0;

}
