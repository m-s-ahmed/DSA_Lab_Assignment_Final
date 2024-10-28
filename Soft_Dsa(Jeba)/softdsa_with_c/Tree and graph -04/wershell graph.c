
#include <stdio.h>

// Function to find the path matrix using Warshall's Algorithm
void findPathMatrix(int n, int graph[][n], int pathMatrix[][n]) {
    // Initialize the pathMatrix with the adjacency matrix
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            pathMatrix[i][j] = graph[i][j];
        }
    }

    // Apply Warshall's Algorithm
    for (int k = 0; k < n; k++) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                pathMatrix[i][j] = pathMatrix[i][j] || (pathMatrix[i][k] && pathMatrix[k][j]);
            }
        }
    }
}

// Function to print a matrix
void printMatrix(int n, int matrix[][n]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int n; // Number of vertices in the graph
    printf("Enter the number of vertices: ");
    scanf("%d", &n);

    int graph[n][n]; // Adjacency matrix
    printf("Enter the adjacency matrix (0 or 1):\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &graph[i][j]);
        }
    }

    int pathMatrix[n][n]; // Path matrix

    findPathMatrix(n, graph, pathMatrix);

    printf("\nThe path matrix is:\n");
    printMatrix(n, pathMatrix);
return 0;
}
