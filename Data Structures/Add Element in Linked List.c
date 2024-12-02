// Program to add a element in a Linked List and print.
#include <stdio.h>
#include <stdlib.h>

// Define the structure for a node
struct Node {
    int data;
    struct Node* next;
};

// Function to add a node at the beginning
void insertAtBeginning(struct Node** head, int newData) {
    // Create a new node
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = newData;
    newNode->next = *head;
    *head = newNode;
}

// Function to add a node at the end
void insertAtEnd(struct Node** head, int newData) {
    // Create a new node
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    struct Node* last = *head; // Used to traverse the list to the last node
    
    newNode->data = newData;
    newNode->next = NULL;

    // If the list is empty, the new node becomes the head
    if (*head == NULL) {
        *head = newNode;
        return;
    }

    // Otherwise, traverse to the last node
    while (last->next != NULL) {
        last = last->next;
    }
    last->next = newNode;
}

// Function to insert a node at a specific position
void insertAtPosition(struct Node** head, int position, int newData) {
    // Create a new node
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    struct Node* temp = *head;

    newNode->data = newData;

    // If the position is 0, add the node at the beginning
    if (position == 0) {
        newNode->next = *head;
        *head = newNode;
        return;
    }

    // Traverse the list to find the position
    for (int i = 0; temp != NULL && i < position - 1; i++) {
        temp = temp->next;
    }

    // If the position is greater than the number of nodes
    if (temp == NULL) {
        printf("Position is out of range.\n");
        free(newNode);
        return;
    }

    // Insert the new node at the specified position
    newNode->next = temp->next;
    temp->next = newNode;
}

// Function to display the linked list
void display(struct Node* head) {
    struct Node* temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

// Main function
int main() {
    struct Node* head = NULL; // Initially the list is empty

    // Insert elements at the beginning
    insertAtBeginning(&head, 10);
    insertAtBeginning(&head, 20);
    insertAtBeginning(&head, 30);
    printf("Linked list after inserting at the beginning:\n");
    display(head);

    // Insert an element at the end
    insertAtEnd(&head, 40);
    printf("Linked list after inserting at the end:\n");
    display(head);

    // Insert an element at position 2
    insertAtPosition(&head, 2, 50);
    printf("Linked list after inserting at position 2:\n");
    display(head);

    return 0;
}
