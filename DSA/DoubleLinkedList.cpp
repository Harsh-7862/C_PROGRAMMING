#include <iostream>
using namespace std;
struct Node
{
    int data, key;
    struct Node *prev, *next;
};
Node * create(int x);
Node * insert_end(Node *head, int x); // formal parameter
Node * delete_end(Node*head);
Node * insert_beg(Node*head,int x);
Node * delete_beg(Node*head);
Node * search(Node* head, int x);
void insert_after(Node* head,int data, int x);
void rev_show(Node *head);
// bool search(Node* head, int x);
void display(Node*head);

// insert_after function
void insert_after(Node* head,int data, int x)
{
    Node * pos = search(head, x);
    if(!pos)
    {
        cout <<"Node Not found"<<endl;
        return;
    }
    Node *nptr = create(data);
    nptr -> next = pos -> next;
    pos -> next = nptr;
}
Node * create(int x)//node creation
{
Node * nptr = new Node();
nptr -> data=x;
nptr -> next = NULL;
nptr -> prev = NULL; // change 1
return nptr;
}
Node *insert_end(Node*head,int x){//element insertion at end
    Node*nptr=create(x);
    if(!head){
head=nptr;
return head;

    }
Node*t=head;
while(t ->next){
t=t ->next;

}
t ->next=nptr;
nptr -> prev = t;
return head;
}

// delete_beg function 
Node * delete_beg(Node*head)
{
    if(!head){
        cout<<" List empty : No node found to delete ";
        return head;
    }
    if(!(head -> next))
    {
        cout<<"Delete item: "<<head ->data<<endl;
        delete head;
        return NULL;
    }
    cout<<"Delete item: "<<head ->data<<endl;
    Node *t = head;
    head = head->next;
    head -> prev = NULL;
    delete t;
    return head;
}

// delete_end function
Node*delete_end(Node*head){ // last node element deletion
 if(!head){
        cout<<"List empty"<<endl;
        
        return head;
    }

if(!(head -> next)){
cout<<"Deleted item :"<<head ->data<<endl;
delete head;

return NULL;

}
Node*t=head;
while(t->next->next){
    t=t->next;
}
cout<<"Deleted item :"<<t->next->data<<endl;

delete t->next;
t->next=NULL;
return head;
}

// insert_beg function 
Node * insert_beg(Node*head,int x){
         Node*nptr=create(x);
        nptr ->next=head;
        head=nptr;
        return head;
}
void rev_show(Node *head)
{
    if(head)
    {
        rev_show(head->next);
        cout<<head->data<<" ";
    }
}

//display function
void display(Node*head){
    if(!head){
        cout<<"List empty"<<endl;
        
        return;
    }
    while(head){
        cout<<head -> data<<" ";
       // cout<<endl;
        head=head ->next;
    }cout<<endl;//it was mistakenly not written//it will change line for every additional row elements
}
// search function
Node * search(Node* head, int x)
{
    while(head)
        {
            if(head -> data == x)
                return head;
            head = head -> next;
        }
        return NULL;
}
// alternate search function 
/*
bool search(Node* head, int x)
Node* current = head; // Initialize current
    while (current != NULL) {
        if (current->key == x)
            return true;
        current = current->next;
    }
    return false;
}
*/


int main()
{
    Node *head = NULL;
   // insert_end(head, 10); // actual parameter
//    head=insert_end(head,10);
 //   display(head);
    // head=insert_end(head,20);
    // display(head);
    // head=insert_end(head,30);
    // display(head);
    // head=insert_end(head,40);
    // display(head);
    // head=delete_end(head);
    // display(head);
    head=insert_beg(head,5);
    display(head);
    head=insert_beg(head,15);
    display(head);
   
   
    rev_show(head);
    // Node * pos = search(head,25);
    // if(!pos){
    //     cout <<"Node Not found";
    // }
    // else {
    //     cout << "Node found : "<< head->data<<endl;
    //     }
    return 0;
}
































































































































































































































































































































































// // #include <iostream>
// // using namespace std;
// // struct Node
// // {
// //     int data;
// //     struct Node *prev,*next;
// // };
// // Node *create(int x);
// // Node *insert_end(Node *head, int x); // formal parameter
// // Node *delete_end(Node *head);
// // Node *delete_beg(Node *head);
// // Node *insert_beg(Node *head, int x);
// // void display(Node *head);
// // // Node *searchNode(Node *head, int x);
// // // void*insert_after(Node *head,int data,int x);
// // void * revDisplay(Node *head);


// // int main()
// // {
// //     Node *head = NULL;
// //     // insert_end(head, 10); // actual parameter
// //     // head=insert_end(head,10);
// //     // display(head);
// //     // head=insert_end(head,20);
// //     // display(head);
// //     // head=insert_end(head,30);
// //     // display(head);
// //     // head=insert_end(head,40);
// //     // display(head);
// //     // head=delete_end(head);
// //     // display(head);
// //     head = insert_beg(head, 15);
// //     display(head);
// //     head = insert_beg(head, 5);
// //     display(head);
// //     head = insert_end(head, 60);
// //     display(head);
// //     // head = delete_end(head);
// //     // display(head);
// //     // head = delete_end(head);
// //     // display(head);
// //     // head = delete_end(head);
// //     // display(head);
// //     // Node *pos = searchNode(head, 15);
// //     // if (!pos)
// //     // {
// //     //     cout << "Node not found";
// //     // }
// //     // else
// //     // {
// //     //     cout << "found"<<endl;
// //     // }
    
// //     // insert_after(head,25,15);//(head,value want to add,node after whih you want to add)
// //     // display(head);
// //      revDisplay(head);
    

// // }

// // Node *create(int x) // node creation
// // {
// //     Node *nptr = new Node();
// //     nptr->data = x;
// //     nptr->next = NULL;
// //     nptr->prev = NULL;//doubly
// //     return nptr;
// // }
// // Node *insert_end(Node *head, int x)
// // { // element insertion at end
// //     Node *nptr = create(x);
// //     if (!head)
// //     {
// //         head = nptr;
// //         return head;
// //     }
// //     Node *t = head;
// //     while (t->next)
// //     {
// //         t = t->next;
// //     }
// //     t->next = nptr;
// //     nptr->prev=t;//for doubly case only
// //     return head;
// // }
// // // display function
// // void display(Node *head)
// // {
// //     if (!head)
// //     {
// //         cout << "List empty" << endl;

// //         return;
// //     }
// //     while (head)
// //     {
// //         cout << head->data << " ";
// //         // cout<<endl;
// //         head = head->next;
    
// //     }
// //     cout << endl; // it was mistakenly not written//it will change line for every additional row elements
// // }
// // Node *delete_end(Node *head)
// // { // node last element deletion

// //     if (!head)
// //     {
// //         cout << "List empty" << endl;

// //         return head;
// //     }

// //     if (!(head->next))
// //     {
// //         cout << "Deleted item :" << head->data << endl;
// //         delete head;
// //         return NULL;
// //     }
// //     Node *t = head;
// //     while (t->next->next)
// //     {
// //         t = t->next;
// //     }
// //     cout << "Deleted item :" << t->next->data << endl;

// //     delete t->next;
// //     t->next = NULL;
// //     return head;
// // }
// // Node *insert_beg(Node * head, int x)
// // { // insertion of element from begining
// //     Node *nptr = create(x);
// //     nptr->next = head;
// //     head->prev = nptr;//doubly
    
// //     return head;
// // }

// // Node *delete_beg(Node *head)
// // { // delete element at beginning
// //     if (!head)
// //     {
// //         cout << "List Empty: Nodes are not found" << endl;

// //         return head;
// //     }
// //        if(!(head->next)){// this code is more lengthy so avoid this.
// //         cout << "Deleted item :" << head->data << endl;        
// //         delete head;
// //         return NULL;}

// //     cout << "Deleted item :" << head->data << endl;
// //     Node *t = head; // it will work
// //     head = head->next;
// //     head->prev=NULL;//doubly
// //     delete t;
// //     return head;
// // }  
// //         void * revDisplay(Node *head){//reversing the linked list
            
// //     if(head)
// //     {
// //         revDisplay(head->next);
// //         cout<<head->data<<" ";
// //     }
// //         }
// // // Node *searchNode(Node *head, int x) // searching node
// // // {
// // //     while (head)
// // //     {
// // //         if ((head->data) == x)
// // //             return head;
// // //             head=head->next;
// // //     }
// // //     return NULL;
// // // }
// // // void*insert_after(Node *head,int data,int x){//insert after node
// // //         Node*pos=searchNode(head,x);
// // //         if(!pos){
// // //             cout<<"node not found"<<endl;
// // //             return head;
// // //         }    Node*nptr=create(data);
// // //         nptr->next=pos->next;
// // //         pos->next=nptr;
// // //         }
// xyz