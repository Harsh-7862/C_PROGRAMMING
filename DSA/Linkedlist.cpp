#include <iostream>
using namespace std;
struct Node
{
    int data;
    struct Node *next;
};
Node * create(int x);
Node * insert_end(Node *head, int x); // formal parameter
Node * delete_end(Node*head);
void display(Node*head);


int main()
{
    Node *head = NULL;
   // insert_end(head, 10); // actual parameter
    head=insert_end(head,10);
    display(head);
    head=insert_end(head,20);
    display(head);
    head=insert_end(head,30);
    display(head);
    head=insert_end(head,40);
    display(head);
    head=delete_end(head,40);
    display(head);

}


Node * create(int x)
{
Node * nptr = new Node();
nptr -> data=x;
nptr -> next=NULL;
return nptr;
}
Node *insert_end(Node*head,int x){
    Node*nptr=create(x);
    if(!head){
head=nptr;
return head;

    }
Node*t=head;
while(t ->next){
t=t ->next;

}t ->next=nptr;
return head;
}

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
Node*delete_end(Node*head){


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
cout<<"Deleted item :"<<head ->data<<endl;

delete t->next;
t->next=NULL;
return head;

}