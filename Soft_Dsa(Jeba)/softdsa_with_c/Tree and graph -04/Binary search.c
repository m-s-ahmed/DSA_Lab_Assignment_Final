#include <stdio.h>
#include <stdlib.h>

// Definition of a node in the BST
struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};

// Function to create a new node
struct Node* createNode(int key) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = key;
    newNode->left = newNode->right = NULL;
    return newNode;
}

// Function to insert a key into the BST
struct Node* insert(struct Node* root, int key) {
    if (root == NULL) {
        return createNode(key);
    }

    if (key < root->data) {
        root->left = insert(root->left, key);
    } else if (key > root->data) {
        root->right = insert(root->right, key);
    }

    return root;
}

// Function to traverse the BST in pre-order
void preOrderTraversal(struct Node* root) {
    if (root != NULL) {
        printf("%d ", root->data);
        preOrderTraversal(root->left);
        preOrderTraversal(root->right);
    }
}

// Function to traverse the BST in in-order
void inOrderTraversal(struct Node* root) {
    if (root != NULL) {
        inOrderTraversal(root->left);
        printf("%d ", root->data);
        inOrderTraversal(root->right);
    }
}

// Function to traverse the BST in post-order
void postOrderTraversal(struct Node* root) {
    if (root != NULL) {
        postOrderTraversal(root->left);
        postOrderTraversal(root->right);
        printf("%d ", root->data);
    }
}

// Function to search for a key in the BST
char* search(struct Node* root, int key) {
    if (root == NULL) {
        return "no";
    }

    if (key == root->data) {
        return "yes";
    } else if (key < root->data) {
        return search(root->left, key);
    } else {
        return search(root->right, key);
    }
}

// Function to calculate the path length of the tree
int calculatePathLength(struct Node* root, int depth) {
    if (root == NULL) {
        return 0;
    }

    return depth + calculatePathLength(root->left, depth + 1) + calculatePathLength(root->right, depth + 1);
}

int main() {
    struct Node* root = NULL;

    // Inserting keys into the BST
    int n;
    printf("\nEnter the size of Array: ");
    scanf("%d",&n);
    for(int i=0; i<n; i++)
    {

        int data;

        scanf("%d",&data);
        if(root==NULL)
        {
            root=insert(root,data);
        }else{

        insert(root, data);
        }

    }

    // Traversing the BST
    printf("Pre-order traversal: ");
    preOrderTraversal(root);
    printf("\n");

    printf("In-order traversal: ");
    inOrderTraversal(root);
    printf("\n");

    printf("Post-order traversal: ");
    postOrderTraversal(root);
    printf("\n");

    // Searching for a value in the BST
   int searchValue;
   printf("\nEnter the key you want to search: ");
   scanf("%d",&searchValue);
    char* searchResult = search(root, searchValue);
   printf("Search result for %d: %s\n", searchValue, searchResult);

    // Inserting a new key into the BST
    int newKey;
    printf("\nEnter the key you want to insert: ");
    scanf("%d",&newKey);
    root = insert(root,newKey);

    // Print the tree after insertion
    printf("BST after insertion of %d:\n", newKey);
    printf("In-order traversal: ");
    inOrderTraversal(root);
    printf("\n");

    // Recalculating the path length after insertion
    int pathLength = calculatePathLength(root, 0);
    printf("Path length of the tree after insertion: %d\n", pathLength);
return 0;
}
