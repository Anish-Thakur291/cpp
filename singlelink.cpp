#include<iostream>
using namespace std;
class Node{
public:
int data;
Node* next;
 Node(int data){
    this->data=data;
    this ->next=NULL;  
}
~Node(){
    int val=this->data;
    if(this->next!=NULL){
        delete next;
        this->next=NULL;
    }
}
};
void insertionathead(Node* &head,int d){
    Node*temp=new Node(d);
    temp->next=head;
    head=temp;

}
void inserattail(Node* & tail,int d){
    Node*temp=new Node(d);
    tail->next=temp;
    tail=temp;
}
void print(Node* &tail){
    Node* temp=tail;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;

    }
}
void insertatmiddle(Node* &head,int position,int d){
    Node* temp=head;
  int cnt=1;
  while(cnt < position-1){
   temp=temp->next;
   cnt++;
  }
  Node* nodetoinsert=new Node(d);
  nodetoinsert->next=temp->next;
  temp->next=nodetoinsert;

}
void deletenode(Node * &head,int position){
    if(position==1){
        Node* temp=head;
        head=head->next;
        temp->next=NULL;
        delete temp;
    }
    else{
        Node*cur=head;
        Node*prev=NULL;
        int cnt=1;
        while(cnt <position){
            prev=cur;
            cur=cur->next;
            cnt++;
        }
        prev->next=cur->next;
        cur->next=NULL;
        delete cur;
    }
    
}
int main(){
Node* node1=new Node(10);

// cout<<node1->data<<endl;
// cout<<node1->next<<endl;

Node* head=node1;
Node* tail=node1;
inserattail(tail,19);
inserattail(tail,12);
inserattail(tail,15);
insertatmiddle(head,3,22);
print(head);
deletenode(head,3);
print(head);

}