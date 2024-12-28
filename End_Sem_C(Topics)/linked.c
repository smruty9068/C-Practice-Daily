#include <stdio.h>   // Standard I/O library for input and output functions
#include <stdlib.h>  // Standard library for dynamic memory management functions

// Define a structure for a node in a singly linked list
struct Node {
    int data;              // Integer to store the data of the node
    struct Node* next;     // Pointer to the next node in the list
};

int main() {
    // Dynamically allocate memory for the first node (head)
    struct Node* head = (struct Node*)malloc(sizeof(struct Node));
    if (head == NULL) { // Check if memory allocation was successful
        printf("Memory allocation failed for head\n");
        return 1;
    }

    // Dynamically allocate memory for the second node
    struct Node* second = (struct Node*)malloc(sizeof(struct Node));
    if (second == NULL) { // Check if memory allocation was successful
        printf("Memory allocation failed for second\n");
        free(head); // Free previously allocated memory
        return 1;
    }

    // Initialize the first node (head)
    head->data = 1;          // Assign the value 1 to the data of the head node
    head->next = second;     // Make the 'next' of head point to the second node

    // Initialize the second node
    second->data = 2;        // Assign the value 2 to the data of the second node
    second->next = NULL;     // The 'next' of the second node is NULL (end of the list)

    // Traverse the linked list and print the data in each node
    struct Node* temp = head; // Start from the head node
    while (temp != NULL) {    // Continue until the current node is NULL
        printf("%d ", temp->data); // Print the data of the current node
        temp = temp->next;    // Move to the next node in the list
    }
    printf("\n"); // Print a newline for better readability

    // Free the dynamically allocated memory to avoid memory leaks
    free(head);
    free(second);

    return 0; // Indicate successful program termination
}
