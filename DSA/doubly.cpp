#include <iostream>
using namespace std;

struct Node {
    int data;
    struct Node *prev, *next;
};

Node *create(int x);
Node *insert_end(Node *head, int x);
Node *delete_end(Node *head);
Node *delete_beg(Node *head);
Node *insert_beg(Node *head, int x);
void display(Node *head);
void revDisplay(Node *head);

int main()
{
    Node *head = NULL;
    head = insert_beg(head, 15);
    display(head);
    head = insert_beg(head, 5);
    display(head);
    head = insert_end(head, 60);
    display(head);
    revDisplay(head);
    return 0;
}

Node *create(int x) // node creation
{
    Node *nptr = new Node();
    nptr->data = x;
    nptr->next = NULL;
    nptr->prev = NULL;  // doubly
    return nptr;
}

Node *insert_end(Node *head, int x)
{ // element insertion at end
    Node *nptr = create(x);
    if (!head) {
        head = nptr;
        return head;
    }
    Node *t = head;
    while (t->next) {
        t = t->next;
    }
    t->next = nptr;
    nptr->prev = t;  // for doubly case only
    return head;
}

void display(Node *head)
{
    if (!head) {
        cout << "List empty" << endl;
        return;
    }
    while (head) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

Node *insert_beg(Node *head, int x)
{ // insertion of element from begining
    Node *nptr = create(x);
    if (!head) {
        head = nptr;
        return head;
    }
    nptr->next = head;
    head->prev = nptr;  // doubly
    return nptr;  // return the new head
}

Node *delete_beg(Node *head)
{ // delete element at beginning
    if (!head) {
        cout << "List Empty: Nodes are not found" << endl;
        return head;
    }
    Node *t = head;
    head = head->next;
    if (head) {
        head->prev = NULL;  // doubly
    }
    delete t;
    return head;
}

Node *delete_end(Node *head)
{ // node last element deletion
    if (!head) {
        cout << "List empty" << endl;
        return head;
    }
    if (!(head->next)) {
        cout << "Deleted item :" << head->data << endl;
        delete head;
        return NULL;
    }
    Node *t = head;
    while (t->next->next) {
        t = t->next;
    }
    cout << "Deleted item :" << t->next->data << endl;
    delete t->next;
    t->next = NULL;
    return head;
}

void revDisplay(Node *head)
{
    cout << "Reversed List: ";
    while (head->next) {
        head = head->next;
    }
    while (head) {
        cout << head->data << " ";
        head = head->prev;  // doubly
    }
    cout << endl;
}
