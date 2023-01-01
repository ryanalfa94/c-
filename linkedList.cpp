// The below program demonstrates the reading and writing of the linked list:

#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

// to print the contents of the linked list
void printList(struct Node* n)
{
    while (n != NULL) {
        printf(" %d ", n->data);
        n = n->next;
    }
}

int main()
{
    struct Node* head = NULL;
    struct Node* second = NULL;
    struct Node* third = NULL;

    // allocating 3 nodes
    head = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof(struct Node));

    head->data = 5; // assigning data in first node
    head->next = second; // Linking first node with second

    second->data = 6; // assign data to second node
    second->next = third; // Linking second node with third

    third->data = 7; // assign data to third node
    third->next = NULL; // setting pointer of third node to NULL

    printList(head);

    return 0;
}
