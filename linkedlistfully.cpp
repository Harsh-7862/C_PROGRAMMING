#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

void insertAtBeginning(Node*& head, int value) {
    Node* newNode = new Node;
    newNode->data = value;
    newNode->next = head;
    head = newNode;
}

void displayList(Node* head) {
    if (head == nullptr) {
        cout << "Linked list is empty." << endl;
        return;
    }

    Node* current = head;
    while (current != nullptr) {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;
}

void deleteList(Node*& head) {
    while (head != nullptr) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }
}

int main() {
    Node* head = nullptr;
    int choice, value;

    while (true) {
        cout << "\nLinked List Operations\n";
        cout << "1. Insert at the beginning\n";
        cout << "2. Display the list\n";
        cout << "3. Delete the list\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter the value to insert: ";
                cin >> value;
                insertAtBeginning(head, value);
                break;
            case 2:
                cout << "Linked List: ";
                displayList(head);
                break;
            case 3:
                deleteList(head);
                cout << "Linked list deleted." << endl;
                break;
            case 4:
                cout << "Exiting the program.\n";
                deleteList(head);
                exit(0);
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    }

    return 0;
}
