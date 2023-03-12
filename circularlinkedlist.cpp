#include <iostream>
using namespace std;

// Define the structure for a node
struct Node {
    int data;
    Node* next;
};

// Function to insert a new node at the beginning of the list
void insertAtBeginning(Node** head, int data) {
    Node* newNode = new Node;
    newNode->data = data;
    newNode->next = *head;

    // If list is not empty, update the last node's next pointer
    if(*head != nullptr) {
        Node* lastNode = *head;
        while(lastNode->next != *head) {
            lastNode = lastNode->next;
        }
        lastNode->next = newNode;
    }
    else {
        newNode->next = newNode; // For the first node, set the next pointer to itself
    }

    *head = newNode; // Set the new node as the head
}

// Function to traverse and display the circular linked list
void displayList(Node* head) {
    Node* current = head;

    if(head == nullptr) {
        cout << "List is empty." << endl;
        return;
    }

    do {
        cout << current->data << " ";
        current = current->next;
    } while(current != head);

    cout << endl;
}

// Driver code
int main() {
    Node* head = nullptr;

    // Insert nodes into the circular linked list
    insertAtBeginning(&head, 3);
    insertAtBeginning(&head, 2);
    insertAtBeginning(&head, 1);

    // Display the circular linked list
    displayList(head);

    return 0;
}
