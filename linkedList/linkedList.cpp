#include<iostream>

using namespace std;

class node{
  public:
    int data;
    node *next;

    node(int value){
      data=value;
      next=NULL;
    }
};

void insertAtTail(node * &head, int val){
  node *n=new node(val);


  if(head==NULL){
    head=n;
    return; 
  }
  node *temp=head;
  while(temp->next!=NULL){
    temp=temp->next;
  }
  temp->next=n;


}

void display(node * head){
  node *temp=head;
  while(temp!=NULL){
    cout<<temp->data<<"->";
    temp=temp->next;
  }
  cout<<"NULL"<<endl;
}

bool search(node * head,int key){
  node *temp=head;
  while(temp!=NULL){
    if(temp->data==key){
      return true;
    }
    temp=temp->next;
  }
  return false;
}

void insertAtHead(node * &head,int val){
  
  node *temp=new node(val);
  if(head==NULL){
    head=temp;
  }
  temp->next=head;
  head=temp;
  
}

void deletion(node * &head, int val){
  node *temp=head;
  while(temp->next->data!=val){
    temp=temp->next;
  }
  node *todelete=temp->next;
  
  temp->next=temp->next->next;
  delete todelete; 

}
void deleteAtHead(node * & head){
  node * temp=head;
  head=temp->next;

}
int main(){
  node * head=NULL;
  insertAtTail(head,1);
  insertAtTail(head,2);
  insertAtTail(head,3);
  insertAtHead(head,9);
  //display(head);
  //cout<<search(head,7);
  deleteAtHead(head);
  display(head);
  return 0;
}