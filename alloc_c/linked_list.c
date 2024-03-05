#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

int main() {
    int n;
    printf("Enter the number of nodes: ");
    scanf("%d", &n);
    
    // Allocate memory for n nodes of a linked list
    struct Node *head = NULL;
    struct Node *temp = NULL;
    for (int i = 0; i < n; ++i) {
        struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));
        printf("Enter data for node %d: ", i + 1);
        scanf("%d", &newNode->data);
        newNode->next = NULL;
        
        if (head == NULL) {
            head = newNode;
            temp = newNode;
        } else {
            temp->next = newNode;
            temp = temp->next;
        }
    }
    
    // Display the linked list
    printf("Linked List: ");
    struct Node *current = head;
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
    
    // Deallocate memory for the linked list
    current = head;
    while (current != NULL) {
        struct Node *temp = current;
        current = current->next;
        free(temp);
    }
    
    return 0;
}
