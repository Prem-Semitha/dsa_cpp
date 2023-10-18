#include<iostream>

using namespace std;

class Node{
  public:
  int data;
  Node *next;
  Node *prev;

  Node (int value){
    data=value;
    next=NULL;
    prev=NULL;
  }
};

void insertAtTail(Node * &head,int value){
  Node *n=new Node(value);
  Node *temp=head;

  if(head==NULL){
    head=n;
    return;
  }
  while(temp->next != NULL){
    temp=temp->next;

  }
  temp->next=n;
  
  n->prev=temp;
}

void display(Node * head){
    Node *temp=head;
    while(temp!=NULL){
      cout<<temp->data<<"->";
      temp=temp->next;
    }
    cout<<endl;
}
int main(){
  Node *head=NULL;
  insertAtTail(head,5);
  insertAtTail(head,4);
  insertAtTail(head,8);
  insertAtTail(head,7);
  display(head);
  return 0;
}