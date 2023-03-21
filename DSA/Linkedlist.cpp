#include <iostream>
using namespace std;
struct Node
{
    int data;
    struct Node *next;
};
Node *create(int x);
Node *insert_end(Node *head, int x); // formal parameter
Node *delete_end(Node *head);
Node *delete_beg(Node *head);
Node *insert_beg(Node *head, int x);
void display(Node *head);

int main()
{
    Node *head = NULL;
    // insert_end(head, 10); // actual parameter
    // head=insert_end(head,10);
    // display(head);
    // head=insert_end(head,20);
    // display(head);
    // head=insert_end(head,30);
    // display(head);
    // head=insert_end(head,40);
    // display(head);
    // head=delete_end(head);
    // display(head);
    head = insert_beg(head, 5);
    display(head);
    head = insert_beg(head, 15);
    display(head);
    head = insert_end(head, 60);
    display(head);
    head = delete_beg(head);
    display(head);
    head = delete_beg(head);
    display(head);
    head = delete_beg(head);
    display(head);
}

Node *create(int x) // node creation
{
    Node *nptr = new Node();
    nptr->data = x;
    nptr->next = NULL;
    return nptr;
}
Node *insert_end(Node *head, int x)
{ // element insertion at end
    Node *nptr = create(x);
    if (!head)
    {
        head = nptr;
        return head;
    }
    Node *t = head;
    while (t->next)
    {
        t = t->next;
    }
    t->next = nptr;
    return head;
}
// display function
void display(Node *head)
{
    if (!head)
    {
        cout << "List empty" << endl;

        return;
    }
    while (head)
    {
        cout << head->data << " ";
        // cout<<endl;
        head = head->next;
    }
    cout << endl; // it was mistakenly not written//it will change line for every additional row elements
}
Node *delete_end(Node *head)
{ // node last element deletion

    if (!head)
    {
        cout << "List empty" << endl;

        return head;
    }

    if (!(head->next))
    {
        cout << "No Node found to delete " << endl;
        delete head;
        return NULL;
    }
    Node *t = head;
    while (t->next->next)
    {
        t = t->next;
    }
    cout << "Deleted item :" << head->data << endl;

    delete t->next;
    t->next = NULL;
    return head;
}
Node *insert_beg(Node *head, int x)
{ // insertion of element from begining
    Node *nptr = create(x);
    nptr->next = head;
    head = nptr;
    return head;
}

Node *delete_beg(Node *head)
{ // delete element at beginning
    if (!head)
    {
        cout << "List Empty: Nodes are not found" << endl;

        return head;
    }
    //    if(!(head->next)){// this code is more lengthy so avoid this.
    //     cout<<head->data;
    //     delete head;
    //     return NULL;

    cout << "Deleted item :" << head->data << endl;
    Node *t = head; // it will work
    head = head->next;
    delete t;
    return head;
}
