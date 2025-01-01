 /*You know that a single linked list consists of several nodes that are connected through pointers. Design
 a program to create a singly linked list comprising integer elements for the given n nodes. A node
 contains, an integer number and a self-referential structure of the structure type node. Additionally,
 sort this linked list in ascending order*/
#include <stdio.h>
#include <stdlib.h>
// Define the structure for a node
typedef struct node {
    int data;             // Integer data
    struct node *next;    // Pointer to the next node
} Node;
// Function to create a new node
Node* create_node(int value) {
    Node *new_node = (Node *)malloc(sizeof(Node));
    new_node->data = value;
    new_node->next = NULL;
    return new_node;
}
// Function to insert a node at the end of the linked list
void append_node(Node **head, int value) {
    Node *new_node = create_node(value);
    if (*head == NULL) {
        *head = new_node; // If the list is empty, make the new node the head
    } else {
        Node *temp = *head;
        while (temp->next != NULL) { // Traverse to the end of the list
            temp = temp->next;
        }
        temp->next = new_node; // Append the new node
    }
}
// Function to display the linked list
void display_list(Node *head) {
    Node *temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}
// Function to sort the linked list in ascending order
void sort_list(Node **head) {
    if (*head == NULL || (*head)->next == NULL) return; // If the list is empty or has one node, no sorting needed
    Node *current, *index;
    int temp_data;
    for (current = *head; current != NULL; current = current->next) {
        for (index = current->next; index != NULL; index = index->next) {
            if (current->data > index->data) { // Swap data if current > index
                temp_data = current->data;
                current->data = index->data;
                index->data = temp_data;
            }
        }
    }
}
// Main function
int main() {
    Node *head = NULL;
    int n, value;
    // Read the number of nodes
    printf("Enter the number of nodes: ");
    scanf("%d", &n);
    // Read and append nodes
    printf("Enter %d integers to create the linked list:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &value);
        append_node(&head, value);
    }
    // Display the original list
    printf("\nOriginal Linked List:\n");
    display_list(head);
    // Sort the linked list
    sort_list(&head);
    // Display the sorted list
    printf("\nSorted Linked List (Ascending Order):\n");
    display_list(head);
    return 0;
}
